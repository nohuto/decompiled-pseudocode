/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x14058AA3C
 * Callers:
 *     PopScanIdleList @ 0x140010050 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x140191600 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x1402DB9B0 (PopErratumUpdateCallback.c)
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     PopEvaluateGlobalUserStatus @ 0x1406DCAB8 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x14071A168 (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x14071C278 (PopUpdateConsoleDisplayState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x14071ED70 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x14071EF10 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140747FC8 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopEsPublishState @ 0x140762CA4 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x14086C078 (PopSetAwayModeStatus.c)
 *     PopNotifyLidStateChange @ 0x14086C1F0 (PopNotifyLidStateChange.c)
 *     PdcPoSetPowerSettingValue @ 0x14086EF40 (PdcPoSetPowerSettingValue.c)
 *     PopPdcIdleResiliencyCallback @ 0x14086F288 (PopPdcIdleResiliencyCallback.c)
 *     PopMonitorProcessBrightnessAction @ 0x140877884 (PopMonitorProcessBrightnessAction.c)
 *     PopSessionWinlogonNotification @ 0x14087901C (PopSessionWinlogonNotification.c)
 *     PopSetWin32kDisplayTimeout @ 0x140879158 (PopSetWin32kDisplayTimeout.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x14058B338 (PopSetPowerSettingValue.c)
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
