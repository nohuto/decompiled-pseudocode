/*
 * XREFs of ?Release@CHwCompSwapChainTarget@@WJA@EAAKXZ @ 0x1800EC9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCompSwapChainTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 144));
}
