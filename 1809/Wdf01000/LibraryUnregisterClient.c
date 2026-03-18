/*
 * XREFs of LibraryUnregisterClient @ 0x1C0030180
 * Callers:
 *     <none>
 * Callees:
 *     FxLibraryCommonUnregisterClient @ 0x1C0043F8C (FxLibraryCommonUnregisterClient.c)
 */

int __fastcall LibraryUnregisterClient(_WDF_BIND_INFO *Info, _WDF_DRIVER_GLOBALS *WdfDriverGlobals)
{
  return FxLibraryCommonUnregisterClient(Info, WdfDriverGlobals);
}
