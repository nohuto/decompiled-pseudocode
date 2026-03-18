/*
 * XREFs of ?AddRef@CBitmap@@WCA@EAAKXZ @ 0x1800F0280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CBitmap::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 32));
}
