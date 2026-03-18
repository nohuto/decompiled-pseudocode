/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WKA@EAAKXZ @ 0x1800ECC60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 160));
}
