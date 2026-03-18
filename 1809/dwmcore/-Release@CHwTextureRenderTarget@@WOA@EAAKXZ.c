/*
 * XREFs of ?Release@CHwTextureRenderTarget@@WOA@EAAKXZ @ 0x1800F0FF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 224));
}
