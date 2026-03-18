/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WKA@EAAKXZ @ 0x1800F0920
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 160));
}
