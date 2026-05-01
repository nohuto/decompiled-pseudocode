/*
 * XREFs of ?_RunContinuation@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x1801EC7B4
 * Callers:
 *     ?_RunTaskContinuations@_Task_impl_base@details@Concurrency@@QEAAXXZ @ 0x1801EC9C0 (-_RunTaskContinuations@_Task_impl_base@details@Concurrency@@QEAAXXZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18001F7E8 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x1801ECA00 (-_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandle.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Concurrency::details::_Task_impl_base::_RunContinuation(
        Concurrency::details::_Task_impl_base *this,
        struct Concurrency::details::_ContinuationTaskHandleBase *a2)
{
  __int64 v4; // r8
  char *v5; // rdx
  Concurrency::details::_Task_impl_base *v6; // [rsp+38h] [rbp-20h] BYREF
  std::_Ref_count_base *v7; // [rsp+40h] [rbp-18h]

  (*(void (__fastcall **)(struct Concurrency::details::_ContinuationTaskHandleBase *, Concurrency::details::_Task_impl_base **))(*(_QWORD *)a2 + 16LL))(
    a2,
    &v6);
  if ( *((_DWORD *)this + 2) != 4 || *((_BYTE *)a2 + 32) )
  {
    Concurrency::details::_Task_impl_base::_ScheduleContinuationTask(v6, a2);
  }
  else
  {
    v5 = (char *)this + 16;
    if ( *((_QWORD *)this + 2) )
    {
      LOBYTE(v4) = 1;
    }
    else
    {
      v5 = (char *)v6 + 16;
      v4 = 0LL;
    }
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(Concurrency::details::_Task_impl_base *, char *, __int64))(*(_QWORD *)v6 + 8LL))(v6, v5, v4);
    (**(void (__fastcall ***)(struct Concurrency::details::_ContinuationTaskHandleBase *, __int64))a2)(a2, 1LL);
  }
  if ( v7 )
    std::_Ref_count_base::_Decref(v7);
}
