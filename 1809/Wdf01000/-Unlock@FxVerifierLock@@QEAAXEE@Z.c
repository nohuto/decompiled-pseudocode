/*
 * XREFs of ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC
 * Callers:
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0001520 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0001910 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     imp_WdfRequestSend @ 0x1C0001F50 (imp_WdfRequestSend.c)
 *     imp_WdfCollectionGetItem @ 0x1C0002620 (imp_WdfCollectionGetItem.c)
 *     imp_WdfCollectionGetCount @ 0x1C0003270 (imp_WdfCollectionGetCount.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C0003BA0 (imp_WdfIoQueueFindRequest.c)
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0004420 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007A90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008760 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C0009FD0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C000AC00 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000B010 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000B340 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000B780 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z @ 0x1C000D340 (-HandleQueryCapabilities@FxPkgPdo@@AEAAXPEAU_DEVICE_CAPABILITIES@@0@Z.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010490 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1C00128E0 (imp_WdfRequestUnmarkCancelable.c)
 *     ?GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ @ 0x1C0014B80 (-GetPnpCapsInternal@FxPkgPnp@@IEAAJXZ.c)
 *     ?HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z @ 0x1C0014BF0 (-HandleQueryCapabilitiesCompletion@FxPkgFdo@@AEAAXPEAVFxIrp@@@Z.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C00161C0 (imp_WdfRequestMarkCancelableEx.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016430 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016744 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Unlock@FxCallbackMutexLock@@UEAAXE@Z @ 0x1C0019E50 (-Unlock@FxCallbackMutexLock@@UEAAXE@Z.c)
 *     ?Unlock@FxCallbackSpinLock@@UEAAXE@Z @ 0x1C004F730 (-Unlock@FxCallbackSpinLock@@UEAAXE@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qqq @ 0x1C0034A5C (WPP_IFR_SF_qqq.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1C005C868 (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x1C005CBA4 (-ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z.c)
 */

void __fastcall FxVerifierLock::Unlock(FxVerifierLock *this, KIRQL PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *_a1; // rbp
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  KIRQL v7; // r13
  _LIST_ENTRY **ThreadTableEntry; // rax
  _LIST_ENTRY **_a2; // r14
  _LARGE_INTEGER *p_sleepTime; // r8
  FxVerifierLock *v11; // rcx
  FxVerifierLock *i; // rdi
  unsigned __int16 v13; // r9
  FxVerifierLock *j; // rdi
  _LARGE_INTEGER Interval; // [rsp+40h] [rbp-48h] BYREF
  _LARGE_INTEGER sleepTime; // [rsp+90h] [rbp+8h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+20h] BYREF

  _a1 = KeGetCurrentThread();
  m_Globals = this->m_Globals;
  if ( _a1 != this->m_OwningThread )
  {
    WPP_IFR_SF_qqq(m_Globals, 2u, 0x12u, 0xBu, WPP_FxVerifierLock_cpp_Traceguids, _a1, this, this->m_ParentObject);
    FxVerifierDbgBreakPoint(m_Globals);
    return;
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&m_Globals->ThreadTableLock.m_Lock);
  ThreadTableEntry = FxVerifierLock::GetThreadTableEntry((unsigned __int64)this->m_OwningThread, this, 1u);
  _a2 = ThreadTableEntry;
  if ( !ThreadTableEntry )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_cpp_Traceguids, _a1);
    this->m_OwningThread = 0LL;
    KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
    if ( !this->m_UseMutex )
    {
      KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
      if ( KeGetCurrentIrql() )
        return;
      sleepTime.QuadPart = 0LL;
      p_sleepTime = &sleepTime;
      goto LABEL_35;
    }
LABEL_32:
    ExReleaseFastMutexUnsafe(&this->m_Mutex.m_Lock);
    KeLeaveCriticalRegion();
    return;
  }
  if ( this->m_UseMutex )
  {
    v11 = (FxVerifierLock *)ThreadTableEntry[1];
    if ( !v11 )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xDu, WPP_FxVerifierLock_cpp_Traceguids);
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0xEu, WPP_FxVerifierLock_cpp_Traceguids, this, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
      this->m_OwningThread = 0LL;
      KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
      goto LABEL_32;
    }
    if ( v11 == this )
    {
      ThreadTableEntry[1] = (_LIST_ENTRY *)this->m_OwnedLink;
LABEL_23:
      this->m_OwnedLink = 0LL;
      FxVerifierLock::ReleaseOrReplaceThreadTableEntry((unsigned __int64)_a1, this);
      goto LABEL_31;
    }
    for ( i = v11->m_OwnedLink; i; i = i->m_OwnedLink )
    {
      if ( i == this )
        goto LABEL_17;
      v11 = i;
    }
    v13 = 17;
  }
  else
  {
    v11 = (FxVerifierLock *)ThreadTableEntry[2];
    if ( !v11 )
    {
      WPP_IFR_SF_(m_Globals, 2u, 0x12u, 0xFu, WPP_FxVerifierLock_cpp_Traceguids);
      WPP_IFR_SF_qq(m_Globals, 2u, 0x12u, 0x10u, WPP_FxVerifierLock_cpp_Traceguids, this, _a2);
      FxVerifierDbgBreakPoint(m_Globals);
      this->m_OwningThread = 0LL;
      KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
      KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
      if ( KeGetCurrentIrql() )
        return;
      v17 = 0LL;
      p_sleepTime = (_LARGE_INTEGER *)&v17;
      goto LABEL_35;
    }
    if ( v11 == this )
    {
      ThreadTableEntry[2] = (_LIST_ENTRY *)this->m_OwnedLink;
      goto LABEL_23;
    }
    for ( j = v11->m_OwnedLink; j; j = j->m_OwnedLink )
    {
      if ( j == this )
      {
LABEL_17:
        v11->m_OwnedLink = this->m_OwnedLink;
        this->m_OwnedLink = 0LL;
        FxVerifierLock::ReleaseOrReplaceThreadTableEntry((unsigned __int64)_a1, this);
        goto LABEL_31;
      }
      v11 = j;
    }
    v13 = 18;
  }
  WPP_IFR_SF_qqq(
    m_Globals,
    2u,
    0x12u,
    v13,
    WPP_FxVerifierLock_cpp_Traceguids,
    this,
    ThreadTableEntry,
    this->m_OwningThread);
  FxVerifierDbgBreakPoint(m_Globals);
LABEL_31:
  this->m_OwningThread = 0LL;
  KeReleaseSpinLock(&m_Globals->ThreadTableLock.m_Lock, v7);
  if ( this->m_UseMutex )
    goto LABEL_32;
  KeReleaseSpinLock(&this->m_Lock.m_Lock, PreviousIrql);
  if ( KeGetCurrentIrql() )
    return;
  Interval.QuadPart = 0LL;
  p_sleepTime = &Interval;
LABEL_35:
  KeDelayExecutionThread(0, 1u, p_sleepTime);
}
