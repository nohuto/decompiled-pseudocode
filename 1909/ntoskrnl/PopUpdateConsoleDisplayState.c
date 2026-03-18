/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x1407304D4
 * Callers:
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004B20 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400D6040 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1401C4550 (ZwUpdateWnfStateData.c)
 *     PopSetPowerSettingValueAcDc @ 0x14069D520 (PopSetPowerSettingValueAcDc.c)
 *     PopCheckResiliencyScenarios @ 0x14069EB24 (PopCheckResiliencyScenarios.c)
 *     PopUpdateLastUserInputTime @ 0x1407305AC (PopUpdateLastUserInputTime.c)
 *     PopSpoilBatteryEstimate @ 0x1407305F4 (PopSpoilBatteryEstimate.c)
 *     PopRecordDisplayState @ 0x140730724 (PopRecordDisplayState.c)
 *     PopDiagTraceConsoleDisplayState @ 0x140730770 (PopDiagTraceConsoleDisplayState.c)
 */

void __fastcall PopUpdateConsoleDisplayState(unsigned int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int v5; // [rsp+50h] [rbp+8h] BYREF

  if ( PopConsoleDisplayState != a1 )
  {
    PopConsoleDisplayState = a1;
    PopDiagTraceConsoleDisplayState();
    PopCheckResiliencyScenarios();
    v5 = PopConsoleDisplayState;
    PopSetPowerSettingValueAcDc(&GUID_CONSOLE_DISPLAY_STATE, 4LL, &v5);
    PopRecordDisplayState(a1);
    v5 = PopConsoleDisplayState != 0;
    PopSetPowerSettingValueAcDc(&GUID_MONITOR_POWER_ON, 4LL, &v5);
    ZwUpdateWnfStateData((__int64)&WNF_UBPM_CONSOLE_MONITOR, (__int64)&v5, 4LL);
    PopSpoilBatteryEstimate(0LL);
    PopAcquireRwLockExclusive((ULONG_PTR)&PopSystemIdleLock);
    PopUpdateLastUserInputTime(v3, v2, v4);
    dword_140428220 = a1;
    PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  }
}
