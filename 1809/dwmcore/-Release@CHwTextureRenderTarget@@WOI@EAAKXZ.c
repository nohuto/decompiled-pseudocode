/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WOI@EAAKXZ @ 0x1800F1000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 232));
}
