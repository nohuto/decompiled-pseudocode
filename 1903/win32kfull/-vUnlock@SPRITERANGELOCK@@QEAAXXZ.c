/*
 * XREFs of ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0043E30
 * Callers:
 *     GreOnCURSINFODestroy @ 0x1C002E92C (GreOnCURSINFODestroy.c)
 *     ?vSpHook@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C003D040 (-vSpHook@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C003E1E8 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0040A9C (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C00416F0 (-bSpBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEA.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00426D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     GreRedrawSpriteOverlapPresent @ 0x1C0042BD4 (GreRedrawSpriteOverlapPresent.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C0043DD8 (--1ENUMAREAS@@QEAA@XZ.c)
 *     vCleanupUMWindowlessSprite @ 0x1C0044530 (vCleanupUMWindowlessSprite.c)
 *     GrePtInSprite @ 0x1C0046454 (GrePtInSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C0046600 (GreDwmGetSurfaceData.c)
 *     GreMovePointer @ 0x1C00467C0 (GreMovePointer.c)
 *     bSetDevDragRect @ 0x1C00816E0 (bSetDevDragRect.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C0097580 (GreDeleteSpriteOverlapPresent.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00E8764 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     EngpMovePointer @ 0x1C0160ED8 (EngpMovePointer.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C016116C (GreDwmCreatedBitmapRemotingOutput.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0161E34 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETTE@@KK4@Z @ 0x1C016226C (-bSpCreateShape@@YAHPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAVPALETT.c)
 *     ?vSpPIDLockSpriteArea@@YA?AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0162574 (-vSpPIDLockSpriteArea@@YA-AW4SurfaceMapStatus@SURFACE@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z.c)
 *     ?vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z @ 0x1C0162614 (-vSpPIDUnlockSpriteArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@PEAX@Z.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026CE90 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026D920 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C0273804 (-InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z.c)
 *     DxgkEngReleaseStableSprite @ 0x1C0274FA0 (DxgkEngReleaseStableSprite.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C027B950 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027C18C (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C027D590 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     GreUnlockDisplayArea @ 0x1C028289C (GreUnlockDisplayArea.c)
 *     bMoveDevDragRect @ 0x1C0282A78 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0282D48 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0282F2C (bSetDevPreviewRect.c)
 *     GreSaveScreenBits @ 0x1C0299198 (GreSaveScreenBits.c)
 * Callees:
 *     <none>
 */

void __fastcall SPRITERANGELOCK::vUnlock(SPRITERANGELOCK *this)
{
  EtwTraceGreLockReleaseSemaphore(L"hsem", *(_QWORD *)this);
  GreReleaseSemaphoreInternal(*(_QWORD *)this);
}
