/*
 * XREFs of ??_GCD2DBitmap@@MEAAPEAXI@Z @ 0x18004EE20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CD2DBitmap@@MEAA@XZ @ 0x18004EE5C (--1CD2DBitmap@@MEAA@XZ.c)
 */

CD2DBitmap *__fastcall CD2DBitmap::`scalar deleting destructor'(CD2DBitmap *this, char a2)
{
  CD2DBitmap::~CD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
