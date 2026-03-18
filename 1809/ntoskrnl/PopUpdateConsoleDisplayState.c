/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x14071C278
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x1409B2C10 (PoInitSystem.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     ZwUpdateWnfStateData @ 0x1401BBA50 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x140589E14 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x14058AA3C (PopSetPowerSettingValueAcDc.c)
 *     PopSpoilBatteryEstimate @ 0x14071C358 (PopSpoilBatteryEstimate.c)
 *     PopWriteBsdPowerTransition @ 0x14071C488 (PopWriteBsdPowerTransition.c)
 *     PopDiagTraceConsoleDisplayState @ 0x14071C54C (PopDiagTraceConsoleDisplayState.c)
 */

__int64 __fastcall PopUpdateConsoleDisplayState(int a1)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 result; // rax
  int v6; // [rsp+50h] [rbp+8h] BYREF

  v1 = a1;
  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
    BYTE14(PopBsdPowerTransition) = BYTE14(PopBsdPowerTransition) & 0x3F | ((v1 + 1) << 6);
    PopWriteBsdPowerTransition(v3, v2, v4);
    PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
    PopCheckResiliencyScenarios();
    v6 = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4LL, &v6);
    v6 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4LL, &v6);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v6, 4LL);
    return PopSpoilBatteryEstimate(0LL);
  }
  return result;
}
