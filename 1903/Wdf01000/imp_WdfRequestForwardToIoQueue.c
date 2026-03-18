/*
 * XREFs of imp_WdfRequestForwardToIoQueue @ 0x1C00096B0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0005AD0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0008860 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000B110 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000B170 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C0014888 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B190 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005CD60 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005D078 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C005DDB8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z @ 0x1C0079B00 (-QueueDriverCreatedRequest@FxIoQueue@@QEAAJPEAVFxRequest@@E@Z.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00C5EAC (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     ?Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z @ 0x1C00C71EC (-Vf_VerifyForwardRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAV1@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C750C (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestForwardToIoQueue(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int64 DestinationQueue)
{
  __int16 updated; // r12
  FxIoQueue *v5; // rsi
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxTagTracker *v8; // rcx
  unsigned __int64 v9; // rbx
  __int64 v10; // rdi
  _FX_DRIVER_GLOBALS *v11; // rdx
  __int64 v12; // rbp
  _FX_DRIVER_GLOBALS *RefCount; // rdx
  FxRequestCompletionState v14; // r13d
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // r8
  _QWORD *v17; // r14
  __int64 v18; // rax
  _QWORD *v19; // rcx
  unsigned __int64 *v20; // rbp
  unsigned __int8 v21; // r8
  unsigned __int8 v22; // r8
  int v23; // r15d
  unsigned __int8 v24; // r8
  unsigned __int16 v25; // r9
  const void *v27; // rcx
  FxVerifierLock *v28; // rcx
  FxVerifierLock *v29; // rcx
  _QWORD *v30; // rcx
  unsigned __int8 v31; // dl
  FxVerifierLock *v32; // rcx
  __int64 v33; // [rsp+30h] [rbp-48h]
  unsigned __int8 PreviousIrql; // [rsp+80h] [rbp+8h] BYREF
  FxIoQueue *queue; // [rsp+90h] [rbp+18h] BYREF
  void *PPObject; // [rsp+98h] [rbp+20h] BYREF

  if ( !DestinationQueue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  updated = 0;
  v5 = (FxIoQueue *)(~DestinationQueue & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(Offset) = 0;
  if ( (DestinationQueue & 1) != 0 )
  {
    Offset = LOWORD(v5->FxNonPagedObject::FxObject::__vftable);
    v5 = (FxIoQueue *)((char *)v5 - Offset);
  }
  if ( v5->FxNonPagedObject::FxObject::m_Type == 4099 )
  {
    queue = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&queue, (void *)DestinationQueue, 0x1003u, Offset);
    v5 = queue;
  }
  m_Globals = v5->m_Globals;
  if ( !Request )
    FxVerifierBugCheckWorker(v5->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v8 = 0LL;
  v9 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Request & 1) != 0 )
  {
    v8 = (FxTagTracker *)*(unsigned __int16 *)v9;
    v9 -= (unsigned __int64)v8;
  }
  if ( *(_WORD *)(v9 + 8) == 4104 )
  {
    PPObject = (void *)v9;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v9, &PPObject, (void *)Request, 0x1008u, (unsigned __int16)v8);
    v5 = queue;
    v9 = (unsigned __int64)PPObject;
  }
  if ( *(_BYTE *)(v9 + 214) || (v10 = *(_QWORD *)(v9 + 248)) == 0 )
  {
    if ( m_Globals->FxVerifierOn )
    {
      v23 = Vf_VerifyWdfRequestForwardToIoQueue(m_Globals, (FxRequest *)v9);
      if ( v23 < 0 )
        return (unsigned int)v23;
      v5 = queue;
      v9 = (unsigned __int64)PPObject;
    }
    return (unsigned int)FxIoQueue::QueueDriverCreatedRequest(v5, (FxRequest *)v9, 0);
  }
  v11 = *(_FX_DRIVER_GLOBALS **)(v10 + 16);
  if ( !v11->FxVerifierOn
    || (v23 = FxIoQueue::Vf_VerifyForwardRequest(*(FxIoQueue **)(v9 + 248), v11, v5, (FxRequest *)v9), v23 >= 0) )
  {
    v12 = *(_QWORD *)(v10 + 16);
    v33 = v12;
    RefCount = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)(v9 + 12));
    if ( *(char *)(v9 + 24) < 0 )
    {
      v8 = *(FxTagTracker **)(v9 - 48);
      if ( v8 )
        FxTagTracker::UpdateTagHistory(
          v8,
          (void *)0x74617453,
          1399,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
          TagAddRef,
          (unsigned int)RefCount);
    }
    if ( *(_BYTE *)(v9 + 214) )
    {
      v14 = FxRequestCompletionStateNone;
      v27 = (const void *)(v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(v9 + 10) )
        v27 = 0LL;
      WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(v9 + 16), 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v27);
      FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(v9 + 16));
    }
    else
    {
      v14 = *(unsigned __int8 *)(v9 + 237);
      *(_BYTE *)(v9 + 237) = 0;
      if ( v14 )
        (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(*(_QWORD *)v9 + 16LL))(
          v9,
          1952543827LL,
          1813LL,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
    }
    if ( *(_BYTE *)(v12 + 316) )
      updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags((FxIoQueue *)v8, RefCount, (FxRequest *)v9);
    if ( *(char *)(v10 + 24) < 0 && (v28 = *(FxVerifierLock **)(v10 - 40)) != 0LL )
    {
      FxVerifierLock::Lock(v28, &PreviousIrql, DestinationQueue);
      v15 = PreviousIrql;
    }
    else
    {
      v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 112));
      PreviousIrql = v15;
    }
    v17 = (_QWORD *)(v9 + 304);
    v18 = *(_QWORD *)(v9 + 304);
    if ( *(_QWORD *)(v18 + 8) == v9 + 304 )
    {
      v19 = *(_QWORD **)(v9 + 312);
      if ( (_QWORD *)*v19 == v17 )
      {
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        *(_QWORD *)(v9 + 312) = v9 + 304;
        *v17 = v17;
        if ( *(char *)(v10 + 24) < 0 && (v29 = *(FxVerifierLock **)(v10 - 40)) != 0LL )
        {
          FxVerifierLock::Unlock(v29, v15, v16);
          v20 = (unsigned __int64 *)(v10 + 112);
        }
        else
        {
          v20 = (unsigned __int64 *)(v10 + 112);
          KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 112), v15);
        }
        v23 = FxIoQueue::QueueRequestFromForward(v5, (FxRequest *)v9, v21);
        if ( v23 >= 0 )
        {
          if ( *(char *)(v10 + 24) < 0 && *(_QWORD *)(v10 - 40) )
            FxVerifierLock::Lock(*(FxVerifierLock **)(v10 - 40), &PreviousIrql, v22);
          else
            PreviousIrql = KeAcquireSpinLockRaiseToDpc(v20);
          --*(_DWORD *)(v10 + 376);
          if ( *(_DWORD *)(v10 + 368) )
          {
            if ( *(char *)(v10 + 24) < 0 && (v32 = *(FxVerifierLock **)(v10 - 40)) != 0LL )
              FxVerifierLock::Unlock(v32, PreviousIrql, v24);
            else
              KeReleaseSpinLock(v20, PreviousIrql);
          }
          else
          {
            FxIoQueue::DispatchEvents((FxIoQueue *)v10, PreviousIrql, 0LL, v25);
          }
          return (unsigned int)v23;
        }
        FxRequest::SetCompletionState((FxRequest *)v9, v14);
        if ( *(_BYTE *)(v33 + 316) )
          FxRequestBase::SetVerifierFlags((FxRequestBase *)v9, updated);
        (*(void (__fastcall **)(unsigned __int64, __int64, __int64, const char *))(*(_QWORD *)v9 + 16LL))(
          v9,
          1952543827LL,
          1461LL,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        FxNonPagedObject::Lock((FxNonPagedObject *)v10, &PreviousIrql);
        v30 = *(_QWORD **)(v10 + 312);
        if ( *v30 == v10 + 304 )
        {
          v31 = PreviousIrql;
          *(_QWORD *)(v9 + 312) = v30;
          *v17 = v10 + 304;
          *v30 = v17;
          *(_QWORD *)(v10 + 312) = v17;
          FxNonPagedObject::Unlock((FxNonPagedObject *)v10, v31);
          return (unsigned int)v23;
        }
      }
    }
    __fastfail(3u);
  }
  return (unsigned int)v23;
}
