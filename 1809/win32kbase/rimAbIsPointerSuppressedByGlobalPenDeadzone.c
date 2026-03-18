/*
 * XREFs of rimAbIsPointerSuppressedByGlobalPenDeadzone @ 0x1C01101B8
 * Callers:
 *     rimAbSuppressLowerRankActivityInFrame @ 0x1C0110BB0 (rimAbSuppressLowerRankActivityInFrame.c)
 * Callees:
 *     rimAbIsPointInGlobalPenDeadzone @ 0x1C010FFF0 (rimAbIsPointInGlobalPenDeadzone.c)
 *     WPP_RECORDER_SF_dDdd @ 0x1C0111884 (WPP_RECORDER_SF_dDdd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimAbIsPointerSuppressedByGlobalPenDeadzone(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int IsPointInGlobalPenDeadzone; // edi
  __int64 v7; // r8
  int v8; // edx
  int v9; // r8d
  int v10; // r9d
  __int128 v12; // [rsp+50h] [rbp-18h] BYREF

  IsPointInGlobalPenDeadzone = 0;
  if ( !gDeviceArbitrationType )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) <= 3 )
  {
    v7 = *(_QWORD *)(a3 + 40);
    v12 = *(_OWORD *)(a2 + 176);
    IsPointInGlobalPenDeadzone = rimAbIsPointInGlobalPenDeadzone(a1, &v12, v7);
    if ( IsPointInGlobalPenDeadzone )
      WPP_RECORDER_SF_dDdd(*(_DWORD *)a3, v8, v9, v10);
  }
  return IsPointInGlobalPenDeadzone;
}
