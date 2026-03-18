/*
 * XREFs of ?Release@CD2DBitmap@@WBA@EAAKXZ @ 0x1800F0A50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 16));
}
