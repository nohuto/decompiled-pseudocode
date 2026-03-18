/*
 * XREFs of ?AddRef@CSectionBitmapRealization@@WJA@EAAKXZ @ 0x1800F0E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSectionBitmapRealization::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 144));
}
