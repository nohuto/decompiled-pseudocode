/*
 * XREFs of ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C20C0
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0008760 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0050CF4 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C0010838 (WPP_IFR_SF_q.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00142E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0030430 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequest::Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  __int64 v3; // rdx
  const void *v4; // r9
  __int16 v5; // ax
  const void *_a1; // rdx

  if ( FxDriverGlobals->FxVerifierOn
    && (_FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(FxDriverGlobals, (unsigned int)this, 0xBu)
     || FxDriverGlobals->FxVerifyDownlevel != (_BYTE)v4) )
  {
    v5 = *(_WORD *)(v3 + 10);
    _a1 = (const void *)(v3 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v5 )
      _a1 = v4;
    WPP_IFR_SF_q(FxDriverGlobals, 2u, 0x10u, 0x32u, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
}
