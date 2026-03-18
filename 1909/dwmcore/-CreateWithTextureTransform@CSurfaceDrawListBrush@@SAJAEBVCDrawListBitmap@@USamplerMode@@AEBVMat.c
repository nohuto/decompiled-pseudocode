/*
 * XREFs of ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x18003A18C
 * Callers:
 *     ?GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180018DD0 (-GetBrushParameters@CLinearGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18003E488 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EE5A0 (-EnumerateBrushes@CNineGridDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush@@PEAX@Z2@Z @ 0x1800EF1A0 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEBAJPEBVCDrawingContext@@P6AJPEBVCDrawListBrush.c)
 *     ?GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801F40B0 (-GetBrushParameters@CRadialGradientBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801FD520 (-GetBrushParameters@CWindowBackdropBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z @ 0x180258718 (-Initialize@CEmptyRegionDrawListBrush@@AEAAJPEAVCDrawingContext@@AEBUD2D_RECT_F@@@Z.c)
 * Callees:
 *     ??0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@@Z @ 0x18003A240 (--0CSurfaceDrawListBrush@@IEAA@AEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z @ 0x180095CD0 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCSurfaceDrawListBrush@@@Z.c)
 */

__int64 __fastcall CSurfaceDrawListBrush::CreateWithTextureTransform(
        struct CSurfaceDrawListBrush *a1,
        __int16 *a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned int v8; // ebx
  struct CObjectCache *ObjectCache; // rax
  _QWORD *v10; // rcx
  int v11; // r11d
  _QWORD *v12; // rax
  __int16 v14; // [rsp+30h] [rbp-18h] BYREF
  char v15; // [rsp+32h] [rbp-16h]

  v8 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = 0LL;
  v11 = *((_DWORD *)ObjectCache + 1);
  if ( v11 )
  {
    v10 = (_QWORD *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *v10;
    *((_DWORD *)ObjectCache + 1) = v11 - 1;
  }
  if ( v10 || (v12 = DefaultHeap::Alloc(0x98uLL), (v10 = v12) != 0LL) )
  {
    v14 = *a2;
    v15 = *((_BYTE *)a2 + 2);
    v12 = (_QWORD *)CSurfaceDrawListBrush::CSurfaceDrawListBrush(v10, a1, &v14, a3);
  }
  *a4 = v12;
  if ( !v12 )
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v10, 0LL, 0, -2147024882, 0x39u, 0LL);
  }
  return v8;
}
