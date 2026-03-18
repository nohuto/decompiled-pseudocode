/*
 * XREFs of ?AddRef@CHwCompSwapChainTarget@@WBBA@EAAKXZ @ 0x1800F0C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwCompSwapChainTarget::AddRef(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::AddRef((CHwStereoFullScreenRenderTarget *)(a1 - 272));
}
