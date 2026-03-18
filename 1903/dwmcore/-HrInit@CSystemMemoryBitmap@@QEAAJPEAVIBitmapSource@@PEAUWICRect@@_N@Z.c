/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJPEAVIBitmapSource@@PEAUWICRect@@_N@Z @ 0x180222B2C
 * Callers:
 *     ?HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z @ 0x1801ACD64 (-HrCreateDestBitmapCopy@@YAJPEAVIBitmapSource@@PEAUWICRect@@PEAPEAVIBitmapDest@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180042214 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z @ 0x180222FFC (-HrInitDataFromIBitmapSource@CBitmap@@IEAAJPEAVIBitmapSource@@PEAUWICRect@@@Z.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(CSystemMemoryBitmap *this, struct IBitmapSource *a2, struct WICRect *a3)
{
  signed int inited; // eax
  __int64 v6; // rcx
  signed int v7; // ebx
  unsigned __int8 PixelFormatSize; // al
  unsigned int v9; // r8d
  __int64 v10; // rcx
  int v11; // eax
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  signed int v16; // eax
  __int64 v17; // rcx
  void *v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-38h]
  _DWORD v21[4]; // [rsp+30h] [rbp-28h] BYREF

  if ( !a2 )
  {
    v7 = -2147024809;
    goto LABEL_17;
  }
  inited = CBitmap::HrInitDataFromIBitmapSource(this, a2, 0LL);
  v7 = inited;
  if ( inited >= 0 )
  {
    PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 46));
    if ( PixelFormatSize && (v9 = *((_DWORD *)this + 42), v9 <= 0x7FFFFFF8u / PixelFormatSize) )
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
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v7, 0x1FCu, 0LL);
      goto LABEL_18;
    }
    inited = HrMalloc(*((unsigned int *)this + 60), *((unsigned int *)this + 43), (void **)this + 29);
    v7 = inited;
    if ( inited < 0 )
    {
      v20 = 516;
      goto LABEL_12;
    }
    v11 = *((_DWORD *)this + 42);
    v12 = *((_DWORD *)this + 43);
    v13 = *((_QWORD *)this + 29);
    v14 = *((unsigned int *)this + 60);
    v21[0] = 0;
    v21[1] = 0;
    v21[2] = v11;
    v15 = *(_QWORD *)a2;
    v21[3] = v12;
    v16 = (*(__int64 (__fastcall **)(struct IBitmapSource *, _DWORD *, __int64, _QWORD, __int64))(v15 + 48))(
            a2,
            v21,
            v14,
            (unsigned int)(v14 * v12),
            v13);
    v7 = v16;
    if ( v16 >= 0 )
      return (unsigned int)v7;
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x217u, 0LL);
LABEL_17:
    if ( v7 >= 0 )
      return (unsigned int)v7;
    goto LABEL_18;
  }
  v20 = 501;
LABEL_12:
  MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, inited, v20, 0LL);
LABEL_18:
  v18 = (void *)*((_QWORD *)this + 29);
  if ( v18 )
  {
    operator delete(v18);
    *((_QWORD *)this + 29) = 0LL;
  }
  return (unsigned int)v7;
}
