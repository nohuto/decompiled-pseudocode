/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860
 * Callers:
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005AD0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0006010 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0006B40 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C00075E0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007A60 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008280 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00096B0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000B280 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C00107DC (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C00108DC (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010A80 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00124F0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0013544 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00147DC (-RequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016C70 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0017234 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C0017300 (imp_WdfIoQueueStart.c)
 *     ?PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0050554 (-PostRequestCompletedCallback@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0077DA4 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C00787C4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1C0078C2C (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0078CC0 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0078FDC (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0079E74 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C007A05C (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C007A1FC (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qcq @ 0x1C0003E7C (WPP_IFR_SF_qcq.c)
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00092E0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012020 (WPP_IFR_SF_qqLL.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0012130 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0013224 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00135E0 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C00143F4 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C00183A0 (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C001858C (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00190E8 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0030CA4 (WPP_IFR_SF_ql.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C004AF90 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0057578 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0057D44 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005D078 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00796EC (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0079888 (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C6300 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::DispatchEvents(
        FxIoQueue *this,
        unsigned __int8 PreviousIrql,
        FxRequest *NewRequest,
        unsigned __int16 a4)
{
  volatile unsigned __int8 m_Deleted; // al
  FxIoQueue *v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v7; // di
  FxCallbackLock *m_CallbackLockPtr; // rcx
  const _GUID *v9; // r8
  _LIST_ENTRY *p_m_Cancelled; // rdx
  int v11; // edi
  int m_PowerState; // edx
  unsigned int m_QueueState; // edx
  _WDF_IO_QUEUE_DISPATCH_TYPE m_Type; // eax
  FxRequest *v15; // rdi
  KIRQL v16; // dl
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 *v20; // r15
  _FX_DRIVER_GLOBALS *v21; // r14
  KIRQL v22; // r13
  __int64 v23; // rax
  unsigned int v24; // esi
  __int64 v25; // r14
  int v26; // eax
  unsigned int TargetStatesCount; // edx
  const FxPowerIdleTargetState *TargetStates; // r8
  FxTagTracker *v29; // rcx
  const void *id; // rcx
  unsigned __int8 v31; // r8
  FxSystemWorkItem *m_SystemWorkItem; // rsi
  _FX_DRIVER_GLOBALS *v33; // r15
  unsigned __int8 v34; // r14
  unsigned __int8 v35; // r8
  bool v36; // zf
  FxRequest *v37; // rdi
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v39; // r15d
  __int64 v40; // rsi
  unsigned __int64 *v41; // r12
  KIRQL v42; // al
  char v43; // cl
  KIRQL v44; // r13
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned int v47; // edx
  const FxPowerIdleTargetState *v48; // r8
  int v49; // r14d
  FxTagTracker *v50; // rcx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  _LIST_ENTRY *v52; // rdx
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v54; // r8
  FxIrpQueue *p_m_Queue; // r10
  _IRP *p_Blink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v59; // r8
  _LIST_ENTRY *Blink; // rdx
  _QWORD *v61; // rdi
  __int64 v62; // rax
  void (__fastcall *v63)(FxRequest *, __int64, __int64, const char *); // rax
  const void *v64; // rax
  _FX_DRIVER_GLOBALS *v65; // rdx
  FxIrpQueue *v66; // rsi
  unsigned __int8 v67; // r14
  signed __int32 v68; // edx
  FxRequest *v69; // rdi
  unsigned int v70; // edx
  _IRP *m_Irp; // r9
  $41EACD23695CB34D39C03C31B435114F *v72; // r10
  _LIST_ENTRY *v73; // rcx
  _LIST_ENTRY *v74; // rax
  int v75; // r15d
  unsigned __int8 v76; // al
  unsigned int PowerIdleState; // esi
  __int64 v78; // rcx
  const void *v79; // rdx
  char v80; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxVerifierLock *v82; // rcx
  FxVerifierLock *v83; // rcx
  const void *v84; // rcx
  FxSystemWorkItem *v85; // rcx
  FxVerifierLock *v86; // rcx
  struct _KTHREAD *CurrentThread; // rax
  const void *v88; // rcx
  int inserted; // eax
  int v90; // eax
  unsigned __int8 v91; // al
  __int64 v92; // rax
  const void *v93; // rdx
  unsigned int v94; // edx
  _FX_DRIVER_GLOBALS *v95; // rcx
  const void *v96; // rcx
  int v97; // eax
  unsigned __int8 v98; // dl
  _LIST_ENTRY *v99; // rcx
  __int64 v100; // r9
  __int64 v101; // r10
  unsigned int v102; // r14d
  __int64 v103; // r12
  __int64 v104; // rdx
  const void *v105; // rcx
  char v106; // al
  FxPowerIdleStates (__fastcall *v107)(FxPowerIdleMachine *); // rax
  FxVerifierLock *v108; // rcx
  FxVerifierLock *v109; // rcx
  FxVerifierLock *v110; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-59h]
  unsigned __int8 v112[8]; // [rsp+58h] [rbp-29h] BYREF
  KIRQL v113; // [rsp+60h] [rbp-21h]
  __int64 v114; // [rsp+68h] [rbp-19h]
  unsigned int v115; // [rsp+70h] [rbp-11h]
  _FX_DRIVER_GLOBALS *v116; // [rsp+78h] [rbp-9h]
  FxIrp Irp; // [rsp+80h] [rbp-1h] BYREF
  _QWORD *v118; // [rsp+88h] [rbp+7h]
  unsigned __int8 flags; // [rsp+F0h] [rbp+6Fh] BYREF
  FxRequest *pRequest; // [rsp+F8h] [rbp+77h] BYREF
  unsigned __int8 v122; // [rsp+100h] [rbp+7Fh] BYREF

  pRequest = NewRequest;
  flags = PreviousIrql;
  m_Deleted = this->m_Deleted;
  v5 = this;
  m_Globals = this->m_Globals;
  v116 = m_Globals;
  if ( m_Deleted )
  {
    FxNonPagedObject::Unlock(this, flags);
    return 0;
  }
  v7 = flags;
  if ( flags && this->m_PassiveLevel )
  {
    id = 0LL;
    if ( v5->m_ObjectSize )
      id = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v7 = flags;
    WPP_IFR_SF_qcq(
      v5->m_Globals,
      PreviousIrql,
      (unsigned int)NewRequest,
      a4,
      traceGuid,
      KeGetCurrentThread(),
      flags,
      id);
    if ( !v5->m_WorkItemQueued )
    {
      m_SystemWorkItem = v5->m_SystemWorkItem;
      v5->m_WorkItemQueued = 1;
      v33 = m_SystemWorkItem->m_Globals;
      if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0
        && (v82 = *(FxVerifierLock **)&m_SystemWorkItem[-1].m_WorkItemRunningCount) != 0LL )
      {
        FxVerifierLock::Lock(v82, &v122, v31);
        v34 = v122;
      }
      else
      {
        v34 = KeAcquireSpinLockRaiseToDpc(&m_SystemWorkItem->m_NPLock.m_Lock);
        v122 = v34;
      }
      if ( m_SystemWorkItem->m_Enqueued )
      {
        WPP_IFR_SF_qq(
          v33,
          2u,
          0x12u,
          0xEu,
          WPP_FxSystemWorkitem_cpp_Traceguids,
          m_SystemWorkItem,
          m_SystemWorkItem->m_WorkItem.m_WorkItem);
      }
      else
      {
        if ( !m_SystemWorkItem->m_RunningDown )
        {
          KeClearEvent(&m_SystemWorkItem->m_WorkItemCompleted.m_Event.m_Event);
          m_SystemWorkItem->m_CallbackArg = v5;
          m_SystemWorkItem->m_Callback = FxIoQueue::_DeferredDispatchThreadThunk;
          m_SystemWorkItem->m_Enqueued = 1;
          _InterlockedIncrement(&m_SystemWorkItem->m_OutStandingWorkItem);
          if ( SLOBYTE(m_SystemWorkItem->m_ObjectFlags) < 0
            && (v83 = *(FxVerifierLock **)&m_SystemWorkItem[-1].m_WorkItemRunningCount) != 0LL )
          {
            FxVerifierLock::Unlock(v83, v122, v35);
          }
          else
          {
            KeReleaseSpinLock(&m_SystemWorkItem->m_NPLock.m_Lock, v122);
          }
          IoQueueWorkItem(
            m_SystemWorkItem->m_WorkItem.m_WorkItem,
            FxSystemWorkItem::_WorkItemThunk,
            DelayedWorkQueue,
            m_SystemWorkItem);
          v7 = flags;
          goto LABEL_52;
        }
        WPP_IFR_SF_q(v33, 2u, 0x12u, 0xFu, WPP_FxSystemWorkitem_cpp_Traceguids, m_SystemWorkItem);
      }
      FxVerifierDbgBreakPoint(v33);
      FxNonPagedObject::Unlock(m_SystemWorkItem, v34);
      v5->m_WorkItemQueued = 0;
    }
LABEL_52:
    v36 = pRequest == 0LL;
    v5->m_RequeueDeferredDispatcher = 1;
    if ( !v36 )
      FxIoQueue::InsertNewRequestLocked(v5, &pRequest, v7);
    if ( SLOBYTE(v5->m_ObjectFlags) < 0 && (v86 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v86, v7, v31);
    }
    else
    {
      v16 = v7;
LABEL_27:
      KeReleaseSpinLock(&v5->m_NPLock.m_Lock, v16);
    }
    return 1;
  }
  m_CallbackLockPtr = this->m_CallbackLockPtr;
  if ( m_CallbackLockPtr && m_CallbackLockPtr->IsOwner(m_CallbackLockPtr) )
  {
    v84 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v5->m_ObjectSize )
      v84 = 0LL;
    WPP_IFR_SF_q(v5->m_Globals, 3u, 0xDu, 0x2Eu, WPP_FxIoQueue_cpp_Traceguids, v84);
    if ( v5->m_PassiveLevel )
    {
      if ( !v5->m_WorkItemQueued )
      {
        v85 = v5->m_SystemWorkItem;
        v5->m_WorkItemQueued = 1;
        if ( !FxSystemWorkItem::EnqueueWorker(v85, FxIoQueue::_DeferredDispatchThreadThunk, v5, 1u) )
          v5->m_WorkItemQueued = 0;
      }
    }
    else if ( !v5->m_DpcQueued )
    {
      v5->m_DpcQueued = 1;
      KeInsertQueueDpc(&v5->m_Dpc, 0LL, 0LL);
    }
    goto LABEL_52;
  }
  ++v5->m_Dispatching;
  v9 = WPP_FxIoQueue_cpp_Traceguids;
  if ( !m_Globals->FxVerboseOn )
    goto LABEL_6;
  CurrentThread = KeGetCurrentThread();
  v88 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v5->m_ObjectSize )
    v88 = 0LL;
  WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x2Fu, WPP_FxIoQueue_cpp_Traceguids, CurrentThread, v88);
LABEL_40:
  v9 = WPP_FxIoQueue_cpp_Traceguids;
LABEL_6:
  while ( 2 )
  {
    p_m_Cancelled = &v5->m_Cancelled;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v11 = (pRequest != 0LL) + v5->m_Queue.m_RequestCount + v5->m_DriverIoCount;
            if ( p_m_Cancelled->Flink == p_m_Cancelled )
              break;
            if ( pRequest )
            {
              inserted = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
              p_m_Cancelled = &v5->m_Cancelled;
              v9 = WPP_FxIoQueue_cpp_Traceguids;
              if ( inserted < 0 )
                continue;
            }
            v76 = FxIoQueue::ProcessCancelledRequests(v5, &flags);
            p_m_Cancelled = &v5->m_Cancelled;
            v9 = WPP_FxIoQueue_cpp_Traceguids;
            if ( !v76 )
              break;
          }
          if ( v5->m_CanceledOnQueueList.Flink == &v5->m_CanceledOnQueueList )
            break;
          if ( pRequest )
          {
            v90 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
            p_m_Cancelled = &v5->m_Cancelled;
            v9 = WPP_FxIoQueue_cpp_Traceguids;
            if ( v90 < 0 )
              continue;
          }
          v91 = FxIoQueue::ProcessCancelledRequestsOnQueue(v5, &flags);
          p_m_Cancelled = &v5->m_Cancelled;
          v9 = WPP_FxIoQueue_cpp_Traceguids;
          if ( !v91 )
            break;
        }
        if ( v5->m_IdleComplete.Method && v5->m_Dispatching == 1 && !v5->m_DriverIoCount )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          v5->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessIdleComplete(v5, &flags);
          goto LABEL_100;
        }
        if ( v5->m_PurgeComplete.Method && !v11 && v5->m_Dispatching == 1 )
        {
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          v5->m_CancelDispatchedRequests = 0;
          FxIoQueue::ProcessPurgeComplete(v5, &flags);
          v9 = WPP_FxIoQueue_cpp_Traceguids;
          goto LABEL_6;
        }
        if ( v5->m_IsDevicePowerPolicyOwner
          && v5->m_PowerManaged
          && v5->m_PowerReferenced
          && !v11
          && v5->m_Dispatching == 1 )
        {
          v18 = *(_QWORD *)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
          v19 = *(_QWORD *)(v18 + 424);
          v20 = (unsigned __int64 *)(v18 + 16);
          v21 = *(_FX_DRIVER_GLOBALS **)(v19 + 16);
          v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v18 + 16));
          if ( !*(_DWORD *)(v18 + 24) )
          {
            v92 = *(_QWORD *)(v19 + 96);
            v93 = (const void *)(v92 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !*(_WORD *)(v92 + 10) )
              v93 = 0LL;
            WPP_IFR_SF_qq(
              v21,
              2u,
              0xCu,
              0xFu,
              WPP_PowerIdleStateMachine_cpp_Traceguids,
              v93,
              *(const void **)(v92 + 144));
            if ( v21->FxVerifierOn
              && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v21, v94, 0xBu) || v21->FxVerifyDownlevel) )
            {
              FxVerifierDbgBreakPoint(v95);
            }
          }
          v23 = *(unsigned __int8 *)(v18 + 225);
          v24 = --*(_DWORD *)(v18 + 24);
          v25 = *(_QWORD *)(v18 + 424);
          *(_DWORD *)(v18 + 4 * v23 + 232) = 256;
          LOBYTE(v23) = *(_BYTE *)(v18 + 225) + 1;
          LODWORD(v114) = v24;
          *(_BYTE *)(v18 + 225) = v23 & 7;
          v26 = 0;
          TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(int *)(v18 + 228) - 1].TargetStatesCount;
          if ( TargetStatesCount )
          {
            TargetStates = FxPowerIdleMachine::m_StateTable[*(int *)(v18 + 228) - 1].TargetStates;
            while ( TargetStates[v26].PowerIdleEvent != PowerIdleEventIoDecrement )
            {
              if ( ++v26 >= TargetStatesCount )
                goto LABEL_37;
            }
            PowerIdleState = TargetStates[v26].PowerIdleState;
            if ( PowerIdleState != 35 )
            {
              do
              {
                v78 = *(_QWORD *)(v25 + 96);
                v79 = 0LL;
                if ( *(_WORD *)(v78 + 10) )
                  v79 = (const void *)(*(_QWORD *)(v25 + 96) ^ 0xFFFFFFFFFFFFFFF8uLL);
                WPP_IFR_SF_qqLL(
                  *(_FX_DRIVER_GLOBALS **)(v25 + 16),
                  4u,
                  0x15u,
                  0x11u,
                  WPP_PowerIdleStateMachine_cpp_Traceguids,
                  v79,
                  *(const void **)(v78 + 144),
                  PowerIdleState,
                  *(_DWORD *)(v18 + 228));
                *(_DWORD *)(v18 + 4LL * *(unsigned __int8 *)(v18 + 226) + 264) = PowerIdleState;
                v80 = *(_BYTE *)(v18 + 226) + 1;
                *(_DWORD *)(v18 + 228) = PowerIdleState;
                *(_BYTE *)(v18 + 226) = v80 & 7;
                StateFunc = FxPowerIdleMachine::m_StateTable[(int)PowerIdleState - 1].StateFunc;
                if ( !StateFunc )
                  break;
                PowerIdleState = StateFunc((FxPowerIdleMachine *)v18);
              }
              while ( PowerIdleState != 35 );
              v5 = this;
              v20 = (unsigned __int64 *)(v18 + 16);
            }
            v24 = v114;
          }
LABEL_37:
          KeReleaseSpinLock(v20, v22);
          v29 = *(FxTagTracker **)(v18 + 32);
          if ( v29 )
            FxTagTracker::UpdateTagHistory(v29, 0LL, 0, 0LL, TagRelease, v24);
          m_Globals = v116;
          v5->m_PowerReferenced = 0;
          goto LABEL_40;
        }
        m_PowerState = v5->m_PowerState;
        if ( (unsigned int)(m_PowerState - 1) <= 1 )
          break;
        if ( m_Globals->FxVerboseOn )
        {
          v96 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v5->m_ObjectSize )
            v96 = 0LL;
          WPP_IFR_SF_ql(m_Globals, 5u, 0xDu, 0x30u, WPP_FxIoQueue_cpp_Traceguids, v96, m_PowerState);
        }
        if ( pRequest )
        {
          v97 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          p_m_Cancelled = &v5->m_Cancelled;
          v9 = WPP_FxIoQueue_cpp_Traceguids;
          if ( v97 < 0 )
            continue;
        }
        if ( !FxIoQueue::ProcessPowerEvents(v5, &flags) )
          goto $Done_3;
        goto LABEL_100;
      }
      if ( v5->m_Disposing && !v11 && v5->m_Dispatching == 1 )
      {
        v98 = flags;
        v5->m_Deleted = 1;
        FxNonPagedObject::Unlock(v5, v98);
        KeSetEvent(&v5->m_FinishDisposing.m_Event, 0, 0);
        return 1;
      }
      if ( v5->m_PowerState == FxIoQueuePowerOff )
        goto LABEL_94;
      m_QueueState = v5->m_QueueState;
      if ( (m_QueueState & 2) == 0 )
      {
        v64 = 0LL;
        if ( v5->m_ObjectSize )
          v64 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qL(m_Globals, 3u, 0xDu, 0x31u, WPP_FxIoQueue_cpp_Traceguids, v64, m_QueueState);
        goto LABEL_94;
      }
      m_Type = v5->m_Type;
      if ( m_Type != WdfIoQueueDispatchManual )
      {
        if ( m_Type == WdfIoQueueDispatchSequential && v5->m_DriverIoCount > 0
          || v5->m_Type == WdfIoQueueDispatchParallel && v5->m_DriverIoCount >= v5->m_MaxParallelQueuePresentedRequests )
        {
LABEL_94:
          if ( !pRequest || FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags) >= 0 )
            goto $Done_3;
LABEL_100:
          v9 = WPP_FxIoQueue_cpp_Traceguids;
          goto LABEL_6;
        }
        if ( v5->m_Queue.m_RequestCount <= 0 )
          goto LABEL_24;
        p_m_Queue = &v5->m_Queue;
        p_Blink = 0LL;
        Flink = v5->m_Queue.m_Queue.Flink;
        if ( Flink != (_LIST_ENTRY *)&v5->m_Queue )
          p_Blink = (_IRP *)&Flink[-11].Blink;
        if ( p_Blink )
        {
          while ( !_InterlockedExchange64((volatile __int64 *)&p_Blink->CancelRoutine, 0LL) )
          {
            p_Blink = FxIrpQueue::PeekNextIrpFromQueue(p_m_Queue, p_Blink, 0LL);
            if ( !p_Blink )
              goto LABEL_24;
          }
          p_ListEntry = &p_Blink->Tail.Overlay.ListEntry;
          v59 = p_Blink->Tail.Overlay.ListEntry.Flink;
          if ( (void **)v59->Blink != &p_Blink->Tail.CompletionKey + 6
            || (Blink = p_Blink->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
          {
LABEL_209:
            __fastfail(3u);
          }
          Blink->Flink = v59;
          v59->Blink = Blink;
          p_Blink->Tail.Overlay.ListEntry.Blink = &p_Blink->Tail.Overlay.ListEntry;
          p_ListEntry->Flink = p_ListEntry;
          --p_m_Queue->m_RequestCount;
          v61 = p_Blink->Tail.Overlay.DriverContext[3];
          if ( *(_DWORD *)v61 == 1 )
            v61[1] = 0LL;
          p_Blink->Tail.Overlay.DriverContext[3] = 0LL;
          v62 = *(v61 - 15);
          v118 = v61;
          v15 = (FxRequest *)(v61 - 15);
          v63 = *(void (__fastcall **)(FxRequest *, __int64, __int64, const char *))(v62 + 16);
          v15->m_IrpQueue = 0LL;
          v63(v15, 1969583441LL, 2062LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          if ( pRequest )
            FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
        }
        else
        {
LABEL_24:
          v15 = pRequest;
          if ( !pRequest )
            goto $Done_3;
          pRequest->m_IoQueue = v5;
          v36 = v5->m_IsDevicePowerPolicyOwner == 0;
          v5->m_TransitionFromEmpty = 1;
          v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( !v36 && v5->m_PowerManaged && !v5->m_PowerReferenced )
          {
            m_DeviceBase = v5->m_DeviceBase;
            v39 = 0;
            v115 = 0;
            v40 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
            v41 = (unsigned __int64 *)(v40 + 16);
            v42 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v40 + 16));
            v43 = *(_BYTE *)(v40 + 224);
            v44 = v42;
            v113 = v42;
            if ( (v43 & 0x10) != 0 )
            {
              v49 = -1073741101;
            }
            else if ( (v43 & 0x20) != 0 )
            {
              v39 = ++*(_DWORD *)(v40 + 24);
              v114 = *(_QWORD *)(v40 + 424);
              v45 = *(unsigned __int8 *)(v40 + 225);
              v115 = v39;
              *(_DWORD *)(v40 + 4 * v45 + 232) = 512;
              *(_BYTE *)(v40 + 225) = (*(_BYTE *)(v40 + 225) + 1) & 7;
              v46 = 0LL;
              v47 = FxPowerIdleMachine::m_StateTable[*(int *)(v40 + 228) - 1].TargetStatesCount;
              if ( v47 )
              {
                v48 = FxPowerIdleMachine::m_StateTable[*(int *)(v40 + 228) - 1].TargetStates;
                while ( v48[v46].PowerIdleEvent != PowerIdleEventIoIncrement )
                {
                  v46 = (unsigned int)(v46 + 1);
                  if ( (unsigned int)v46 >= v47 )
                    goto LABEL_69;
                }
                v102 = v48[v46].PowerIdleState;
                if ( v102 != 35 )
                {
                  v103 = v114;
                  do
                  {
                    v104 = *(_QWORD *)(v103 + 96);
                    v105 = (const void *)(v104 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( !*(_WORD *)(v104 + 10) )
                      v105 = 0LL;
                    WPP_IFR_SF_qqLL(
                      *(_FX_DRIVER_GLOBALS **)(v103 + 16),
                      4u,
                      0x15u,
                      0x11u,
                      WPP_PowerIdleStateMachine_cpp_Traceguids,
                      v105,
                      *(const void **)(v104 + 144),
                      v102,
                      *(_DWORD *)(v40 + 228));
                    *(_DWORD *)(v40 + 4LL * *(unsigned __int8 *)(v40 + 226) + 264) = v102;
                    v106 = *(_BYTE *)(v40 + 226) + 1;
                    *(_DWORD *)(v40 + 228) = v102;
                    *(_BYTE *)(v40 + 226) = v106 & 7;
                    v107 = FxPowerIdleMachine::m_StateTable[(int)v102 - 1].StateFunc;
                    if ( !v107 )
                      break;
                    v102 = v107((FxPowerIdleMachine *)v40);
                  }
                  while ( v102 != 35 );
                  v5 = this;
                  v41 = (unsigned __int64 *)(v40 + 16);
                  v39 = v115;
                  v44 = v113;
                }
              }
LABEL_69:
              v49 = 259;
              if ( KeReadStateEvent((PRKEVENT)(v40 + 192)) )
                v49 = 0;
            }
            else
            {
              v49 = -1073741101;
            }
            KeReleaseSpinLock(v41, v44);
            v50 = *(FxTagTracker **)(v40 + 32);
            if ( v50 && (!v49 || v49 == 259) )
              FxTagTracker::UpdateTagHistory(v50, 0LL, 0, 0LL, TagAddRef, v39);
            if ( v49 >= 0 )
              v5->m_PowerReferenced = 1;
          }
          pRequest = 0LL;
        }
        p_m_OwnerListEntry2 = &v15->m_OwnerListEntry2;
        ++v5->m_DriverIoCount;
        v52 = v5->m_DriverOwned.Blink;
        if ( v52->Flink != &v5->m_DriverOwned )
          goto LABEL_209;
        p_m_OwnerListEntry2->Flink = &v5->m_DriverOwned;
        v15->m_OwnerListEntry2.Blink = v52;
        v52->Flink = p_m_OwnerListEntry2;
        v5->m_DriverOwned.Blink = p_m_OwnerListEntry2;
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v108 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v108, flags, (unsigned __int8)v9);
          p_m_Lock = &v5->m_NPLock.m_Lock;
        }
        else
        {
          p_m_Lock = &v5->m_NPLock.m_Lock;
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
        }
        FxIoQueue::DispatchRequestToDriver(v5, v15);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v109 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v109, &flags, v54);
        }
        else
        {
          flags = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
        }
        m_Globals = v116;
        v9 = WPP_FxIoQueue_cpp_Traceguids;
        goto LABEL_6;
      }
      v37 = pRequest;
      if ( !pRequest )
        break;
      v65 = pRequest->m_Globals;
      v66 = &v5->m_Queue;
      v67 = flags;
      v112[0] = flags;
      if ( !v65->FxVerifierOn || (v75 = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v65, &v5->m_Queue), v75 >= 0) )
      {
        v68 = _InterlockedExchangeAdd(&v37->m_Refcnt, 1u);
        v69 = pRequest;
        v70 = v68 + 1;
        if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
        {
          v99 = pRequest[-1].m_OwnerListEntry2.Blink;
          if ( v99 )
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)v99,
              (void *)0x75657551,
              1900,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              v70);
        }
        m_Irp = v69->m_Irp.m_Irp;
        v72 = &v69->120;
        v69->m_IrpQueue = v66;
        Irp.m_Irp = m_Irp;
        if ( v69 == (FxRequest *)-120LL )
        {
          m_Irp->Tail.Overlay.DriverContext[3] = v66;
        }
        else
        {
          m_Irp->Tail.Overlay.DriverContext[3] = v72;
          v69->m_CsqContext.Irp = m_Irp;
          v69->m_CsqContext.Csq = (_IO_CSQ *)v66;
          v72->m_CsqContext.Type = 1;
        }
        v73 = v5->m_Queue.m_Queue.Blink;
        v74 = &m_Irp->Tail.Overlay.ListEntry;
        if ( (FxIrpQueue *)v73->Flink != v66 )
          goto LABEL_209;
        v74->Flink = &v66->m_Queue;
        m_Irp->Tail.Overlay.ListEntry.Blink = v73;
        v73->Flink = v74;
        v5->m_Queue.m_Queue.Blink = v74;
        ++v5->m_Queue.m_RequestCount;
        m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64(
          (volatile __int64 *)&m_Irp->CancelRoutine,
          (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
        {
          FxIrpQueue::RemoveIrpFromListEntry(&v5->m_Queue, &Irp);
          if ( v101 )
            *(_QWORD *)(v101 + 8) = 0LL;
          *(_QWORD *)(v100 + 144) = 0LL;
          v69->m_IrpQueue = 0LL;
          v37 = pRequest;
          v75 = -1073741536;
          pRequest->Release(
            pRequest,
            (void *)1969583441,
            1916,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        }
        else
        {
          v37 = pRequest;
          v75 = 0;
        }
        v67 = flags;
      }
      if ( v75 < 0 )
      {
        FxNonPagedObject::Unlock(v5, v67);
        v37->m_Irp.m_Irp->IoStatus.Information = 0LL;
        FxRequest::Complete(v37, v75);
        v37->Release(v37, (void *)1886220099, 2636, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock(v5, v112);
      }
      else
      {
        v37->m_IoQueue = v5;
        if ( v5->m_Queue.m_RequestCount == 1 || v5->m_ForceTransitionFromEmptyWhenAddingNewRequest )
        {
          v36 = v5->m_IsDevicePowerPolicyOwner == 0;
          v5->m_TransitionFromEmpty = 1;
          v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( !v36
            && v5->m_PowerManaged
            && !v5->m_PowerReferenced
            && FxPowerIdleMachine::PowerReferenceWorker(
                 *(FxPowerIdleMachine **)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL),
                 0,
                 FxPowerReferenceDefault,
                 0LL,
                 0,
                 0LL) >= 0 )
          {
            v5->m_PowerReferenced = 1;
          }
        }
      }
      m_Globals = v116;
      p_m_Cancelled = &v5->m_Cancelled;
      pRequest = 0LL;
      v9 = WPP_FxIoQueue_cpp_Traceguids;
    }
    while ( v75 < 0 );
    if ( v5->m_ReadyNotify.Method && v5->m_TransitionFromEmpty )
    {
      FxIoQueue::ProcessReadyNotify(v5, &flags);
      v9 = WPP_FxIoQueue_cpp_Traceguids;
      continue;
    }
    break;
  }
$Done_3:
  --v5->m_Dispatching;
  if ( SLOBYTE(v5->m_ObjectFlags) >= 0 || (v110 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) == 0LL )
  {
    v16 = flags;
    goto LABEL_27;
  }
  FxVerifierLock::Unlock(v110, flags, (unsigned __int8)v9);
  return 1;
}
