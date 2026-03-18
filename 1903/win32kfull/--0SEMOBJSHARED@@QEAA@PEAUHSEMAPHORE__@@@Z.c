/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0046A44
 * Callers:
 *     GreOnCURSINFODestroy @ 0x1C002E92C (GreOnCURSINFODestroy.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C003E1E8 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GrePtInSprite @ 0x1C0046454 (GrePtInSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C0046600 (GreDwmGetSurfaceData.c)
 *     GreMovePointer @ 0x1C00467C0 (GreMovePointer.c)
 *     bSetDevDragRect @ 0x1C00816E0 (bSetDevDragRect.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C00E8764 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C016116C (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026CE90 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026D920 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C0282A78 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0282D48 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0282F2C (bSetDevPreviewRect.c)
 *     GreSaveScreenBits @ 0x1C0299198 (GreSaveScreenBits.c)
 * Callees:
 *     <none>
 */

SEMOBJSHARED *__fastcall SEMOBJSHARED::SEMOBJSHARED(SEMOBJSHARED *this, HSEMAPHORE a2)
{
  *(_QWORD *)this = a2;
  GreAcquireSemaphoreSharedInternal(a2);
  EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *(_QWORD *)this);
  return this;
}
