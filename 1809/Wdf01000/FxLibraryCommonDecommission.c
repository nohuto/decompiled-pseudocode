/*
 * XREFs of FxLibraryCommonDecommission @ 0x1C0043A5C
 * Callers:
 *     LibraryDecommission @ 0x1C002FFB0 (LibraryDecommission.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C00444CC (McGenEventUnregister.c)
 *     FxUninitializeBugCheckDriverInfo @ 0x1C0092AB4 (FxUninitializeBugCheckDriverInfo.c)
 */

__int64 __fastcall FxLibraryCommonDecommission()
{
  unsigned __int64 *v0; // rcx

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: enter\n");
  }
  if ( unk_1C00ABE51 )
  {
    IoWMIRegistrationControl(&WPP_GLOBAL_WDF_Control, 0x80000002);
    unk_1C00ABE51 = 0;
  }
  EtwUnregister(Tlgg_TelemetryProviderProv.RegHandle);
  Tlgg_TelemetryProviderProv.RegHandle = 0LL;
  Tlgg_TelemetryProviderProv.LevelPlus1 = 0;
  McGenEventUnregister(v0);
  if ( stru_1C00ABE58.m_PoolToFree )
  {
    ExFreePoolWithTag(stru_1C00ABE58.m_PoolToFree, 0);
    stru_1C00ABE58.m_PoolToFree = 0LL;
  }
  stru_1C00ABE58.m_DriverUsage = 0LL;
  stru_1C00ABE58.m_Number = 0;
  FxUninitializeBugCheckDriverInfo();
  unk_1C00ABDF0 = 0;
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: exit\n");
  }
  return 0LL;
}
