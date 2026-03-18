/*
 * XREFs of ?Release@CHwCompSwapChainTarget@@WKA@EAAKXZ @ 0x1800F0CE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCompSwapChainTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 160));
}
