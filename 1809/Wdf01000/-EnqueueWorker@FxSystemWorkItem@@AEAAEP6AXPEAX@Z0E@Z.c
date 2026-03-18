/*
 * XREFs of ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C00582F4
 * Callers:
 *     ?_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0002D50 (-_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0003780 (-_InterruptDpcThunk@FxInterrupt@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000B340 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C00573C8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C006FB70 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     imp_WdfInterruptQueueWorkItemForIsr @ 0x1C007AE60 (imp_WdfInterruptQueueWorkItemForIsr.c)
 *     ?SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z @ 0x1C00853F4 (-SetDeviceFailedAttemptRestart@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxSystemWorkItem::EnqueueWorker(
        FxSystemWorkItem *this,
        void (__fastcall *Func)(void *),
        void *Parameter,
        unsigned __int8 AssertIfAlreadyQueued)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v9; // r8
  unsigned __int8 v11; // r8
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Parameter);
  if ( this->m_Enqueued )
  {
    if ( !AssertIfAlreadyQueued )
    {
LABEL_5:
      FxNonPagedObject::Unlock(this, irql, v9);
      return 0;
    }
    WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxSystemWorkitem_cpp_Traceguids, this, this->m_WorkItem.m_WorkItem);
LABEL_4:
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_5;
  }
  if ( this->m_RunningDown )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, this);
    goto LABEL_4;
  }
  KeClearEvent(&this->m_WorkItemCompleted.m_Event.m_Event);
  this->m_Callback = Func;
  this->m_CallbackArg = Parameter;
  this->m_Enqueued = 1;
  _InterlockedIncrement(&this->m_OutStandingWorkItem);
  FxNonPagedObject::Unlock(this, irql, v11);
  IoQueueWorkItem(
    this->m_WorkItem.m_WorkItem,
    (PIO_WORKITEM_ROUTINE)FxSystemWorkItem::_WorkItemThunk,
    DelayedWorkQueue,
    this);
  return 1;
}
