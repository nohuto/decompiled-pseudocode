/*
 * XREFs of ?LockForRead@CSecondarySysmemBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x18001AB10
 * Callers:
 *     <none>
 * Callees:
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x180048304 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800484B8 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??0CBitmapLock@@QEAA@XZ @ 0x1800484F0 (--0CBitmapLock@@QEAA@XZ.c)
 *     ?RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z @ 0x18005169C (-RectInBounds@CSecondaryBitmap@@IEBA_NUMilRectU@@@Z.c)
 *     ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180051738 (-IsEmpty@-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSecondarySysmemBitmap::LockForRead(__int64 a1, __int128 *a2, _QWORD *a3)
{
  CBitmapLock *v6; // rdi
  unsigned int v7; // ecx
  unsigned int v8; // r12d
  CBitmapLock *v9; // rax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // ebx
  __int128 v16; // [rsp+60h] [rbp-38h] BYREF

  v16 = *a2;
  v6 = 0LL;
  if ( !(unsigned __int8)CSecondaryBitmap::RectInBounds(a1 - 80, &v16)
    || (unsigned __int8)TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(a2) )
  {
    v14 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2147024809, 0xCAu, 0LL);
  }
  else
  {
    v8 = *((_DWORD *)a2 + 1) * *(_DWORD *)(a1 + 24)
       + *(_DWORD *)a2 * (GetPixelFormatSize(*(enum DXGI_FORMAT *)(a1 + 28)) >> 3);
    v9 = (CBitmapLock *)operator new(0x90uLL);
    if ( v9 )
      v6 = CBitmapLock::CBitmapLock(v9);
    if ( !v6 )
    {
      v14 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0xD3u, 0LL);
      return v14;
    }
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 8LL))(v6);
    v11 = (a1 + 8) & -(__int64)(a1 != 96);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v12 = CBitmapLock::HrInit(
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
    v14 = v12;
    if ( v12 >= 0 )
    {
      *a3 = (char *)v6 + 16;
      return v14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xE6u, 0LL);
  }
  if ( v6 )
    (*(void (__fastcall **)(CBitmapLock *))(*(_QWORD *)v6 + 16LL))(v6);
  return v14;
}
