/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WKI@EAAKXZ @ 0x1800F0930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 168));
}
