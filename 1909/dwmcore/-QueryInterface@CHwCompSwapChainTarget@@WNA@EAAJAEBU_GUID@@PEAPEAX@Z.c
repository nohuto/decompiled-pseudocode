/*
 * XREFs of ?QueryInterface@CHwCompSwapChainTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F14A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCompSwapChainTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHwTextureRenderTarget::QueryInterface((CHwTextureRenderTarget *)(a1 - 208), a2, a3);
}
