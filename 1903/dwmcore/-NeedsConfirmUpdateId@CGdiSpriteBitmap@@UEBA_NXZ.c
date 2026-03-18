/*
 * XREFs of ?NeedsConfirmUpdateId@CGdiSpriteBitmap@@UEBA_NXZ @ 0x1800DAF80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::NeedsConfirmUpdateId(CGdiSpriteBitmap *this)
{
  return (*((_BYTE *)this + 60) & 4) != 0;
}
