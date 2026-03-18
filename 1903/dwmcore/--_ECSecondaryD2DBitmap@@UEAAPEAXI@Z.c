/*
 * XREFs of ??_ECSecondaryD2DBitmap@@UEAAPEAXI@Z @ 0x1800B2B90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBitmap@@MEAA@XZ @ 0x1800B3A6C (--1CD2DBitmap@@MEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CSecondaryD2DBitmap *__fastcall CSecondaryD2DBitmap::`vector deleting destructor'(CSecondaryD2DBitmap *this, char a2)
{
  FastRegion::CRegion::FreeMemory((CSecondaryD2DBitmap *)((char *)this + 272));
  CD2DBitmap::~CD2DBitmap(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x158uLL);
  return this;
}
