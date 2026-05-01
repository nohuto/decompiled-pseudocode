/*
 * XREFs of ?_ScheduleTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_TaskProcHandle@23@W4_TaskInliningMode@23@@Z @ 0x1801ECB40
 * Callers:
 *     Concurrency::task_long_::task_long___lambda_921a5a526b2b3e27a0030faf56813293___ @ 0x1801E048C (Concurrency--task_long_--task_long___lambda_921a5a526b2b3e27a0030faf56813293___.c)
 *     _lambda_713ee8bbd6b08550d59c52695cab5ce3_::operator() @ 0x1801E4674 (_lambda_713ee8bbd6b08550d59c52695cab5ce3_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_f25c37099038263181b5186a3fa41b37__void_::_Do_call @ 0x1801EC0E0 (std--_Func_impl_no_alloc__lambda_f25c37099038263181b5186a3fa41b37__void_--_Do_call.c)
 *     ?_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandleBase@23@@Z @ 0x1801ECA00 (-_ScheduleContinuationTask@_Task_impl_base@details@Concurrency@@QEAAXPEAU_ContinuationTaskHandle.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?_RunChoreBridge@_TaskProcHandle@details@Concurrency@@SAXPEAX@Z @ 0x1801EC760 (-_RunChoreBridge@_TaskProcHandle@details@Concurrency@@SAXPEAX@Z.c)
 *     ?schedule@_DefaultPPLTaskScheduler@details@Concurrency@@UEAAXP6AXPEAX@Z0@Z @ 0x1801ECF60 (-schedule@_DefaultPPLTaskScheduler@details@Concurrency@@UEAAXP6AXPEAX@Z0@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall Concurrency::details::_Task_impl_base::_ScheduleTask(
        Concurrency::details::_Task_impl_base *a1,
        void *a2,
        int a3)
{
  void (__fastcall ***v3)(_QWORD, void (__fastcall *)(void *), void *); // rcx
  _BYTE v4[32]; // [rsp+28h] [rbp-20h] BYREF
  void **v6; // [rsp+68h] [rbp+20h] BYREF

  try
  {
    if ( a3 == -1 )
    {
      Concurrency::details::_TaskProcHandle::_RunChoreBridge(a2);
    }
    else
    {
      v3 = (void (__fastcall ***)(_QWORD, void (__fastcall *)(void *), void *))*((_QWORD *)a1 + 38);
      if ( v3 )
      {
        (**v3)(v3, Concurrency::details::_TaskProcHandle::_RunChoreBridge, a2);
      }
      else
      {
        v6 = &Concurrency::details::_DefaultPPLTaskScheduler::`vftable';
        Concurrency::details::_DefaultPPLTaskScheduler::schedule(
          (Concurrency::details::_DefaultPPLTaskScheduler *)&v6,
          (void (*)(void *))Concurrency::details::_TaskProcHandle::_RunChoreBridge,
          a2);
      }
    }
  }
  catch ( Concurrency::task_canceled )
  {
    return;
  }
  catch ( Concurrency::details::_Interruption_exception )
  {
    return;
  }
  catch ( ... )
  {
    if ( !*((_QWORD *)a1 + 2) )
    {
      __ExceptionPtrCreate(v4);
      __ExceptionPtrCurrentException(v4);
      Concurrency::details::_Task_impl_base::_CancelWithException(a1, (const struct std::exception_ptr *)v4);
      __ExceptionPtrDestroy(v4);
    }
  }
}
