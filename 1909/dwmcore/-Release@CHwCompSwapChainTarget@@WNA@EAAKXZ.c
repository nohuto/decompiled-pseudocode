/*
 * XREFs of ?Release@CHwCompSwapChainTarget@@WNA@EAAKXZ @ 0x1800F14B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwCompSwapChainTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 208));
}
