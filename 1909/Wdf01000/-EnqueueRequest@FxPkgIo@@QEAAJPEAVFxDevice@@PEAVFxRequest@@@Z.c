/*
 * XREFs of ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C0007A60
 * Callers:
 *     imp_WdfDeviceEnqueueRequest @ 0x1C000A200 (imp_WdfDeviceEnqueueRequest.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012020 (WPP_IFR_SF_qqLL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0014554 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00145C8 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0014888 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00190E8 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C00787C4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C0079690 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C007A5E4 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C6300 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1C00C702C (-Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00C7070 (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 */

int __fastcall FxPkgIo::EnqueueRequest(FxPkgIo *this, unsigned __int64 Device, unsigned __int64 pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v4; // r15d
  FxRequest *v5; // rdi
  FxIoQueue *m_InternalContext; // rbx
  unsigned int v9; // edx
  unsigned int v10; // edx
  unsigned __int8 m_CompletionState; // al
  unsigned int m_QueueState; // r10d
  bool v13; // r13
  _FX_DRIVER_GLOBALS *v14; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned int v16; // edx
  _IRP *m_Irp; // r9
  $41EACD23695CB34D39C03C31B435114F *v18; // r10
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int inserted; // ebp
  FxDeviceBase *m_DeviceBase; // rax
  __int64 v23; // rsi
  unsigned __int64 *v24; // r14
  KIRQL v25; // al
  char v26; // cl
  KIRQL v27; // r12
  __int64 v28; // rax
  __int64 v29; // r14
  __int64 v30; // rax
  unsigned int TargetStatesCount; // edx
  const FxPowerIdleTargetState *TargetStates; // r8
  int v33; // ebp
  FxTagTracker *v34; // rcx
  int v35; // esi
  int result; // eax
  unsigned int _a3; // ebp
  __int64 v38; // rcx
  const void *_a2; // rdx
  const void *_a1; // rcx
  char v41; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  const void *v43; // rcx
  unsigned __int16 v44; // ax
  unsigned __int64 v45; // rcx
  const void *v46; // rbp
  unsigned __int16 v47; // ax
  unsigned __int64 v48; // rbp
  const void *v49; // rcx
  _FX_DRIVER_GLOBALS *v50; // rdx
  FxPkgIo *v51; // rcx
  FxRequestContext *m_RequestContext; // rax
  FxTagTracker *Blink; // rcx
  FxTagTracker *v54; // rcx
  const void *v55; // rcx
  FxVerifierLock *v56; // rcx
  const void *v57; // r8
  const char *v58; // rdx
  const void *v59; // rcx
  FxTagTracker *v60; // rcx
  __int64 v61; // r9
  __int64 v62; // r10
  FxRequest_vtbl *v63; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-88h]
  __int16 origVerifierFlags[2]; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v66; // [rsp+54h] [rbp-54h]
  _FX_DRIVER_GLOBALS *v67; // [rsp+58h] [rbp-50h]
  FxIrp Irp; // [rsp+60h] [rbp-48h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int64 v70; // [rsp+C0h] [rbp+18h]
  KIRQL v71; // [rsp+C8h] [rbp+20h]

  v70 = pRequest;
  m_Globals = this->m_Globals;
  v4 = 0;
  v67 = m_Globals;
  v5 = (FxRequest *)pRequest;
  origVerifierFlags[0] = 0;
  if ( m_Globals->FxVerboseOn )
  {
    v43 = (const void *)(pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(pRequest + 10) )
      v43 = 0LL;
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x12u, WPP_FxPkgIo_cpp_Traceguids, v43);
  }
  if ( !m_Globals->FxVerifierOn
    || (result = FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(this, m_Globals, v5, origVerifierFlags), result >= 0) )
  {
    m_InternalContext = (FxIoQueue *)v5->m_InternalContext;
    v5->m_InternalContext = 0LL;
    if ( m_InternalContext
      || (m_InternalContext = this->m_DispatchTable[v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction]) != 0LL )
    {
      if ( !this->m_Filter
        || m_InternalContext != this->m_DefaultQueue
        || FxIoQueue::IsIoEventHandlerRegistered(
             m_InternalContext,
             (_WDF_REQUEST_TYPE)v5->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction) )
      {
        v9 = _InterlockedIncrement(&m_InternalContext->m_Refcnt);
        if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0 )
        {
          Blink = (FxTagTracker *)m_InternalContext[-1].m_PowerIdle.m_Event.Header.WaitListHead.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(Blink, 0LL, 0, 0LL, TagAddRef, v9);
        }
        v10 = _InterlockedIncrement(&v5->m_Refcnt);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0 )
        {
          v54 = (FxTagTracker *)v5[-1].m_OwnerListEntry2.Blink;
          if ( v54 )
            FxTagTracker::UpdateTagHistory(
              v54,
              (void *)0x74617453,
              690,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
              TagAddRef,
              v10);
        }
        if ( v5->m_Completed )
        {
          v55 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v5->m_ObjectSize )
            v55 = 0LL;
          WPP_IFR_SF_q(v5->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v55);
          FxVerifierDbgBreakPoint(v5->m_Globals);
        }
        else
        {
          m_CompletionState = v5->m_CompletionState;
          v5->m_CompletionState = 0;
          if ( m_CompletionState )
            v5->Release(v5, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        }
        if ( SLOBYTE(m_InternalContext->m_ObjectFlags) < 0
          && (v56 = *(FxVerifierLock **)&m_InternalContext[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v56, &PreviousIrql, pRequest);
        }
        else
        {
          PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_InternalContext->m_NPLock.m_Lock);
        }
        m_QueueState = m_InternalContext->m_QueueState;
        if ( (m_QueueState & 1) != 0 )
        {
          v13 = v5->m_IrpAllocation == 0;
          v14 = v5->m_Globals;
          p_m_Queue = &m_InternalContext->m_Queue;
          if ( !v14->FxVerifierOn
            || (inserted = FxRequest::Vf_VerifyInsertIrpQueue(v5, v14, &m_InternalContext->m_Queue), inserted >= 0) )
          {
            v16 = _InterlockedIncrement(&v5->m_Refcnt);
            if ( SLOBYTE(v5->m_ObjectFlags) < 0 )
            {
              v60 = (FxTagTracker *)v5[-1].m_OwnerListEntry2.Blink;
              if ( v60 )
                FxTagTracker::UpdateTagHistory(
                  v60,
                  (void *)0x75657551,
                  1900,
                  "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                  TagAddRef,
                  v16);
            }
            m_Irp = v5->m_Irp.m_Irp;
            v18 = &v5->120;
            v5->m_IrpQueue = p_m_Queue;
            Irp.m_Irp = m_Irp;
            if ( v5 == (FxRequest *)-120LL )
            {
              m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
            }
            else
            {
              m_Irp->Tail.Overlay.DriverContext[3] = v18;
              v5->m_CsqContext.Irp = m_Irp;
              v5->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
              v18->m_CsqContext.Type = 1;
            }
            v19 = m_InternalContext->m_Queue.m_Queue.Blink;
            p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
            if ( (FxIrpQueue *)v19->Flink != p_m_Queue )
              __fastfail(3u);
            p_ListEntry->Flink = &p_m_Queue->m_Queue;
            m_Irp->Tail.Overlay.ListEntry.Blink = v19;
            v19->Flink = p_ListEntry;
            m_InternalContext->m_Queue.m_Queue.Blink = p_ListEntry;
            ++m_InternalContext->m_Queue.m_RequestCount;
            m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
            _InterlockedExchange64(
              (volatile __int64 *)&m_Irp->CancelRoutine,
              (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
            if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
            {
              FxIrpQueue::RemoveIrpFromListEntry(&m_InternalContext->m_Queue, &Irp);
              if ( v62 )
                *(_QWORD *)(v62 + 8) = 0LL;
              *(_QWORD *)(v61 + 144) = 0LL;
              v63 = v5->__vftable;
              v5->m_IrpQueue = 0LL;
              inserted = -1073741536;
              v63->Release(v5, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
            }
            else
            {
              inserted = 0;
            }
          }
          v5->m_IoQueue = m_InternalContext;
          if ( inserted < 0 )
          {
            FxObject::AddRef(
              v5,
              (void *)0x75657551,
              2459,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxIoQueue::CancelForQueue(m_InternalContext, v5, PreviousIrql);
            FxNonPagedObject::Lock(m_InternalContext, &PreviousIrql);
          }
          else if ( m_InternalContext->m_Queue.m_RequestCount == 1
                 || m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest )
          {
            m_InternalContext->m_TransitionFromEmpty = 1;
            m_InternalContext->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
            if ( m_InternalContext->m_IsDevicePowerPolicyOwner )
            {
              if ( m_InternalContext->m_PowerManaged && !m_InternalContext->m_PowerReferenced )
              {
                m_DeviceBase = m_InternalContext->m_DeviceBase;
                v66 = 0;
                v23 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
                v24 = (unsigned __int64 *)(v23 + 16);
                v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v23 + 16));
                v26 = *(_BYTE *)(v23 + 224);
                v27 = v25;
                v71 = v25;
                if ( (v26 & 0x10) != 0 )
                {
                  v33 = -1073741101;
                }
                else if ( (v26 & 0x20) != 0 )
                {
                  v28 = *(unsigned __int8 *)(v23 + 225);
                  v4 = ++*(_DWORD *)(v23 + 24);
                  v29 = *(_QWORD *)(v23 + 424);
                  *(_DWORD *)(v23 + 4 * v28 + 232) = 512;
                  LOBYTE(v28) = *(_BYTE *)(v23 + 225) + 1;
                  v66 = v4;
                  *(_BYTE *)(v23 + 225) = v28 & 7;
                  v30 = 0LL;
                  TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(int *)(v23 + 228) - 1].TargetStatesCount;
                  if ( TargetStatesCount )
                  {
                    TargetStates = FxPowerIdleMachine::m_StateTable[*(int *)(v23 + 228) - 1].TargetStates;
                    while ( TargetStates[v30].PowerIdleEvent != PowerIdleEventIoIncrement )
                    {
                      v30 = (unsigned int)(v30 + 1);
                      if ( (unsigned int)v30 >= TargetStatesCount )
                        goto LABEL_31;
                    }
                    for ( _a3 = TargetStates[v30].PowerIdleState; _a3 != 35; _a3 = StateFunc((FxPowerIdleMachine *)v23) )
                    {
                      v38 = *(_QWORD *)(v29 + 96);
                      _a2 = *(const void **)(v38 + 144);
                      if ( *(_WORD *)(v38 + 10) )
                        _a1 = (const void *)(v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
                      else
                        _a1 = 0LL;
                      WPP_IFR_SF_qqLL(
                        *(_FX_DRIVER_GLOBALS **)(v29 + 16),
                        4u,
                        0x15u,
                        0x11u,
                        WPP_PowerIdleStateMachine_cpp_Traceguids,
                        _a1,
                        _a2,
                        _a3,
                        *(_DWORD *)(v23 + 228));
                      *(_DWORD *)(v23 + 4LL * *(unsigned __int8 *)(v23 + 226) + 264) = _a3;
                      v41 = *(_BYTE *)(v23 + 226) + 1;
                      *(_DWORD *)(v23 + 228) = _a3;
                      *(_BYTE *)(v23 + 226) = v41 & 7;
                      StateFunc = FxPowerIdleMachine::m_StateTable[(int)_a3 - 1].StateFunc;
                      if ( !StateFunc )
                        break;
                    }
                  }
LABEL_31:
                  if ( KeReadStateEvent((PRKEVENT)(v23 + 192)) )
                    v33 = 0;
                  else
                    v33 = 259;
                  v5 = (FxRequest *)v70;
                  v24 = (unsigned __int64 *)(v23 + 16);
                  v27 = v71;
                }
                else
                {
                  v33 = -1073741101;
                }
                KeReleaseSpinLock(v24, v27);
                v34 = *(FxTagTracker **)(v23 + 32);
                if ( v34 && (!v33 || v33 == 259) )
                  FxTagTracker::UpdateTagHistory(v34, 0LL, 0, 0LL, TagAddRef, v4);
                m_Globals = v67;
                if ( v33 >= 0 )
                  m_InternalContext->m_PowerReferenced = 1;
              }
            }
          }
          if ( v13 || !m_InternalContext->m_Dispatching )
            FxIoQueue::DispatchEvents(m_InternalContext, PreviousIrql, 0LL);
          else
            FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql);
          v35 = 0;
        }
        else
        {
          v57 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
          v58 = "power stopping (Drain) in progress,";
          v35 = -1071644156;
          if ( !v5->m_ObjectSize )
            v57 = 0LL;
          if ( (m_QueueState & 0x10000) == 0 )
            v58 = a5;
          v59 = (const void *)((unsigned __int64)m_InternalContext ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !m_InternalContext->m_ObjectSize )
            v59 = 0LL;
          WPP_IFR_SF_qLsqd(
            m_InternalContext->m_Globals,
            3u,
            (unsigned int)v57,
            0x2Bu,
            traceGuid,
            v59,
            m_QueueState,
            v58,
            v57,
            -1071644156);
          FxNonPagedObject::Unlock(m_InternalContext, PreviousIrql);
        }
        m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
        if ( v35 >= 0 )
          return v35;
        FxRequest::SetCompletionState(v5, FxRequestCompletionStateIoPkg);
        v5->Release(v5, (void *)1952543827, 722, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
LABEL_111:
        if ( m_Globals->FxVerifierOn )
          FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(v51, v50, v5, origVerifierFlags[0]);
        return v35;
      }
    }
    else if ( !this->m_Filter )
    {
      v35 = -1073741808;
      v44 = *(_WORD *)(Device + 10);
      v45 = (unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v5->m_ObjectSize )
        v45 = 0LL;
      v46 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v44 )
        v46 = 0LL;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x13u, WPP_FxPkgIo_cpp_Traceguids, v46, v45, -1073741808);
LABEL_69:
      FxVerifierDbgBreakPoint(m_Globals);
      goto LABEL_111;
    }
    m_RequestContext = v5->m_RequestContext;
    if ( !m_RequestContext || !m_RequestContext->m_RequestType )
    {
      FxRequest::PreProcessSendAndForget(v5);
      IofCallDriver(*(PDEVICE_OBJECT *)(Device + 152), v5->m_Irp.m_Irp);
      FxRequest::PostProcessSendAndForget(v5);
      return 0;
    }
    v35 = -1073741808;
    v47 = *(_WORD *)(Device + 10);
    v48 = Device ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v47 )
      v48 = 0LL;
    v49 = (const void *)((unsigned __int64)v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v5->m_ObjectSize )
      v49 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x14u, WPP_FxPkgIo_cpp_Traceguids, v49, v48, -1073741808);
    goto LABEL_69;
  }
  return result;
}
