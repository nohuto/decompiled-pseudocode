/*
 * XREFs of ?AddRef@CSecondaryD2DBitmap@@WHA@EAAKXZ @ 0x1800ED300
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSecondaryD2DBitmap::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 112));
}
