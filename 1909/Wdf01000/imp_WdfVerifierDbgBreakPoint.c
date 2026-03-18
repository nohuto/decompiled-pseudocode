/*
 * XREFs of imp_WdfVerifierDbgBreakPoint @ 0x1C004ACF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002F850 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_sl @ 0x1C004AB50 (WPP_IFR_SF_sl.c)
 */

void __fastcall imp_WdfVerifierDbgBreakPoint(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  const _GUID *v5; // [rsp+20h] [rbp-28h]

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  WPP_IFR_SF_sl(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (_BYTE)DriverGlobals + 16,
    a3,
    a4,
    v5,
    DriverGlobals->DriverName,
    *(&DriverGlobals[-3].DisplaceDriverUnload + 6));
  FxVerifierDbgBreakPoint(DriverName);
}
