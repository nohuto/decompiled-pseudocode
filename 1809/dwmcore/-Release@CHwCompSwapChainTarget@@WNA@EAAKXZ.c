/*
 * XREFs of ?Release@CHwCompSwapChainTarget@@WNA@EAAKXZ @ 0x1800F0CF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCompSwapChainTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 208));
}
