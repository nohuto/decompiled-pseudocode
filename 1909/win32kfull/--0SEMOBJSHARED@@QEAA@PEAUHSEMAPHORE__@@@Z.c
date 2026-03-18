/*
 * XREFs of ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C008B414
 * Callers:
 *     GreOnCURSINFODestroy @ 0x1C00272D0 (GreOnCURSINFODestroy.c)
 *     ?bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z @ 0x1C00822A8 (-bSpUpdateDeviceSurface@@YAHPEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@AEAVRGNOBJ@@PEAVECLIPOBJ@@@Z.c)
 *     GrePtInSprite @ 0x1C008AE24 (GrePtInSprite.c)
 *     GreDwmGetSurfaceData @ 0x1C008AFD0 (GreDwmGetSurfaceData.c)
 *     GreMovePointer @ 0x1C008B190 (GreMovePointer.c)
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C011C740 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     bSetDevDragRect @ 0x1C0139C20 (bSetDevDragRect.c)
 *     GreDwmCreatedBitmapRemotingOutput @ 0x1C016213C (GreDwmCreatedBitmapRemotingOutput.c)
 *     GreDwmGetRedirectionStyle @ 0x1C026C760 (GreDwmGetRedirectionStyle.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026D1F0 (GreSpDwmSyncCaptureSurfaceBits.c)
 *     bMoveDevDragRect @ 0x1C02823B8 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C0282688 (bMoveDevPreviewRect.c)
 *     bSetDevPreviewRect @ 0x1C028286C (bSetDevPreviewRect.c)
 *     GreSaveScreenBits @ 0x1C0298BE8 (GreSaveScreenBits.c)
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
