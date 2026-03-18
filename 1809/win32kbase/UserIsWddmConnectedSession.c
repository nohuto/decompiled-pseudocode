/*
 * XREFs of UserIsWddmConnectedSession @ 0x1C0016E18
 * Callers:
 *     NtUserDisplayConfigSetDeviceInfo @ 0x1C0003570 (NtUserDisplayConfigSetDeviceInfo.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0013DC0 (NtUserDisplayConfigGetDeviceInfo.c)
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C00141B0 (DrvDisplayConfigGetDeviceInfo.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C0014A58 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     UpdateGraphicsDeviceList @ 0x1C0016194 (UpdateGraphicsDeviceList.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C00161E0 (DrvUpdateGraphicsDeviceList.c)
 *     NtUserQueryDisplayConfig @ 0x1C004A2B0 (NtUserQueryDisplayConfig.c)
 *     DrvChangeDisplaySettingsPreValidate @ 0x1C004BD5C (DrvChangeDisplaySettingsPreValidate.c)
 *     DrvSetDisplayConfig @ 0x1C004C710 (DrvSetDisplayConfig.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00548D8 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     EngQueryW32kCddInterface @ 0x1C008C130 (EngQueryW32kCddInterface.c)
 *     DrvSetDisplayConfigValidateParams @ 0x1C00AFBC0 (DrvSetDisplayConfigValidateParams.c)
 *     ?Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2074 (-Win32kPnpNotify@@YAJPEAU_VIDEO_WIN32K_CALLBACKS_PARAMS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     VideoPortCalloutThread @ 0x1C00E2B60 (VideoPortCalloutThread.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C00EE9A0 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSetDisplayConfig @ 0x1C00F1220 (NtUserSetDisplayConfig.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingWddm @ 0x1C008EC74 (UserRemoteConnectedSessionUsingWddm.c)
 */

__int64 UserIsWddmConnectedSession()
{
  unsigned int v0; // r8d

  if ( !gProtocolType || (unsigned int)UserRemoteConnectedSessionUsingWddm() )
    return 1;
  return v0;
}
