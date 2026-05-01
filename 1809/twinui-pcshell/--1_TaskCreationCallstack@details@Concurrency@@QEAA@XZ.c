/*
 * XREFs of ??1_TaskCreationCallstack@details@Concurrency@@QEAA@XZ @ 0x180293B6C
 * Callers:
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool______ptr64__::_1_::dtor$4 @ 0x180291A15 (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool______ea_180291A15.c)
 *     _Concurrency::task_bool_::task_bool__Windows::Foundation::IAsyncOperation_bool______ptr64__::_1_::dtor$5 @ 0x180291A41 (_Concurrency--task_bool_--task_bool__Windows--Foundation--IAsyncOperation_bool______ea_180291A41.c)
 *     _Concurrency::create_task_Windows::Foundation::IAsyncOperation_bool______ptr64__::_1_::dtor$1 @ 0x180292A9D (_Concurrency--create_task_Windows--Foundation--IAsyncOperation_bool______ptr64__--_1_--dtor$1.c)
 *     _Concurrency::task_bool_::then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____::_1_::dtor$1 @ 0x180292E7A (_Concurrency--task_bool_--then__lambda_d6a11cf3d104b1bd776ba795ae5a1087____--_1_--dtor$1.c)
 *     _Concurrency::details::_Task_impl_base::_CancelWithException_::_1_::dtor$0 @ 0x18029566B (_Concurrency--details--_Task_impl_base--_CancelWithException_--_1_--dtor$0.c)
 *     _Concurrency::details::_ThenImplOptions::_CreateOptions_::_1_::dtor$8 @ 0x180295DCA (_Concurrency--details--_ThenImplOptions--_CreateOptions_--_1_--dtor$8.c)
 *     _Concurrency::details::_ThenImplOptions::_CreateOptions_::_1_::dtor$69 @ 0x180295DD6 (_Concurrency--details--_ThenImplOptions--_CreateOptions_--_1_--dtor$69.c)
 * Callees:
 *     <none>
 */

void __fastcall Concurrency::details::_TaskCreationCallstack::~_TaskCreationCallstack(
        Concurrency::details::_TaskCreationCallstack *this)
{
  std::vector<void *>::_Tidy((__int64)this + 8);
}
