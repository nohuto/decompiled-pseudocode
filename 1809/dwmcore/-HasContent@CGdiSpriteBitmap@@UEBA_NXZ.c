/*
 * XREFs of ?HasContent@CGdiSpriteBitmap@@UEBA_NXZ @ 0x18006E4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::HasContent(CGdiSpriteBitmap *this)
{
  return *((_QWORD *)this + 50) != 0LL;
}
