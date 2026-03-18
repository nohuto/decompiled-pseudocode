/*
 * XREFs of ?Release@CHwCompSwapChainTarget@@WJA@EAAKXZ @ 0x1800F0660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwCompSwapChainTarget::Release(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::Release((CHwStereoFullScreenRenderTarget *)(a1 - 144));
}
