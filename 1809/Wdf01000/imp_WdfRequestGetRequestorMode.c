/*
 * XREFs of imp_WdfRequestGetRequestorMode @ 0x1C00047D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000AEA0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000AF00 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C2990 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

char __fastcall imp_WdfRequestGetRequestorMode(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  char RequestorMode; // di
  __int64 Offset; // rcx
  FxRequest *v4; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int IsNotCompleted; // eax
  unsigned __int8 PreviousIrql; // [rsp+58h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+60h] [rbp+18h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  RequestorMode = 1;
  LOWORD(Offset) = 0;
  v4 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v4->__vftable);
    v4 = (FxRequest *)((char *)v4 - Offset);
  }
  if ( v4->m_Type == 4104 )
  {
    pRequest = v4;
  }
  else
  {
    FxObjectHandleGetPtrQI(v4, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v4 = pRequest;
  }
  m_Globals = v4->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return v4->m_Irp.m_Irp->RequestorMode;
  FxNonPagedObject::Lock(v4, &PreviousIrql);
  if ( m_Globals->FxVerifierOn )
    IsNotCompleted = FxRequest::Vf_VerifyRequestIsNotCompleted(v4, m_Globals);
  else
    IsNotCompleted = 0;
  if ( IsNotCompleted >= 0 )
    RequestorMode = v4->m_Irp.m_Irp->RequestorMode;
  FxNonPagedObject::Unlock(v4, PreviousIrql);
  return RequestorMode;
}
