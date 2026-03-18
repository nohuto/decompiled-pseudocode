/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WKA@EAAKXZ @ 0x1800F0DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwDisplayRenderTarget::AddRef((CHwDisplayRenderTarget *)(a1 - 160));
}
