/*
 * XREFs of UserIsWddmConnectedSession @ 0x1C004FD20
 * Callers:
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C003AFF4 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     GreSuspendDirectDraw @ 0x1C0043EF0 (GreSuspendDirectDraw.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0046570 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C004C4E0 (DrvChangeDisplaySettingsPreValidate.c)
 *     NtUserQueryDisplayConfig @ 0x1C004DAD0 (NtUserQueryDisplayConfig.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C004DE80 (NtUserDisplayConfigGetDeviceInfo.c)
 *     UpdateGraphicsDeviceList @ 0x1C004F09C (UpdateGraphicsDeviceList.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C004F0F0 (DrvUpdateGraphicsDeviceList.c)
 *     DrvSetDisplayConfig @ 0x1C00504D0 (DrvSetDisplayConfig.c)
 *     EngQueryW32kCddInterface @ 0x1C009F1D0 (EngQueryW32kCddInterface.c)
 *     DrvSetWddmDeviceMonitorPowerState @ 0x1C00ADCA4 (DrvSetWddmDeviceMonitorPowerState.c)
 *     DrvSetMonitorPowerState @ 0x1C00B8DA0 (DrvSetMonitorPowerState.c)
 *     ?DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z @ 0x1C00BE9A0 (-DrvDisplayConfigGetDeviceInfoInternal@@YAJPEAUDISPLAYCONFIG_DEVICE_INFO_HEADER@@_N@Z.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00C1880 (DrvSetDisplayConfigValidateParams.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0108170 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C0109510 (VideoPortCalloutThread.c)
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0116F40 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0117860 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C011BCD0 (NtUserSetDisplayConfig.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C004D6D0 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 UserIsWddmConnectedSession()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( !gProtocolType || (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 1;
  return v0;
}
