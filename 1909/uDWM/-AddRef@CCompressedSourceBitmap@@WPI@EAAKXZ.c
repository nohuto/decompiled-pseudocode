/*
 * XREFs of ?AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x18004FD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompressedSourceBitmap::AddRef(__int64 a1)
{
  return CCompoundBitmapLock::AddRef((CCompoundBitmapLock *)(a1 - 248));
}
