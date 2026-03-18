/*
 * XREFs of imp_WdfRequestComplete @ 0x1C00083D0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008760 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0017FBC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00308F8 (WPP_IFR_SF_qqqd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B3B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Vf_VerifyRequestComplete @ 0x1C00C1E0C (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestComplete(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request, int RequestStatus)
{
  unsigned __int64 v4; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v6; // rcx
  FxDeviceBase *v7; // rdi
  _FX_DRIVER_GLOBALS *v8; // rcx
  char m_Globals_high; // al
  const void *_a1; // rdx
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v4 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v4;
    v4 -= Offset;
  }
  if ( *(_WORD *)(v4 + 8) == 4104 )
  {
    pRequest = (FxRequest *)v4;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v4, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v4 = (unsigned __int64)pRequest;
  }
  v6 = *(_FX_DRIVER_GLOBALS **)(v4 + 16);
  if ( v6->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(v6, (FxRequest *)v4) < 0 )
      return;
    v4 = (unsigned __int64)pRequest;
  }
  v7 = *(FxDeviceBase **)(v4 + 96);
  v8 = *(_FX_DRIVER_GLOBALS **)(v4 + 16);
  if ( v8->FxVerboseOn )
  {
    _a1 = (const void *)(v4 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v4 + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_qqqd(
      v8,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      *(const void **)(v4 + 152),
      *(_QWORD *)(*(_QWORD *)(v4 + 152) + 56LL),
      RequestStatus);
  }
  if ( v7 )
    m_Globals_high = HIBYTE(v7[1].m_Globals);
  else
    m_Globals_high = 0;
  *(_BYTE *)(v4 + 236) = m_Globals_high;
  FxRequest::CompleteInternal((FxRequest *)v4, RequestStatus);
}
