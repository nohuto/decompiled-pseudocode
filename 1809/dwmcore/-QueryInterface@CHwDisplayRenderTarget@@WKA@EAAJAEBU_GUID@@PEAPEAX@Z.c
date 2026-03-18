/*
 * XREFs of ?QueryInterface@CHwDisplayRenderTarget@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, char **a3)
{
  return CHwTextureRenderTarget::QueryInterface((CHwTextureRenderTarget *)(a1 - 160), a2, a3);
}
