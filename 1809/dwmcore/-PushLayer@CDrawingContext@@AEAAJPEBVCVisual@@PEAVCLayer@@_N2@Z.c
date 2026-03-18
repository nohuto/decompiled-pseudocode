/*
 * XREFs of ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x18002EC08
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x180010DB8 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x18002B8C8 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180166124 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@@Z @ 0x180166200 (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x1801662DC (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z @ 0x180166374 (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@MM@Z.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x180166548 (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18002F69C (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180036B2C (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect_ea_180036B2C.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A728 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushLayer(
        CDrawingContext *this,
        const struct CVisual *a2,
        struct CLayer *a3,
        char a4,
        bool a5)
{
  char v5; // r14
  char v6; // r12
  CDrawingContext *v10; // rdi
  int v11; // eax
  int v12; // ebx
  unsigned int v13; // eax
  unsigned int v14; // edx
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // [rsp+20h] [rbp-38h]
  _QWORD v19[5]; // [rsp+30h] [rbp-28h] BYREF

  v5 = 0;
  v6 = 0;
  v10 = this;
  if ( a4 && (v11 = CDrawingContext::FlushDeferredD2DLayers(this), v12 = v11, v11 < 0) )
  {
    v18 = 5664;
  }
  else
  {
    if ( a5 )
    {
      LODWORD(v19[0]) = 5;
      v19[1] = a2;
      v11 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
              (char *)v10 + 448,
              v19);
      v12 = v11;
      if ( v11 < 0 )
      {
        v18 = 5674;
        goto LABEL_17;
      }
      v5 = 1;
    }
    v19[0] = a3;
    v13 = *((_DWORD *)v10 + 142);
    v14 = v13 + 1;
    v12 = v13 + 1 < v13 ? 0x80070216 : 0;
    if ( v13 + 1 < v13 )
    {
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v12, 0xB5u);
    }
    else if ( v14 > *((_DWORD *)v10 + 141) )
    {
      v17 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v10 + 544, 8, 1, v19);
      v12 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v17, 0xC0u);
    }
    else
    {
      LODWORD(this) = *((_DWORD *)v10 + 142);
      *(_QWORD *)(*((_QWORD *)v10 + 68) + 8LL * v13) = v19[0];
      *((_DWORD *)v10 + 142) = v14;
    }
    if ( v12 < 0 )
    {
      v18 = 5681;
      v16 = v12;
      goto LABEL_24;
    }
    v6 = 1;
    if ( !a4
      || (v11 = (*(__int64 (__fastcall **)(struct CLayer *, CDrawingContext *))(*(_QWORD *)a3 + 16LL))(a3, v10),
          v12 = v11,
          v11 >= 0) )
    {
      ++dword_180308098;
      ++dword_180308148;
      goto LABEL_13;
    }
    v18 = 5686;
  }
LABEL_17:
  v16 = v11;
LABEL_24:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v16, v18);
LABEL_13:
  if ( v12 < 0 )
  {
    if ( v6 )
      --*((_DWORD *)v10 + 142);
    if ( v5 )
      CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
        (char *)v10 + 448,
        0LL,
        a3);
  }
  return (unsigned int)v12;
}
