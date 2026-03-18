/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18001ACF0
 * Callers:
 *     <none>
 * Callees:
 *     ??2CBitmapLock@@SAPEAX_K@Z @ 0x1800714BC (--2CBitmapLock@@SAPEAX_K@Z.c)
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800968D4 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x180096A38 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x18009B420 (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18009B4BC (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, __int128 *a2, _QWORD *a3)
{
  CBitmapLock *v6; // rdi
  unsigned int v7; // ecx
  unsigned int v8; // r12d
  unsigned __int64 v9; // rcx
  CBitmapLock *v10; // rax
  unsigned int v11; // ecx
  __int64 v12; // rcx
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  __int128 v17; // [rsp+60h] [rbp-38h] BYREF

  v17 = *a2;
  v6 = 0LL;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(a1 - 80, &v17)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0xCEu);
  }
  else
  {
    v8 = *((_DWORD *)a2 + 1) * *(_DWORD *)(a1 + 24)
       + *(_DWORD *)a2 * (GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 28)) >> 3);
    v10 = (CBitmapLock *)CBitmapLock::operator new(v9);
    if ( v10 )
      v6 = CBitmapLock::CBitmapLock(v10);
    if ( !v6 )
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024882, 0xD7u);
      return v15;
    }
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 8LL))(v6);
    v12 = (a1 + 8) & -(__int64)(a1 != 96);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = CBitmapLock::HrInit(
            v6,
            (struct IBitmapUnlock *)((a1 + 8) & -(__int64)(a1 != 96)),
            *((_DWORD *)a2 + 2) - *(_DWORD *)a2,
            *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1),
            (const struct PixelFormatInfo *)(a1 + 28),
            *(_DWORD *)(a1 + 24),
            *(_DWORD *)(a1 + 48) - v8,
            (void *)(v8 + *(_QWORD *)(a1 + 40)),
            WICBitmapLockRead,
            0,
            (struct IUnknown *)((a1 + 8) & -(__int64)(a1 != 96)));
    v15 = v13;
    if ( v13 >= 0 )
    {
      *a3 = (char *)v6 + 16;
      return v15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0xEAu);
  }
  if ( v6 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 16LL))(v6);
  return v15;
}
