/*
 * XREFs of ?AddRef@CHwCompSwapChainTarget@@WGA@EAAKXZ @ 0x1800EC780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwCompSwapChainTarget::AddRef(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::AddRef((CHwStereoFullScreenRenderTarget *)(a1 - 96));
}
