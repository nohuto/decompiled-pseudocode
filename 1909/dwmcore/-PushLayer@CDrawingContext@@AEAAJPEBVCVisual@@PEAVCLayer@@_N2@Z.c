/*
 * XREFs of ?PushLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAVCLayer@@_N2@Z @ 0x180038EDC
 * Callers:
 *     ?PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@11PEAVCResource@@PEA_N@Z @ 0x1800131D8 (-PushEffectLayer@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndSize.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180038D08 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180051B48 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18016F040 (-PushColorSpaceLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV?$TValueResource@UMilColorTransform@@UtagMILCMD_COLORTRANSFORMRESOURCE@@$0BH@@@@Z @ 0x18016F12C (-PushColorTransformLayer@CDrawingContext@@AEAAJPEBVCVisual@@PEAV-$TValueResource@UMilColorTransf.c)
 *     ?PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z @ 0x18016F218 (-PushGammaBlendLayer@CDrawingContext@@QEAAJAEBUMilPointAndSizeL@@@Z.c)
 *     ?PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18016F2BC (-PushLinearInterpolationLayer@CDrawingContext@@AEAAJAEBUMilPointAndSizeL@@AEBV-$TMilRect_@MUMilR.c)
 *     ?PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPointAndSizeL@@MM@Z @ 0x18016F4AC (-PushResampleLayer@CDrawingContext@@AEAAJPEBVCVisual@@W4Enum@CompositionResampleMode@@AEBUMilPoi.c)
 * Callees:
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18003B3B8 (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180050F9C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18005CF68 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawingContext::PushLayer(
        CDrawingContext *this,
        const struct CVisual *a2,
        struct CLayer *a3,
        char a4,
        bool a5)
{
  char v5; // r15
  char v6; // bp
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
  if ( a4 && (v11 = CDrawingContext::FlushDeferredD2DLayers(this), v12 = v11, v11 < 0) )
  {
    v18 = 5492;
  }
  else
  {
    if ( !a5 )
      goto LABEL_6;
    LODWORD(v19[0]) = 5;
    v19[1] = a2;
    v11 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push((char *)this + 448, v19);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v5 = 1;
LABEL_6:
      v19[0] = a3;
      v13 = *((_DWORD *)this + 142);
      v14 = v13 + 1;
      if ( v13 + 1 < v13 )
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024362, 0xB8u, 0LL);
      }
      else
      {
        if ( v14 <= *((_DWORD *)this + 141) )
        {
          v12 = 0;
          *(_QWORD *)(*((_QWORD *)this + 68) + 8LL * v13) = v19[0];
          *((_DWORD *)this + 142) = v14;
LABEL_9:
          v6 = 1;
          if ( !a4
            || (v11 = (*(__int64 (__fastcall **)(struct CLayer *, CDrawingContext *))(*(_QWORD *)a3 + 16LL))(a3, this),
                v12 = v11,
                v11 >= 0) )
          {
            ++dword_180339868;
            ++dword_180339918;
            goto LABEL_12;
          }
          v18 = 5514;
          goto LABEL_16;
        }
        v17 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 544, 8LL, 1LL, v19);
        v12 = v17;
        if ( v17 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v17, 0xC3u, 0LL);
      }
      if ( v12 < 0 )
      {
        v16 = v12;
        v18 = 5509;
        goto LABEL_23;
      }
      goto LABEL_9;
    }
    v18 = 5502;
  }
LABEL_16:
  v16 = v11;
LABEL_23:
  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v16, v18, 0LL);
LABEL_12:
  if ( v12 < 0 )
  {
    if ( v6 )
      --*((_DWORD *)this + 142);
    if ( v5 )
      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((char *)this + 448, 0LL, a3);
  }
  return (unsigned int)v12;
}
