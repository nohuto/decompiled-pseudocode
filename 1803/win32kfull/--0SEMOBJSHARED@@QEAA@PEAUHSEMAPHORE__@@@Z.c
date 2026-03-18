/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0020FB8
 * Callers:
 *     GreOnCURSINFODestroy @ 0x1C00176B4 (GreOnCURSINFODestroy.c)
 *     GreSetPointer @ 0x1C0020CE4 (GreSetPointer.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C004EA98 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     bSetDevDragRect @ 0x1C00BCB00 (bSetDevDragRect.c)
 *     GreMovePointer @ 0x1C00C5F10 (GreMovePointer.c)
 *     GreDwmGetSurfaceData @ 0x1C00C6598 (GreDwmGetSurfaceData.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C00E4180 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GrePtInSprite @ 0x1C01363EC (GrePtInSprite.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C0138D0C (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C023C580 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C023CE98 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C02568B8 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0256B74 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C0256D2C (bSetDevPreviewRect.c)
 *     GreSaveScreenBits @ 0x1C026E4A4 (GreSaveScreenBits.c)
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
