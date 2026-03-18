/*
 * XREFs of imp_WdfIoQueueFindRequest @ 0x1C0003BA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0004610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0004E34 (WPP_IFR_SF_qL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0013F08 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z @ 0x1C001992C (-GetParameters@FxRequest@@QEAAJPEAU_WDF_REQUEST_PARAMETERS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dd @ 0x1C00305C0 (WPP_IFR_SF_dd.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C004B860 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B41C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C005C9C4 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C005CCDC (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C36C8 (-Vf_VerifyPeekRequest@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall imp_WdfIoQueueFindRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Queue,
        WDFREQUEST__ *TagRequest,
        WDFFILEOBJECT__ *FileObject,
        _WDF_REQUEST_PARAMETERS *Parameters,
        WDFREQUEST__ **OutRequest)
{
  unsigned __int8 v8; // r8
  FxRequestBase *v9; // rbp
  _FILE_OBJECT *m_FileObject; // r13
  FxIoQueue *Offset; // rcx
  unsigned __int64 v12; // rbx
  WDFREQUEST__ **v13; // r14
  _FX_DRIVER_GLOBALS *v14; // r12
  _WDF_REQUEST_PARAMETERS *v15; // r15
  bool v16; // zf
  _FX_DRIVER_GLOBALS *v17; // r12
  FxRequest *v18; // rsi
  unsigned __int8 v19; // r12
  $A3173470F8A533D5F67D6DF0520578B2 *v20; // rdx
  _QWORD *v21; // rcx
  bool v22; // r9
  _QWORD *v23; // r8
  FxRequestBase *v24; // r15
  int v25; // edi
  unsigned __int64 v26; // rbp
  $A3173470F8A533D5F67D6DF0520578B2 *v28; // r10
  int v29; // r8d
  _WDF_REQUEST_PARAMETERS *v30; // rdx
  __int16 v31; // ax
  const void *_a1; // rbx
  FxVerifierLock *v33; // rcx
  FxVerifierLock *v34; // rcx
  FxRequest *v35; // [rsp+40h] [rbp-58h]
  FxIoQueue *pQueue; // [rsp+48h] [rbp-50h] BYREF
  FxRequest *pTagRequest; // [rsp+50h] [rbp-48h] BYREF
  FxFileObject *pFO; // [rsp+58h] [rbp-40h] BYREF
  _FX_DRIVER_GLOBALS *v39; // [rsp+60h] [rbp-38h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+A8h] [rbp+10h] BYREF

  v8 = 0;
  pTagRequest = 0LL;
  v9 = 0LL;
  pFO = 0LL;
  m_FileObject = 0LL;
  if ( !Queue )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1003uLL);
  Offset = 0LL;
  v12 = ~Queue & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Queue & 1) != 0 )
  {
    Offset = (FxIoQueue *)*(unsigned __int16 *)v12;
    v12 -= (unsigned __int64)Offset;
  }
  if ( *(_WORD *)(v12 + 8) == 4099 )
  {
    pQueue = (FxIoQueue *)v12;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v12, (void **)&pQueue, (void *)Queue, 0x1003u, (unsigned __int16)Offset);
    v12 = (unsigned __int64)pQueue;
    v8 = 0;
  }
  v13 = OutRequest;
  v14 = *(_FX_DRIVER_GLOBALS **)(v12 + 16);
  if ( !OutRequest )
    FxVerifierNullBugCheck(v14, retaddr);
  if ( TagRequest )
  {
    FxObjectHandleGetPtr(v14, TagRequest, 0x1008u, (void **)&pTagRequest);
    v12 = (unsigned __int64)pQueue;
    v8 = 0;
  }
  if ( FileObject )
  {
    FxObjectHandleGetPtr(v14, FileObject, 0x1018u, (void **)&pFO);
    v8 = 0;
    v12 = (unsigned __int64)pQueue;
    m_FileObject = pFO->m_FileObject.m_FileObject;
  }
  v15 = Parameters;
  if ( Parameters && Parameters->Size < 0x28u )
  {
    WPP_IFR_SF_dd(v14, 2u, 0xDu, 0x11u, WPP_FxIoQueueApi_cpp_Traceguids, Parameters->Size, -1073741582);
    return 3221225714LL;
  }
  v16 = *(_DWORD *)(v12 + 180) == 3;
  v17 = *(_FX_DRIVER_GLOBALS **)(v12 + 16);
  v18 = pTagRequest;
  v39 = v17;
  v35 = 0LL;
  if ( !v16 )
  {
    v31 = *(_WORD *)(v12 + 10);
    _a1 = (const void *)(v12 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v25 = -1073741808;
    if ( !v31 )
      _a1 = 0LL;
    WPP_IFR_SF_qL(v17, 2u, 0xDu, 0x1Fu, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000010);
    FxVerifierDbgBreakPoint(v17);
    goto LABEL_28;
  }
  if ( pTagRequest )
  {
    if ( v17->FxVerifierOn )
    {
      v25 = FxIoQueue::Vf_VerifyPeekRequest(Offset, v17, pTagRequest);
      if ( v25 < 0 )
        goto LABEL_42;
    }
  }
  if ( *(char *)(v12 + 24) < 0 && (v33 = *(FxVerifierLock **)(v12 - 40)) != 0LL )
  {
    FxVerifierLock::Lock(v33, &PreviousIrql, v8);
    v19 = PreviousIrql;
  }
  else
  {
    v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 112));
    PreviousIrql = v19;
  }
  v20 = 0LL;
  v21 = (_QWORD *)(v12 + 192);
  v22 = 1;
  if ( v18 )
  {
    v20 = &v18->120;
    if ( v18 != (FxRequest *)-120LL )
      v22 = 0;
  }
  v23 = (_QWORD *)*v21;
  if ( (_QWORD *)*v21 == v21 )
  {
LABEL_19:
    if ( !v20 || v22 )
    {
      v24 = 0LL;
      v25 = -2147483622;
      goto LABEL_21;
    }
    v25 = -1073741275;
    goto LABEL_45;
  }
  while ( 1 )
  {
    if ( !*((_BYTE *)v23 - 100) )
    {
      v28 = ($A3173470F8A533D5F67D6DF0520578B2 *)*(v23 - 3);
      if ( !v22 )
      {
        v22 = v28 == v20;
        goto LABEL_62;
      }
      if ( !m_FileObject )
      {
        v29 = 447;
        goto LABEL_36;
      }
      if ( *(_FILE_OBJECT **)(v23[2] + 48LL) == m_FileObject )
        break;
    }
LABEL_62:
    v23 = (_QWORD *)*v23;
    if ( v23 == v21 )
      goto LABEL_19;
  }
  v29 = 432;
LABEL_36:
  v35 = (FxRequest *)&v28[-5];
  FxObject::AddRef((FxObject *)&v28[-5], 0LL, v29, "minkernel\\wdf\\framework\\shared\\core\\fxirpqueue.cpp");
  v25 = 0;
  if ( !v15 )
  {
LABEL_45:
    v24 = v35;
    goto LABEL_25;
  }
  v30 = v15;
  v24 = v35;
  v25 = FxRequest::GetParameters(v35, v30);
  if ( v25 == -2147483622 )
  {
LABEL_21:
    if ( !m_FileObject && !v18 && *(int *)(v12 + 224) > 0 )
      *(_BYTE *)(v12 + 373) = 1;
  }
LABEL_25:
  if ( *(char *)(v12 + 24) < 0 && (v34 = *(FxVerifierLock **)(v12 - 40)) != 0LL )
    FxVerifierLock::Unlock(v34, v19, (unsigned __int8)v23);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 112), v19);
  if ( v25 < 0 )
  {
LABEL_28:
    v26 = 0LL;
    goto LABEL_29;
  }
  if ( v39->FxVerifierOn )
    FxRequestBase::SetVerifierFlags(v24, 2);
  v9 = v24;
LABEL_42:
  if ( v25 < 0 || !v9->m_ObjectSize )
    goto LABEL_28;
  v26 = (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
LABEL_29:
  *v13 = (WDFREQUEST__ *)v26;
  return (unsigned int)v25;
}
