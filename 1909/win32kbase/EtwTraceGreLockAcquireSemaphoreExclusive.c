/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0072010
 * Callers:
 *     ?bDeleteDC@XDCOBJ@@QEAAHH@Z @ 0x1C001A294 (-bDeleteDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00258B0 (-bLock@DEVLOCKOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C390 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C8A0 (-vLockNoDrawing@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreLockDwmState @ 0x1C002CA20 (GreLockDwmState.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002E230 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     DrvEnumDisplaySettings @ 0x1C0038F60 (DrvEnumDisplaySettings.c)
 *     DrvpDisplayConfigGetDisplayDeviceInfo @ 0x1C00394CC (DrvpDisplayConfigGetDisplayDeviceInfo.c)
 *     hdcOpenDCW @ 0x1C0039EC0 (hdcOpenDCW.c)
 *     DrvGetHDEV @ 0x1C003A200 (DrvGetHDEV.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C003D888 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvNotifyModeChangeStartStop @ 0x1C003E70C (DrvNotifyModeChangeStartStop.c)
 *     ?DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z @ 0x1C003F7D0 (-DxgkEngOpenAdapterFromHdc@@YAJPEAU_D3DKMT_OPENADAPTERFROMHDC@@@Z.c)
 *     GreLockSprite @ 0x1C0040290 (GreLockSprite.c)
 *     GreLockDisplayDevice @ 0x1C0040320 (GreLockDisplayDevice.c)
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0040680 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ?vLock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C00409D8 (-vLock@MULTIDEVLOCKOBJ@@QEAAXXZ.c)
 *     DrvEnableMDEV @ 0x1C0040C0C (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0040ED0 (DrvDisableMDEV.c)
 *     ApplyPathsModality @ 0x1C0041800 (ApplyPathsModality.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0041C3C (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C004279C (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0042E30 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 *     ?DrvAcquireChangeDisplaySettingLocks@@YAXXZ @ 0x1C0044734 (-DrvAcquireChangeDisplaySettingLocks@@YAXXZ.c)
 *     DrvDestroyMDEV @ 0x1C00448A4 (DrvDestroyMDEV.c)
 *     ?vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z @ 0x1C0068160 (-vUnreferencePdevWorker@@YAXPEAUtagUNREFDATA@@@Z.c)
 *     ldevUnloadImage @ 0x1C006B200 (ldevUnloadImage.c)
 *     ldevLoadDriver @ 0x1C006B340 (ldevLoadDriver.c)
 *     ldevLoadInternal @ 0x1C006C880 (ldevLoadInternal.c)
 *     ?hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z @ 0x1C008CED0 (-hbmCreateClone@@YAPEAUHBITMAP__@@PEAVSURFACE@@KK@Z.c)
 *     GreSfmDwmShutdown @ 0x1C0096A50 (GreSfmDwmShutdown.c)
 *     ?vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C009A2D0 (-vLockGammaRamp@DEVLOCKOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreLockPointer @ 0x1C00A4420 (GreLockPointer.c)
 *     DrvInitializeDxgkrnlDpiCache @ 0x1C00A5B00 (DrvInitializeDxgkrnlDpiCache.c)
 *     GreLockDynamicModeChange @ 0x1C00A7650 (GreLockDynamicModeChange.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00AA5D0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00AE4E4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     DrvCleanupAndDestroyMDEV @ 0x1C00B4844 (DrvCleanupAndDestroyMDEV.c)
 *     DrvEscapeRemoteDrivers @ 0x1C00B5B30 (DrvEscapeRemoteDrivers.c)
 *     HDXDrvEscape @ 0x1C00B5D20 (HDXDrvEscape.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00B5FCC (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C00B6E70 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C00BB464 (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01216B4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C0122540 (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z @ 0x1C01274B0 (-DrvBackoutMDEV@@YAXPEAU_MDEV@@K@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C012781C (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 *     ?DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C01288FC (-DrvUpdateDisplayModeInMdev@@YAHPEAU_MDEV@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0128D80 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 *     DrvCleanupGraphicsDevices @ 0x1C012A674 (DrvCleanupGraphicsDevices.c)
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C012A920 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C012AF30 (DrvDisplayConfigSetScaleFactorOverride.c)
 *     DrvDxgkUpgradeLegacyDpiSettings @ 0x1C012B290 (DrvDxgkUpgradeLegacyDpiSettings.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C012B584 (DrvFunctionalizeDisplayConfig.c)
 *     GreLockVisRgnWithDmcLockAcquiredEx @ 0x1C012E960 (GreLockVisRgnWithDmcLockAcquiredEx.c)
 *     EngDeleteDriverObj @ 0x1C012F6B0 (EngDeleteDriverObj.c)
 * Callees:
 *     McTemplateK0pqz @ 0x1C012FEB8 (McTemplateK0pqz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreExclusive(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    if ( ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return McTemplateK0pqz(a1, a2, a3, a2, a3, a1);
  }
  return result;
}
