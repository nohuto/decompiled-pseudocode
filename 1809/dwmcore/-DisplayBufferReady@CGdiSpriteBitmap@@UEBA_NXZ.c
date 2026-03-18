/*
 * XREFs of ?DisplayBufferReady@CGdiSpriteBitmap@@UEBA_NXZ @ 0x1800E6CB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::DisplayBufferReady(CGdiSpriteBitmap *this)
{
  return *((_BYTE *)this + 60) & 1;
}
