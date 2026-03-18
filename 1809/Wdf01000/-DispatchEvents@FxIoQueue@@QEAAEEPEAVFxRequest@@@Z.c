/*
 * XREFs of ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007060 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0007A90 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 *     ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007F40 (-EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008760 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0009B60 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     imp_WdfRequestForwardToIoQueue @ 0x1C0009FD0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z @ 0x1C000B340 (-_DeferredDispatchThreadThunk@FxIoQueue@@KAXPEAX@Z.c)
 *     ?StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C00101EC (-StopProcessingForPower@FxIoQueue@@QEAAXW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?StartPowerTransitionOff@FxIoQueue@@QEAAXXZ @ 0x1C00102EC (-StartPowerTransitionOff@FxIoQueue@@QEAAXXZ.c)
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0010490 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0011ED0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0013154 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016430 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016744 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfIoQueueStart @ 0x1C0016950 (imp_WdfIoQueueStart.c)
 *     ?DispatchInternalEvents@FxIoQueue@@QEAAXE@Z @ 0x1C00509AC (-DispatchInternalEvents@FxIoQueue@@QEAAXE@Z.c)
 *     ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0077764 (-ResumeProcessingForPower@FxPkgIo@@QEAAJXZ.c)
 *     ?DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ @ 0x1C007846C (-DeferredDispatchRequestsFromDpc@FxIoQueue@@QEAAXXZ.c)
 *     ?Dispose@FxIoQueue@@UEAAEXZ @ 0x1C0078500 (-Dispose@FxIoQueue@@UEAAEXZ.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C00795C4 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00797A8 (-ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0079948 (-Requeue@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qcq @ 0x1C0004D94 (WPP_IFR_SF_qcq.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0009830 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0011A10 (WPP_IFR_SF_qqLL.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z @ 0x1C0011C80 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEBD@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0012E34 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0013650 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z @ 0x1C0014584 (-InsertNewRequestLocked@FxIoQueue@@AEAAJPEAPEAVFxRequest@@E@Z.c)
 *     ?ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z @ 0x1C00184CC (-ProcessReadyNotify@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0018594 (-ProcessPurgeComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0018CF8 (-ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0018F44 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C0031874 (WPP_IFR_SF_ql.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C004B660 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0057BC8 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C00582F4 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DC14 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0078F1C (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C22CC (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
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
  FxDeviceBase *m_DeviceBase; // rax
  unsigned int v38; // r15d
  __int64 v39; // rsi
  unsigned __int64 *v40; // r12
  KIRQL v41; // al
  char v42; // cl
  KIRQL v43; // r13
  __int64 v44; // rax
  __int64 v45; // rax
  unsigned int v46; // edx
  const FxPowerIdleTargetState *v47; // r8
  int v48; // r14d
  FxTagTracker *v49; // rcx
  _LIST_ENTRY *p_m_OwnerListEntry2; // rcx
  _LIST_ENTRY *v51; // rdx
  unsigned __int64 *p_m_Lock; // rsi
  unsigned __int8 v53; // r8
  FxRequest *v54; // rdi
  const void *v55; // rax
  FxIrpQueue *p_m_Queue; // r10
  _IRP *p_Blink; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v60; // r8
  _LIST_ENTRY *Blink; // rdx
  _QWORD *v62; // rdi
  __int64 v63; // rax
  void (__fastcall *v64)(FxRequest *, __int64, __int64, const char *); // rax
  _FX_DRIVER_GLOBALS *v65; // rdx
  FxIrpQueue *v66; // rsi
  unsigned __int8 v67; // r14
  signed __int32 v68; // edx
  FxRequest *v69; // rdi
  unsigned int v70; // edx
  _IRP *m_Irp; // r9
  $A3173470F8A533D5F67D6DF0520578B2 *v72; // r10
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
  const void *v95; // rcx
  int v96; // eax
  unsigned __int8 v97; // dl
  _LIST_ENTRY *v98; // rcx
  __int64 v99; // r9
  __int64 v100; // r10
  unsigned int v101; // r14d
  __int64 v102; // r12
  __int64 v103; // rdx
  const void *v104; // rcx
  char v105; // al
  FxPowerIdleStates (__fastcall *v106)(FxPowerIdleMachine *); // rax
  FxVerifierLock *v107; // rcx
  FxVerifierLock *v108; // rcx
  FxVerifierLock *v109; // rcx
  const _GUID *traceGuid; // [rsp+28h] [rbp-59h]
  unsigned __int8 v111[8]; // [rsp+58h] [rbp-29h] BYREF
  KIRQL v112; // [rsp+60h] [rbp-21h]
  __int64 v113; // [rsp+68h] [rbp-19h]
  unsigned int v114; // [rsp+70h] [rbp-11h]
  _FX_DRIVER_GLOBALS *v115; // [rsp+78h] [rbp-9h]
  FxIrp Irp; // [rsp+80h] [rbp-1h] BYREF
  _QWORD *v117; // [rsp+88h] [rbp+7h]
  unsigned __int8 flags; // [rsp+F0h] [rbp+6Fh] BYREF
  FxRequest *pRequest; // [rsp+F8h] [rbp+77h] BYREF
  unsigned __int8 v121; // [rsp+100h] [rbp+7Fh] BYREF

  pRequest = NewRequest;
  flags = PreviousIrql;
  m_Deleted = this->m_Deleted;
  v5 = this;
  m_Globals = this->m_Globals;
  v115 = m_Globals;
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
        FxVerifierLock::Lock(v82, &v121, v31);
        v34 = v121;
      }
      else
      {
        v34 = KeAcquireSpinLockRaiseToDpc(&m_SystemWorkItem->m_NPLock.m_Lock);
        v121 = v34;
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
            FxVerifierLock::Unlock(v83, v121, v35);
          }
          else
          {
            KeReleaseSpinLock(&m_SystemWorkItem->m_NPLock.m_Lock, v121);
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
          v9 = WPP_FxIoQueue_cpp_Traceguids;
          goto LABEL_6;
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
          v18 = *(_QWORD *)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
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
              FxVerifierDbgBreakPoint(v21);
            }
          }
          v23 = *(unsigned __int8 *)(v18 + 225);
          v24 = --*(_DWORD *)(v18 + 24);
          v25 = *(_QWORD *)(v18 + 424);
          *(_DWORD *)(v18 + 4 * v23 + 232) = 256;
          LOBYTE(v23) = *(_BYTE *)(v18 + 225) + 1;
          LODWORD(v113) = v24;
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
            v24 = v113;
          }
LABEL_37:
          KeReleaseSpinLock(v20, v22);
          v29 = *(FxTagTracker **)(v18 + 32);
          if ( v29 )
            FxTagTracker::UpdateTagHistory(v29, 0LL, 0, 0LL, TagRelease, v24);
          m_Globals = v115;
          v5->m_PowerReferenced = 0;
          goto LABEL_40;
        }
        m_PowerState = v5->m_PowerState;
        if ( (unsigned int)(m_PowerState - 1) <= 1 )
          break;
        if ( m_Globals->FxVerboseOn )
        {
          v95 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v5->m_ObjectSize )
            v95 = 0LL;
          WPP_IFR_SF_ql(m_Globals, 5u, 0xDu, 0x30u, WPP_FxIoQueue_cpp_Traceguids, v95, m_PowerState);
        }
        if ( pRequest )
        {
          v96 = FxIoQueue::InsertNewRequestLocked(v5, &pRequest, flags);
          p_m_Cancelled = &v5->m_Cancelled;
          v9 = WPP_FxIoQueue_cpp_Traceguids;
          if ( v96 < 0 )
            continue;
        }
        if ( !FxIoQueue::ProcessPowerEvents(v5, &flags) )
          goto $Done_3;
        goto LABEL_100;
      }
      if ( v5->m_Disposing && !v11 && v5->m_Dispatching == 1 )
      {
        v97 = flags;
        v5->m_Deleted = 1;
        FxNonPagedObject::Unlock(v5, v97);
        KeSetEvent(&v5->m_FinishDisposing.m_Event, 0, 0);
        return 1;
      }
      if ( v5->m_PowerState == FxIoQueuePowerOff )
        goto LABEL_84;
      m_QueueState = v5->m_QueueState;
      if ( (m_QueueState & 2) == 0 )
      {
        v55 = 0LL;
        if ( v5->m_ObjectSize )
          v55 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
        WPP_IFR_SF_qL(m_Globals, 3u, 0xDu, 0x31u, WPP_FxIoQueue_cpp_Traceguids, v55, m_QueueState);
        goto LABEL_84;
      }
      m_Type = v5->m_Type;
      if ( m_Type != WdfIoQueueDispatchManual )
      {
        if ( m_Type == WdfIoQueueDispatchSequential && v5->m_DriverIoCount > 0
          || v5->m_Type == WdfIoQueueDispatchParallel && v5->m_DriverIoCount >= v5->m_MaxParallelQueuePresentedRequests )
        {
LABEL_84:
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
          v60 = p_Blink->Tail.Overlay.ListEntry.Flink;
          if ( (void **)v60->Blink != &p_Blink->Tail.CompletionKey + 6
            || (Blink = p_Blink->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
          {
LABEL_209:
            __fastfail(3u);
          }
          Blink->Flink = v60;
          v60->Blink = Blink;
          p_Blink->Tail.Overlay.ListEntry.Blink = &p_Blink->Tail.Overlay.ListEntry;
          p_ListEntry->Flink = p_ListEntry;
          --p_m_Queue->m_RequestCount;
          v62 = p_Blink->Tail.Overlay.DriverContext[3];
          if ( *(_DWORD *)v62 == 1 )
            v62[1] = 0LL;
          p_Blink->Tail.Overlay.DriverContext[3] = 0LL;
          v63 = *(v62 - 15);
          v117 = v62;
          v15 = (FxRequest *)(v62 - 15);
          v64 = *(void (__fastcall **)(FxRequest *, __int64, __int64, const char *))(v63 + 16);
          v15->m_IrpQueue = 0LL;
          v64(v15, 1969583441LL, 2062LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
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
            v38 = 0;
            v114 = 0;
            v39 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL);
            v40 = (unsigned __int64 *)(v39 + 16);
            v41 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v39 + 16));
            v42 = *(_BYTE *)(v39 + 224);
            v43 = v41;
            v112 = v41;
            if ( (v42 & 0x10) != 0 )
            {
              v48 = -1073741101;
            }
            else if ( (v42 & 0x20) != 0 )
            {
              v38 = ++*(_DWORD *)(v39 + 24);
              v113 = *(_QWORD *)(v39 + 424);
              v44 = *(unsigned __int8 *)(v39 + 225);
              v114 = v38;
              *(_DWORD *)(v39 + 4 * v44 + 232) = 512;
              *(_BYTE *)(v39 + 225) = (*(_BYTE *)(v39 + 225) + 1) & 7;
              v45 = 0LL;
              v46 = FxPowerIdleMachine::m_StateTable[*(int *)(v39 + 228) - 1].TargetStatesCount;
              if ( v46 )
              {
                v47 = FxPowerIdleMachine::m_StateTable[*(int *)(v39 + 228) - 1].TargetStates;
                while ( v47[v45].PowerIdleEvent != PowerIdleEventIoIncrement )
                {
                  v45 = (unsigned int)(v45 + 1);
                  if ( (unsigned int)v45 >= v46 )
                    goto LABEL_65;
                }
                v101 = v47[v45].PowerIdleState;
                if ( v101 != 35 )
                {
                  v102 = v113;
                  do
                  {
                    v103 = *(_QWORD *)(v102 + 96);
                    v104 = (const void *)(v103 ^ 0xFFFFFFFFFFFFFFF8uLL);
                    if ( !*(_WORD *)(v103 + 10) )
                      v104 = 0LL;
                    WPP_IFR_SF_qqLL(
                      *(_FX_DRIVER_GLOBALS **)(v102 + 16),
                      4u,
                      0x15u,
                      0x11u,
                      WPP_PowerIdleStateMachine_cpp_Traceguids,
                      v104,
                      *(const void **)(v103 + 144),
                      v101,
                      *(_DWORD *)(v39 + 228));
                    *(_DWORD *)(v39 + 4LL * *(unsigned __int8 *)(v39 + 226) + 264) = v101;
                    v105 = *(_BYTE *)(v39 + 226) + 1;
                    *(_DWORD *)(v39 + 228) = v101;
                    *(_BYTE *)(v39 + 226) = v105 & 7;
                    v106 = FxPowerIdleMachine::m_StateTable[(int)v101 - 1].StateFunc;
                    if ( !v106 )
                      break;
                    v101 = v106((FxPowerIdleMachine *)v39);
                  }
                  while ( v101 != 35 );
                  v5 = this;
                  v40 = (unsigned __int64 *)(v39 + 16);
                  v38 = v114;
                  v43 = v112;
                }
              }
LABEL_65:
              v48 = 259;
              if ( KeReadStateEvent((PRKEVENT)(v39 + 192)) )
                v48 = 0;
            }
            else
            {
              v48 = -1073741101;
            }
            KeReleaseSpinLock(v40, v43);
            v49 = *(FxTagTracker **)(v39 + 32);
            if ( v49 && (!v48 || v48 == 259) )
              FxTagTracker::UpdateTagHistory(v49, 0LL, 0, 0LL, TagAddRef, v38);
            if ( v48 >= 0 )
              v5->m_PowerReferenced = 1;
          }
          pRequest = 0LL;
        }
        p_m_OwnerListEntry2 = &v15->m_OwnerListEntry2;
        ++v5->m_DriverIoCount;
        v51 = v5->m_DriverOwned.Blink;
        if ( v51->Flink != &v5->m_DriverOwned )
          goto LABEL_209;
        p_m_OwnerListEntry2->Flink = &v5->m_DriverOwned;
        v15->m_OwnerListEntry2.Blink = v51;
        v51->Flink = p_m_OwnerListEntry2;
        v5->m_DriverOwned.Blink = p_m_OwnerListEntry2;
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v107 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v107, flags, (unsigned __int8)v9);
          p_m_Lock = &v5->m_NPLock.m_Lock;
        }
        else
        {
          p_m_Lock = &v5->m_NPLock.m_Lock;
          KeReleaseSpinLock(&v5->m_NPLock.m_Lock, flags);
        }
        FxIoQueue::DispatchRequestToDriver(v5, v15);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0
          && (v108 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v108, &flags, v53);
        }
        else
        {
          flags = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
        }
        m_Globals = v115;
        v9 = WPP_FxIoQueue_cpp_Traceguids;
        goto LABEL_6;
      }
      v54 = pRequest;
      if ( !pRequest )
        break;
      v65 = pRequest->m_Globals;
      v66 = &v5->m_Queue;
      v67 = flags;
      v111[0] = flags;
      if ( !v65->FxVerifierOn || (v75 = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, v65, &v5->m_Queue), v75 >= 0) )
      {
        v68 = _InterlockedExchangeAdd(&v54->m_Refcnt, 1u);
        v69 = pRequest;
        v70 = v68 + 1;
        if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
        {
          v98 = pRequest[-1].m_OwnerListEntry2.Blink;
          if ( v98 )
            FxTagTracker::UpdateTagHistory(
              (FxTagTracker *)v98,
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
          if ( v100 )
            *(_QWORD *)(v100 + 8) = 0LL;
          *(_QWORD *)(v99 + 144) = 0LL;
          v69->m_IrpQueue = 0LL;
          v54 = pRequest;
          v75 = -1073741536;
          pRequest->Release(
            pRequest,
            (void *)1969583441,
            1916,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        }
        else
        {
          v54 = pRequest;
          v75 = 0;
        }
        v67 = flags;
      }
      if ( v75 < 0 )
      {
        FxNonPagedObject::Unlock(v5, v67);
        v54->m_Irp.m_Irp->IoStatus.Information = 0LL;
        FxRequest::Complete(v54, v75);
        v54->Release(v54, (void *)1886220099, 2636, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock(v5, v111);
      }
      else
      {
        v54->m_IoQueue = v5;
        if ( v5->m_Queue.m_RequestCount == 1 || v5->m_ForceTransitionFromEmptyWhenAddingNewRequest )
        {
          v36 = v5->m_IsDevicePowerPolicyOwner == 0;
          v5->m_TransitionFromEmpty = 1;
          v5->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
          if ( !v36
            && v5->m_PowerManaged
            && !v5->m_PowerReferenced
            && FxPowerIdleMachine::PowerReferenceWorker(
                 *(FxPowerIdleMachine **)(*(_QWORD *)&v5->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 880LL),
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
      m_Globals = v115;
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
  if ( SLOBYTE(v5->m_ObjectFlags) >= 0 || (v109 = *(FxVerifierLock **)&v5[-1].m_PowerIdle.m_DbgFlagIsInitialized) == 0LL )
  {
    v16 = flags;
    goto LABEL_27;
  }
  FxVerifierLock::Unlock(v109, flags, (unsigned __int8)v9);
  return 1;
}
