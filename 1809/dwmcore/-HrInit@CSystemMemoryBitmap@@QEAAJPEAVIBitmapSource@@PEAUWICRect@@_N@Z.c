/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x180213C38
 * Callers:
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x180181564 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x18021417C (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  int inited; // eax
  __int64 v6; // rcx
  int v7; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v9; // r8d
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  SIZE_T v12; // r8
  LPVOID v13; // rax
  int v14; // eax
  int v15; // r9d
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  void *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-48h]
  _DWORD v24[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v7 = -2147024809;
    goto LABEL_26;
  }
  inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
  v7 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, inited, 0x1FDu);
    goto LABEL_27;
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 46));
  if ( PixelFormatSize && v9 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v7 = 0;
    v10 = (((v9 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v7 = -2147024362;
    v10 = 0LL;
  }
  *((_DWORD *)this + 60) = v10;
  if ( v7 >= 0 )
  {
    v7 = 0;
    if ( this != (CSystemMemoryBitmap *)-232LL
      && (v10 = *((unsigned int *)this + 43), *((_DWORD *)this + 43))
      && (v11 = *((unsigned int *)this + 60), *((_DWORD *)this + 60))
      && v11 < 0xFFFFFFFFFFFFFFFFuLL / v10 )
    {
      v12 = v10 * v11;
      if ( !v12 )
        v12 = 1LL;
      v13 = HeapAlloc(WPF::g_processHeap, 0, v12);
      *((_QWORD *)this + 29) = v13;
      if ( !v13 )
        v7 = -2147024882;
    }
    else
    {
      v7 = -2147024809;
    }
    if ( v7 < 0 )
    {
      v23 = 525;
      goto LABEL_21;
    }
    v14 = *((_DWORD *)this + 42);
    v15 = *((_DWORD *)this + 43);
    v16 = *((_QWORD *)this + 29);
    v17 = *((unsigned int *)this + 60);
    v24[0] = 0;
    v24[1] = 0;
    v24[2] = v14;
    v18 = *(_QWORD *)a2;
    v24[3] = v15;
    v19 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, __int64))(v18 + 48))(
            a2,
            v24,
            v17,
            (unsigned int)(v17 * v15),
            v16);
    v7 = v19;
    if ( v19 >= 0 )
      return (unsigned int)v7;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x220u);
LABEL_26:
    if ( v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_27;
  }
  v23 = 516;
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, v23);
LABEL_27:
  v21 = (void *)*((_QWORD *)this + 29);
  if ( v21 )
  {
    WPF::ProcessHeapImpl::Free(v21);
    *((_QWORD *)this + 29) = 0LL;
  }
  return (unsigned int)v7;
}
