/*
 * XREFs of ??_ECBitmapSourceD2DCacheAdapter@@UEAAPEAXI@Z @ 0x180076B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

CBitmapSourceD2DCacheAdapter *__fastcall CBitmapSourceD2DCacheAdapter::`vector deleting destructor'(
        CBitmapSourceD2DCacheAdapter *this,
        char a2)
{
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 3);
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x28uLL);
  return this;
}
