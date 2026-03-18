/*
 * XREFs of ?GetD2DContext@CHwTextureRenderTarget@@WNA@EAAJPEAPEAVID2DContext@@@Z @ 0x1800F0E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::GetD2DContext(__int64 a1, struct ID2DContext **a2)
{
  return CHwDisplayRenderTarget::GetD2DContext((CHwDisplayRenderTarget *)(a1 - 208), a2);
}
