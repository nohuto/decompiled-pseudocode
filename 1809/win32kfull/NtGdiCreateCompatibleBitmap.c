/*
 * XREFs of NtGdiCreateCompatibleBitmap @ 0x1C010E100
 * Callers:
 *     <none>
 * Callees:
 *     GreCreateCompatibleBitmapInternal @ 0x1C009A270 (GreCreateCompatibleBitmapInternal.c)
 */

HSURF __fastcall NtGdiCreateCompatibleBitmap(HDC a1, unsigned int a2, int a3)
{
  return GreCreateCompatibleBitmapInternal(a1, a2, a3 & 0xF0FFFFFF, 0, 0LL, 0LL);
}
