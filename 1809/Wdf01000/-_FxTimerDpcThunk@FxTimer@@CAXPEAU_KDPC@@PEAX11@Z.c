/*
 * XREFs of ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0004420
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?TimerHandler@FxTimer@@QEAAXXZ @ 0x1C00567CC (-TimerHandler@FxTimer@@QEAAXXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 */

void __fastcall FxTimer::_FxTimerDpcThunk(
        _KDPC *TimerDpc,
        FxTimer *DeferredContext,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxSystemWorkItem *_a1; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned __int8 v7; // si
  unsigned __int8 v8; // r8
  void (__fastcall *v9)(void (__fastcall **)(WDFTIMER__ *), __int64, __int64, __int64, char); // rax
  FxVerifierLock *v10; // rcx
  FxVerifierLock *v11; // rcx
  unsigned __int8 PreviousIrql; // [rsp+48h] [rbp+10h] BYREF

  _a1 = DeferredContext->m_SystemWorkItem;
  if ( _a1 )
  {
    m_Globals = _a1->m_Globals;
    if ( SLOBYTE(_a1->m_ObjectFlags) < 0 && (v10 = *(FxVerifierLock **)&_a1[-1].m_WorkItemRunningCount) != 0LL )
    {
      FxVerifierLock::Lock(v10, &PreviousIrql, (unsigned __int8)SystemArgument1);
      v7 = PreviousIrql;
    }
    else
    {
      v7 = KeAcquireSpinLockRaiseToDpc(&_a1->m_NPLock.m_Lock);
      PreviousIrql = v7;
    }
    if ( !_a1->m_Enqueued )
    {
      if ( !_a1->m_RunningDown )
      {
        KeClearEvent(&_a1->m_WorkItemCompleted.m_Event.m_Event);
        _a1->m_CallbackArg = DeferredContext;
        _a1->m_Callback = FxTimer::_FxTimerWorkItemCallback;
        _a1->m_Enqueued = 1;
        _InterlockedIncrement(&_a1->m_OutStandingWorkItem);
        if ( SLOBYTE(_a1->m_ObjectFlags) < 0 && (v11 = *(FxVerifierLock **)&_a1[-1].m_WorkItemRunningCount) != 0LL )
          FxVerifierLock::Unlock(v11, PreviousIrql, v8);
        else
          KeReleaseSpinLock(&_a1->m_NPLock.m_Lock, PreviousIrql);
        IoQueueWorkItem(_a1->m_WorkItem.m_WorkItem, FxSystemWorkItem::_WorkItemThunk, DelayedWorkQueue, _a1);
        return;
      }
      WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, _a1);
      FxVerifierDbgBreakPoint(m_Globals);
    }
    FxNonPagedObject::Unlock(_a1, v7);
    return;
  }
  v9 = *(void (__fastcall **)(void (__fastcall **)(WDFTIMER__ *), __int64, __int64, __int64, char))(unk_1C00ABE90 + 8LL);
  if ( v9 )
    v9(&DeferredContext->m_Callback, 8LL, 2164260864LL, 3938LL, 2);
  FxTimer::TimerHandler(DeferredContext);
}
