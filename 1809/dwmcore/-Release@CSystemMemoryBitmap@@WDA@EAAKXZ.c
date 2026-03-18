/*
 * XREFs of ?Release@CSystemMemoryBitmap@@WDA@EAAKXZ @ 0x1800F0510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 48));
}
