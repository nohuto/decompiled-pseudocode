/*
 * XREFs of ?AddRef@CHwCompSwapChainTarget@@WNA@EAAKXZ @ 0x1800ED7A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CHwCompSwapChainTarget::AddRef(__int64 a1)
{
  return CHwStereoFullScreenRenderTarget::AddRef((CHwStereoFullScreenRenderTarget *)(a1 - 208));
}
