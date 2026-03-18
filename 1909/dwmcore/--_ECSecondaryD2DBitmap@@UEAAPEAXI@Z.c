/*
 * XREFs of ??_ECSecondaryD2DBitmap@@UEAAPEAXI@Z @ 0x18004D350
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CD2DBitmap@@MEAA@XZ @ 0x18004EE5C (--1CD2DBitmap@@MEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BA758 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 */

CSecondaryD2DBitmap *__fastcall CSecondaryD2DBitmap::`vector deleting destructor'(CSecondaryD2DBitmap *this, char a2)
{
  FastRegion::CRegion::FreeMemory((CSecondaryD2DBitmap *)((char *)this + 272));
  CD2DBitmap::~CD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
