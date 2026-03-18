/*
 * XREFs of ??_ECColorKeyBitmap@@MEAAPEAXI@Z @ 0x180257900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     ??1CColorKeyBitmap@@MEAA@XZ @ 0x1802578BC (--1CColorKeyBitmap@@MEAA@XZ.c)
 */

CColorKeyBitmap *__fastcall CColorKeyBitmap::`vector deleting destructor'(CColorKeyBitmap *this, char a2)
{
  CColorKeyBitmap::~CColorKeyBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
