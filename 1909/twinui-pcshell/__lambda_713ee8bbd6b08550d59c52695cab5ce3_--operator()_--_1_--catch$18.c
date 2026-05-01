/*
 * XREFs of __lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::catch$18 @ 0x1801E4774
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1801EBB40 (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall _lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator()_::_1_::catch_18(__int64 a1, __int64 a2)
{
  Concurrency::details::_Task_impl_base *v3; // rbx

  v3 = *(Concurrency::details::_Task_impl_base **)(a2 + 32);
  __ExceptionPtrCreate((void *)(a2 + 48));
  __ExceptionPtrCurrentException((void *)(a2 + 48));
  Concurrency::details::_Task_impl_base::_CancelWithException(v3, (const struct std::exception_ptr *)(a2 + 48));
  __ExceptionPtrDestroy((void *)(a2 + 48));
  return &loc_1801E4744;
}
