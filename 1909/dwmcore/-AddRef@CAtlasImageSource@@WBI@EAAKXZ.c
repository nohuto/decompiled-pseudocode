/*
 * XREFs of ?AddRef@CAtlasImageSource@@WBI@EAAKXZ @ 0x1800F0270
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CAtlasImageSource::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 24));
}
