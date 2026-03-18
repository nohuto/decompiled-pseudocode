/*
 * XREFs of imp_WdfRequestUnmarkCancelable @ 0x1C00128E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0050968 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00C2BDC (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1C00C37AC (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 */

__int64 __fastcall imp_WdfRequestUnmarkCancelable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned __int8 a3)
{
  unsigned __int64 v4; // rbx
  FxIoQueue *Offset; // rcx
  _FX_DRIVER_GLOBALS *v6; // rbp
  FxIoQueue *v7; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v9; // r8
  _IRP *v10; // rcx
  _FX_DRIVER_GLOBALS *v11; // r15
  _FX_DRIVER_GLOBALS *v12; // rdx
  _LIST_ENTRY *p_ListEntry; // rax
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // r8
  FxRequest_vtbl *v16; // rax
  int v17; // ebp
  FxVerifierLock *v19; // rcx
  const void *_a1; // rdx
  FxVerifierLock *v21; // rcx
  unsigned __int8 PreviousIrql; // [rsp+78h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+80h] [rbp+18h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v4 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  Offset = 0LL;
  if ( (Request & 1) != 0 )
  {
    Offset = (FxIoQueue *)*(unsigned __int16 *)v4;
    v4 -= (unsigned __int64)Offset;
  }
  if ( *(_WORD *)(v4 + 8) == 4104 )
  {
    pRequest = (FxRequest *)v4;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v4, (void **)&pRequest, (void *)Request, 0x1008u, (unsigned __int16)Offset);
    v4 = (unsigned __int64)pRequest;
  }
  v6 = *(_FX_DRIVER_GLOBALS **)(v4 + 16);
  if ( *(_BYTE *)(v4 + 214) || (v7 = *(FxIoQueue **)(v4 + 248)) == 0LL )
  {
    WPP_IFR_SF_qL(v6, 2u, 0x10u, 0x53u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, 0xC0000010);
    FxVerifierDbgBreakPoint(v6);
    return 3221225488LL;
  }
  else
  {
    m_Globals = v7->m_Globals;
    if ( !m_Globals->FxVerifierOn
      || (v17 = FxIoQueue::Vf_VerifyRequestCancelable(Offset, m_Globals, (FxRequest *)v4, 0), v17 >= 0) )
    {
      if ( SLOBYTE(v7->m_ObjectFlags) < 0
        && (v19 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v19, &PreviousIrql, a3);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&v7->m_NPLock.m_Lock);
      }
      v10 = *(_IRP **)(v4 + 128);
      v11 = *(_FX_DRIVER_GLOBALS **)(v4 + 16);
      if ( !v10 )
        goto LABEL_34;
      v12 = v7->m_DriverCancelable.m_LockObject->m_Globals;
      if ( v12->FxVerifierOn )
      {
        FxIrpQueue::Vf_VerifyRemoveIrpFromQueueByContext(
          &v7->m_DriverCancelable,
          v12,
          (_IO_CSQ_IRP_CONTEXT *)(v4 + 120));
        v10 = *(_IRP **)(v4 + 128);
      }
      if ( _InterlockedExchange64((volatile __int64 *)&v10->CancelRoutine, 0LL) )
      {
        p_ListEntry = &v10->Tail.Overlay.ListEntry;
        Flink = v10->Tail.Overlay.ListEntry.Flink;
        if ( (void **)Flink->Blink != &v10->Tail.CompletionKey + 6
          || (Blink = v10->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
        {
          __fastfail(3u);
        }
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        v10->Tail.Overlay.ListEntry.Blink = &v10->Tail.Overlay.ListEntry;
        p_ListEntry->Flink = p_ListEntry;
        --v7->m_DriverCancelable.m_RequestCount;
        *(_QWORD *)(v4 + 128) = 0LL;
        v10->Tail.Overlay.DriverContext[3] = 0LL;
        if ( v11->FxVerifierOn && !*(_QWORD *)(v4 + 224) )
        {
          _a1 = (const void *)(v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(v4 + 10) )
            _a1 = 0LL;
          WPP_IFR_SF_q(v11, 2u, 0x10u, 0x29u, WPP_FxRequest_cpp_Traceguids, _a1);
          FxVerifierDbgBreakPoint(v11);
        }
        v16 = *(FxRequest_vtbl **)v4;
        *(_QWORD *)(v4 + 224) = 0LL;
        v16->Release((FxObject *)v4, (void *)1969583441, 2030, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        v17 = 0;
        *(_QWORD *)(v4 + 184) = 0LL;
      }
      else
      {
LABEL_34:
        v17 = -1073741536;
      }
      if ( SLOBYTE(v7->m_ObjectFlags) < 0
        && (v21 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v21, PreviousIrql, v9);
      }
      else
      {
        KeReleaseSpinLock(&v7->m_NPLock.m_Lock, PreviousIrql);
      }
      if ( m_Globals->FxVerifierOn )
      {
        if ( v17 >= 0 )
          FxRequestBase::ClearVerifierFlags((FxRequestBase *)v4, 16);
      }
    }
    return (unsigned int)v17;
  }
}
