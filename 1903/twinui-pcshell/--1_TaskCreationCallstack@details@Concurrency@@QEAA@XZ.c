/*
 * XREFs of ??1_TaskCreationCallstack@details@Concurrency@@QEAA@XZ @ 0x1801C5048
 * Callers:
 *     _Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293____::_1_::dtor$4 @ 0x1801C1647 (_Concurrency--task_long_--task_long___lambda_921a5a526b2b3e27a0030faf56813293____--_1_--dtor$4.c)
 *     _Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293____::_1_::dtor$5 @ 0x1801C166D (_Concurrency--task_long_--task_long___lambda_921a5a526b2b3e27a0030faf56813293____--_1_--dtor$5.c)
 *     _Concurrency::create_task__lambda_921a5a526b2b3e27a0030faf56813293____::_1_::dtor$2 @ 0x1801C4175 (_Concurrency--create_task__lambda_921a5a526b2b3e27a0030faf56813293____--_1_--dtor$2.c)
 *     _Concurrency::details::_Task_impl_base::_CancelWithException_::_1_::dtor$0 @ 0x1801CCB76 (_Concurrency--details--_Task_impl_base--_CancelWithException_--_1_--dtor$0.c)
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$4 @ 0x1802EB115 (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$4.c)
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$5 @ 0x1802EB141 (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$5.c)
 *     _Concurrency::create_task_Windows::Foundation::IAsyncOperation_bool_____::_1_::dtor$1 @ 0x1802EBF89 (_Concurrency--create_task_Windows--Foundation--IAsyncOperation_bool_____--_1_--dtor$1.c)
 *     _Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____::_1_::dtor$1 @ 0x1802EC36B (_Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____--_1_--dtor$1.c)
 *     _Concurrency::details::_ThenImplOptions::_CreateOptions_::_1_::dtor$8 @ 0x1802EE60E (_Concurrency--details--_ThenImplOptions--_CreateOptions_--_1_--dtor$8.c)
 *     _Concurrency::details::_ThenImplOptions::_CreateOptions_::_1_::dtor$69 @ 0x1802EE61A (_Concurrency--details--_ThenImplOptions--_CreateOptions_--_1_--dtor$69.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_TaskCreationCallstack::~_TaskCreationCallstack(
        Concurrency::details::_TaskCreationCallstack *this)
{
  std::vector<void *>::_Tidy((__int64)this + 8);
}
