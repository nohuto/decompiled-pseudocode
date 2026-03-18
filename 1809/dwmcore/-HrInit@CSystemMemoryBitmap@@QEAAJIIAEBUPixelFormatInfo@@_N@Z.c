/*
 * XREFs of ?HrInit@CSystemMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@_N@Z @ 0x180213AF0
 * Callers:
 *     ?HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z @ 0x18015AEE4 (-HrCreateDestBitmap@@YAJIIAEBUPixelFormatInfo@@PEAPEAVIBitmapDest@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x180160760 (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x180096A0C (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 */

__int64 __fastcall CSystemMemoryBitmap::HrInit(
        CSystemMemoryBitmap *this,
        unsigned int a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4)
{
  unsigned __int8 PixelFormatSize; // al
  __int64 v9; // rcx
  unsigned int v10; // ebx
  void **v11; // r12
  int v12; // edi
  __int64 v13; // rcx
  SIZE_T v14; // r8
  LPVOID v15; // rax
  void *v16; // rcx
  int v17; // eax

  PixelFormatSize = GetPixelFormatSize(*(_DWORD *)a4);
  if ( PixelFormatSize && a2 <= 0x7FFFFFF8u / PixelFormatSize )
  {
    v10 = (((a2 * PixelFormatSize + 7) >> 3) + 3) & 0xFFFFFFFC;
    v11 = (void **)((char *)this + 232);
    v12 = 0;
    v13 = a3;
    if ( this != (CSystemMemoryBitmap *)-232LL && a3 && v10 && v10 < 0xFFFFFFFFFFFFFFFFuLL / a3 )
    {
      v14 = a3 * (unsigned __int64)v10;
      if ( !v14 )
        v14 = 1LL;
      v15 = HeapAlloc(WPF::g_processHeap, 0, v14);
      *v11 = v15;
      if ( !v15 )
        v12 = -2147024882;
    }
    else
    {
      v12 = -2147024809;
    }
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x15Fu);
    }
    else
    {
      v16 = *v11;
      *((_DWORD *)this + 42) = a2;
      *((_DWORD *)this + 43) = a3;
      *((_QWORD *)this + 23) = *(_QWORD *)a4;
      v17 = *((_DWORD *)a4 + 2);
      *((_DWORD *)this + 60) = v10;
      *((_DWORD *)this + 48) = v17;
      memset_0(v16, 0, a3 * v10);
    }
  }
  else
  {
    v12 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0x158u);
  }
  return (unsigned int)v12;
}
