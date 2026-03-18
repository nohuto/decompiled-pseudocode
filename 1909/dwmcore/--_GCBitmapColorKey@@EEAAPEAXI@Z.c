/*
 * XREFs of ??_GCBitmapColorKey@@EEAAPEAXI@Z @ 0x18025FA60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CBitmapColorKey@@EEAA@XZ @ 0x18025F9FC (--1CBitmapColorKey@@EEAA@XZ.c)
 */

CBitmapColorKey *__fastcall CBitmapColorKey::`scalar deleting destructor'(CBitmapColorKey *this, char a2)
{
  CBitmapColorKey::~CBitmapColorKey(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
