/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x18004E4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CCompoundBitmapLock::AddRef((CCompoundBitmapLock *)(a1 - 240));
}
