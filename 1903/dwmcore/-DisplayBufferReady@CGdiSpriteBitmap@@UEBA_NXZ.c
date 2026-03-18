/*
 * XREFs of ?DisplayBufferReady@CGdiSpriteBitmap@@UEBA_NXZ @ 0x1800DAF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::DisplayBufferReady(CGdiSpriteBitmap *this)
{
  return *((_BYTE *)this + 60) & 1;
}
