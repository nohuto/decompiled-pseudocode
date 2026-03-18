/*
 * XREFs of ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180043F20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800408F8 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x180043DC0 (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x180044098 (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18004438C (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180223238 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 */

__int64 __fastcall CSystemMemoryBitmap::Lock(
        CSystemMemoryBitmap *this,
        const struct WICRect *a2,
        enum WICBitmapLockFlags a3,
        struct IBitmapLock **a4)
{
  int v6; // eax
  unsigned int v7; // ecx
  int v8; // ebx
  unsigned __int8 PixelFormatSize; // al
  int v10; // esi
  unsigned int v11; // r14d
  unsigned int v12; // r9d
  unsigned int v13; // r13d
  int v14; // ecx
  void *v15; // rbx
  unsigned int RequiredBufferSize; // eax
  int v17; // r11d
  const struct PixelFormatInfo *v18; // r9
  int v19; // eax
  unsigned int v20; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  void *v24; // [rsp+30h] [rbp-59h]
  unsigned int v26; // [rsp+64h] [rbp-25h]
  WICRect v28; // [rsp+70h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v29; // [rsp+80h] [rbp-9h] BYREF
  int v30; // [rsp+88h] [rbp-1h] BYREF
  int v31; // [rsp+8Ch] [rbp+3h]
  int v32; // [rsp+90h] [rbp+7h]
  int v33; // [rsp+94h] [rbp+Bh]

  v29 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v6 = CBitmap::HrCheckPixelRect((char *)this - 24, a2, &v30);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x4Cu, 0LL);
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 40));
  v10 = v30 * PixelFormatSize;
  v11 = ((_BYTE)v30 * PixelFormatSize) & 7;
  if ( v8 >= 0 )
  {
    v12 = *((_DWORD *)this + 54);
    v13 = v32 - v30;
    v28.X = 0;
    v28.Y = 0;
    v26 = v33 - v31;
    v28.Height = v33 - v31;
    v14 = *((_DWORD *)this + 40);
    v28.Width = v32 - v30;
    v15 = (void *)(*((_QWORD *)this + 26) + v10 / 8 + (__int64)(int)(v31 * v12));
    RequiredBufferSize = GetRequiredBufferSize(v14, v12, &v28);
    v18 = (CSystemMemoryBitmap *)((char *)this + 160);
    if ( v11 )
    {
      LODWORD(v24) = *((_DWORD *)this + 54);
      v22 = CBitmap::HrLockUnaligned(
              (CSystemMemoryBitmap *)((char *)this - 24),
              v13,
              v26,
              v18,
              v11,
              v32 * v17 - v10,
              v24,
              RequiredBufferSize,
              v15,
              a3,
              a4);
      v8 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x99u, 0LL);
    }
    else
    {
      v19 = CBitmap::HrLock(
              (CSystemMemoryBitmap *)((char *)this - 24),
              v13,
              v26,
              v18,
              *((_DWORD *)this + 54),
              RequiredBufferSize,
              v15,
              a3,
              a4,
              0,
              (struct IUnknown *)this - 3);
      v8 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x7Fu, 0LL);
      else
        (*(void (__fastcall **)(char *))(*((_QWORD *)this - 3) + 8LL))((char *)this - 24);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v29);
  return (unsigned int)v8;
}
