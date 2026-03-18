/*
 * XREFs of ?AddRef@CSystemMemoryBitmap@@WOA@EAAKXZ @ 0x1800F02B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::AddRef(__int64 a1)
{
  return CHolographicClient::AddRef((CHolographicClient *)(a1 - 224));
}
