/*
 * XREFs of ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0016744
 * Callers:
 *     imp_WdfIoQueueStopAndPurge @ 0x1C0016690 (imp_WdfIoQueueStopAndPurge.c)
 *     imp_WdfIoQueueStop @ 0x1C00166F0 (imp_WdfIoQueueStop.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C007939C (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008D40 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0013154 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C0013B58 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C0016A00 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C0016AB0 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C0018AA4 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0019CCC (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0031B08 (WPP_IFR_SF_qid.c)
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x1C004B83C (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0078074 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueIdle(
        FxIoQueue *this,
        unsigned __int8 CancelRequests,
        void (__fastcall *IdleComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int64 *p_m_Lock; // r13
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // al
  unsigned __int16 v13; // r9
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rdx
  FxIrpQueue *p_m_Queue; // rsi
  FxNonPagedObject *v17; // rdi
  __int64 v18; // rdx
  FxIrpQueue *Flink; // rax
  bool v20; // cl
  const void *v21; // rdi
  FxRequest *NextRequest; // rax
  unsigned int *v23; // r8
  FxRequest *v24; // r15
  unsigned __int8 v25; // r8
  FxRequest *v26; // rax
  unsigned __int8 v27; // r8
  FxRequest *v28; // rdi
  FxIoQueue *v29; // rcx
  FxVerifierLock *v30; // rcx
  unsigned int v31; // edi
  const void *_a1; // rdx
  unsigned __int8 v33; // r8
  const void *v34; // rcx
  FxNonPagedObject *m_LockObject; // rdi
  FxNonPagedObject_vtbl *v36; // rax
  FxVerifierLock *v37; // rcx
  FxRequest *v38; // rcx
  int inserted; // eax
  const void *v40; // rdx
  const void *v41; // rcx
  unsigned __int8 v42; // dl
  unsigned __int8 v43; // r8
  const void *v44; // rcx
  FxVerifierLock *v45; // rcx
  _LIST_ENTRY fwrIrpList; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  fwrIrpList.Flink = 0LL;
  fwrIrpList.Blink = 0LL;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v30 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v30, &irql, (unsigned __int8)IdleComplete);
    p_m_Lock = &this->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &this->m_NPLock.m_Lock;
    irql = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  if ( this->m_Deleted )
  {
    v31 = -1073741738;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x40u, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000056);
    goto LABEL_35;
  }
  if ( IdleComplete )
  {
    _a2 = this->m_IdleComplete.Method;
    if ( !_a2 )
    {
      this->m_IdleComplete.Method = IdleComplete;
      this->m_IdleCompleteContext = Context;
      goto LABEL_5;
    }
    v31 = -1073741808;
    v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v34 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x41u, WPP_FxIoQueue_cpp_Traceguids, v34, (__int64)_a2, -1073741808);
LABEL_35:
    FxNonPagedObject::Unlock(this, irql, v33);
    return v31;
  }
LABEL_5:
  FxIoQueue::SetState(this, FxIoQueueClearDispatchRequests|0x1);
  v10 = 1;
  if ( CancelRequests )
  {
    this->m_CancelDispatchedRequests = 1;
    p_m_Queue = &this->m_Queue;
    v17 = 0LL;
LABEL_15:
    v18 = (unsigned __int64)&v17[1] & -(__int64)(v17 != 0LL);
    Flink = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
    v20 = v18 == 0;
    while ( Flink != p_m_Queue )
    {
      if ( !BYTE4(Flink[-3].m_LockObject) )
      {
        m_LockObject = Flink[-1].m_LockObject;
        if ( v20 )
        {
          v17 = m_LockObject - 1;
          FxObject::AddRef(v17, 0LL, 447, "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp");
          v36 = v17->__vftable;
          HIBYTE(v17[1].m_DisposeSingleEntry.Next) = 1;
          v36->Release(v17, 0LL, 3723, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          v10 = 1;
          goto LABEL_15;
        }
        v20 = m_LockObject == (FxNonPagedObject *)v18;
      }
      Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
    }
    if ( this->m_SupportForwardProgress )
    {
      fwrIrpList.Blink = &fwrIrpList;
      fwrIrpList.Flink = &fwrIrpList;
      FxIoQueue::GetForwardProgressIrps(this, &fwrIrpList, 0LL);
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v37 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v37, irql, v10);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( CancelRequests )
  {
    v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v11);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      LOBYTE(v23) = 0;
      v24 = NextRequest;
      if ( !NextRequest )
        break;
      if ( !FxRequest::IsCancelled(NextRequest) )
      {
        inserted = FxRequest::InsertHeadIrpQueue(v38, &this->m_Queue, v23);
        v23 = 0LL;
        if ( inserted >= 0 )
          goto LABEL_22;
      }
      v21 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v40 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( this->m_ObjectSize <= (unsigned __int16)v23 )
        v40 = v23;
      v41 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v24->m_ObjectSize )
        v41 = v23;
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x43u, WPP_FxIoQueue_cpp_Traceguids, v41, v40);
      FxObject::AddRef(
        v24,
        (void *)0x75657551,
        3782,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, v24, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( !this->m_ObjectSize )
        v21 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x42u, WPP_FxIoQueue_cpp_Traceguids, v21);
    }
LABEL_22:
    FxNonPagedObject::Unlock(this, irql, (unsigned __int8)v23);
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v25);
      v26 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v28 = v26;
      if ( !v26 )
        break;
      v42 = irql;
      v26->m_Canceled = 1;
      FxNonPagedObject::Unlock(this, v42, v27);
      FxObject::AddRef(
        v28,
        (void *)0x75657551,
        3823,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v28, v43);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v44 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v44 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x44u, WPP_FxIoQueue_cpp_Traceguids, v44);
    }
    FxNonPagedObject::Unlock(this, irql, v27);
    if ( this->m_SupportForwardProgress )
      FxIoQueue::CancelIrps(v29, &fwrIrpList);
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v45 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v45, &irql, v11);
    v12 = irql;
  }
  else
  {
    v12 = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  }
  FxIoQueue::DispatchEvents(this, v12, 0LL, v13);
  return 0LL;
}
