/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00774E8
 * Callers:
 *     GreCreateBitmapFromDxSurface @ 0x1C0003F84 (GreCreateBitmapFromDxSurface.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C0011920 (NtGdiDdDDICreateDCFromMemory.c)
 *     GreCreateDIBitmapReal @ 0x1C004F05C (GreCreateDIBitmapReal.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00567AC (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C0056C90 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0065580 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0075610 (vCleanupUMWindowlessSprite.c)
 *     GreGetBitmapBits @ 0x1C0076A08 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C0076E50 (GreSetBitmapBits.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C00949D4 (GreLddmProcessDesktopSwitch.c)
 *     GreRealizeDefaultPalette @ 0x1C0095C74 (GreRealizeDefaultPalette.c)
 *     GreRealizePalette @ 0x1C00983DC (GreRealizePalette.c)
 *     GreAccNotifyWindow @ 0x1C0099494 (GreAccNotifyWindow.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C009E1D4 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C00A2D9C (GreSetRedirectionSurfaceSignaling.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B9734 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     xxxRemoteDisconnect @ 0x1C00E9E60 (xxxRemoteDisconnect.c)
 *     GreCreateDIBitmapComp @ 0x1C0100130 (GreCreateDIBitmapComp.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C011D9A0 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     GreGetSystemPaletteUse @ 0x1C012D764 (GreGetSystemPaletteUse.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015F4B8 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C0251D18 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025232C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025246C (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x1C0253CBC (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C0253E1C (GreHLsurfSetUpdateId.c)
 *     NtGdiGetMonitorID @ 0x1C0257EC0 (NtGdiGetMonitorID.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C02599A4 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0259D10 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C025A990 (DxgkEngBltViaGDI.c)
 *     GreDxDwmShutdown @ 0x1C025BB34 (GreDxDwmShutdown.c)
 *     GreCreateHalftonePalette @ 0x1C029B37C (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C029B500 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C029B814 (GreSetSystemPaletteUse.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C029ED24 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C02A2984 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02A2A30 (GreSetBitmapDimension.c)
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
