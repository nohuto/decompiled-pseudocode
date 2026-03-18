/*
 * XREFs of ?CreateFromHeap@CD2DSharedBuffer@@SAJIPEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18016A1C4
 * Callers:
 *     ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801608FC (-DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F.c)
 *     ?BuildHeatMap@CPrimitiveGroup@@AEAAJXZ @ 0x1801C5AB0 (-BuildHeatMap@CPrimitiveGroup@@AEAAJXZ.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z @ 0x180080904 (--$ReleaseInterface@UMoveOptimizationInfo@@@@YAXAEAPEAUMoveOptimizationInfo@@@Z.c)
 *     ??2CD2DSharedBuffer@@KAPEAX_K@Z @ 0x180089A50 (--2CD2DSharedBuffer@@KAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800BD110 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromHeap(unsigned int a1, struct ID2D1PrivateCompositorBuffer **a2)
{
  unsigned int v3; // esi
  __int64 v5; // rcx
  void *v6; // rdi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  unsigned int v10; // [rsp+20h] [rbp-28h]
  CGdiSpriteBitmap *v11; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0;
  v11 = 0LL;
  v6 = DefaultHeap::Alloc(a1);
  if ( !v6 )
  {
    v10 = 86;
LABEL_3:
    v3 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, 0x8007000E, v10, 0LL);
    goto LABEL_10;
  }
  v7 = CD2DSharedBuffer::operator new();
  v8 = v7;
  if ( v7 )
  {
    v7[2] = 0;
    *((_QWORD *)v7 + 5) = 0LL;
    *(_QWORD *)v7 = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v7 + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
    *((_QWORD *)v7 + 3) = v6;
    v7[8] = a1;
  }
  else
  {
    v8 = 0LL;
  }
  v11 = (CGdiSpriteBitmap *)v8;
  if ( !v8 )
  {
    v10 = 93;
    goto LABEL_3;
  }
  v6 = 0LL;
  CMILCOMBase::InternalAddRef((CMILCOMBase *)v8);
  v11 = 0LL;
  *a2 = (struct ID2D1PrivateCompositorBuffer *)(v8 + 4);
LABEL_10:
  ReleaseInterface<MoveOptimizationInfo>(&v11);
  if ( v6 )
    operator delete(v6);
  return v3;
}
