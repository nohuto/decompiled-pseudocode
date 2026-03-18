/*
 * XREFs of ?GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180029E50
 * Callers:
 *     ?GetD2DContext@CHwTextureRenderTarget@@WNA@EAAJPEAPEAVID2DContext@@@Z @ 0x1800F0E60 (-GetD2DContext@CHwTextureRenderTarget@@WNA@EAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CHwDisplayRenderTarget::GetD2DContext(CHwDisplayRenderTarget *this, struct ID2DContext **a2)
{
  return CHwSurfaceRenderTarget::GetD2DContext(this, a2);
}
