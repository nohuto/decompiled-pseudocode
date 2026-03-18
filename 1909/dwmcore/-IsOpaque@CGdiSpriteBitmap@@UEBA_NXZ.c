/*
 * XREFs of ?IsOpaque@CGdiSpriteBitmap@@UEBA_NXZ @ 0x1800C7E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGdiSpriteBitmap::IsOpaque(CGdiSpriteBitmap *this)
{
  bool result; // al

  result = 1;
  if ( (*((_BYTE *)this + 61) & 1) != 0 || *((_DWORD *)this + 9) != 3 )
    return 0;
  return result;
}
