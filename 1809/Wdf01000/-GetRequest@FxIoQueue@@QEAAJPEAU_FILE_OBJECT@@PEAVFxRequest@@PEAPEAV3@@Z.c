/*
 * XREFs of ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000B010
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0005970 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1C0017B00 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x1C0019500 (imp_WdfIoQueueRetrieveFoundRequest.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x1C0076830 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0012FB4 (WPP_IFR_SF_qq.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C0018ED4 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C004B660 (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C0057BC8 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DC14 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2990 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C3534 (-Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C357C (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::GetRequest(
        FxIoQueue *this,
        _FILE_OBJECT *FileObject,
        FxRequest *TagRequest,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  _FILE_OBJECT *v6; // rbx
  unsigned __int8 v8; // bp
  unsigned __int8 v9; // r8
  $A3173470F8A533D5F67D6DF0520578B2 *v10; // r12
  FxIrpQueue *p_m_Queue; // r15
  FxIrpQueue *Flink; // rdx
  _IRP *i; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  _LIST_ENTRY *v15; // rdx
  _LIST_ENTRY *Blink; // r8
  $A3173470F8A533D5F67D6DF0520578B2 *v17; // rbx
  _LIST_ENTRY *v18; // rax
  $A3173470F8A533D5F67D6DF0520578B2 *v19; // rbx
  _LIST_ENTRY *v20; // rax
  unsigned __int8 v21; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *v24; // rdx
  _FX_DRIVER_GLOBALS *v25; // rdx
  FxTagTracker *v26; // rcx
  char v27; // al
  _LIST_ENTRY *v28; // rax
  int result; // eax
  int v30; // ebx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdi
  FxVerifierLock *v33; // rcx
  const void *v34; // rdx
  unsigned __int8 v35; // r8
  const void *v36; // rcx
  unsigned __int8 v37; // r8
  unsigned __int8 v38; // r8
  _FX_DRIVER_GLOBALS *Csq; // rdx
  const void *_a2; // rdx
  const void *v41; // rcx
  __int64 v42; // r8
  const void *v43; // rdx
  const void *v44; // rcx
  unsigned __int8 v45; // r8
  FxVerifierLock *v46; // rcx
  const void *v47; // rcx
  FxVerifierLock *v48; // rcx
  unsigned __int8 PreviousIrql[8]; // [rsp+40h] [rbp-48h] BYREF
  $A3173470F8A533D5F67D6DF0520578B2 *v50; // [rsp+48h] [rbp-40h]
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  _FILE_OBJECT *v52; // [rsp+98h] [rbp+10h]
  FxRequest **v53; // [rsp+A8h] [rbp+20h]

  v53 = pOutRequest;
  v52 = FileObject;
  m_Globals = this->m_Globals;
  v6 = FileObject;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyGetRequestUpdateFlags(this, this->m_Globals, TagRequest);
    if ( result < 0 )
      return result;
  }
  if ( ((this->m_Type - 1) & 0xFFFFFFFD) != 0 )
  {
    m_ObjectSize = this->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x1Au, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000184);
    return -1073741436;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v33 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v33, &irql, (unsigned __int8)TagRequest);
    v8 = irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
    irql = v8;
  }
  if ( this->m_PowerState == FxIoQueuePowerOff )
  {
    v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v34 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxIoQueue_cpp_Traceguids, v34, 0xC0200203);
    FxNonPagedObject::Unlock(this, v8, v35);
    return -1071644157;
  }
  if ( (this->m_QueueState & 2) == 0 )
  {
    v36 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v36 = 0LL;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x1Cu, WPP_FxIoQueue_cpp_Traceguids, v36, 0xC0200203);
    FxNonPagedObject::Unlock(this, v8, v37);
    return -1071644157;
  }
  v10 = &TagRequest->120;
  if ( !TagRequest )
    v10 = 0LL;
  p_m_Queue = &this->m_Queue;
  while ( 1 )
  {
    if ( v10 )
    {
      if ( !FxIrpQueue::RemoveIrpFromQueueByContext(&this->m_Queue, &v10->m_CsqContext) )
      {
        v30 = -1073741275;
LABEL_36:
        if ( v30 == -2147483622 && !v52 && !TagRequest && this->m_Queue.m_RequestCount > 0 )
          this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v48 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v48, v8, v9);
        }
        else
        {
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, v8);
        }
        return v30;
      }
      v17 = v10;
    }
    else
    {
      Flink = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
      for ( i = 0LL; Flink != p_m_Queue; i = 0LL )
      {
        i = (_IRP *)&Flink[-5].m_RequestCount;
        if ( !v6 )
          break;
        if ( i->Tail.Overlay.CurrentStackLocation->FileObject == v6 )
          break;
        Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
      }
      if ( !i )
      {
LABEL_35:
        v30 = -2147483622;
        goto LABEL_36;
      }
      while ( !_InterlockedExchange64((volatile __int64 *)&i->CancelRoutine, 0LL) )
      {
        i = FxIrpQueue::PeekNextIrpFromQueue(&this->m_Queue, i, v6);
        if ( !i )
        {
          v8 = irql;
          goto LABEL_35;
        }
      }
      p_ListEntry = &i->Tail.Overlay.ListEntry;
      v15 = i->Tail.Overlay.ListEntry.Flink;
      if ( (void **)v15->Blink != &i->Tail.CompletionKey + 6 )
        goto LABEL_85;
      Blink = i->Tail.Overlay.ListEntry.Blink;
      if ( Blink->Flink != p_ListEntry )
        goto LABEL_85;
      Blink->Flink = v15;
      v15->Blink = Blink;
      i->Tail.Overlay.ListEntry.Blink = &i->Tail.Overlay.ListEntry;
      p_ListEntry->Flink = p_ListEntry;
      --this->m_Queue.m_RequestCount;
      v17 = ($A3173470F8A533D5F67D6DF0520578B2 *)i->Tail.Overlay.DriverContext[3];
      if ( v17->m_CsqContext.Type == 1 )
        v17->m_CsqContext.Irp = 0LL;
      v8 = irql;
      v50 = v17;
      i->Tail.Overlay.DriverContext[3] = 0LL;
    }
    v18 = v17[-5].m_ListEntry.Flink;
    v19 = v17 - 5;
    v20 = v18[1].Flink;
    v19[9].m_CsqContext.Irp = 0LL;
    ((void (__fastcall *)($A3173470F8A533D5F67D6DF0520578B2 *, __int64, __int64, const char *))v20)(
      v19,
      1969583441LL,
      2102LL,
      "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    if ( this->m_AllowZeroLengthRequests )
      goto LABEL_25;
    if ( BYTE1(v19->m_CsqContext.Csq[5].Type) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)v19, PreviousIrql, v21);
      Csq = (_FX_DRIVER_GLOBALS *)v19->m_CsqContext.Csq;
      if ( Csq->FxVerifierOn )
        FxRequest::Vf_VerifyRequestIsNotCompleted((FxRequest *)v19, Csq);
      FxNonPagedObject::Unlock((FxNonPagedObject *)v19, PreviousIrql[0], v38);
    }
    CurrentStackLocation = v19[6].m_CsqContext.Irp->Tail.Overlay.CurrentStackLocation;
    if ( CurrentStackLocation->MajorFunction != 3 )
      break;
    if ( CurrentStackLocation->Parameters.Read.Length )
      goto LABEL_25;
    FxNonPagedObject::Unlock(this, v8, v21);
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      v41 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !WORD1(v19->m_ListEntry.Blink) )
        v41 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Du, WPP_FxIoQueue_cpp_Traceguids, v41, _a2);
    }
    v19[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    FxRequest::Complete((FxRequest *)v19, 0);
    v42 = 1123LL;
LABEL_81:
    ((void (__fastcall *)($A3173470F8A533D5F67D6DF0520578B2 *, __int64, __int64, const char *))v19->m_ListEntry.Flink[1].Flink)(
      v19,
      1886220099LL,
      v42,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(this, &irql, v45);
    v8 = irql;
    v6 = v52;
  }
  if ( CurrentStackLocation->MajorFunction == 4 && !CurrentStackLocation->Parameters.Read.Length )
  {
    FxNonPagedObject::Unlock(this, v8, v21);
    if ( m_Globals->FxVerboseOn )
    {
      v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v43 = 0LL;
      v44 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !WORD1(v19->m_ListEntry.Blink) )
        v44 = 0LL;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Eu, WPP_FxIoQueue_cpp_Traceguids, v44, v43);
    }
    v19[6].m_CsqContext.Irp->IoStatus.Information = 0LL;
    FxRequest::Complete((FxRequest *)v19, 0);
    v42 = 1139LL;
    goto LABEL_81;
  }
LABEL_25:
  ++this->m_DriverIoCount;
  v23 = &v19[12].m_ListEntry + 1;
  v24 = this->m_DriverOwned.Blink;
  if ( v24->Flink != &this->m_DriverOwned )
LABEL_85:
    __fastfail(3u);
  v23->Flink = &this->m_DriverOwned;
  v19[13].m_ListEntry.Flink = v24;
  v24->Flink = v23;
  this->m_DriverOwned.Blink = v23;
  if ( SLOBYTE(this->m_ObjectFlags) < 0
    && (v46 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v46, irql, v21);
  }
  else
  {
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  }
  if ( *((_BYTE *)&v19[8].m_ListEntry + 22) )
  {
    v47 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !WORD1(v19->m_ListEntry.Blink) )
      v47 = 0LL;
    WPP_IFR_SF_q((_FX_DRIVER_GLOBALS *)v19->m_CsqContext.Csq, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v47);
    FxVerifierDbgBreakPoint((_FX_DRIVER_GLOBALS *)v19->m_CsqContext.Csq);
  }
  else
  {
    v27 = *((_BYTE *)&v19[9].m_ListEntry + 21);
    *((_BYTE *)&v19[9].m_ListEntry + 21) = 1;
    if ( !v27 )
    {
      v25 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)&v19->m_ListEntry.Blink + 1);
      if ( SLOBYTE(v19[1].m_CsqContext.Type) < 0 )
      {
        v26 = (FxTagTracker *)v19[-2].m_ListEntry.Flink;
        if ( v26 )
          FxTagTracker::UpdateTagHistory(
            v26,
            (void *)0x74617453,
            1820,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            (unsigned int)v25);
      }
    }
  }
  if ( m_Globals->FxVerifierOn )
    FxIoQueue::Vf_VerifyGetRequestRestoreFlags((FxIoQueue *)v26, v25, (FxRequest *)v19);
  v28 = v19->m_ListEntry.Flink;
  *((_BYTE *)&v19[14].m_ListEntry + 16) = 1;
  ((void (__fastcall *)($A3173470F8A533D5F67D6DF0520578B2 *, __int64, __int64, const char *))v28[1].Flink)(
    v19,
    1952543827LL,
    1193LL,
    "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
  *v53 = (FxRequest *)v19;
  return 0;
}
