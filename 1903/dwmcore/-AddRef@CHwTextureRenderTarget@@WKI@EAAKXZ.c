/*
 * XREFs of ?AddRef@CHwTextureRenderTarget@@WKI@EAAKXZ @ 0x1800ECAD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::AddRef(__int64 a1)
{
  return CHwDisplayRenderTarget::AddRef((CHwDisplayRenderTarget *)(a1 - 168));
}
