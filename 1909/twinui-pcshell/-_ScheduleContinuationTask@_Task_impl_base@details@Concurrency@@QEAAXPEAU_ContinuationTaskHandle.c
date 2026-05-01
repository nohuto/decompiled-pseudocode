/*
 * XREFs of ?_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x1801ECA00
 * Callers:
 *     ?_RunContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x1801EC7B4 (-_RunContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@.c)
 *     ?_ScheduleContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x18030E064 (-_ScheduleContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase.c)
 * Callees:
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?_Tidy@?$_Func_class@X$$V@std@@IEAAXXZ @ 0x1801C9F14 (-_Tidy@-$_Func_class@X$$V@std@@IEAAXXZ.c)
 *     Concurrency::details::_ScheduleFuncWithAutoInline @ 0x1801ECAC4 (Concurrency--details--_ScheduleFuncWithAutoInline.c)
 *     ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z @ 0x1801ECB40 (-_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningM.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(
        Concurrency::details::_Task_impl_base *this,
        struct Concurrency::details::_ContinuationTaskHandleBase *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  _QWORD v6[8]; // [rsp+30h] [rbp-58h] BYREF

  Concurrency::details::_TaskEventLogger::_LogScheduleTask(
    (Concurrency::details::_Task_impl_base *)((char *)this + 352),
    1);
  if ( *((_QWORD *)a2 + 2) )
  {
    v4 = *((unsigned int *)a2 + 9);
    if ( (_DWORD)v4 != -1 )
    {
      v4 = 16LL;
      *((_DWORD *)a2 + 9) = 16;
    }
    v6[0] = off_18045DA48;
    v6[1] = a2;
    v6[7] = v6;
    Concurrency::details::_ScheduleFuncWithAutoInline(v6, v4);
    std::_Func_class<void,>::_Tidy((__int64)v6, v5);
  }
  else
  {
    Concurrency::details::_Task_impl_base::_ScheduleTask(this, a2, *((unsigned int *)a2 + 9));
  }
}
