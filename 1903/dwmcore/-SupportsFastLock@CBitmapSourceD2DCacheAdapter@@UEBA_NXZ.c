/*
 * XREFs of ?SupportsFastLock@CBitmapSourceD2DCacheAdapter@@UEBA_NXZ @ 0x1800D2A00
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@VIBitmapDest@@@?$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIBitmapDest@@@WRL@Microsoft@@@Details@12@@Z @ 0x180046F98 (--$As@VIBitmapDest@@@-$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@VIBitm.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CBitmapSourceD2DCacheAdapter::SupportsFastLock(CBitmapSourceD2DCacheAdapter *this)
{
  __int64 (__fastcall ****v1)(_QWORD, GUID *, __int64 *); // rdi
  bool v2; // bl
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 8);
  v2 = 0;
  v3 = *((_QWORD *)this + 1);
  v5 = 0LL;
  if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3) != 3 )
    v2 = (int)Microsoft::WRL::ComPtr<IBitmapSource>::As<IBitmapDest>(v1, &v5) >= 0;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v5);
  return v2;
}
