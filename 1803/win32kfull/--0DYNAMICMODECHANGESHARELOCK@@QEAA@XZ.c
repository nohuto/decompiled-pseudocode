/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C007A0B0
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0005354 (GreCreateBitmapFromDxSurface.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0008900 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreCreateDIBitmapReal @ 0x1C0016AA0 (GreCreateDIBitmapReal.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0057248 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreSetBitmapBits @ 0x1C0076A30 (GreSetBitmapBits.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0078020 (vCleanupUMWindowlessSprite.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0078B50 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008B120 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C008B24C (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C009B400 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     GreAccNotifyWindow @ 0x1C00B536C (GreAccNotifyWindow.c)
 *     xxxRemoteDisconnect @ 0x1C00BB750 (xxxRemoteDisconnect.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C00BCE88 (GreLddmProcessDesktopSwitch.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00C51A8 (GreSetRedirectionSurfaceSignaling.c)
 *     GreRealizePalette @ 0x1C00FD5B8 (GreRealizePalette.c)
 *     GreGetBitmapBits @ 0x1C0102420 (GreGetBitmapBits.c)
 *     GreCreateDIBitmapComp @ 0x1C0102D6C (GreCreateDIBitmapComp.c)
 *     GreGetDeviceGammaRamp @ 0x1C0105B20 (GreGetDeviceGammaRamp.c)
 *     GreRealizeDefaultPalette @ 0x1C010A74C (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C010C184 (GreGetSystemPaletteUse.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C023AC68 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C023B23C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C023B354 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x1C023C974 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C023CA80 (GreHLsurfSetUpdateId.c)
 *     NtGdiGetMonitorID @ 0x1C02406B0 (NtGdiGetMonitorID.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0241E00 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0242124 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     GreDxDwmShutdown @ 0x1C0243A70 (GreDxDwmShutdown.c)
 *     GreCreateHalftonePalette @ 0x1C0287704 (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C0287870 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C0287B94 (GreSetSystemPaletteUse.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C028AFFC (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C028F068 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C028F0F8 (GreSetBitmapDimension.c)
 * Callees:
 *     <none>
 */

DYNAMICMODECHANGESHARELOCK *__fastcall DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK(
        DYNAMICMODECHANGESHARELOCK *this)
{
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  return this;
}
