/*
 * XREFs of ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60
 * Callers:
 *     imp_WdfRequestSend @ 0x1C00017C0 (imp_WdfRequestSend.c)
 *     imp_WdfCollectionGetItem @ 0x1C0001DE0 (imp_WdfCollectionGetItem.c)
 *     imp_WdfCollectionGetCount @ 0x1C00020B0 (imp_WdfCollectionGetCount.c)
 *     imp_WdfIoQueueFindRequest @ 0x1C00029F0 (imp_WdfIoQueueFindRequest.c)
 *     ?_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z @ 0x1C0003390 (-_FxTimerDpcThunk@FxTimer@@CAXPEAU_KDPC@@PEAX11@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005AD0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0006010 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0006B40 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00075E0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007A60 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008280 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00096B0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A2F0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000A620 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C000AA30 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C000AE70 (-_WorkItemThunk@FxSystemWorkItem@@CAXPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000B280 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000BEA0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C00107DC (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C00108DC (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010A80 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00124F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     imp_WdfRequestUnmarkCancelable @ 0x1C0013050 (imp_WdfRequestUnmarkCancelable.c)
 *     imp_WdfRequestMarkCancelableEx @ 0x1C0016A00 (imp_WdfRequestMarkCancelableEx.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016C70 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C0017300 (imp_WdfIoQueueStart.c)
 *     ?Lock@FxCallbackMutexLock@@UEAAXPEAE@Z @ 0x1C0019F50 (-Lock@FxCallbackMutexLock@@UEAAXPEAE@Z.c)
 *     ?Lock@FxCallbackSpinLock@@UEAAXPEAE@Z @ 0x1C004EF30 (-Lock@FxCallbackSpinLock@@UEAAXPEAE@Z.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z @ 0x1C005CAB4 (-DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z.c)
 *     ?GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z @ 0x1C005CC04 (-GetThreadTableEntry@FxVerifierLock@@SAPEAUFxVerifierThreadTableEntry@@PEAU_KTHREAD@@PEAV1@E@Z.c)
 *     WPP_IFR_SF_qqqq @ 0x1C005D64C (WPP_IFR_SF_qqqq.c)
 */

void __fastcall FxVerifierLock::Lock(FxVerifierLock *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  struct _KTHREAD *CurrentThread; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  KIRQL v7; // r15
  FxObject *m_ParentObject; // rdx
  const void *v9; // rcx
  FxObject *v10; // r8
  unsigned __int16 m_ObjectSize; // ax
  ULONG_PTR v12; // r8
  KIRQL v13; // al
  unsigned __int64 *p_m_Lock; // rdi
  unsigned __int64 *v15; // rcx
  _LIST_ENTRY **ThreadTableEntry; // rbp
  unsigned __int8 m_UseMutex; // al
  unsigned __int64 *v18; // rcx
  FxVerifierLock *v19; // rsi
  _LARGE_INTEGER sleepTime; // [rsp+80h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  m_Globals = this->m_Globals;
  v7 = 0;
  if ( this->m_OwningThread == CurrentThread )
  {
    m_ParentObject = this->m_ParentObject;
    v9 = (const void *)((unsigned __int64)m_ParentObject ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ParentObject->m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_qqqq(
      m_Globals,
      1u,
      0x12u,
      0xAu,
      WPP_FxVerifierLock_cpp_Traceguids,
      CurrentThread,
      this,
      m_ParentObject,
      v9);
    v10 = this->m_ParentObject;
    m_ObjectSize = v10->m_ObjectSize;
    v12 = (unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      v12 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_RECURSIVE_LOCK, v12, (ULONG_PTR)this);
  }
  if ( this->m_UseMutex )
  {
    KeEnterCriticalRegion();
    ExAcquireFastMutexUnsafe(&this->m_Mutex.m_Lock);
    *PreviousIrql = KeGetCurrentIrql();
  }
  else
  {
    if ( !KeGetCurrentIrql() )
    {
      sleepTime.QuadPart = 0LL;
      KeDelayExecutionThread(0, 1u, &sleepTime);
    }
    v13 = KeAcquireSpinLockRaiseToDpc(&this->m_Lock.m_Lock);
    *PreviousIrql = v13;
    this->m_OldIrql = v13;
  }
  p_m_Lock = &m_Globals->ThreadTableLock.m_Lock;
  v15 = &m_Globals->ThreadTableLock.m_Lock;
  if ( this->m_UseMutex )
    v7 = KeAcquireSpinLockRaiseToDpc(v15);
  else
    KeAcquireSpinLockAtDpcLevel(v15);
  this->m_OwningThread = CurrentThread;
  ThreadTableEntry = FxVerifierLock::GetThreadTableEntry((unsigned __int64)CurrentThread, this, 0);
  m_UseMutex = this->m_UseMutex;
  if ( ThreadTableEntry )
  {
    if ( m_UseMutex )
      v19 = (FxVerifierLock *)ThreadTableEntry[1];
    else
      v19 = (FxVerifierLock *)ThreadTableEntry[2];
    if ( v19 )
    {
      if ( this->m_Order < v19->m_Order )
        FxVerifierLock::DumpDetails(this, CurrentThread, v19);
    }
    else
    {
      v19 = 0LL;
    }
    this->m_OwnedLink = v19;
    v18 = p_m_Lock;
    if ( this->m_UseMutex )
    {
      ThreadTableEntry[1] = (_LIST_ENTRY *)this;
LABEL_27:
      KeReleaseSpinLock(v18, v7);
      return;
    }
    ThreadTableEntry[2] = (_LIST_ENTRY *)this;
  }
  else
  {
    v18 = &m_Globals->ThreadTableLock.m_Lock;
    if ( m_UseMutex )
      goto LABEL_27;
  }
  KeReleaseSpinLockFromDpcLevel(v18);
}
