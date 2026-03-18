/*
 * XREFs of ?Release@CSystemMemoryBitmap@@WOA@EAAKXZ @ 0x1800F03C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall CSystemMemoryBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((CDxHandleYUVBitmapRealization *)(a1 - 224));
}
