/*
 * XREFs of ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500
 * Callers:
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180005314 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180008830 (-DrawAsDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMi.c)
 *     ?GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x18000D7A0 (-GenerateMaskIntermediate@ShadowIntermediates@CDropShadow@@CAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ?FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_POINT_2F@@_N@Z @ 0x18000DB2C (-FillEffect@CDrawingContext@@QEAAJPEAUID2D1Effect@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180011DF8 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z @ 0x180012040 (-CalcDeviceTransformDelta@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@PEAVCMILMatrix@@@Z.c)
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x180012234 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z @ 0x180015A98 (-PushDeviceTransform@CDrawingContext@@IEAAJAEBVCMILMatrix@@PEA_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180019460 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003B01C (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18004AC18 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x18004F6E0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x180050734 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z @ 0x18006EC50 (-PushTransform@CDrawingContext@@UEAAJPEAVCTransform@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18007AD30 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z @ 0x1800B5684 (-FillShapeForBounds@CDrawingContext@@AEAAJAEBVCShape@@_N@Z.c)
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x18016D1D4 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z @ 0x18016D600 (-DrawGenericInk@CDrawingContext@@UEAAJPEAUIDCompositionDirectInkWetStrokePartner@@_N@Z.c)
 *     ?DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z @ 0x18016D7E0 (-DrawInk@CDrawingContext@@UEAAJPEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@@Z.c)
 *     ?DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z @ 0x18016DB2C (-DrawPolygon@CDrawingContext@@QEAAJPEAVCPolygon@@@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016E244 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1801712B4 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@HUtagRECT@@UMilPoi.c)
 *     ?RenderLayer@CLinearInterpolationLayer@@AEAAJPEAVCDrawingContext@@@Z @ 0x18017EBC8 (-RenderLayer@CLinearInterpolationLayer@@AEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z @ 0x18018C69C (-RenderVisual@CDebugVisualRenderer@@CAJPEAVCComposition@@PEAVCVisual@@@Z.c)
 *     ?Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4DebugFrameCounterPosition@1@PEAV4@@Z @ 0x180192C78 (-Display@CDisplayDebugFrameCounter@@QEAAJIIPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801B0EB4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801FF814 (-RenderWorker@CComposeTop@@AEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBVCShape@@PEAV-$TMilRect_.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802062AC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020E7C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z @ 0x18024FBA0 (-RenderAdditionalTopmostContent@CCaptureRenderTarget@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z @ 0x180253240 (-ApplyTransformToDrawingContext@CShapeDrawingContext@@AEAAJPEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCSpriteVisualContent@@PEBVCShape@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAPEAVCRenderTargetImageSource@@@Z @ 0x180258E54 (-GenerateMaskIntermediate@ShadowHelpers@@YAJAEBVCResourceTag@@PEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 * Callees:
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18003BB8C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x180064380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180071850 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x180071F34 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?Push@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z @ 0x180071F90 (-Push@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEAAJAEBVCMILMatrix@@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 */

