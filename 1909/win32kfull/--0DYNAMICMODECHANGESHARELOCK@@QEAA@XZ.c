/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00155A0 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C0026080 (GreCreateDIBitmapReal.c)
 *     GreAccNotifyWindow @ 0x1C007B710 (GreAccNotifyWindow.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0088F00 (vCleanupUMWindowlessSprite.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C0089214 (GreSetRedirectionSurfaceSignaling.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00A44D0 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C00AAA98 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00BA080 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00CCC00 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00D9DB0 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     GreGetBitmapBits @ 0x1C00DCAC4 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00DCDF0 (GreSetBitmapBits.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C00F6B4C (GreEndGdiRenderingToDxSurface.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C00F7244 (GreBeginGdiRenderingToDxSurface.c)
 *     GreRealizePalette @ 0x1C00FCEBC (GreRealizePalette.c)
 *     NtGdiDdDDIDestroyDCFromMemory @ 0x1C0102A70 (NtGdiDdDDIDestroyDCFromMemory.c)
 *     GreCreateDIBitmapComp @ 0x1C0107A08 (GreCreateDIBitmapComp.c)
 *     xxxRemoteDisconnect @ 0x1C010DF50 (xxxRemoteDisconnect.c)
 *     GreRealizeDefaultPalette @ 0x1C0110FC8 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C0112644 (GreGetSystemPaletteUse.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C01395E0 (GreLddmProcessDesktopSwitch.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026AE58 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026B48C (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026B5C4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026CC00 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026CD48 (GreHLsurfSetUpdateId.c)
 *     NtGdiGetMonitorID @ 0x1C0271100 (NtGdiGetMonitorID.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0272B74 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C0272EE8 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     DxgkEngBltViaGDI @ 0x1C0273B20 (DxgkEngBltViaGDI.c)
 *     GreDxDwmShutdown @ 0x1C0274B54 (GreDxDwmShutdown.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C029953C (GreCreateBitmapFromDxSurface.c)
 *     GreCreateHalftonePalette @ 0x1C02AFD6C (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02AFEF0 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C02B020C (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B0950 (NtGdiUpdateColors.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B54B8 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C02B9130 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02B91D4 (GreSetBitmapDimension.c)
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
