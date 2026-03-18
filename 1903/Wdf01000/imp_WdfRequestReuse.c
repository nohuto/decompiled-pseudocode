/*
 * XREFs of imp_WdfRequestReuse @ 0x1C00160F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0016190 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     WPP_IFR_SF_DDd @ 0x1C002F8AC (WPP_IFR_SF_DDd.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0058664 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C005B7E4 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfRequestReuse(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        _WDF_REQUEST_REUSE_PARAMS *ReuseParams)
{
  __int64 Offset; // r8
  FxRequest *v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  _WDF_BIND_INFO *WdfBindInfo; // rax
  int _a3; // eax
  unsigned int _a2; // edx
  void *retaddr; // [rsp+48h] [rbp+0h]
  FxRequest *pRequest; // [rsp+58h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  v5 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(v5->__vftable);
    v5 = (FxRequest *)((char *)v5 - Offset);
  }
  if ( v5->m_Type == 4104 )
  {
    pRequest = v5;
  }
  else
  {
    FxObjectHandleGetPtrQI(v5, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    v5 = pRequest;
  }
  m_Globals = v5->m_Globals;
  if ( !ReuseParams )
    FxVerifierNullBugCheck(v5->m_Globals, retaddr);
  if ( ReuseParams->Size == 24 )
  {
    WdfBindInfo = m_Globals->WdfBindInfo;
    if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
      _a3 = -4;
    else
      _a3 = -2;
    _a2 = ReuseParams->Flags;
    if ( (_a2 & _a3) != 0 )
    {
      WPP_IFR_SF_DDd(m_Globals, _a2, 0x10u, 0xDu, WPP_FxRequestApi_cpp_Traceguids, _a2, _a3, -1073741811);
      return -1073741811;
    }
    else
    {
      return FxRequest::Reuse(v5, ReuseParams);
    }
  }
  else
  {
    WPP_IFR_SF_DDd(
      m_Globals,
      ReuseParams->Size,
      0x10u,
      0xCu,
      WPP_FxRequestApi_cpp_Traceguids,
      ReuseParams->Size,
      24,
      -1073741811);
    return -1073741811;
  }
}
