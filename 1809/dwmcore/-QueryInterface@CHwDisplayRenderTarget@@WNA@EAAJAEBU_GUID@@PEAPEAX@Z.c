/*
 * XREFs of ?QueryInterface@CHwDisplayRenderTarget@@WNA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800F0F90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwDisplayRenderTarget::QueryInterface(__int64 a1, const struct _GUID *a2, char **a3)
{
  return CHwTextureRenderTarget::QueryInterface((CHwTextureRenderTarget *)(a1 - 208), a2, a3);
}
