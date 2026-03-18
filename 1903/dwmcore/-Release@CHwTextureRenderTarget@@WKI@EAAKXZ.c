/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WKI@EAAKXZ @ 0x1800ECC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 168));
}
