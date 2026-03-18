/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x14069D520
 * Callers:
 *     PopScanIdleList @ 0x1400D5214 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x14019BDD0 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x1402F7030 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x1405B5450 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     PopEvaluateGlobalUserStatus @ 0x1407260A0 (PopEvaluateGlobalUserStatus.c)
 *     PopUpdateConsoleDisplayState @ 0x1407304D4 (PopUpdateConsoleDisplayState.c)
 *     PopBatteryApplyCompositeState @ 0x14073A7DC (PopBatteryApplyCompositeState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x1407492D0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x140749C30 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140758BD0 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x140789728 (PopMonitorProcessLoop.c)
 *     PopEsPublishState @ 0x14078BFA0 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x1408A81CC (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x1408AB1C0 (PdcPoReportLidState.c)
 *     PdcPoSetPowerSettingValue @ 0x1408AB330 (PdcPoSetPowerSettingValue.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408AB70C (PopPdcIdleResiliencyCallback.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408B5AC4 (PopSetWin32kDisplayTimeout.c)
 *     PopUpdateInputControllerState @ 0x1408B5B9C (PopUpdateInputControllerState.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x14069DE28 (PopSetPowerSettingValue.c)
 */

__int64 __fastcall PopSetPowerSettingValueAcDc(LPCGUID SettingGuid, __int64 a2, void *Src)
{
  int v5; // eax
  int v6; // ebp
  int v7; // eax

  v5 = PopSetPowerSettingValue(SettingGuid, Src);
  v6 = 0;
  if ( v5 < 0 )
    v6 = v5;
  v7 = PopSetPowerSettingValue(SettingGuid, Src);
  if ( v7 < 0 && v6 >= 0 )
    return (unsigned int)v7;
  return (unsigned int)v6;
}
