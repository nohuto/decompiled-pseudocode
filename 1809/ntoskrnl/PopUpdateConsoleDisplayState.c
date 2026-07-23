/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x14071D4F8
 * Callers:
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x14058AE14 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058BA3C (PopSetPowerSettingValueAcDc.c)
 *     PopSpoilBatteryEstimate @ 0x14071D5D8 (PopSpoilBatteryEstimate.c)
 *     PopWriteBsdPowerTransition @ 0x14071D708 (PopWriteBsdPowerTransition.c)
 *     PopDiagTraceConsoleDisplayState @ 0x14071D7CC (PopDiagTraceConsoleDisplayState.c)
 */

__int64 __fastcall PopUpdateConsoleDisplayState(int a1)
{
  char v1; // bl
  __int64 result; // rax
  int Buffer; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1;
  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE14(PopBsdPowerTransition) = BYTE14(PopBsdPowerTransition) & 0x3F | ((v1 + 1) << 6);
    PopWriteBsdPowerTransition();
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    PopCheckResiliencyScenarios();
    Buffer = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4LL, &Buffer);
    Buffer = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4LL, &Buffer);
    ZwUpdateWnfStateData(&WNF_UBPM_CONSOLE_MONITOR, &Buffer, 4u, 0LL, 0LL, 0, 0);
    return PopSpoilBatteryEstimate(0LL);
  }
  return result;
}
