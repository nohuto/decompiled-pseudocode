/*
 * XREFs of ??_GCBitmapColorKey@@EEAAPEAXI@Z @ 0x180261320
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CBitmapColorKey@@EEAA@XZ @ 0x1802612BC (--1CBitmapColorKey@@EEAA@XZ.c)
 */

CBitmapColorKey *__fastcall CBitmapColorKey::`scalar deleting destructor'(CBitmapColorKey *this, char a2)
{
  CBitmapColorKey::~CBitmapColorKey(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
