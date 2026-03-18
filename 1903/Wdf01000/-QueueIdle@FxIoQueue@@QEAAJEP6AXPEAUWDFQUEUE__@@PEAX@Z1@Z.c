/*
 * XREFs of ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0017234
 * Callers:
 *     imp_WdfIoQueueStop @ 0x1C00171E0 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x1C0076ED0 (imp_WdfIoQueueStopAndPurge.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0079C4C (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0003F1C (WPP_IFR_SF_qL.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C00133A4 (WPP_IFR_SF_qq.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0013544 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C00139E4 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C00173B0 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0030F38 (WPP_IFR_SF_qid.c)
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x1C004B16C (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C00503F0 (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C00504A4 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C00787C4 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0078998 (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C007AC0C (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 */

__int64 __fastcall FxIoQueue::QueueIdle(
        FxIoQueue *this,
        unsigned __int8 CancelRequests,
        void (__fastcall *IdleComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  unsigned __int16 v11; // r9
  unsigned int v13; // edi
  const void *_a1; // rdx
  unsigned __int8 v15; // r8
  void (__fastcall *_a2)(WDFQUEUE__ *, void *); // rdx
  const void *v17; // rcx
  FxRequest *v18; // rdi
  FxRequest *v19; // rcx
  const void *v20; // rdi
  FxRequest *NextRequest; // rax
  unsigned __int8 v22; // r8
  FxRequest *v23; // rsi
  FxRequest *v24; // rcx
  unsigned int *v25; // r8
  const void *v26; // rcx
  const void *v27; // rax
  const void *v28; // rax
  unsigned __int8 v29; // r8
  FxRequest *v30; // rax
  unsigned __int8 v31; // r8
  FxRequest *v32; // rsi
  unsigned __int8 v33; // dl
  unsigned __int8 v34; // r8
  FxIoQueue *v35; // rcx
  FxRequest *request; // [rsp+40h] [rbp-20h] BYREF
  _LIST_ENTRY fwrIrpList; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 irql; // [rsp+90h] [rbp+30h] BYREF

  m_Globals = this->m_Globals;
  fwrIrpList.Flink = 0LL;
  fwrIrpList.Blink = 0LL;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)IdleComplete);
  if ( this->m_Deleted )
  {
    v13 = -1073741738;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x40u, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000056);
    goto LABEL_13;
  }
  if ( !IdleComplete )
    goto LABEL_3;
  _a2 = this->m_IdleComplete.Method;
  if ( _a2 )
  {
    v13 = -1073741808;
    v17 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v17 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, 0x41u, WPP_FxIoQueue_cpp_Traceguids, v17, (__int64)_a2, -1073741808);
LABEL_13:
    FxNonPagedObject::Unlock(this, irql, v15);
    return v13;
  }
  this->m_IdleComplete.Method = IdleComplete;
  this->m_IdleCompleteContext = Context;
LABEL_3:
  FxIoQueue::SetState(this, FxIoQueueClearDispatchRequests|0x1);
  if ( CancelRequests )
  {
    this->m_CancelDispatchedRequests = 1;
    v18 = 0LL;
    request = 0LL;
    while ( !FxRequest::PeekRequest(&this->m_Queue, v18, 0LL, 0LL, &request) )
    {
      v18 = request;
      v19 = request;
      request->m_Canceled = 1;
      v19->Release(v19, 0LL, 3723, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    }
    if ( this->m_SupportForwardProgress )
    {
      fwrIrpList.Blink = &fwrIrpList;
      fwrIrpList.Flink = &fwrIrpList;
      FxIoQueue::GetForwardProgressIrps(this, &fwrIrpList, 0LL);
    }
  }
  FxNonPagedObject::Unlock(this, irql, v9);
  if ( CancelRequests )
  {
    v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v10);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      v23 = NextRequest;
      if ( !NextRequest )
        break;
      if ( !FxRequest::IsCancelled(NextRequest) && FxRequest::InsertHeadIrpQueue(v24, &this->m_Queue, v25) >= 0 )
        goto LABEL_34;
      v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v26 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v26 = 0LL;
      if ( v23->m_ObjectSize )
        v27 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v27 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x43u, WPP_FxIoQueue_cpp_Traceguids, v27, v26);
      FxObject::AddRef(
        v23,
        (void *)0x75657551,
        3782,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, v23, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v28 = v20;
      if ( !this->m_ObjectSize )
        v28 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x42u, WPP_FxIoQueue_cpp_Traceguids, v28);
    }
LABEL_34:
    FxNonPagedObject::Unlock(this, irql, v22);
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v29);
      v30 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v32 = v30;
      if ( !v30 )
        break;
      v33 = irql;
      v30->m_Canceled = 1;
      FxNonPagedObject::Unlock(this, v33, v31);
      FxObject::AddRef(
        v32,
        (void *)0x75657551,
        3823,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v32, v34);
    }
    if ( m_Globals->FxVerboseOn )
    {
      if ( !this->m_ObjectSize )
        v20 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x44u, WPP_FxIoQueue_cpp_Traceguids, v20);
    }
    FxNonPagedObject::Unlock(this, irql, v31);
    if ( this->m_SupportForwardProgress )
      FxIoQueue::CancelIrps(v35, &fwrIrpList);
  }
  FxNonPagedObject::Lock(this, &irql, v10);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v11);
  return 0LL;
}
