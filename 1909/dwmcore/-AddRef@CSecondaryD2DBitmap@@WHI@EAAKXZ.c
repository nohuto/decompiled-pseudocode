/*
 * XREFs of ?AddRef@CSecondaryD2DBitmap@@WHI@EAAKXZ @ 0x1800F0FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondaryD2DBitmap::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 120));
}
