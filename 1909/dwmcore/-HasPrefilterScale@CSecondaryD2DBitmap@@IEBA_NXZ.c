/*
 * XREFs of ?HasPrefilterScale@CSecondaryD2DBitmap@@IEBA_NXZ @ 0x1800537B0
 * Callers:
 *     ?GetSize@CSecondaryD2DBitmap@@UEBAXPEAI0@Z @ 0x1800533F0 (-GetSize@CSecondaryD2DBitmap@@UEBAXPEAI0@Z.c)
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180053420 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     <none>
 */

bool __fastcall CSecondaryD2DBitmap::HasPrefilterScale(CSecondaryD2DBitmap *this)
{
  return *((float *)this + 56) != 96.0 || *((float *)this + 57) != 96.0;
}
