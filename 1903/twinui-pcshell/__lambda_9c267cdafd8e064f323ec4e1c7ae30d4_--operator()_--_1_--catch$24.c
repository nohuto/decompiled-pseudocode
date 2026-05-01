/*
 * XREFs of __lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::catch$24 @ 0x1802ECE9A
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1801CCAC0 (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_9c267cdafd8e064f323ec4e1c7ae30d4_::operator()_::_1_::catch_24(__int64 a1, __int64 a2)
{
  __ExceptionPtrCreate((void *)(a2 + 56));
  __ExceptionPtrCurrentException((void *)(a2 + 56));
  Concurrency::details::_Task_impl_base::_CancelWithException(
    **(Concurrency::details::_Task_impl_base ***)(a2 + 112),
    (const struct std::exception_ptr *)(a2 + 56));
  __ExceptionPtrDestroy((void *)(a2 + 56));
  return &loc_1802ECE52;
}
