/*
 * XREFs of ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0032BFC
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C0030AC0 (GreCreateDIBitmapReal.c)
 *     GreSetBitmapBits @ 0x1C0032170 (GreSetBitmapBits.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0044530 (vCleanupUMWindowlessSprite.c)
 *     GreSetRedirectionSurfaceSignaling @ 0x1C0044844 (GreSetRedirectionSurfaceSignaling.c)
 *     ?iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C005ABD0 (-iSelectTightenRao@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?iSelect@DC@@QEAAHPEAVREGION@@H@Z @ 0x1C0060D68 (-iSelect@DC@@QEAAHPEAVREGION@@H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00700F0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     GreLddmProcessDesktopSwitch @ 0x1C00831D4 (GreLddmProcessDesktopSwitch.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0085390 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 *     GreAccNotifyWindow @ 0x1C00DBA20 (GreAccNotifyWindow.c)
 *     NtGdiDdDDICreateDCFromMemory @ 0x1C00EE010 (NtGdiDdDDICreateDCFromMemory.c)
 *     ?bSaveRegion@@YAHAEAVDCOBJ@@J@Z @ 0x1C00FE068 (-bSaveRegion@@YAHAEAVDCOBJ@@J@Z.c)
 *     GreGetBitmapBits @ 0x1C010B974 (GreGetBitmapBits.c)
 *     GreEndGdiRenderingToDxSurface @ 0x1C011D0BC (GreEndGdiRenderingToDxSurface.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C011D7B4 (GreBeginGdiRenderingToDxSurface.c)
 *     GreRealizePalette @ 0x1C0121EBC (GreRealizePalette.c)
 *     GreCreateDIBitmapComp @ 0x1C012C748 (GreCreateDIBitmapComp.c)
 *     xxxRemoteDisconnect @ 0x1C0133450 (xxxRemoteDisconnect.c)
 *     GreRealizeDefaultPalette @ 0x1C0136858 (GreRealizeDefaultPalette.c)
 *     GreGetSystemPaletteUse @ 0x1C0138644 (GreGetSystemPaletteUse.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026B588 (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BBBC (-SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BCF4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     GreHLsurfSetPresentFlags @ 0x1C026D330 (GreHLsurfSetPresentFlags.c)
 *     GreHLsurfSetUpdateId @ 0x1C026D478 (GreHLsurfSetUpdateId.c)
 *     NtGdiGetMonitorID @ 0x1C0271810 (NtGdiGetMonitorID.c)
 *     ?DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z @ 0x1C0273284 (-DxLddmSharedPrimaryLockNotification@@YAJU_LUID@@IPEBU_RECTL@@@Z.c)
 *     ?DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z @ 0x1C02735F8 (-DxLddmSharedPrimaryUnLockNotification@@YAJU_LUID@@I@Z.c)
 *     GreDxDwmShutdown @ 0x1C0275214 (GreDxDwmShutdown.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C0299AEC (GreCreateBitmapFromDxSurface.c)
 *     GreCreateHalftonePalette @ 0x1C02B021C (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B03A0 (GreGetSystemPaletteEntries.c)
 *     GreSetSystemPaletteUse @ 0x1C02B06BC (GreSetSystemPaletteUse.c)
 *     NtGdiUpdateColors @ 0x1C02B0E00 (NtGdiUpdateColors.c)
 *     ?ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z @ 0x1C02B5968 (-ulAnimatePalette@XEPALOBJ@@QEAAKKKPEBUtagPALETTEENTRY@@@Z.c)
 *     GreGetBitmapDimension @ 0x1C02B95E0 (GreGetBitmapDimension.c)
 *     GreSetBitmapDimension @ 0x1C02B9684 (GreSetBitmapDimension.c)
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
