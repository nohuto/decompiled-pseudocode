/*
 * XREFs of ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C60DC
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008280 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00145C8 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010E28 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0014164 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  __int64 v3; // rdx
  _FX_DRIVER_GLOBALS *v4; // rcx
  const void *v5; // r9
  __int16 v6; // ax
  const void *_a1; // rdx

  if ( FxDriverGlobals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)this, 0xBu)
     || FxDriverGlobals->FxVerifyDownlevel != (_BYTE)v5) )
  {
    v6 = *(_WORD *)(v3 + 10);
    _a1 = (const void *)(v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v6 )
      _a1 = v5;
    WPP_IFR_SF_q(v4, 2u, 0x10u, 0x32u, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}
