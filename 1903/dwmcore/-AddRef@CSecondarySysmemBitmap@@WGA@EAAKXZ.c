/*
 * XREFs of ?AddRef@CSecondarySysmemBitmap@@WGA@EAAKXZ @ 0x1800ED3A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondarySysmemBitmap::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 96));
}
