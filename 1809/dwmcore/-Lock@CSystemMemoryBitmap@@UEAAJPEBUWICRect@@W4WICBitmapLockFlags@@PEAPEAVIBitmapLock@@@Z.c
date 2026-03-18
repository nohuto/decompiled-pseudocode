/*
 * XREFs of ?Lock@CSystemMemoryBitmap@@UEAAJPEBUWICRect@@W4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180096BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z @ 0x1800965AC (-HrCheckPixelRect@CBitmap@@IEAAJPEBUWICRect@@PEAUtagRECT@@@Z.c)
 *     ?GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z @ 0x18009672C (-GetRequiredBufferSize@@YAIW4DXGI_FORMAT@@IPEBUWICRect@@@Z.c)
 *     ?HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NPEAUIUnknown@@@Z @ 0x18009676C (-HrLock@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@_NP.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180099D60 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180214398 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
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
  enum DXGI_FORMAT v14; // ecx
  void *v15; // rbx
  unsigned int RequiredBufferSize; // eax
  int v17; // r11d
  const struct PixelFormatInfo *v18; // r9
  int v19; // eax
  unsigned int v20; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  int v25; // [rsp+64h] [rbp-25h]
  struct WICRect v27; // [rsp+70h] [rbp-19h] BYREF
  char *v28; // [rsp+80h] [rbp-9h] BYREF
  struct tagRECT v29; // [rsp+88h] [rbp-1h] BYREF

  v28 = (char *)this + 96;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v6 = CBitmap::HrCheckPixelRect((CSystemMemoryBitmap *)((char *)this - 24), a2, &v29);
  v8 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x52u);
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 40));
  v10 = v29.left * PixelFormatSize;
  v11 = (LOBYTE(v29.left) * PixelFormatSize) & 7;
  if ( v8 >= 0 )
  {
    v12 = *((_DWORD *)this + 54);
    v13 = v29.right - v29.left;
    v27.X = 0;
    v27.Y = 0;
    v25 = v29.bottom - v29.top;
    v27.Height = v29.bottom - v29.top;
    v14 = *((_DWORD *)this + 40);
    v27.Width = v29.right - v29.left;
    v15 = (void *)(*((_QWORD *)this + 26) + v10 / 8 + (__int64)(int)(v29.top * v12));
    RequiredBufferSize = GetRequiredBufferSize(v14, v12, &v27);
    v18 = (CSystemMemoryBitmap *)((char *)this + 160);
    if ( v11 )
    {
      v22 = CBitmap::HrLockUnaligned(
              (CSystemMemoryBitmap *)((char *)this - 24),
              v13,
              v25,
              v18,
              v11,
              v29.right * v17 - v10,
              *((_DWORD *)this + 54),
              RequiredBufferSize,
              v15,
              a3,
              a4);
      v8 = v22;
      if ( v22 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x9Fu);
    }
    else
    {
      v19 = CBitmap::HrLock(
              (CSystemMemoryBitmap *)((char *)this - 24),
              v13,
              v25,
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
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x85u);
      else
        (*(void (__fastcall **)(char *))(*((_QWORD *)this - 3) + 8LL))((char *)this - 24);
    }
  }
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v28);
  return (unsigned int)v8;
}
