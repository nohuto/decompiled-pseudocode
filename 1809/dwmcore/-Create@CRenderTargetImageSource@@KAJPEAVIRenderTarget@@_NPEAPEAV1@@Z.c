/*
 * XREFs of ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0
 * Callers:
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180002F58 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z @ 0x18000466C (-GetStockTransparentImageNoRef@CDrawingContext@@QEAAJPEAPEAVIImageSource@@@Z.c)
 *     ?GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCRenderTargetImageSource@@MPEAPEAV5@@Z @ 0x18000E870 (-GenerateBlurIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x18000EC1C (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000F2A4 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18008DF04 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800AA850 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z @ 0x1801640EC (-DrawSpatial@CDrawingContext@@QEAAJPEAUIDwmSpatialWorld@@AEBVCMILMatrix@@@Z.c)
 *     ?RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017B32C (-RenderLayer@CColorSpaceLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x18017BD8C (-RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18017CFFC (-RenderLayer@CLinearInterpolationLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180182BCC (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z @ 0x1801AD134 (-GenerateMaskIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@_N@Z.c)
 *     ?GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801AD478 (-GenerateWhiteColorIntermediate@CProjectedShadowCaster@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F.c)
 *     ?GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801AEC0C (-GenerateMaskIntermediate@CProjectedShadowReceiver@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@@Z @ 0x1801C9140 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEA.c)
 *     ?GenerateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C949C (-GenerateBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801C9DD4 (-GenerateMaskApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801D4D6C (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DA3E0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z @ 0x18004EC34 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetBitmap@@@Z.c)
 *     ?Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z @ 0x18004EE80 (-Initialize@CRenderTargetBitmap@@IEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderTargetImageSource::Create(
        struct IRenderTarget *a1,
        char a2,
        struct CRenderTargetImageSource **a3)
{
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edi
  struct CRenderTargetImageSource *v9; // rax
  unsigned int v10; // ecx
  struct CRenderTargetImageSource *v11; // rbx
  char *v12; // rax
  int v13; // eax
  __int64 v14; // r9
  int v15; // eax
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-48h]
  struct IRenderTargetDisplay *v19; // [rsp+30h] [rbp-38h] BYREF
  _BYTE v20[48]; // [rsp+38h] [rbp-30h] BYREF
  struct CRenderTargetImageSource *v21; // [rsp+70h] [rbp+8h] BYREF
  struct IRenderTargetBitmap *v22; // [rsp+88h] [rbp+20h] BYREF

  v6 = (*(__int64 (__fastcall **)(struct IRenderTarget *, _BYTE *, _QWORD))(*(_QWORD *)a1 + 120LL))(a1, v20, 0LL);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x16u);
    return v8;
  }
  v9 = (struct CRenderTargetImageSource *)HeapAlloc(WPF::g_processHeap, 0, 0xC0uLL);
  v11 = v9;
  if ( v9 )
  {
    *((_DWORD *)v9 + 4) = 0;
    *((_QWORD *)v9 + 5) = 0LL;
    *((_QWORD *)v9 + 6) = 0LL;
    *((_QWORD *)v9 + 7) = 0LL;
    *((_QWORD *)v9 + 8) = 0LL;
    *((_QWORD *)v9 + 9) = 0LL;
    *((_QWORD *)v9 + 10) = 0LL;
    *((_DWORD *)v9 + 22) = 0;
    v12 = (char *)v9 + 136;
    *((_QWORD *)v11 + 13) = v12;
    *((_QWORD *)v11 + 14) = v12;
    *((_DWORD *)v11 + 30) = 2;
    *(_QWORD *)((char *)v11 + 124) = 2LL;
    *((_QWORD *)v11 + 20) = 0LL;
    *((_QWORD *)v11 + 21) = 0LL;
    *((_QWORD *)v11 + 22) = 0LL;
    *((_BYTE *)v11 + 184) = a2;
    *(_QWORD *)v11 = &CRenderTargetImageSource::`vftable';
    *((_QWORD *)v11 + 1) = &CRenderTargetImageSource::`vftable'{for `CMILCOMBase'};
    *((_QWORD *)v11 + 3) = &CRenderTargetImageSource::`vftable'{for `ID2DBitmapCache'};
    *((_QWORD *)v11 + 4) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
    *((_QWORD *)v11 + 12) = &CRenderTargetImageSource::`vftable'{for `CDeviceResource'};
    *((_QWORD *)v11 + 19) = &CRenderTargetImageSource::`vftable'{for `IBitmapRealization'};
  }
  else
  {
    v11 = 0LL;
  }
  v21 = v11;
  if ( !v11 )
  {
    v8 = -2147024882;
    v18 = 26;
    v17 = -2147024882;
    goto LABEL_17;
  }
  (*(void (__fastcall **)(struct CRenderTargetImageSource *))(*(_QWORD *)v11 + 8LL))(v11);
  v13 = (**(__int64 (__fastcall ***)(struct IRenderTarget *, GUID *, struct IRenderTargetBitmap **))a1)(
          a1,
          &GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3,
          &v22);
  v14 = *(_QWORD *)a1;
  if ( v13 < 0 )
  {
    v15 = (*(__int64 (__fastcall **)(struct IRenderTarget *, GUID *, struct IRenderTargetDisplay **))v14)(
            a1,
            &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
            &v19);
    v8 = v15;
    if ( v15 < 0 )
    {
      v18 = 37;
    }
    else
    {
      (*(void (__fastcall **)(struct IRenderTarget *))(*(_QWORD *)a1 + 16LL))(a1);
      v15 = CRenderTargetBitmap::Initialize((struct CRenderTargetImageSource *)((char *)v11 + 8), v19);
      v8 = v15;
      if ( v15 >= 0 )
        goto LABEL_7;
      v18 = 40;
    }
    goto LABEL_14;
  }
  (*(void (__fastcall **)(struct IRenderTarget *))(v14 + 16))(a1);
  v15 = CRenderTargetBitmap::Initialize((struct CRenderTargetImageSource *)((char *)v11 + 8), v22);
  v8 = v15;
  if ( v15 < 0 )
  {
    v18 = 32;
LABEL_14:
    v17 = v15;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v17, v18);
    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v21);
    return v8;
  }
LABEL_7:
  *a3 = v11;
  return v8;
}
