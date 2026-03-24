/*
 * XREFs of PopWriteBsdPowerTransition @ 0x14071C468
 * Callers:
 *     PopSetSleepMarker @ 0x1406DD1BC (PopSetSleepMarker.c)
 *     NtInitiatePowerAction @ 0x1406DDED0 (NtInitiatePowerAction.c)
 *     PopClearSystemShutdownMarker @ 0x1406E01FC (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x1406E0274 (PopClearSleepMarker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x1406E27B0 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1406E27F0 (PopSetUserShutdownMarkerWorker.c)
 *     PopBatteryApplyCompositeState @ 0x14071A148 (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x14071C258 (PopUpdateConsoleDisplayState.c)
 *     PopClearConnectedStandbyMarker @ 0x140865EC8 (PopClearConnectedStandbyMarker.c)
 *     PopRecordLidState @ 0x140865F88 (PopRecordLidState.c)
 *     PopSetCleanShutdownMarker @ 0x14086627C (PopSetCleanShutdownMarker.c)
 *     PopSetConnectedStandbyMarker @ 0x1408662B0 (PopSetConnectedStandbyMarker.c)
 *     PdcPoRecordButton @ 0x14086EDC0 (PdcPoRecordButton.c)
 * Callees:
 *     RtlComputeCrc32 @ 0x14015B510 (RtlComputeCrc32.c)
 *     RtlpSystemBootStatusRequest @ 0x14071C4D4 (RtlpSystemBootStatusRequest.c)
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
