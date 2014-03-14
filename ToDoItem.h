//
//  ToDoItem.h
//  Test
//
//  Created by Feng Yuqi on 11/15/2013.
//  Copyright (c) 2013 Yuqi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end