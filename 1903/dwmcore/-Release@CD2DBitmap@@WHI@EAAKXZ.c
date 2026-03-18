/*
 * XREFs of ?Release@CD2DBitmap@@WHI@EAAKXZ @ 0x1800ECDC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::Release(__int64 a1)
{
  return CGdiSpriteBitmap::Release((CGdiSpriteBitmap *)(a1 - 120));
}
