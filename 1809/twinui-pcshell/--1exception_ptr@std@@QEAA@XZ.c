/*
 * XREFs of ??1exception_ptr@std@@QEAA@XZ @ 0x18025C140
 * Callers:
 *     _std::call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____::_1_::dtor$0 @ 0x18025BD38 (_std--call_once__lambda_9127ed4c7f0b883365da4a18d16712eb____--_1_--dtor$0.c)
 *     _std::call_once__lambda_e13c9660f56a8071ad8948355737f92d____::_1_::dtor$0 @ 0x18025BDE0 (_std--call_once__lambda_e13c9660f56a8071ad8948355737f92d____--_1_--dtor$0.c)
 *     _std::rethrow_exception_::_1_::dtor$0 @ 0x18025DBA9 (_std--rethrow_exception_--_1_--dtor$0.c)
 *     _std::_Ref_count_obj_Concurrency::details::_ExceptionHolder_::_Ref_count_obj_Concurrency::details::_ExceptionHolder__std::exception_ptr_const_&___ptr64_Concurrency::details::_TaskCreationCallstack__::_1_::dtor$1 @ 0x180291869 (_std--_Ref_count_obj_Concurrency--details--_ExceptionHolder_--_Ref_count_obj_Concur_ea_180291869.c)
 *     _Concurrency::task_options::task_options_::_1_::dtor$5 @ 0x180293772 (_Concurrency--task_options--task_options_--_1_--dtor$5.c)
 *     __lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::dtor$4 @ 0x180294088 (__lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator()_--_1_--dtor$4.c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::dtor$2 @ 0x1802942C2 (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--dtor$2.c)
 *     __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::dtor$3 @ 0x18029431B (__lambda_9c267cdafd8e064f323ec4e1c7ae30d4_--operator()_--_1_--dtor$3.c)
 *     _Concurrency::details::_TaskCollectionBaseImpl::_RunTask_::_1_::dtor$1 @ 0x180296B92 (_Concurrency--details--_TaskCollectionBaseImpl--_RunTask_--_1_--dtor$1.c)
 *     _Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::dtor$0 @ 0x180296FE8 (_Concurrency--details--_Task_impl_base--_ScheduleTask_--_1_--dtor$0.c)
 *     _Concurrency::details::_Task_impl_base::_Wait_::_1_::dtor$0 @ 0x180297455 (_Concurrency--details--_Task_impl_base--_Wait_--_1_--dtor$0.c)
 *     _Concurrency::details::_PPLTaskHandle_unsigned_char_Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_ContinuationTaskHandleBase_::invoke_::_1_::dtor$0 @ 0x180297A3E (_Concurrency--details--_PPLTaskHandle_unsigned_char_Concurrency--task_bool_--_Conti_ea_180297A3E.c)
 *     _std::call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____::_1_::dtor$0 @ 0x1802D5564 (_std--call_once__lambda_e8a8a3830e8b700b3909ca267e5ddf52____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::exception_ptr::~exception_ptr(std::exception_ptr *this)
{
  __ExceptionPtrDestroy(this);
}
