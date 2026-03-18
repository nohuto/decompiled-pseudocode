/*
 * XREFs of ?AddRef@CDesktopRenderTarget@@WKI@EAAKXZ @ 0x1800F0B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CDesktopRenderTarget::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 168));
}
