/*
 * XREFs of ?AddRef@CSectionBitmapRealization@@WBKA@EAAKXZ @ 0x1800ED8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSectionBitmapRealization::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 416));
}
