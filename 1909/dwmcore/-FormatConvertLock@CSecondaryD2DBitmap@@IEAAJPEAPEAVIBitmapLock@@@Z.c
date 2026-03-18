/*
 * XREFs of ?FormatConvertLock@CSecondaryD2DBitmap@@IEAAJPEAPEAVIBitmapLock@@@Z @ 0x1801AB22C
 * Callers:
 *     ?Update@CSecondaryD2DBitmap@@UEAAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID2DBitmapCacheSource@@@Z @ 0x180053420 (-Update@CSecondaryD2DBitmap@@UEAAJAEBV-$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAVID.c)
 * Callees:
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180026E1C (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180047E10 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1801AB4A4 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x180222FA0 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::FormatConvertLock(CSecondaryD2DBitmap *this, struct IBitmapLock **a2)
{
  struct IBitmapSource *v3; // rsi
  __int64 v4; // rcx
  struct IBitmapSource *v6; // rdi
  int v7; // ecx
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  signed int v13; // eax
  __int64 v14; // rcx
  signed int v15; // eax
  __int64 v16; // rcx
  signed int v17; // eax
  struct WICRect *v18; // rdx
  __int64 v19; // rcx
  signed int v20; // eax
  __int64 v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  struct IUnknown *v25; // [rsp+30h] [rbp-39h]
  unsigned int v26; // [rsp+40h] [rbp-29h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-25h] BYREF
  unsigned int v28; // [rsp+48h] [rbp-21h] BYREF
  unsigned int v29; // [rsp+4Ch] [rbp-1Dh] BYREF
  struct IBitmapSource *v30; // [rsp+50h] [rbp-19h] BYREF
  struct IBitmapSource *v31; // [rsp+58h] [rbp-11h] BYREF
  struct IBitmapDest *v32; // [rsp+60h] [rbp-9h] BYREF
  _DWORD v33[4]; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int8 *v34; // [rsp+78h] [rbp+Fh] BYREF
  _BYTE v35[16]; // [rsp+80h] [rbp+17h] BYREF
  _BYTE v36[16]; // [rsp+90h] [rbp+27h] BYREF

  v3 = 0LL;
  v4 = (__int64)*a2;
  v32 = 0LL;
  v6 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v4 + 24LL))(v4, v35);
  v33[0] = *((_DWORD *)this + 46);
  v7 = *(_DWORD *)((*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this + 13) + 24LL))((char *)this + 104, v36)
                 + 4);
  v33[2] = *((_DWORD *)this + 62);
  v33[1] = v7;
  v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *))(*(_QWORD *)*a2 + 32LL))(*a2, &v29, &v28);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x18Eu, 0LL);
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*a2 + 40LL))(*a2, &v27);
    v10 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x190u, 0LL);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned __int8 **))(*(_QWORD *)*a2 + 48LL))(
              *a2,
              &v26,
              &v34);
      v10 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x191u, 0LL);
      }
      else
      {
        v15 = HrCreateBitmapFromMemoryEx(v29, v28, (const struct PixelFormatInfo *)v35, v27, v26, v34, v25, &v31);
        v10 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x19Cu, 0LL);
          v6 = v31;
        }
        else
        {
          v6 = v31;
          v17 = CFormatConverter::HrConvertBitmap(v31, (const struct PixelFormatInfo *)v33, &v30);
          v10 = v17;
          if ( v17 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v17, 0x1A3u, 0LL);
            v3 = v30;
          }
          else
          {
            v3 = v30;
            v20 = HrCreateDestBitmapCopy(v30, v18, &v32);
            v10 = v20;
            if ( v20 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1AAu, 0LL);
            }
            else
            {
              ReleaseInterface<IBitmapLock>((__int64 *)a2);
              v22 = (*(__int64 (__fastcall **)(struct IBitmapDest *, _QWORD, __int64, struct IBitmapLock **))(*(_QWORD *)v32 + 24LL))(
                      v32,
                      0LL,
                      1LL,
                      a2);
              v10 = v22;
              if ( v22 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1B3u, 0LL);
            }
          }
        }
      }
    }
  }
  if ( v32 )
    (*(void (__fastcall **)(struct IBitmapDest *))(*(_QWORD *)v32 + 16LL))(v32);
  if ( v3 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( v6 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v6 + 16LL))(v6);
  return v10;
}
