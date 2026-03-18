/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@UEAAJPEAVIBitmapSource@@@Z @ 0x180213E10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x18021417C (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2)
{
  int inited; // eax
  __int64 v5; // rcx
  int v6; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v8; // r8d
  __int64 v9; // rcx
  _QWORD *v10; // r14
  unsigned __int64 v11; // r9
  SIZE_T v12; // r8
  LPVOID v13; // rax
  int v14; // edx
  int v15; // eax
  __int64 v16; // r8
  int v17; // r9d
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  void *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-48h]
  _DWORD v24[4]; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
  {
    v6 = -2147024809;
    goto LABEL_26;
  }
  inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
  v6 = inited;
  if ( inited < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, inited, 0x17Fu);
    goto LABEL_27;
  }
  PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 46));
  if ( PixelFormatSize && v8 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v6 = 0;
    v9 = (((v8 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
  }
  else
  {
    v6 = -2147024362;
    v9 = 0LL;
  }
  *((_DWORD *)this + 60) = v9;
  if ( v6 >= 0 )
  {
    v10 = (_QWORD *)((char *)this + 232);
    v6 = 0;
    if ( this != (CSystemMemoryBitmap *)-232LL
      && (v11 = *((unsigned int *)this + 43), *((_DWORD *)this + 43))
      && (_DWORD)v9
      && (unsigned int)v9 < 0xFFFFFFFFFFFFFFFFuLL / v11 )
    {
      v12 = v11 * (unsigned int)v9;
      if ( !v12 )
        v12 = 1LL;
      v13 = HeapAlloc(WPF::g_processHeap, 0, v12);
      *v10 = v13;
      if ( !v13 )
        v6 = -2147024882;
    }
    else
    {
      v6 = -2147024809;
    }
    if ( v6 < 0 )
    {
      v23 = 398;
      goto LABEL_21;
    }
    v14 = *((_DWORD *)this + 43);
    v15 = *((_DWORD *)this + 42);
    v16 = *((unsigned int *)this + 60);
    v17 = *((_DWORD *)this + 60);
    v24[0] = 0;
    v24[1] = 0;
    v24[2] = v15;
    v18 = *(_QWORD *)a2;
    v24[3] = v14;
    v19 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, _QWORD))(v18 + 48))(
            a2,
            v24,
            v16,
            (unsigned int)(v14 * v17),
            *v10);
    v6 = v19;
    if ( v19 >= 0 )
      return (unsigned int)v6;
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x198u);
LABEL_26:
    if ( v6 >= 0 )
      return (unsigned int)v6;
    goto LABEL_27;
  }
  v23 = 389;
LABEL_21:
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v6, v23);
LABEL_27:
  v21 = (void *)*((_QWORD *)this + 29);
  if ( v21 )
  {
    WPF::ProcessHeapImpl::Free(v21);
    *((_QWORD *)this + 29) = 0LL;
  }
  return (unsigned int)v6;
}
