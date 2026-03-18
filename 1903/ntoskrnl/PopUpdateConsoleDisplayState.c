/*
 * XREFs of PopUpdateConsoleDisplayState @ 0x14073A74C
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     ZwUpdateWnfStateData @ 0x1401C39D0 (ZwUpdateWnfStateData.c)
 *     PopCheckResiliencyScenarios @ 0x1406A0614 (PopCheckResiliencyScenarios.c)
 *     PopSetPowerSettingValueAcDc @ 0x1406A09DC (PopSetPowerSettingValueAcDc.c)
 *     PopUpdateLastUserInputTime @ 0x14073A824 (PopUpdateLastUserInputTime.c)
 *     PopSpoilBatteryEstimate @ 0x14073A86C (PopSpoilBatteryEstimate.c)
 *     PopRecordDisplayState @ 0x14073A99C (PopRecordDisplayState.c)
 *     PopDiagTraceConsoleDisplayState @ 0x14073A9E8 (PopDiagTraceConsoleDisplayState.c)
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
    dword_140428210 = a1;
    PopReleaseRwLock((ULONG_PTR)&PopSystemIdleLock);
  }
}
