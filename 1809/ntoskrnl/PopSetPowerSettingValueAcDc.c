/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x14058BA3C
 * Callers:
 *     PopScanIdleList @ 0x140010050 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x140191760 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x1402DBCA0 (PopErratumUpdateCallback.c)
 *     NtPowerInformation @ 0x14058D170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406DDD38 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x14071B3E8 (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x14071D4F8 (PopUpdateConsoleDisplayState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14071FFF0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x140720190 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140749198 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopEsPublishState @ 0x140763E74 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x14086D2B8 (PopSetAwayModeStatus.c)
 *     PopNotifyLidStateChange @ 0x14086D430 (PopNotifyLidStateChange.c)
 *     PdcPoSetPowerSettingValue @ 0x140870180 (PdcPoSetPowerSettingValue.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408704C8 (PopPdcIdleResiliencyCallback.c)
 *     PopMonitorProcessBrightnessAction @ 0x140878AC4 (PopMonitorProcessBrightnessAction.c)
 *     PopSessionWinlogonNotification @ 0x14087A25C (PopSessionWinlogonNotification.c)
 *     PopSetWin32kDisplayTimeout @ 0x14087A398 (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x14058C338 (PopSetPowerSettingValue.c)
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
