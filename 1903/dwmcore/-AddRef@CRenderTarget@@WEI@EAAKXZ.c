/*
 * XREFs of ?AddRef@CRenderTarget@@WEI@EAAKXZ @ 0x1800ECEA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CRenderTarget::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 72));
}
