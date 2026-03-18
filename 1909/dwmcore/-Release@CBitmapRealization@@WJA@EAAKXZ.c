/*
 * XREFs of ?Release@CBitmapRealization@@WJA@EAAKXZ @ 0x1800F1670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 144));
}
