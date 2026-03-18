/*
 * XREFs of ?QueryInterface@CHwCompSwapChainTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCompSwapChainTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHwStereoFullScreenRenderTarget::QueryInterface((CHwStereoFullScreenRenderTarget *)(a1 - 160), a2, a3);
}
