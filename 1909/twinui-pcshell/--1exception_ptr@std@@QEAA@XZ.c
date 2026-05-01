/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x1801E4164
 * Callers:
 *     _std::_Ref_count_obj_Concurrency::details::_ExceptionHolder_::_Ref_count_obj_Concurrency::details::_ExceptionHolder__std::exception_ptr_const_&_Concurrency::details::_TaskCreationCallstack__::_1_::dtor$1 @ 0x1801E0475 (_std--_Ref_count_obj_Concurrency--details--_ExceptionHolder_--_Ref_count_obj_Concur_ea_1801E0475.c)
 *     _Concurrency::task_options::task_options_::_1_::dtor$5 @ 0x1801E3A67 (_Concurrency--task_options--task_options_--_1_--dtor$5.c)
 *     __lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::dtor$4 @ 0x1801E47C3 (__lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator()_--_1_--dtor$4.c)
 *     _Concurrency::details::_TaskCollectionBaseImpl::_RunTask_::_1_::dtor$1 @ 0x1801EC99F (_Concurrency--details--_TaskCollectionBaseImpl--_RunTask_--_1_--dtor$1.c)
 *     _Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::dtor$0 @ 0x1801ECC34 (_Concurrency--details--_Task_impl_base--_ScheduleTask_--_1_--dtor$0.c)
 *     _Concurrency::details::_PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_::invoke_::_1_::dtor$0 @ 0x1801ECE05 (_Concurrency--details--_PPLTaskHandle_long_Concurrency--task_long_--_InitialTaskHan_ea_1801ECE05.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x1801ECF4D (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _std::call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa____::_1_::dtor$0 @ 0x1802D3540 (_std--call_once__lambda_66ce9afb50b67cbc7485265ee56e16fa____--_1_--dtor$0.c)
 *     _std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____::_1_::dtor$0 @ 0x1802D35E8 (_std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____--_1_--dtor$0.c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::dtor$2 @ 0x18030C34E (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--dtor$2.c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::dtor$3 @ 0x18030C3A7 (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--dtor$3.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::dtor$0 @ 0x18030E6EC (_Concurrency--details--_Task_impl_base--_Wait_--_1_--dtor$0.c)
 *     _Concurrency::details::_PPLTaskHandle_unsigned_char_Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_ContinuationTaskHandleBase_::invoke_::_1_::dtor$0 @ 0x18030ECDE (_Concurrency--details--_PPLTaskHandle_unsigned_char_Concurrency--task_bool_--_Conti_ea_18030ECDE.c)
 *     _std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____::_1_::dtor$0 @ 0x180355D48 (_std--call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
