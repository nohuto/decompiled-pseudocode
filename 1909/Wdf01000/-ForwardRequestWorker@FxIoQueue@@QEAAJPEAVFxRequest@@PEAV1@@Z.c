/*
 * XREFs of ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C0078FDC
 * Callers:
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0078E68 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C0078EC4 (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005AD0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013DAC (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0014888 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B190 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C750C (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ForwardRequestWorker(FxIoQueue *this, FxRequest *Request, FxIoQueue *DestQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _FX_DRIVER_GLOBALS *v7; // rdx
  FxIoQueue *v8; // rcx
  unsigned __int8 v9; // r8
  FxRequestCompletionState v10; // r12d
  __int16 updated; // bp
  unsigned __int8 v12; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rdi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // r8
  int v19; // r14d
  unsigned __int8 v20; // r8
  unsigned __int8 v21; // r8
  unsigned __int8 v22; // r8
  _LIST_ENTRY *v23; // rcx
  unsigned __int16 v25; // r9
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  FxObject::AddRef(
    Request,
    (void *)0x74617453,
    1399,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  v10 = (unsigned int)FxRequest::SetCompletionState(Request, FxRequestCompletionStateNone);
  if ( m_Globals->FxVerifierOn )
    updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(v8, v7, Request);
  else
    updated = 0;
  FxNonPagedObject::Lock(this, &irql, v9);
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = Request->m_OwnerListEntry2.Flink;
  if ( Flink->Blink != &Request->m_OwnerListEntry2 )
    goto LABEL_15;
  Blink = Request->m_OwnerListEntry2.Blink;
  if ( Blink->Flink != p_m_OwnerListEntry2 )
    goto LABEL_15;
  v16 = irql;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  FxNonPagedObject::Unlock(this, v16, v12);
  v19 = FxIoQueue::QueueRequestFromForward(DestQueue, Request, v17);
  if ( v19 < 0 )
  {
    FxRequest::SetCompletionState(Request, v10);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(Request, updated, v20);
    Request->Release(
      Request,
      (void *)1952543827,
      1461,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql, v21);
    v23 = this->m_DriverOwned.Blink;
    if ( v23->Flink == &this->m_DriverOwned )
    {
      p_m_OwnerListEntry2->Flink = &this->m_DriverOwned;
      Request->m_OwnerListEntry2.Blink = v23;
      v23->Flink = p_m_OwnerListEntry2;
      this->m_DriverOwned.Blink = p_m_OwnerListEntry2;
      goto LABEL_11;
    }
LABEL_15:
    __fastfail(3u);
  }
  FxNonPagedObject::Lock(this, &irql, v18);
  --this->m_DriverIoCount;
  if ( !this->m_Dispatching )
  {
    FxIoQueue::DispatchEvents(this, irql, 0LL, v25);
    return (unsigned int)v19;
  }
LABEL_11:
  FxNonPagedObject::Unlock(this, irql, v22);
  return (unsigned int)v19;
}
