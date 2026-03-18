/*
 * XREFs of ?GetUpdateIdToken@CGdiSpriteBitmap@@UEAAPEAUConfirmPresentHistoryToken@@XZ @ 0x1800DAF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct ConfirmPresentHistoryToken *__fastcall CGdiSpriteBitmap::GetUpdateIdToken(CGdiSpriteBitmap *this)
{
  *((_BYTE *)this + 60) &= ~4u;
  return (CGdiSpriteBitmap *)((char *)this + 64);
}
