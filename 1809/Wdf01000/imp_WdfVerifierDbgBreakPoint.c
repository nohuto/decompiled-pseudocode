/*
 * XREFs of imp_WdfVerifierDbgBreakPoint @ 0x1C004B3B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C00343B4 (WPP_IFR_SF_.c)
 */

void __fastcall imp_WdfVerifierDbgBreakPoint(_WDF_DRIVER_GLOBALS *DriverGlobals)
{
  _FX_DRIVER_GLOBALS *DriverName; // rcx

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( DriverName->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  else
    WPP_IFR_SF_(DriverName, 3u, 0x11u, 0xAu, WPP_VerifierAPI_cpp_Traceguids);
}
