/*
 * XREFs of _Concurrency::details::_PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_::invoke_::_1_::catch$16 @ 0x1801CDCE2
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1801CCAC0 (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Concurrency::details::_PPLTaskHandle_long_Concurrency::task_long_::_InitialTaskHandle_long__lambda_921a5a526b2b3e27a0030faf56813293__Concurrency::details::_TypeSelectorNoAsync__Concurrency::details::_TaskProcHandle_::invoke_::_1_::catch_16(
        __int64 a1,
        __int64 a2)
{
  Concurrency::details::_Task_impl_base *v3; // rbx

  v3 = *(Concurrency::details::_Task_impl_base **)(*(_QWORD *)(a2 + 96) + 8LL);
  __ExceptionPtrCreate((void *)(a2 + 56));
  __ExceptionPtrCurrentException((void *)(a2 + 56));
  Concurrency::details::_Task_impl_base::_CancelWithException(v3, (const struct std::exception_ptr *)(a2 + 56));
  __ExceptionPtrDestroy((void *)(a2 + 56));
  return &loc_1801CDC3D;
}
