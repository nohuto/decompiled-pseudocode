/*
 * XREFs of ?QueryInterface@CHwStereoFullScreenRenderTarget@@WCAI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800EC910
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwStereoFullScreenRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, void **a3)
{
  return CHwTextureRenderTarget::QueryInterface((CHwTextureRenderTarget *)(a1 - 520), a2, a3);
}
