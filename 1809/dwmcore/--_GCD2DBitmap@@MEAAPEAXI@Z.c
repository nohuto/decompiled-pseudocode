/*
 * XREFs of ??_GCD2DBitmap@@MEAAPEAXI@Z @ 0x1800972F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmap@@MEAA@XZ @ 0x180097E0C (--1CD2DBitmap@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CD2DBitmap *__fastcall CD2DBitmap::`scalar deleting destructor'(CD2DBitmap *this, char a2)
{
  CD2DBitmap::~CD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x108uLL);
  return this;
}
