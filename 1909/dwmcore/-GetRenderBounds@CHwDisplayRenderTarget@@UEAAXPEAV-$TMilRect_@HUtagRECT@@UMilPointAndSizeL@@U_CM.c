/*
 * XREFs of ?GetRenderBounds@CHwDisplayRenderTarget@@UEAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800DA7E0
 * Callers:
 *     ?GetRenderBounds@CHwTextureRenderTarget@@WJA@EAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800F0530 (-GetRenderBounds@CHwTextureRenderTarget@@WJA@EAAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::GetRenderBounds(__int64 a1, _OWORD *a2)
{
  *a2 = *(_OWORD *)(a1 + 16);
}
