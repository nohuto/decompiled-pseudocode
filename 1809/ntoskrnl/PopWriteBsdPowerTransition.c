/*
 * XREFs of PopWriteBsdPowerTransition @ 0x14071D708
 * Callers:
 *     PopSetSleepMarker @ 0x1406DE45C (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x1406DF170 (NtInitiatePowerAction.c)
 *     PopClearSystemShutdownMarker @ 0x1406E149C (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x1406E1514 (PopClearSleepMarker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1406E3A50 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1406E3A90 (PopSetUserShutdownMarkerWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x14071D4F8 (PopUpdateConsoleDisplayState.c)
 *     PopClearConnectedStandbyMarker @ 0x140867128 (PopClearConnectedStandbyMarker.c)
 *     PopRecordLidState @ 0x1408671E8 (PopRecordLidState.c)
 *     PopSetCleanShutdownMarker @ 0x1408674DC (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x140867510 (PopSetConnectedStandbyMarker.c)
 *     PdcPoRecordButton @ 0x140870020 (PdcPoRecordButton.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14015B610 (RtlComputeCrc32.c)
 *     RtlpSystemBootStatusRequest @ 0x14071D774 (RtlpSystemBootStatusRequest.c)
 */

__int64 PopWriteBsdPowerTransition()
{
  int v1; // [rsp+20h] [rbp-28h] BYREF
  __int128 *v2; // [rsp+28h] [rbp-20h]
  int v3; // [rsp+30h] [rbp-18h]

  *(_QWORD *)&Buffer = MEMORY[0xFFFFF78000000014];
  *((_DWORD *)&Buffer + 2) = RtlComputeCrc32(0, &Buffer, 8u);
  v1 = 7;
  v2 = &PopBsdPowerTransition;
  v3 = 32;
  return ((__int64 (__fastcall *)(__int64, int *, __int64, _QWORD))RtlpSystemBootStatusRequest)(32LL, &v1, 1LL, 0LL);
}
