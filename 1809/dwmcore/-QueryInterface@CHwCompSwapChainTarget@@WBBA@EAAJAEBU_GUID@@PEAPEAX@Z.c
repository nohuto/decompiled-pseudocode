/*
 * XREFs of ?QueryInterface@CHwCompSwapChainTarget@@WBBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0CA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwCompSwapChainTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHwStereoFullScreenRenderTarget::QueryInterface((CHwStereoFullScreenRenderTarget *)(a1 - 272), a2, a3);
}
