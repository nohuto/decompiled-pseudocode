/*
 * XREFs of ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x180215984
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x18021581C (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180092D5C (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x180215CE4 (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 */

__int64 __fastcall CFormatConverter::Initialize(
        CFormatConverter *this,
        struct IBitmapSource *a2,
        const struct PixelFormatInfo *a3,
        double a4)
{
  __int64 v7; // rcx
  int *v8; // r14
  int v9; // r9d
  int v10; // ebx
  bool v11; // zf
  float v12; // xmm0_4
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // r9d
  unsigned __int8 v20; // [rsp+20h] [rbp-68h]
  unsigned int v21; // [rsp+20h] [rbp-68h]
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v23[16]; // [rsp+38h] [rbp-50h] BYREF

  v22 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  if ( a2 && IsValidPixelFormatInfo(a3) )
  {
    v8 = (int *)((char *)this + 84);
    *(_QWORD *)((char *)this + 84) = *(_QWORD *)a3;
    v9 = 0;
    *((_DWORD *)this + 23) = *((_DWORD *)a3 + 2);
    if ( a4 < 0.0 || a4 > 100.0 )
      v9 = -2147024809;
    v10 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v9, 0x1B2u);
      goto LABEL_38;
    }
    v11 = *((_QWORD *)this + 8) == 0LL;
    v12 = a4;
    *((float *)this + 26) = v12;
    if ( !v11 )
    {
      v10 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003292412, 0x1BBu);
LABEL_39:
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v10, 0x1D3u);
      goto LABEL_40;
    }
    v14 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v23);
    v7 = 2291675008LL;
    v10 = -2003292288;
    *((_QWORD *)this + 9) = *(_QWORD *)v14;
    *((_DWORD *)this + 20) = *(_DWORD *)(v14 + 8);
    v15 = *((_DWORD *)this + 18);
    if ( v15 == 2 || v15 > 9 && (v15 <= 11 || v15 == 24 || v15 == 28 || v15 == 65 || (unsigned int)(v15 - 87) <= 1) )
      v10 = 0;
    if ( v10 < 0 )
    {
      v21 = 448;
    }
    else
    {
      v16 = *v8;
      v10 = -2003292288;
      if ( *v8 == 2 || v16 > 9 && (v16 <= 11 || v16 == 24 || v16 == 28 || (unsigned int)(v16 - 87) <= 1) )
        v10 = 0;
      if ( v10 >= 0 )
      {
        v17 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 32LL))(
                a2,
                (char *)this + 96,
                (char *)this + 100);
        v10 = v17;
        if ( v17 < 0 )
        {
          v21 = 451;
        }
        else
        {
          v17 = CScanPipeline::InitializeForFormatConversion(
                  (CFormatConverter *)((char *)this + 112),
                  (CFormatConverter *)((char *)this + 84),
                  (CFormatConverter *)((char *)this + 72),
                  *((_DWORD *)this + 24),
                  v20);
          v10 = v17;
          if ( v17 >= 0 )
          {
            *((_QWORD *)this + 8) = a2;
            (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
            goto LABEL_38;
          }
          v21 = 458;
        }
        v18 = v17;
        goto LABEL_37;
      }
      v21 = 449;
    }
    v18 = v10;
  }
  else
  {
    v18 = -2147024809;
    v21 = 429;
    v10 = -2147024809;
  }
LABEL_37:
  MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v18, v21);
LABEL_38:
  if ( v10 < 0 )
    goto LABEL_39;
LABEL_40:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v22);
  return (unsigned int)v10;
}
