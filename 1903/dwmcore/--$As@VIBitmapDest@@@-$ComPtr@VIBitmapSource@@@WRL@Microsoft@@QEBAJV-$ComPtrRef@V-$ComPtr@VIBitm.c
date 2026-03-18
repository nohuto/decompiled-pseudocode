/*
 * XREFs of ??$As@VIBitmapDest@@@?$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIBitmapDest@@@WRL@Microsoft@@@Details@12@@Z @ 0x180046F98
 * Callers:
 *     ?SupportsFastLock@CBitmapSourceD2DCacheAdapter@@UEBA_NXZ @ 0x1800D2A00 (-SupportsFastLock@CBitmapSourceD2DCacheAdapter@@UEBA_NXZ.c)
 *     ?LockForRead@CBitmapSourceD2DCacheAdapter@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800D3400 (-LockForRead@CBitmapSourceD2DCacheAdapter@@UEBAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUnique.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IBitmapSource>::As<IBitmapDest>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(a2);
  return v4(v2, &GUID_14d094dc_1246_4784_b811_74305a3ecec8, a2);
}
