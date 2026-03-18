/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x180221310
 * Callers:
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x180161D5C (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018AFBC (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x1800484B8 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(
        void **this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4)
{
  unsigned __int8 PixelFormatSize; // al
  __int64 v9; // rcx
  unsigned int v10; // ebx
  signed int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // edi
  void *v14; // rcx
  int v15; // edx

  PixelFormatSize = GetPixelFormatSize(*(_DWORD *)a4);
  if ( PixelFormatSize && a2 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v10 = (((a2 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v11 = HrMalloc(v10, a3, this + 29);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x158u, 0LL);
    }
    else
    {
      v14 = this[29];
      *((_DWORD *)this + 42) = a2;
      *((_DWORD *)this + 43) = a3;
      this[23] = *(void **)a4;
      v15 = *((_DWORD *)a4 + 2);
      *((_DWORD *)this + 60) = v10;
      *((_DWORD *)this + 48) = v15;
      memset_0(v14, 0, a3 * v10);
    }
  }
  else
  {
    v13 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x80070216, 0x152u, 0LL);
  }
  return v13;
}
