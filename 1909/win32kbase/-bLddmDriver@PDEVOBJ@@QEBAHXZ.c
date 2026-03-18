/*
 * XREFs of ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003FE08
 * Callers:
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00394CC (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C003D888 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     GreSuspendDirectDraw @ 0x1C003E4F0 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C003E674 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C003E70C (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1C003EC60 (DxgkEngFindViewDesktopPosition.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C003F580 (DrvGetWDDMAdapterInfo.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C003F7D0 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C009ED10 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C0128FC8 (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C012CDA0 (NtGdiGetGammaRampCapability.c)
 *     NtHWCursorUpdatePointer @ 0x1C012DDE0 (NtHWCursorUpdatePointer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bLddmDriver(PDEVOBJ *this)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)this + 2576LL);
  if ( ((v1 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    return (*(_DWORD *)(v1 + 160) >> 23) & 1;
  else
    return 0LL;
}
