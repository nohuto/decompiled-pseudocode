/*
 * XREFs of ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005AD0
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C00096B0 (imp_WdfRequestForwardToIoQueue.c)
 *     ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0078FDC (-ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0079B00 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1C0012020 (WPP_IFR_SF_qqLL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C00190E8 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C00787C4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qLsqd @ 0x1C007A5E4 (WPP_IFR_SF_qLsqd.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C6300 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueRequestFromForward(FxIoQueue *this, FxRequest *pRequest, unsigned __int8 a3)
{
  FxIoQueue *v4; // rbx
  unsigned int m_QueueState; // r8d
  bool v6; // r15
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  FxIrpQueue *p_m_Queue; // rsi
  unsigned int v9; // edx
  _IRP *m_Irp; // r9
  $41EACD23695CB34D39C03C31B435114F *v11; // r10
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *p_ListEntry; // rax
  int inserted; // ebp
  unsigned int v15; // r12d
  __int64 v16; // rdi
  unsigned __int64 *v17; // rbp
  KIRQL v18; // al
  char v19; // cl
  KIRQL v20; // r13
  __int64 v21; // rax
  __int64 v22; // rbp
  int v23; // eax
  unsigned int TargetStatesCount; // edx
  const FxPowerIdleTargetState *TargetStates; // r8
  int v26; // esi
  FxTagTracker *v27; // rcx
  unsigned int _a3; // esi
  __int64 v30; // rcx
  const void *_a2; // rdx
  const void *_a1; // rcx
  char v33; // al
  FxPowerIdleStates (__fastcall *StateFunc)(FxPowerIdleMachine *); // rax
  FxVerifierLock *v35; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const char *v37; // rdx
  const void *v38; // rdi
  const void *v39; // rcx
  _LIST_ENTRY *Blink; // rcx
  __int64 v41; // r9
  __int64 v42; // r10
  FxRequest_vtbl *v43; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-78h]
  FxIrp Irp; // [rsp+58h] [rbp-40h] BYREF
  unsigned __int8 irql; // [rsp+B0h] [rbp+18h] BYREF
  KIRQL v48; // [rsp+B8h] [rbp+20h]

  v4 = this;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v35 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v35, &irql, a3);
  }
  else
  {
    irql = KeAcquireSpinLockRaiseToDpc(&v4->m_NPLock.m_Lock);
  }
  m_QueueState = v4->m_QueueState;
  if ( (m_QueueState & 1) != 0 )
  {
    v6 = pRequest->m_IrpAllocation == 0;
    m_Globals = pRequest->m_Globals;
    p_m_Queue = &v4->m_Queue;
    if ( !m_Globals->FxVerifierOn
      || (inserted = FxRequest::Vf_VerifyInsertIrpQueue(pRequest, m_Globals, &v4->m_Queue), inserted >= 0) )
    {
      v9 = _InterlockedIncrement(&pRequest->m_Refcnt);
      if ( SLOBYTE(pRequest->m_ObjectFlags) < 0 )
      {
        Blink = pRequest[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Blink,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v9);
      }
      m_Irp = pRequest->m_Irp.m_Irp;
      v11 = &pRequest->120;
      pRequest->m_IrpQueue = p_m_Queue;
      Irp.m_Irp = m_Irp;
      if ( pRequest == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = p_m_Queue;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v11;
        pRequest->m_CsqContext.Irp = m_Irp;
        pRequest->m_CsqContext.Csq = (_IO_CSQ *)p_m_Queue;
        v11->m_CsqContext.Type = 1;
      }
      v12 = v4->m_Queue.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      if ( (FxIrpQueue *)v12->Flink != p_m_Queue )
        __fastfail(3u);
      p_ListEntry->Flink = &p_m_Queue->m_Queue;
      m_Irp->Tail.Overlay.ListEntry.Blink = v12;
      v12->Flink = p_ListEntry;
      v4->m_Queue.m_Queue.Blink = p_ListEntry;
      ++v4->m_Queue.m_RequestCount;
      m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
      if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
      {
        FxIrpQueue::RemoveIrpFromListEntry(&v4->m_Queue, &Irp);
        if ( v42 )
          *(_QWORD *)(v42 + 8) = 0LL;
        *(_QWORD *)(v41 + 144) = 0LL;
        v43 = pRequest->__vftable;
        pRequest->m_IrpQueue = 0LL;
        inserted = -1073741536;
        v43->Release(pRequest, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
      }
      else
      {
        inserted = 0;
      }
    }
    pRequest->m_IoQueue = v4;
    if ( inserted < 0 )
    {
      FxObject::AddRef(
        pRequest,
        (void *)0x75657551,
        2459,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(v4, pRequest, irql);
      FxNonPagedObject::Lock(v4, &irql);
    }
    else if ( v4->m_Queue.m_RequestCount == 1 || v4->m_ForceTransitionFromEmptyWhenAddingNewRequest )
    {
      v4->m_TransitionFromEmpty = 1;
      v4->m_ForceTransitionFromEmptyWhenAddingNewRequest = 0;
      if ( v4->m_IsDevicePowerPolicyOwner )
      {
        if ( v4->m_PowerManaged && !v4->m_PowerReferenced )
        {
          v15 = 0;
          v16 = *(_QWORD *)(*(_QWORD *)&v4->m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized + 888LL);
          v17 = (unsigned __int64 *)(v16 + 16);
          v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 16));
          v19 = *(_BYTE *)(v16 + 224);
          v20 = v18;
          v48 = v18;
          if ( (v19 & 0x10) != 0 )
          {
            v26 = -1073741101;
          }
          else if ( (v19 & 0x20) != 0 )
          {
            v21 = *(unsigned __int8 *)(v16 + 225);
            v15 = ++*(_DWORD *)(v16 + 24);
            v22 = *(_QWORD *)(v16 + 424);
            *(_DWORD *)(v16 + 4 * v21 + 232) = 512;
            *(_BYTE *)(v16 + 225) = (*(_BYTE *)(v16 + 225) + 1) & 7;
            v23 = 0;
            TargetStatesCount = FxPowerIdleMachine::m_StateTable[*(int *)(v16 + 228) - 1].TargetStatesCount;
            if ( TargetStatesCount )
            {
              TargetStates = FxPowerIdleMachine::m_StateTable[*(int *)(v16 + 228) - 1].TargetStates;
              while ( TargetStates[v23].PowerIdleEvent != PowerIdleEventIoIncrement )
              {
                if ( ++v23 >= TargetStatesCount )
                  goto LABEL_22;
              }
              for ( _a3 = TargetStates[v23].PowerIdleState; _a3 != 35; _a3 = StateFunc((FxPowerIdleMachine *)v16) )
              {
                v30 = *(_QWORD *)(v22 + 96);
                _a2 = *(const void **)(v30 + 144);
                if ( *(_WORD *)(v30 + 10) )
                  _a1 = (const void *)(v30 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  _a1 = 0LL;
                WPP_IFR_SF_qqLL(
                  *(_FX_DRIVER_GLOBALS **)(v22 + 16),
                  4u,
                  0x15u,
                  0x11u,
                  WPP_PowerIdleStateMachine_cpp_Traceguids,
                  _a1,
                  _a2,
                  _a3,
                  *(_DWORD *)(v16 + 228));
                *(_DWORD *)(v16 + 4LL * *(unsigned __int8 *)(v16 + 226) + 264) = _a3;
                v33 = *(_BYTE *)(v16 + 226) + 1;
                *(_DWORD *)(v16 + 228) = _a3;
                *(_BYTE *)(v16 + 226) = v33 & 7;
                StateFunc = FxPowerIdleMachine::m_StateTable[(int)_a3 - 1].StateFunc;
                if ( !StateFunc )
                  break;
              }
            }
LABEL_22:
            if ( KeReadStateEvent((PRKEVENT)(v16 + 192)) )
              v26 = 0;
            else
              v26 = 259;
            v4 = this;
            v17 = (unsigned __int64 *)(v16 + 16);
            v20 = v48;
          }
          else
          {
            v26 = -1073741101;
          }
          KeReleaseSpinLock(v17, v20);
          v27 = *(FxTagTracker **)(v16 + 32);
          if ( v27 && (!v26 || v26 == 259) )
            FxTagTracker::UpdateTagHistory(v27, 0LL, 0, 0LL, TagAddRef, v15);
          if ( v26 >= 0 )
            v4->m_PowerReferenced = 1;
        }
      }
    }
    if ( v6 || !v4->m_Dispatching )
      FxIoQueue::DispatchEvents(v4, irql, 0LL);
    else
      FxNonPagedObject::Unlock(v4, irql);
    return 0LL;
  }
  else
  {
    m_ObjectSize = pRequest->m_ObjectSize;
    v37 = "power stopping (Drain) in progress,";
    v38 = (const void *)((unsigned __int64)pRequest ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v38 = 0LL;
    if ( (m_QueueState & 0x10000) == 0 )
      v37 = a5;
    v39 = (const void *)((unsigned __int64)v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v4->m_ObjectSize )
      v39 = 0LL;
    WPP_IFR_SF_qLsqd(v4->m_Globals, 3u, m_QueueState, 0x2Bu, traceGuid, v39, m_QueueState, v37, v38, -1071644156);
    FxNonPagedObject::Unlock(v4, irql);
    return 3223323140LL;
  }
}
