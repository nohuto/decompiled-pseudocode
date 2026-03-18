/*
 * XREFs of PopSetPowerSettingValueAcDc @ 0x1406A09DC
 * Callers:
 *     PopScanIdleList @ 0x1400EDD84 (PopScanIdleList.c)
 *     PdcPoLowPower @ 0x14019B770 (PdcPoLowPower.c)
 *     PopErratumUpdateCallback @ 0x1402F7580 (PopErratumUpdateCallback.c)
 *     PopSessionWinlogonNotification @ 0x1405B5070 (PopSessionWinlogonNotification.c)
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 *     PopEvaluateGlobalUserStatus @ 0x140724200 (PopEvaluateGlobalUserStatus.c)
 *     PopBatteryApplyCompositeState @ 0x14073857C (PopBatteryApplyCompositeState.c)
 *     PopUpdateConsoleDisplayState @ 0x14073A74C (PopUpdateConsoleDisplayState.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x1407473D0 (PopWnfSprActiveSessionChangeCallback.c)
 *     PopWnfMixedRealityCallback @ 0x140747D30 (PopWnfMixedRealityCallback.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14076A398 (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopMonitorProcessLoop @ 0x1407873C8 (PopMonitorProcessLoop.c)
 *     PopEsPublishState @ 0x140789B40 (PopEsPublishState.c)
 *     PopSetAwayModeStatus @ 0x1408A8968 (PopSetAwayModeStatus.c)
 *     PdcPoReportLidState @ 0x1408AB960 (PdcPoReportLidState.c)
 *     PdcPoSetPowerSettingValue @ 0x1408ABAD0 (PdcPoSetPowerSettingValue.c)
 *     PopPdcIdleResiliencyCallback @ 0x1408ABEAC (PopPdcIdleResiliencyCallback.c)
 *     PopSetWin32kDisplayTimeout @ 0x1408B61F4 (PopSetWin32kDisplayTimeout.c)
 *     PopUpdateInputControllerState @ 0x1408B62CC (PopUpdateInputControllerState.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1406A12E8 (PopSetPowerSettingValue.c)
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