__int64 __fastcall CDrawingContext::PushTransformInternal(
        CDrawingContext *this,
        const struct CVisual *a2,
        const struct CMILMatrix *a3,
        char a4,
        bool a5)
{
  char v5; // r12
  int v9; // ebp
  __int64 v10; // r8
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // ecx
  int v16; // edi
  unsigned int *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // r14d
  __int64 v21; // rdx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  float *v24; // rcx
  bool v25; // si
  __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // ecx
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // r13d
  int v35; // eax
  unsigned int v36; // ecx
  unsigned __int64 v37; // rcx
  void *v38; // rdi
  unsigned int v39; // r14d
  int v40; // eax
  unsigned int v41; // ecx
  void *v42; // rdi
  unsigned int v43; // r13d
  int v44; // eax
  unsigned int v45; // ecx
  unsigned __int64 v46; // rax
  void *v47; // rdi
  void *v48; // rdi
  HANDLE ProcessHeap; // rax
  void *v50; // rdi
  HANDLE v51; // rax
  void *v52; // rdi
  HANDLE v53; // rax
  void *lpMem; // [rsp+30h] [rbp-E8h] BYREF
  __int128 v55; // [rsp+38h] [rbp-E0h]
  _BYTE v56[64]; // [rsp+50h] [rbp-C8h] BYREF
  int v57; // [rsp+90h] [rbp-88h]
  _BYTE v58[64]; // [rsp+A0h] [rbp-78h] BYREF
  int v59; // [rsp+E0h] [rbp-38h]

  v5 = 0;
  v9 = -2147024362;
  v10 = 64LL;
  if ( a5 )
  {
    v11 = *((_DWORD *)this + 112);
    v12 = *((unsigned int *)this + 113);
    LODWORD(v55) = 4;
    *((_QWORD *)&v55 + 1) = a2;
    lpMem = 0LL;
    if ( v11 != (_DWORD)v12 )
    {
LABEL_3:
      v13 = 0;
      *(_OWORD *)(*((_QWORD *)this + 58) + 16LL * v11) = v55;
      v14 = *((_DWORD *)this + 118);
      v15 = *((_DWORD *)this + 112) + 1;
      *((_DWORD *)this + 112) = v15;
      if ( v14 <= v15 )
        v14 = v15;
      *((_DWORD *)this + 118) = v14;
      goto LABEL_6;
    }
    v43 = 2 * v12;
    if ( (unsigned __int64)(2 * v12) > 0xFFFFFFFF )
    {
      v13 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      v16 = -2147024362;
      goto LABEL_51;
    }
    if ( v43 <= 0x40 )
      v43 = 64;
    v44 = HrMalloc(0x10uLL, v43, &lpMem);
    v13 = v44;
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x53u, 0LL);
    }
    else
    {
      v46 = 16LL * *((unsigned int *)this + 112);
      if ( v46 <= 0xFFFFFFFF )
      {
        v47 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 58), (unsigned int)v46);
        operator delete(*((void **)this + 58));
        v11 = *((_DWORD *)this + 112);
        *((_DWORD *)this + 113) = v43;
        *((_QWORD *)this + 58) = v47;
        goto LABEL_3;
      }
      v13 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v48 = lpMem;
    if ( lpMem )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v48);
    }
LABEL_6:
    v16 = v13;
    if ( v13 >= 0 )
    {
      v5 = 1;
      goto LABEL_8;
    }
LABEL_51:
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v13, 0x11B2u, 0LL);
    goto LABEL_24;
  }
LABEL_8:
  v17 = (unsigned int *)((char *)this + 480);
  v18 = *((unsigned int *)this + 120);
  if ( !(_DWORD)v18 || !a4 )
  {
    v19 = *((unsigned int *)this + 121);
    lpMem = 0LL;
    if ( (_DWORD)v18 != (_DWORD)v19 )
    {
LABEL_11:
      v20 = 0;
      v21 = *((_QWORD *)this + 62) + 68 * v18;
      *(_OWORD *)v21 = *(_OWORD *)a3;
      *(_OWORD *)(v21 + 16) = *((_OWORD *)a3 + 1);
      *(_OWORD *)(v21 + 32) = *((_OWORD *)a3 + 2);
      *(_OWORD *)(v21 + 48) = *((_OWORD *)a3 + 3);
      *(_DWORD *)(v21 + 64) = *((_DWORD *)a3 + 16);
      v22 = *((_DWORD *)this + 126);
      v23 = *v17 + 1;
      *v17 = v23;
      if ( v22 <= v23 )
        v22 = v23;
      *((_DWORD *)this + 126) = v22;
      goto LABEL_14;
    }
    v34 = 2 * v19;
    if ( (unsigned __int64)(2 * v19) > 0xFFFFFFFF )
    {
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, -2147024362, 0x4Cu, 0LL);
      v16 = -2147024362;
LABEL_58:
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v20, 0x36u, 0LL);
      goto LABEL_15;
    }
    if ( v34 <= 8 )
      v34 = 8;
    v35 = HrMalloc(0x44uLL, v34, &lpMem);
    v20 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x53u, 0LL);
    }
    else
    {
      v37 = 68LL * *v17;
      if ( v37 <= 0xFFFFFFFF )
      {
        v38 = lpMem;
        memcpy_0(lpMem, *((const void **)this + 62), (unsigned int)v37);
        operator delete(*((void **)this + 62));
        v18 = *v17;
        *((_DWORD *)this + 121) = v34;
        *((_QWORD *)this + 62) = v38;
        goto LABEL_11;
      }
      v20 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, -2147024362, 0x55u, 0LL);
    }
    v50 = lpMem;
    if ( lpMem )
    {
      v51 = GetProcessHeap();
      HeapFree(v51, 0, v50);
    }
