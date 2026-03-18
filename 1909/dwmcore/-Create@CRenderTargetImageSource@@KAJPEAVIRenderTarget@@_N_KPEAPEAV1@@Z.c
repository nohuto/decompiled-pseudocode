/*
 * XREFs of ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x1800BEF5C
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000D240 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCRenderTargetImageSource@@MPEAPEAV5@@Z @ 0x1800101BC (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x180010530 (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180011164 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x1800367E0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18005042C (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18015BF08 (-GetStockTransparentImageNoRef@CD3DDeviceLevel1@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017B7AC (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x18017C290 (-RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@AEAAJPEAVCDrawingContext@@@Z @ 0x18017D4C8 (-RenderLayer@CLinearInterpolationLayer@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801AF5F4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180204BBC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIImageSource@@AEBUD2D_POINT_2F@@MPEAPEAVCRenderTargetImageSource@@@Z @ 0x180257360 (-GenerateBlurIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x1802576E4 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVIImageSource@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x180257A10 (-GenerateWhiteColorIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800207E8 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0CRenderTargetImageSource@@IEAA@_N@Z @ 0x1800BF0A0 (--0CRenderTargetImageSource@@IEAA@_N@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x1800BF3A8 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1800BF4F0 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetImageSource::Create(
        struct IRenderTarget *a1,
        bool a2,
        __int64 a3,
        struct CRenderTargetImageSource **a4)
{
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  CRenderTargetImageSource *v11; // rax
  CRenderTargetImageSource *v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // r9
  signed int v16; // eax
  __int64 v17; // rcx
  unsigned int v19; // [rsp+20h] [rbp-30h]
  struct IRenderTargetBitmap *v20; // [rsp+30h] [rbp-20h] BYREF
  struct IRenderTargetDisplay *v21; // [rsp+38h] [rbp-18h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-10h] BYREF
  CRenderTargetImageSource *v23; // [rsp+70h] [rbp+20h] BYREF

  v8 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _BYTE *, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, v22, 0LL);
  v10 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x15u, 0LL);
    return v10;
  }
  v11 = (CRenderTargetImageSource *)DefaultHeap::Alloc(0xC8uLL);
  if ( v11 )
    v12 = CRenderTargetImageSource::CRenderTargetImageSource(v11, a2);
  else
    v12 = 0LL;
  v23 = v12;
  Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v23);
  if ( !v12 )
  {
    v10 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, 0x8007000E, 0x19u, 0LL);
    goto LABEL_8;
  }
  *((_QWORD *)v12 + 24) = a3;
  v14 = (**(__int64 (__fastcall ***)(struct IRenderTarget *, GUID *, struct IRenderTargetBitmap **))a1)(
          a1,
          &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
          &v20);
  v15 = *(_QWORD *)a1;
  if ( v14 < 0 )
  {
    v16 = (*(__int64 (__fastcall **)(struct IRenderTarget *, GUID *, struct IRenderTargetDisplay **))v15)(
            a1,
            &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
            &v21);
    v10 = v16;
    if ( v16 < 0 )
    {
      v19 = 38;
    }
    else
    {
      (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 16LL))(a1);
      v16 = CRenderTargetBitmap::Initialize((CRenderTargetImageSource *)((char *)v12 + 8), v21);
      v10 = v16;
      if ( v16 >= 0 )
        goto LABEL_7;
      v19 = 41;
    }
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, v19, 0LL);
    goto LABEL_8;
  }
  (*(void (__fastcall **)(struct IRenderTarget *))(v15 + 16))(a1);
  v16 = CRenderTargetBitmap::Initialize((CRenderTargetImageSource *)((char *)v12 + 8), v20);
  v10 = v16;
  if ( v16 < 0 )
  {
    v19 = 33;
    goto LABEL_16;
  }
LABEL_7:
  v23 = 0LL;
  *a4 = v12;
LABEL_8:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v23);
  return v10;
}
