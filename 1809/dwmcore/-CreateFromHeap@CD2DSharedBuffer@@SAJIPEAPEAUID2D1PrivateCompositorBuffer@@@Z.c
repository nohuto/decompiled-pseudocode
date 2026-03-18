/*
 * XREFs of ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180202D54
 * Callers:
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1801AB4B8 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801FE5DC (-DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F.c)
 * Callees:
 *     ??2CD2DSharedBuffer@@KAPEAX_K@Z @ 0x18004F070 (--2CD2DSharedBuffer@@KAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18005A790 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z @ 0x18009E3AC (--$ReleaseInterface@VCCompositionSurfaceInfo@@@@YAXAEAPEAVCCompositionSurfaceInfo@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromHeap(unsigned int a1, struct ID2D1PrivateCompositorBuffer **a2)
{
  unsigned int v2; // esi
  SIZE_T v5; // r8
  __int64 v6; // rcx
  void *v7; // rdi
  _DWORD *v8; // rax
  _DWORD *v9; // rbx
  unsigned int v11; // [rsp+20h] [rbp-28h]
  CGdiSpriteBitmap *v12; // [rsp+60h] [rbp+18h] BYREF

  v2 = 0;
  v12 = 0LL;
  v5 = a1;
  if ( !a1 )
    v5 = 1LL;
  v7 = HeapAlloc(WPF::g_processHeap, 0, v5);
  if ( !v7 )
  {
    v11 = 92;
LABEL_5:
    v2 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, v11);
    goto LABEL_12;
  }
  v8 = CD2DSharedBuffer::operator new();
  v9 = v8;
  if ( v8 )
  {
    v8[2] = 0;
    *((_QWORD *)v8 + 5) = 0LL;
    *(_QWORD *)v8 = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v8 + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
    *((_QWORD *)v8 + 3) = v7;
    v8[8] = a1;
  }
  else
  {
    v9 = 0LL;
  }
  v12 = (CGdiSpriteBitmap *)v9;
  if ( !v9 )
  {
    v11 = 99;
    goto LABEL_5;
  }
  v7 = 0LL;
  CMILCOMBase::InternalAddRef((CMILCOMBase *)v9);
  v12 = 0LL;
  *a2 = (struct ID2D1PrivateCompositorBuffer *)(v9 + 4);
LABEL_12:
  ReleaseInterface<CCompositionSurfaceInfo>(&v12);
  if ( v7 )
    WPF::ProcessHeapImpl::Free(v7);
  return v2;
}
