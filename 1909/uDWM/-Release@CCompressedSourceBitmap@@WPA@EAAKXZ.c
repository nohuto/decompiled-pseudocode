/*
 * XREFs of ?Release@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x18004FDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CCompressedSourceBitmap::Release(__int64 a1)
{
  return CWICBitmapWrapper::Release((CWICBitmapWrapper *)(a1 - 240));
}
