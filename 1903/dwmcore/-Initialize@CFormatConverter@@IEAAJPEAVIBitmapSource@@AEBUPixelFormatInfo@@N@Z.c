/*
 * XREFs of ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x180224824
 * Callers:
 *     ?HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z @ 0x1802246B0 (-HrConvertBitmap@CFormatConverter@@SAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@PEAPEAV2@@Z.c)
 * Callees:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180039AF4 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18015645C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HrCheckDstPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z @ 0x18022467C (-HrCheckDstPixelFormat@CFormatConverter@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z @ 0x180224A60 (-InitializeForFormatConversion@CScanPipeline@@QEAAJAEBUPixelFormatInfo@@0IE@Z.c)
 */

__int64 __fastcall CFormatConverter::Initialize(
        CFormatConverter *this,
        struct IBitmapSource *a2,
        enum DXGI_FORMAT *a3,
        double a4)
{
  unsigned int v7; // edi
  float v8; // xmm0_4
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rax
  CFormatConverter *v12; // rcx
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // r9
  int v16; // eax
  int v17; // eax
  unsigned __int8 v19; // [rsp+20h] [rbp-78h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+30h] [rbp-68h] BYREF
  _BYTE v21[16]; // [rsp+38h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v20 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v7 = 0;
  if ( !a2 || !IsValidPixelFormatInfo(a3) )
  {
    v10 = 402LL;
    goto LABEL_24;
  }
  *(_QWORD *)((char *)this + 84) = *(_QWORD *)a3;
  *((enum DXGI_FORMAT *)this + 23) = a3[2];
  if ( a4 < 0.0 || a4 > 100.0 )
  {
    v10 = 406LL;
LABEL_24:
    v9 = -2147024809;
    goto LABEL_25;
  }
  v8 = a4;
  *((float *)this + 26) = v8;
  if ( *((_QWORD *)this + 8) )
  {
    v9 = -2003292412;
    v10 = 413LL;
LABEL_25:
    v15 = v9;
    goto LABEL_26;
  }
  v11 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _BYTE *))(*(_QWORD *)a2 + 24LL))(a2, v21);
  *((_QWORD *)this + 9) = *(_QWORD *)v11;
  *((_DWORD *)this + 20) = *(_DWORD *)(v11 + 8);
  v13 = *((_DWORD *)this + 18);
  if ( v13 != 2 && (v13 <= 9 || v13 > 11 && v13 != 24 && v13 != 28 && v13 != 65 && (unsigned int)(v13 - 87) > 1) )
  {
    v9 = -2003292288;
    v10 = 417LL;
    goto LABEL_25;
  }
  v14 = CFormatConverter::HrCheckDstPixelFormat(v12, *((_DWORD *)this + 21));
  v9 = v14;
  if ( v14 < 0 )
  {
    v15 = (unsigned int)v14;
    v10 = 418LL;
LABEL_26:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\dwm\\common\\formatconverter\\formatconverter.cpp",
      (const char *)v15);
    v7 = v9;
    goto LABEL_27;
  }
  v16 = (*(__int64 (__fastcall **)(struct IBitmapSource *, char *, char *))(*(_QWORD *)a2 + 32LL))(
          a2,
          (char *)this + 96,
          (char *)this + 100);
  v9 = v16;
  if ( v16 < 0 )
  {
    v15 = (unsigned int)v16;
    v10 = 420LL;
    goto LABEL_26;
  }
  v17 = CScanPipeline::InitializeForFormatConversion(
          (CFormatConverter *)((char *)this + 112),
          (CFormatConverter *)((char *)this + 84),
          (CFormatConverter *)((char *)this + 72),
          *((_DWORD *)this + 24),
          v19);
  v9 = v17;
  if ( v17 < 0 )
  {
    v15 = (unsigned int)v17;
    v10 = 427LL;
    goto LABEL_26;
  }
  *((_QWORD *)this + 8) = a2;
  (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)a2 + 8LL))(a2);
LABEL_27:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v20);
  return v7;
}
