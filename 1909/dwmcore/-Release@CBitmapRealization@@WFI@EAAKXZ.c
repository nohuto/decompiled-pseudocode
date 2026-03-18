/*
 * XREFs of ?Release@CBitmapRealization@@WFI@EAAKXZ @ 0x1800F1660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 88));
}
