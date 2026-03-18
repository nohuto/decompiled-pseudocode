/*
 * XREFs of imp_WdfRequestCompleteWithInformation @ 0x1C0005F50
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008280 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C002FD20 (WPP_IFR_SF_qqqd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     Vf_VerifyRequestComplete @ 0x1C00C5E2C (Vf_VerifyRequestComplete.c)
 */

void __fastcall imp_WdfRequestCompleteWithInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        int RequestStatus,
        unsigned __int64 Information)
{
  unsigned __int64 v6; // rbx
  __int64 Offset; // rcx
  _FX_DRIVER_GLOBALS *v8; // rcx
  FxDeviceBase *v9; // rdi
  _FX_DRIVER_GLOBALS *v10; // rcx
  char m_Globals_high; // al
  const void *_a1; // rdx
  FxRequest *pRequest; // [rsp+68h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  v6 = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(Offset) = 0;
  if ( (Request & 1) != 0 )
  {
    Offset = *(unsigned __int16 *)v6;
    v6 -= Offset;
  }
  if ( *(_WORD *)(v6 + 8) == 4104 )
  {
    pRequest = (FxRequest *)v6;
  }
  else
  {
    FxObjectHandleGetPtrQI((FxObject *)v6, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v6 = (unsigned __int64)pRequest;
  }
  v8 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
  if ( v8->FxVerifierOn )
  {
    if ( Vf_VerifyRequestComplete(v8, (FxRequest *)v6) < 0 )
      return;
    v6 = (unsigned __int64)pRequest;
  }
  *(_QWORD *)(*(_QWORD *)(v6 + 152) + 56LL) = Information;
  v9 = *(FxDeviceBase **)(v6 + 96);
  v10 = *(_FX_DRIVER_GLOBALS **)(v6 + 16);
  if ( v10->FxVerboseOn )
  {
    _a1 = (const void *)(v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(v6 + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_qqqd(
      v10,
      5u,
      0x10u,
      0xBu,
      WPP_FxRequest_hpp_Traceguids,
      _a1,
      *(const void **)(v6 + 152),
      *(_QWORD *)(*(_QWORD *)(v6 + 152) + 56LL),
      RequestStatus);
  }
  if ( v9 )
    m_Globals_high = HIBYTE(v9[1].m_Globals);
  else
    m_Globals_high = 0;
  *(_BYTE *)(v6 + 236) = m_Globals_high;
  FxRequest::CompleteInternal((FxRequest *)v6, RequestStatus);
}
