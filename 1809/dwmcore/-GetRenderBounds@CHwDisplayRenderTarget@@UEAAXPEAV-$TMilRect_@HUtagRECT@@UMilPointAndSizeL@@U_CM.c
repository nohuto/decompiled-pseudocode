/*
 * XREFs of ?GetRenderBounds@CHwDisplayRenderTarget@@UEAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800E78A0
 * Callers:
 *     ?GetRenderBounds@CHwTextureRenderTarget@@WNA@EAAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x1800F0ED0 (-GetRenderBounds@CHwTextureRenderTarget@@WNA@EAAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U.c)
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::GetRenderBounds(__int64 a1, _OWORD *a2)
{
  *a2 = *(_OWORD *)(a1 + 84);
}
