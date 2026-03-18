/*
 * XREFs of ?HrInit@CBitmapLockUnaligned@@QEAAJPEAVCBitmap@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@II@Z @ 0x180214A58
 * Callers:
 *     ?HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitmapLock@@@Z @ 0x180214398 (-HrLockUnaligned@CBitmap@@IEAAJIIAEBUPixelFormatInfo@@IIIIPEAXW4WICBitmapLockFlags@@PEAPEAVIBitm.c)
 * Callees:
 *     ?HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@_NPEAUIUnknown@@@Z @ 0x1800968D4 (-HrInit@CBitmapLock@@QEAAJPEAVIBitmapUnlock@@IIAEBUPixelFormatInfo@@IIPEAXW4WICBitmapLockFlags@@.c)
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ReadUnalignedScanline@@YAXPEAEPEBEII@Z @ 0x180214CCC (-ReadUnalignedScanline@@YAXPEAEPEBEII@Z.c)
 */

__int64 __fastcall CBitmapLockUnaligned::HrInit(
        CBitmapLockUnaligned *this,
        struct CBitmap *a2,
        unsigned int a3,
        unsigned int a4,
        const struct PixelFormatInfo *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned __int8 *a8,
        enum WICBitmapLockFlags a9,
        unsigned int a10,
        unsigned int a11)
{
  CBitmapLock *v11; // rbp
  enum WICBitmapLockFlags v12; // r12d
  struct CBitmap *v13; // r13
  __int64 v14; // r14
  unsigned __int8 PixelFormatSize; // al
  __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned int v18; // edi
  unsigned __int8 *v19; // rsi
  int v20; // ebx
  __int64 v21; // rcx
  SIZE_T v22; // r8
  unsigned int v23; // r15d
  unsigned __int8 *v24; // rbx
  __int64 v25; // r12
  const unsigned __int8 *v26; // r15
  int v27; // eax
  __int64 v28; // rcx
  unsigned __int8 *v30; // [rsp+60h] [rbp-58h]
  unsigned int v35; // [rsp+F0h] [rbp+38h]

  v11 = this;
  v12 = a9;
  v13 = a2;
  *((_DWORD *)this + 38) = a6;
  *((_QWORD *)this + 18) = a8;
  *((_DWORD *)this + 39) = a7;
  *((_DWORD *)this + 41) = a10;
  *((_DWORD *)this + 40) = a11;
  *((_DWORD *)this + 32) = a9;
  v14 = a4;
  PixelFormatSize = GetPixelFormatSize(*(_DWORD *)a5);
  if ( PixelFormatSize && v17 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v18 = (((v17 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v19 = 0LL;
    v30 = 0LL;
    v20 = 0;
    v21 = (unsigned int)v14;
    if ( (_DWORD)v14 && v18 && v18 < 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v14 )
    {
      v22 = (unsigned int)v14 * (unsigned __int64)v18;
      if ( !v22 )
        v22 = 1LL;
      v30 = (unsigned __int8 *)HeapAlloc(WPF::g_processHeap, 0, v22);
      v19 = v30;
      if ( !v30 )
        v20 = -2147024882;
    }
    else
    {
      v20 = -2147024809;
    }
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xA3u);
  }
  else
  {
    v20 = -2147024362;
    v18 = 0;
    MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, -2147024362, 0x98u);
    v19 = 0LL;
    v30 = 0LL;
  }
  v23 = v14 * v18;
  v35 = v14 * v18;
  if ( v20 < 0 )
    goto LABEL_22;
  if ( (a9 & 1) != 0 )
  {
    v24 = v19;
    if ( (_DWORD)v14 )
    {
      v25 = v14;
      v26 = a8;
      do
      {
        ReadUnalignedScanline(v24, v26, a11, a10);
        v26 += a6;
        v24 += v18;
        --v25;
      }
      while ( v25 );
      v19 = v30;
      v11 = this;
      LODWORD(v14) = a4;
      v23 = v35;
      v12 = a9;
      v13 = a2;
    }
  }
  v27 = CBitmapLock::HrInit(
          v11,
          (struct IBitmapUnlock *)(((unsigned __int64)v13 + 32) & -(__int64)(v13 != 0LL)),
          a3,
          v14,
          a5,
          v18,
          v23,
          v19,
          v12,
          0,
          0LL);
  v20 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0xD0u);
LABEL_22:
    WPF::ProcessHeapImpl::Free(v19);
  }
  return (unsigned int)v20;
}
