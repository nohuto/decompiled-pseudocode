/*
 * XREFs of _Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::catch$8 @ 0x1801CDB0E
 * Callers:
 *     <none>
 * Callees:
 *     ?_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z @ 0x1801CCAC0 (-_CancelWithException@_Task_impl_base@details@Concurrency@@QEAA_NAEBVexception_ptr@std@@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall Concurrency::details::_Task_impl_base::_ScheduleTask_::_1_::catch_8(__int64 a1, __int64 a2)
{
  Concurrency::details::_Task_impl_base *v3; // rbx

  v3 = *(Concurrency::details::_Task_impl_base **)(a2 + 80);
  if ( !*((_QWORD *)v3 + 2) )
  {
    __ExceptionPtrCreate((void *)(a2 + 40));
    __ExceptionPtrCurrentException((void *)(a2 + 40));
    Concurrency::details::_Task_impl_base::_CancelWithException(v3, (const struct std::exception_ptr *)(a2 + 40));
    __ExceptionPtrDestroy((void *)(a2 + 40));
  }
  return &loc_1801CDAD3;
}
