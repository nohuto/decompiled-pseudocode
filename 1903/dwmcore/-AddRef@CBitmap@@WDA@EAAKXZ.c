/*
 * XREFs of ?AddRef@CBitmap@@WDA@EAAKXZ @ 0x1800EC5E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 48));
}