LABEL_14:
    v16 = v20;
    if ( v20 >= 0 )
      goto LABEL_15;
    goto LABEL_58;
  }
  v57 = 0;
  v59 = 0;
  v31 = CWatermarkStack<CMILMatrix,8,2,8>::Top((char *)this + 480, v56, v10);
  v16 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x3Du, 0LL);
  }
  else
  {
    CMILMatrix::Multiply(a3, (const struct CMILMatrix *)v56, (struct CMILMatrix *)v58);
    v33 = CWatermarkStack<CMILMatrix,8,2,8>::Push((char *)this + 480, v58);
    v16 = v33;
    if ( v33 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v33, 0x45u, 0LL);
  }
LABEL_15:
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v16, 0x11BDu, 0LL);
    goto LABEL_24;
  }
  if ( *v17 )
    v24 = (float *)(*((_QWORD *)this + 62) + 68LL * (*v17 - 1));
  else
    v24 = (float *)&CMILMatrix::Identity;
  v25 = (unsigned __int8)CMILMatrix::Is2DAffine<0>(v24) == 0;
  v26 = *((unsigned int *)this + 129);
  v27 = *((_DWORD *)this + 128);
  lpMem = 0LL;
  if ( v27 != (_DWORD)v26 )
    goto LABEL_19;
  v39 = 2 * v26;
  if ( (unsigned __int64)(2 * v26) > 0xFFFFFFFF )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    v16 = -2147024362;
    goto LABEL_63;
  }
  if ( v39 <= 0x40 )
    v39 = 64;
  v40 = HrMalloc(1uLL, v39, &lpMem);
  v9 = v40;
  if ( v40 >= 0 )
  {
    v42 = lpMem;
    memcpy_0(lpMem, *((const void **)this + 66), *((unsigned int *)this + 128));
    operator delete(*((void **)this + 66));
    v27 = *((_DWORD *)this + 128);
    *((_QWORD *)this + 66) = v42;
    *((_DWORD *)this + 129) = v39;
LABEL_19:
    v9 = 0;
    *(_BYTE *)(v27 + *((_QWORD *)this + 66)) = v25;
    v28 = *((_DWORD *)this + 134);
    v29 = *((_DWORD *)this + 128) + 1;
    *((_DWORD *)this + 128) = v29;
    if ( v28 <= v29 )
      v28 = v29;
    *((_DWORD *)this + 134) = v28;
    goto LABEL_22;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x53u, 0LL);
  v52 = lpMem;
  if ( lpMem )
  {
    v53 = GetProcessHeap();
    HeapFree(v53, 0, v52);
  }
LABEL_22:
  v16 = v9;
  if ( v9 < 0 )
  {
LABEL_63:
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v9, 0x11C2u, 0LL);
    goto LABEL_24;
  }
  *((_BYTE *)this + 6344) = 1;
LABEL_24:
  if ( v16 < 0 && v5 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 112, 0LL);
  return (unsigned int)v16;
}
