/*
 * XREFs of _Concurrency::details::_PPLTaskHandle_unsigned_char_Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl(Concurrency::task_bool_)__std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_ContinuationTaskHandleBase_::invoke_::_1_::catch$19 @ 0x1802EF7D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1801CCAC0 (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Concurrency::details::_PPLTaskHandle_unsigned_char_Concurrency::task_bool_::_ContinuationTaskHandle_bool_void_std::function_void___cdecl_Concurrency::task_bool____std::integral_constant_bool_1__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_ContinuationTaskHandleBase_::invoke_::_1_::catch_19(
        __int64 a1,
        __int64 a2)
{
  __ExceptionPtrCreate((void *)(a2 + 56));
  __ExceptionPtrCurrentException((void *)(a2 + 56));
  Concurrency::details::_Task_impl_base::_CancelWithException(
    *(Concurrency::details::_Task_impl_base **)(*(_QWORD *)(a2 + 96) + 40LL),
    (const struct std::exception_ptr *)(a2 + 56));
  __ExceptionPtrDestroy((void *)(a2 + 56));
  return &loc_1802EF72B;
}
