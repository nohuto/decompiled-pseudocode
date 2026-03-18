/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WCI@EAAKXZ @ 0x1800EC5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 40));
}
