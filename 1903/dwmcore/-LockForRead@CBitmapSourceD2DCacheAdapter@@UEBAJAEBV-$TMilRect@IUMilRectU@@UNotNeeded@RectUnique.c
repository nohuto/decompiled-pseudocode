/*
 * XREFs of ?LockForRead@CBitmapSourceD2DCacheAdapter@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1800D3400
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@VIBitmapDest@@@?$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@VIBitmapDest@@@WRL@Microsoft@@@Details@12@@Z @ 0x180046F98 (--$As@VIBitmapDest@@@-$ComPtr@VIBitmapSource@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@VIBitm.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapSourceD2DCacheAdapter::LockForRead(__int64 a1, int *a2, __int64 a3)
{
  int v3; // r10d
  int v5; // r8d
  int v6; // eax
  signed int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // ebx
  signed int v10; // eax
  __int64 v11; // rcx
  __int64 v13; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v14[4]; // [rsp+38h] [rbp-20h] BYREF

  v3 = a2[1];
  v5 = *a2;
  v6 = a2[2];
  v13 = 0LL;
  v14[0] = v5;
  v14[1] = v3;
  v14[2] = v6 - v5;
  v14[3] = a2[3] - v3;
  v7 = Microsoft::WRL::ComPtr<IBitmapSource>::As<IBitmapDest>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 8),
         &v13);
  v9 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0x48u, 0LL);
  }
  else
  {
    v10 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, v14, 1LL, a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x49u, 0LL);
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v13);
  return v9;
}
