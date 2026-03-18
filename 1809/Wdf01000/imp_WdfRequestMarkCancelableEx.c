/*
 * XREFs of imp_WdfRequestMarkCancelableEx @ 0x1C00161C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0018F44 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B860 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0050968 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DC14 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1C00C22CC (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1C00C37AC (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 */

__int64 __fastcall imp_WdfRequestMarkCancelableEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  FxRequest *v5; // rbx
  FxIoQueue *Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxIoQueue *m_IoQueue; // rdi
  _FX_DRIVER_GLOBALS *v9; // r15
  unsigned __int8 v10; // r8
  _FX_DRIVER_GLOBALS *v11; // rdx
  FxIrpQueue *p_m_DriverCancelable; // rsi
  unsigned int RefCount; // edx
  _IRP *m_Irp; // r9
  $A3173470F8A533D5F67D6DF0520578B2 *v15; // r10
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY *p_ListEntry; // rcx
  int inserted; // ebp
  FxVerifierLock *v20; // rcx
  unsigned __int8 v21; // dl
  FxTagTracker *Blink; // rcx
  __int64 v23; // r9
  __int64 v24; // r10
  FxRequest_vtbl *v25; // rax
  FxVerifierLock *v26; // rcx
  FxIrp Irp; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+88h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+98h] [rbp+20h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v5 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  Offset = 0LL;
  if ( (Request & 1) != 0 )
  {
    Offset = (FxIoQueue *)LOWORD(v5->__vftable);
    v5 = (FxRequest *)((char *)v5 - (__int64)Offset);
  }
  if ( v5->m_Type == 4104 )
  {
    pRequest = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pRequest, (void *)Request, 0x1008u, (unsigned __int16)Offset);
    v5 = pRequest;
  }
  m_Globals = v5->m_Globals;
  if ( !EvtRequestCancel )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( v5->m_Completed || (m_IoQueue = v5->m_IoQueue) == 0LL )
  {
    WPP_IFR_SF_qL(m_Globals, 2u, 0x10u, 0x51u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, 0xC0000010);
    FxVerifierDbgBreakPoint(m_Globals);
    return 3221225488LL;
  }
  v9 = m_IoQueue->m_Globals;
  if ( !v9->FxVerifierOn )
  {
LABEL_10:
    if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
      && (v20 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Lock(v20, &PreviousIrql, (unsigned __int8)EvtRequestCancel);
    }
    else
    {
      PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
    }
    v5->m_CancelRoutine.m_Cancel = EvtRequestCancel;
    if ( m_IoQueue->m_CancelDispatchedRequests )
    {
      inserted = -1073741536;
    }
    else
    {
      v11 = v5->m_Globals;
      p_m_DriverCancelable = &m_IoQueue->m_DriverCancelable;
      if ( !v11->FxVerifierOn
        || (inserted = FxRequest::Vf_VerifyInsertIrpQueue(v5, v11, &m_IoQueue->m_DriverCancelable), inserted >= 0) )
      {
        RefCount = _InterlockedIncrement(&v5->m_Refcnt);
        if ( SLOBYTE(v5->m_ObjectFlags) < 0 )
        {
          Blink = (FxTagTracker *)v5[-1].m_OwnerListEntry2.Blink;
          if ( Blink )
            FxTagTracker::UpdateTagHistory(
              Blink,
              (void *)0x75657551,
              1900,
              "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
              TagAddRef,
              RefCount);
        }
        m_Irp = v5->m_Irp.m_Irp;
        v15 = &v5->120;
        v5->m_IrpQueue = p_m_DriverCancelable;
        Irp.m_Irp = m_Irp;
        if ( v5 == (FxRequest *)-120LL )
        {
          m_Irp->Tail.Overlay.DriverContext[3] = p_m_DriverCancelable;
        }
        else
        {
          m_Irp->Tail.Overlay.DriverContext[3] = v15;
          v5->m_CsqContext.Irp = m_Irp;
          v5->m_CsqContext.Csq = (_IO_CSQ *)p_m_DriverCancelable;
          v15->m_CsqContext.Type = 1;
        }
        v16 = m_IoQueue->m_DriverCancelable.m_Queue.Blink;
        p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
        if ( (FxIrpQueue *)v16->Flink != p_m_DriverCancelable )
          __fastfail(3u);
        m_Irp->Tail.Overlay.ListEntry.Blink = v16;
        p_ListEntry->Flink = &p_m_DriverCancelable->m_Queue;
        v16->Flink = p_ListEntry;
        m_IoQueue->m_DriverCancelable.m_Queue.Blink = p_ListEntry;
        ++m_IoQueue->m_DriverCancelable.m_RequestCount;
        m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64(
          (volatile __int64 *)&m_Irp->CancelRoutine,
          (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( m_Irp->Cancel && _InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
        {
          FxIrpQueue::RemoveIrpFromListEntry(&m_IoQueue->m_DriverCancelable, &Irp);
          if ( v24 )
            *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v23 + 144) = 0LL;
          v25 = v5->__vftable;
          v5->m_IrpQueue = 0LL;
          inserted = -1073741536;
          v25->Release(v5, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        }
        else
        {
          inserted = 0;
        }
      }
      if ( inserted >= 0 )
      {
        if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
          && (v26 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Unlock(v26, PreviousIrql, v10);
        }
        else
        {
          KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
        }
        return (unsigned int)inserted;
      }
    }
    v21 = PreviousIrql;
    v5->m_CancelRoutine.m_Cancel = 0LL;
    FxNonPagedObject::Unlock(m_IoQueue, v21, v10);
    if ( v9->FxVerifierOn )
      FxRequestBase::ClearVerifierFlags(v5, 16);
    return (unsigned int)inserted;
  }
  inserted = FxIoQueue::Vf_VerifyRequestCancelable(Offset, m_IoQueue->m_Globals, v5, 1u);
  if ( inserted >= 0 )
  {
    if ( v9->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v5, 16);
    goto LABEL_10;
  }
  return (unsigned int)inserted;
}
