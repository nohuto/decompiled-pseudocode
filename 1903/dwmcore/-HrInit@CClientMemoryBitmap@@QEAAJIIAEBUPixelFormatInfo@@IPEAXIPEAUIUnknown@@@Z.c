/*
 * XREFs of ?HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x1800399F4
 * Callers:
 *     ?HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@@@Z @ 0x180039930 (-HrCreateBitmapFromMemoryEx@@YAJIIAEBUPixelFormatInfo@@IIPEAEPEAUIUnknown@@PEAPEAVIBitmapSource@.c)
 * Callees:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180039AF4 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z @ 0x18003F4C8 (-HrCheckBufferSize@@YAJW4DXGI_FORMAT@@IIII@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CClientMemoryBitmap::HrInit(
        CClientMemoryBitmap *this,
        unsigned int a2,
        int a3,
        const struct PixelFormatInfo *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  unsigned int v11; // ecx
  unsigned int v12; // r8d
  int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned int v17; // [rsp+20h] [rbp-28h]

  if ( !IsValidPixelFormatInfo(a4) || !a2 || !v12 || !a6 || !a7 )
  {
    v17 = 31;
    goto LABEL_13;
  }
  if ( v12 >= 0x7FFFFFFF / a7 )
  {
    v17 = 36;
LABEL_13:
    v15 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, -2147024809, v17, 0LL);
    return v15;
  }
  v13 = HrCheckBufferSize((enum DXGI_FORMAT)*(_DWORD *)a4, a7, a2, v12, a5);
  v15 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x2Du, 0LL);
  }
  else
  {
    *((_QWORD *)this + 31) = 0LL;
    *((_DWORD *)this + 42) = a2;
    *((_DWORD *)this + 43) = a3;
    *((_QWORD *)this + 23) = *(_QWORD *)a4;
    *((_DWORD *)this + 48) = *((_DWORD *)a4 + 2);
    *((_QWORD *)this + 29) = a6;
    *((_DWORD *)this + 60) = a7;
  }
  return v15;
}
