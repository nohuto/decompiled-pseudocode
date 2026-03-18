/*
 * XREFs of FxLibraryCommonDecommission @ 0x1C0042BE4
 * Callers:
 *     LibraryDecommission @ 0x1C002F3D0 (LibraryDecommission.c)
 * Callees:
 *     McGenEventUnregister @ 0x1C004364C (McGenEventUnregister.c)
 *     UninitializeTelemetryAssertsKM @ 0x1C0093198 (UninitializeTelemetryAssertsKM.c)
 *     FxUninitializeBugCheckDriverInfo @ 0x1C0094DB8 (FxUninitializeBugCheckDriverInfo.c)
 */

__int64 __fastcall FxLibraryCommonDecommission()
{
  unsigned __int64 *v0; // rcx

  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: enter\n");
  }
  if ( unk_1C00AEE81 )
  {
    IoWMIRegistrationControl(&WPP_GLOBAL_WDF_Control, 0x80000002);
    unk_1C00AEE81 = 0;
  }
  UninitializeTelemetryAssertsKM();
  EtwUnregister(Tlgg_TelemetryProviderProv.RegHandle);
  Tlgg_TelemetryProviderProv.RegHandle = 0LL;
  Tlgg_TelemetryProviderProv.LevelPlus1 = 0;
  McGenEventUnregister(v0);
  if ( stru_1C00AEE88.m_PoolToFree )
  {
    ExFreePoolWithTag(stru_1C00AEE88.m_PoolToFree, 0);
    stru_1C00AEE88.m_PoolToFree = 0LL;
  }
  stru_1C00AEE88.m_DriverUsage = 0LL;
  stru_1C00AEE88.m_Number = 0;
  FxUninitializeBugCheckDriverInfo();
  unk_1C00AEE20 = 0;
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "LibraryDecommission: exit\n");
  }
  return 0LL;
}
