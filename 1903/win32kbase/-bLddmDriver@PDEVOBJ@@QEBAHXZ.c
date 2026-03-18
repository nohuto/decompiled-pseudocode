/*
 * XREFs of ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C003DF84
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0017D80 (GreCreateDisplayDC.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C003AFF4 (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C003B540 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     DrvGetWDDMAdapterInfo @ 0x1C003ECE0 (DrvGetWDDMAdapterInfo.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1C0041C40 (DxgkEngFindViewDesktopPosition.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C0043C20 (DrvNotifyModeChangeStartStop.c)
 *     GreSuspendDirectDraw @ 0x1C0043EF0 (GreSuspendDirectDraw.c)
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C0044074 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C004537C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00479C0 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C00A1DB0 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     ?DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z @ 0x1C012B778 (-DrvUpdateDpiInfoOnOptimizedModeChange@@YAJPEAU_MDEV@@PEAE@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C012F550 (NtGdiGetGammaRampCapability.c)
 *     NtHWCursorUpdatePointer @ 0x1C0130590 (NtHWCursorUpdatePointer.c)
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
