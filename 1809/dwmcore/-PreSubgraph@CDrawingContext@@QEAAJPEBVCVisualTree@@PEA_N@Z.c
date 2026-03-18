/*
 * XREFs of ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180032BF0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180002F58 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800039BC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x1800042E0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@ULightDesc@CLightStack@@$0A@@@QEAAJPEFBULightDesc@CLightStack@@I@Z @ 0x18000ED3C (-AddMultipleAndSet@-$DynArray@ULightDesc@CLightStack@@$0A@@@QEAAJPEFBULightDesc@CLightStack@@I@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18000ED88 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800102B0 (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z @ 0x18001AE70 (-NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z.c)
 *     ?GetResampleMode@CVisual@@QEBA?AW4Enum@CompositionResampleMode@@XZ @ 0x18001C828 (-GetResampleMode@CVisual@@QEBA-AW4Enum@CompositionResampleMode@@XZ.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCProcessAttribution@@$0A@@@QEAAJPEFBQEAVCProcessAttribution@@I@Z @ 0x180022358 (-AddMultipleAndSet@-$DynArray@PEAVCProcessAttribution@@$0A@@@QEAAJPEFBQEAVCProcessAttribution@@I.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002ED2C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x18002F22C (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002F61C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180032734 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18003287C (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180036350 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180036B2C (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect_ea_180036B2C.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x18003745C (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003B380 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180040650 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x180046B54 (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180055610 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180055760 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180055A60 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FindData@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@QEBAAEAT?$_Align_type@N$07@std@@I@Z @ 0x18005D280 (-FindData@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@QEBAAEAT-$_Align_type@N$07@std@@I@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x18005D39C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x18005D888 (-AddMultipleAndSet@-$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScop.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x18006A3E4 (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A728 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006AE30 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008D6A8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800A2C6C (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ @ 0x1800A8E14 (-NeedsDesktopMoves@CDisplaySet@@QEBA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AA600 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800DB300 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800E4DF4 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800EA3F8 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800EA838 (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?InvalidRedirectedTransformParent@CVisual@@QEAA_NPEBVCVisualTree@@@Z @ 0x1800EF7D0 (-InvalidRedirectedTransformParent@CVisual@@QEAA_NPEBVCVisualTree@@@Z.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x180162558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetColorSpace@CVisual@@QEBA?AW4DXGI_COLOR_SPACE_TYPE@@XZ @ 0x18016550C (-GetColorSpace@CVisual@@QEBA-AW4DXGI_COLOR_SPACE_TYPE@@XZ.c)
 *     ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x18016566C (-GetHeatMapProperties@CVisual@@QEBA-AUHeatMapProperty@1@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x18016577C (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x18016579C (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?Pop@?$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderMode@@@Z @ 0x180165AB0 (-Pop@-$CWatermarkStack@W4Enum@MilBitmapBorderMode@@$0EA@$01$09@@QEAA_NPEAW4Enum@MilBitmapBorderM.c)
 *     ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x180165D40 (-Push@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CCompos.c)
 *     ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x180167018 (-SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ.c)
 *     ?ShiftLeft@?$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z @ 0x1801671C8 (-ShiftLeft@-$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x1801AEE28 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801B67E8 (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x1801B68B4 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801B70D8 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1801B8014 (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x1801E2F30 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

__int64 __fastcall CDrawingContext::PreSubgraph(struct CVisual **this, const struct CVisualTree *a2, bool *a3)
{
  void *v3; // r13
  int v4; // ebx
  struct CVisual **v5; // r10
  __int64 v6; // rdi
  _DWORD *v7; // rax
  __int64 *ProjectedShadowReceivers; // rax
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  char v13; // r15
  unsigned int v14; // ecx
  unsigned int v15; // eax
  int v16; // r12d
  unsigned __int64 v17; // rax
  unsigned int v18; // esi
  void *v19; // r14
  int v20; // r9d
  unsigned int *v21; // rax
  unsigned int *v22; // r14
  struct CVisualTree *v23; // r15
  int *v24; // rax
  int v25; // r12d
  unsigned int v26; // r14d
  __int64 v27; // rax
  unsigned int v28; // eax
  unsigned int v29; // ecx
  _BYTE *v30; // rsi
  __int64 v31; // rax
  struct CDrawingContext *v32; // r15
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  unsigned int v37; // ecx
  __int64 v38; // r8
  unsigned int v39; // ecx
  char *v40; // r13
  __int64 *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rax
  CMatrixStack *v44; // r12
  struct CDrawingContext *v45; // r10
  int v46; // esi
  void *v47; // r15
  unsigned int v48; // ecx
  unsigned int v49; // eax
  unsigned __int64 v50; // rax
  unsigned int v51; // ecx
  unsigned int v52; // r14d
  SIZE_T v53; // r8
  LPVOID v54; // rax
  unsigned __int64 v55; // rax
  struct CDrawingContext *v56; // rax
  int v57; // eax
  bool *v58; // r12
  __int64 v59; // rcx
  char v60; // r11
  int v61; // eax
  unsigned int v62; // ecx
  unsigned int v64; // eax
  unsigned int v65; // ecx
  unsigned int v66; // ecx
  unsigned int v67; // eax
  _DWORD *v68; // rcx
  int v69; // eax
  unsigned int v70; // ecx
  int v71; // eax
  CMILMatrix *v72; // rcx
  __int64 v73; // rdx
  struct CVisualTree *v74; // r13
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // r8
  __int64 v78; // rcx
  unsigned int v79; // r8d
  unsigned int v80; // ecx
  int v81; // eax
  __int64 v82; // r8
  __int64 v83; // rdx
  _BYTE *v84; // rcx
  unsigned int i; // eax
  _QWORD *v86; // rcx
  _QWORD *v87; // rax
  _QWORD *v88; // rsi
  _DWORD *v89; // r14
  __int64 v90; // rax
  int v91; // eax
  int v92; // ecx
  unsigned int *v93; // rcx
  __int64 v94; // r8
  __int64 v95; // rdx
  _BYTE *v96; // rcx
  unsigned int j; // eax
  _QWORD *v98; // rcx
  _QWORD *v99; // rax
  float v100; // xmm1_4
  __int64 v101; // rcx
  float v102; // xmm0_4
  int v103; // edx
  int *v104; // rcx
  _DWORD *v105; // r8
  float v106; // xmm6_4
  __int64 v107; // rdx
  _BYTE *v108; // rcx
  unsigned int k; // eax
  double **v110; // rdx
  double *v111; // rsi
  int v112; // eax
  float v113; // xmm0_4
  float v114; // xmm6_4
  float v115; // xmm6_4
  CGeometry *v116; // rcx
  int v117; // eax
  unsigned int v118; // ecx
  int v119; // esi
  void (__fastcall ***v120)(_QWORD, __int64); // rcx
  int v121; // eax
  unsigned int v122; // ecx
  float v123; // xmm3_4
  float v124; // xmm1_4
  float v125; // xmm2_4
  float v126; // xmm0_4
  _DWORD *v127; // r10
  int v128; // r11d
  unsigned int Slot; // eax
  __int64 v130; // rcx
  _QWORD *v131; // rdx
  __int64 v132; // rdx
  _BYTE *v133; // rcx
  unsigned int m; // eax
  _QWORD *v135; // rdx
  char v136; // al
  char v137; // cl
  enum DXGI_COLOR_SPACE_TYPE ColorSpace; // eax
  char v139; // cl
  int v140; // r10d
  _QWORD *v141; // rcx
  float v142; // xmm1_4
  __int64 v143; // rax
  __int64 v144; // rax
  bool v145; // zf
  int v146; // eax
  _BYTE *v147; // rax
  struct CVisualTree *v148; // r10
  __int64 v149; // r13
  int v150; // r15d
  _QWORD *v151; // rbx
  _DWORD *v152; // r9
  struct _LIST_ENTRY *v153; // r14
  char v154; // r12
  __int64 v155; // rsi
  __int64 v156; // rcx
  _BYTE *v157; // rax
  unsigned int ii; // edx
  _QWORD **v159; // r8
  __int64 v160; // r8
  __int64 v161; // rdx
  _BYTE *v162; // rcx
  unsigned int n; // eax
  _QWORD **v164; // rdx
  _QWORD *v165; // rax
  CVisual *v166; // rax
  struct _LIST_ENTRY *TreeData; // rax
  __int64 v168; // rax
  __int64 v169; // r8
  _BYTE *v170; // rax
  __int64 jj; // rdx
  _QWORD **v172; // rdx
  _QWORD *v173; // rdx
  _QWORD *v174; // rax
  unsigned __int64 v175; // rax
  int updated; // eax
  bool v177; // dl
  __int64 v178; // rax
  unsigned int v179; // ecx
  int v180; // eax
  unsigned int v181; // ecx
  char v182; // bl
  unsigned int v183; // r13d
  char v184; // cl
  float v185; // xmm3_4
  float v186; // xmm1_4
  float v187; // xmm1_4
  float v188; // xmm1_4
  float v189; // xmm1_4
  float v190; // xmm1_4
  float v191; // xmm1_4
  float v192; // xmm1_4
  float v193; // xmm1_4
  float v194; // xmm1_4
  float v195; // xmm1_4
  float v196; // xmm3_4
  float v197; // xmm1_4
  float v198; // xmm1_4
  float v199; // xmm1_4
  CGeometry *v200; // rcx
  __int64 v201; // r15
  char v202; // r12
  int ShapeData; // eax
  unsigned int v204; // ecx
  int v205; // esi
  __int64 v206; // r14
  int v207; // eax
  void (__fastcall ***v208)(_QWORD, __int64); // rcx
  int v209; // eax
  unsigned int v210; // ecx
  __int64 v211; // rcx
  float v212; // xmm0_4
  float v213; // xmm1_4
  _DWORD *v214; // rcx
  __int64 v215; // rcx
  struct CVisualTree *v216; // r14
  __int64 v217; // r10
  char v218; // r9
  __int64 v219; // r8
  __int64 v220; // rdx
  _BYTE *v221; // rcx
  unsigned int kk; // eax
  _QWORD **v223; // rdx
  _QWORD *v224; // r8
  _QWORD *v225; // rax
  __int64 v226; // r8
  __int64 v227; // rdx
  _BYTE *v228; // rcx
  unsigned int mm; // eax
  __int64 ****v230; // rdx
  __int64 ***v231; // rcx
  __int64 **nn; // rax
  int v233; // eax
  const struct Windows::Foundation::Numerics::float4x4 *v234; // rdx
  unsigned int v235; // ecx
  _QWORD *v236; // r9
  __int64 v237; // r8
  __int64 v238; // rdx
  _BYTE *v239; // rcx
  unsigned int i1; // eax
  _QWORD *v241; // r8
  _QWORD *v242; // rax
  int Blink; // esi
  int v244; // eax
  unsigned int v245; // ecx
  int v246; // eax
  unsigned int v247; // ecx
  int v248; // eax
  unsigned int v249; // ecx
  int v250; // eax
  unsigned int v251; // ecx
  int v252; // eax
  CMILMatrix *v253; // rax
  int v254; // eax
  __int64 v255; // rcx
  __int64 v256; // rax
  int v257; // eax
  unsigned int v258; // ecx
  int v259; // eax
  unsigned int v260; // ecx
  struct _LIST_ENTRY *v261; // r10
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  __int128 *v264; // r13
  unsigned int v265; // r14d
  unsigned int v266; // esi
  char *v267; // r15
  int v268; // eax
  unsigned int v269; // ecx
  unsigned int v270; // ecx
  int v271; // eax
  unsigned int v272; // ecx
  unsigned int v273; // ecx
  _QWORD *v274; // rbx
  int v275; // eax
  __int64 v276; // rax
  __int64 v277; // rdx
  int v278; // eax
  __int128 v279; // xmm0
  int v280; // r8d
  __int128 v281; // xmm0
  __int128 v282; // xmm1
  __int128 v283; // xmm0
  __int128 v284; // xmm1
  int v285; // eax
  unsigned int v286; // ecx
  __int64 v287; // r8
  char v288; // si
  int v289; // eax
  unsigned int v290; // ecx
  int v291; // eax
  unsigned int v292; // ecx
  __int64 v293; // r8
  __int64 v294; // rcx
  char *v295; // r13
  __int64 v296; // rax
  int v297; // ecx
  float v298; // xmm0_4
  float v299; // xmm2_4
  char v300; // r12
  int v301; // r15d
  bool v302; // r14
  __int64 v303; // rsi
  char v304; // al
  int v305; // eax
  unsigned int v306; // ecx
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rsi
  const struct CMILMatrix *TopByReference; // rax
  char v309; // r14
  char v310; // r15
  int ImageSourceForEffectInput; // eax
  unsigned int v312; // ecx
  const struct CMILMatrix *v313; // rax
  int v314; // r14d
  bool v315; // si
  unsigned int v316; // r15d
  _DWORD *v317; // r8
  __int64 v318; // rdx
  _BYTE *v319; // rcx
  unsigned int i2; // eax
  _QWORD *v321; // rdx
  char v322; // al
  CDrawingContext *v323; // r14
  char v324; // si
  int v325; // eax
  unsigned int v326; // ecx
  unsigned int Count; // esi
  struct CVisual *ChildAt; // rax
  unsigned int v329; // eax
  __int64 v330; // rcx
  unsigned __int64 v331; // rcx
  unsigned int v332; // esi
  void *v333; // rax
  void *v334; // r14
  int v335; // eax
  unsigned int v336; // eax
  unsigned int v337; // ecx
  unsigned int v338; // eax
  unsigned int v339; // ecx
  unsigned __int64 v340; // rax
  unsigned int v341; // ecx
  unsigned int v342; // esi
  void *v343; // rax
  unsigned int v344; // eax
  unsigned int v345; // ecx
  int v346; // [rsp+20h] [rbp-E0h]
  __int64 v347; // [rsp+40h] [rbp-C0h] BYREF
  struct CDrawingContext *v348; // [rsp+48h] [rbp-B8h]
  const void **v349; // [rsp+50h] [rbp-B0h]
  char v350; // [rsp+58h] [rbp-A8h]
  bool *v351; // [rsp+60h] [rbp-A0h]
  __int64 *v352; // [rsp+68h] [rbp-98h]
  CMatrixStack *v353; // [rsp+70h] [rbp-90h] BYREF
  __int64 v354; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v355[12]; // [rsp+88h] [rbp-78h]
  float v356; // [rsp+94h] [rbp-6Ch]
  __int128 v357; // [rsp+98h] [rbp-68h] BYREF
  __int128 v358; // [rsp+A8h] [rbp-58h]
  __int128 v359; // [rsp+B8h] [rbp-48h]
  __int128 v360; // [rsp+C8h] [rbp-38h]
  _BYTE v361[68]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v362; // [rsp+11Ch] [rbp+1Ch]
  int v363; // [rsp+124h] [rbp+24h]
  unsigned __int8 v364; // [rsp+128h] [rbp+28h]
  struct CVisual *v365; // [rsp+130h] [rbp+30h]
  CScopedClipStack *v366; // [rsp+138h] [rbp+38h]
  __int64 v367; // [rsp+140h] [rbp+40h] BYREF
  float v368; // [rsp+148h] [rbp+48h] BYREF
  float v369; // [rsp+14Ch] [rbp+4Ch]
  struct CVisualTree *v370[2]; // [rsp+150h] [rbp+50h] BYREF
  __int128 v371; // [rsp+160h] [rbp+60h] BYREF
  __int64 v372; // [rsp+170h] [rbp+70h]
  _BYTE v373[20]; // [rsp+178h] [rbp+78h] BYREF
  int v374; // [rsp+18Ch] [rbp+8Ch]
  _BYTE v375[72]; // [rsp+190h] [rbp+90h] BYREF
  int v376; // [rsp+1D8h] [rbp+D8h]
  char v377; // [rsp+1DCh] [rbp+DCh]
  char v378[16]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 v379; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v380; // [rsp+200h] [rbp+100h]
  __int128 v381; // [rsp+208h] [rbp+108h] BYREF
  __int64 v382; // [rsp+218h] [rbp+118h]
  void *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v3 = 0LL;
  v4 = 0;
  v362 = 21887LL;
  v5 = this;
  v363 = 0;
  v364 = 0;
  v6 = 0LL;
  v351 = a3;
  v370[0] = a2;
  v348 = (struct CDrawingContext *)this;
  v354 = 0LL;
  *(_QWORD *)v355 = 1065353216LL;
  *(_DWORD *)&v355[8] = 0;
  v356 = 1.0;
  memset(v361, 0, 64);
  *(_DWORD *)&v361[64] = 1065353216;
  if ( *((_BYTE *)this + 6048) )
  {
    if ( *((_BYTE *)this + 6049) )
      v6 = (__int64)this[417];
    else
      v6 = *((_QWORD *)this[757] + 3);
  }
  v7 = *(_DWORD **)(v6 + 224);
  v365 = this[418];
  if ( (*v7 & 0x10000) != 0
    && (ProjectedShadowReceivers = (__int64 *)CVisual::GetProjectedShadowReceivers(v6),
        v9 = 0,
        v10 = *ProjectedShadowReceivers,
        (v11 = (ProjectedShadowReceivers[1] - *ProjectedShadowReceivers) >> 3) != 0) )
  {
    v12 = 0LL;
    while ( (int)((__int64)(*(_QWORD *)(*(_QWORD *)(v10 + 8 * v12) + 72LL)
                          - *(_QWORD *)(*(_QWORD *)(v10 + 8 * v12) + 64LL)) >> 3) <= 0 )
    {
      v12 = ++v9;
      if ( v9 >= v11 )
        goto LABEL_10;
    }
    v13 = 1;
  }
  else
  {
LABEL_10:
    v13 = 0;
  }
  v14 = *((_DWORD *)v5 + 825);
  v349 = (const void **)(v5 + 412);
  v15 = *((_DWORD *)v5 + 824);
  v16 = -2147024882;
  if ( v15 == v14 )
  {
    v17 = 2LL * v14;
    if ( v17 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024362, 0x4Cu);
LABEL_24:
      v22 = (unsigned int *)v349;
      goto LABEL_25;
    }
    v18 = 2 * v14;
    if ( (unsigned int)v17 <= 0x40 )
      v18 = 64;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v18 <= 1 )
    {
      v20 = -2147024809;
      goto LABEL_23;
    }
    v19 = HeapAlloc(WPF::g_processHeap, 0, v18);
    if ( !v19 )
    {
      v20 = -2147024882;
LABEL_23:
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v20, 0x54u);
      goto LABEL_24;
    }
    memcpy_0(v19, v349[2], *(unsigned int *)v349);
    WPF::ProcessHeapImpl::Free((void *)v349[2]);
    v21 = (unsigned int *)v349;
    v349[2] = v19;
    v22 = v21;
    v21[1] = v18;
    v15 = *v21;
  }
  else
  {
    v22 = (unsigned int *)v349;
  }
  *(_BYTE *)(v15 + *((_QWORD *)v22 + 2)) = v13;
  v28 = v22[6];
  v29 = *v22 + 1;
  *v22 = v29;
  if ( v28 <= v29 )
    v28 = v29;
  v22[6] = v28;
LABEL_25:
  if ( (*(_BYTE *)(v6 + 94) & 0x10) != 0
    || (*(_DWORD *)(v6 + 88) & 0x400) == 0
    || (v23 = v370[0], CVisual::InvalidRedirectedTransformParent((CVisual *)v6, v370[0])) )
  {
    v338 = *v22;
    if ( *v22 )
      *v22 = --v338;
    v339 = v22[1];
    if ( v338 != v339 )
      goto LABEL_652;
    v340 = 2LL * v339;
    v341 = -2147024362;
    if ( v340 > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x80070216, 0LL, 0, -2147024362, 0x4Cu);
      v32 = v348;
      *v351 = 0;
      goto LABEL_90;
    }
    v342 = v340;
    if ( (unsigned int)v340 <= 0x40 )
      v342 = 64;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v342 <= 1 )
    {
      v16 = -2147024809;
    }
    else
    {
      v343 = HeapAlloc(WPF::g_processHeap, 0, v342);
      v3 = v343;
      if ( v343 )
      {
        memcpy_0(v343, *((const void **)v22 + 2), *v22);
        WPF::ProcessHeapImpl::Free(*((void **)v22 + 2));
        v338 = *v22;
        *((_QWORD *)v22 + 2) = v3;
        v22[1] = v342;
LABEL_652:
        *(_BYTE *)(v338 + *((_QWORD *)v22 + 2)) = 0;
        v344 = v22[6];
        v345 = *v22 + 1;
        *v22 = v345;
        if ( v344 <= v345 )
          v344 = v345;
        v22[6] = v344;
LABEL_655:
        v32 = v348;
        *v351 = 0;
        goto LABEL_90;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v341, 0LL, 0, v16, 0x54u);
    if ( v3 )
    {
      HeapFree(WPF::g_processHeap, 0, v3);
      v32 = v348;
      *v351 = 0;
      goto LABEL_90;
    }
    goto LABEL_655;
  }
  if ( (unsigned int)((__int64)(*(_QWORD *)(v6 + 288) - *(_QWORD *)(v6 + 280)) >> 4)
    || (unsigned int)((__int64)(*(_QWORD *)(v6 + 312) - *(_QWORD *)(v6 + 304)) >> 4) )
  {
    v24 = (int *)&v367;
    v367 = 0x100000000LL;
    v352 = &v367;
    while ( 1 )
    {
      v25 = *v24;
      v26 = 0;
      if ( (unsigned int)CVisual::GetLightsCount((_QWORD *)v6, *v24) )
        break;
LABEL_57:
      v24 = (int *)v352 + 1;
      v352 = (__int64 *)v24;
      if ( v24 == (int *)&v368 )
        goto LABEL_58;
    }
    while ( 1 )
    {
      if ( v25 )
        v27 = *(_QWORD *)(v6 + 312) - *(_QWORD *)(v6 + 304);
      else
        v27 = *(_QWORD *)(v6 + 288) - *(_QWORD *)(v6 + 280);
      if ( v26 < (unsigned int)(v27 >> 4) )
      {
        if ( v25 )
          v31 = *(_QWORD *)(v6 + 304);
        else
          v31 = *(_QWORD *)(v6 + 280);
        v30 = *(_BYTE **)(v31 + 16LL * v26);
      }
      else
      {
        v30 = 0LL;
      }
      if ( !v30[154]
        || !(*(unsigned __int8 (__fastcall **)(_BYTE *, struct CVisualTree *, __int64))(*(_QWORD *)v30 + 208LL))(
              v30,
              v23,
              v6) )
      {
        goto LABEL_56;
      }
      v32 = v348;
      *(_DWORD *)v373 = 9;
      *(_QWORD *)&v373[8] = v6;
      v33 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
              (char *)v348 + 448,
              v373);
      v4 = v33;
      if ( v33 < 0 )
        break;
      *(_QWORD *)&v371 = v30;
      DWORD2(v371) = v25;
      v35 = DynArray<CLightStack::LightDesc,0>::AddMultipleAndSet((__int64)v348 + 672, &v371);
      v4 = v35;
      if ( v35 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x20u);
      else
        (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v30 + 8LL))(v30);
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v4, 0x258Cu);
        CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
          (char *)v348 + 448,
          0LL,
          v38);
        goto LABEL_54;
      }
LABEL_55:
      v23 = v370[0];
LABEL_56:
      if ( ++v26 >= (unsigned int)CVisual::GetLightsCount((_QWORD *)v6, v25) )
        goto LABEL_57;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x2589u);
LABEL_54:
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v4, 0x1FBAu);
      v22 = (unsigned int *)v349;
      goto LABEL_90;
    }
    goto LABEL_55;
  }
LABEL_58:
  v32 = v348;
  v40 = (char *)v348 + 912;
  v41 = *(__int64 **)(*((_QWORD *)v348 + 114) + 8LL * (unsigned int)(*((_DWORD *)v348 + 234) - 1));
  v42 = *(_QWORD *)v6;
  v352 = v41;
  v43 = (*(__int64 (__fastcall **)(__int64))(v42 + 128))(v6);
  v44 = (CMatrixStack *)v43;
  if ( v43 && (__int64 *)v43 != v41 )
  {
    v45 = v348;
    v352 = (__int64 *)v43;
    v46 = 0;
    *(_DWORD *)v373 = 10;
    v47 = 0LL;
    *(_QWORD *)&v373[8] = v6;
    v48 = *((_DWORD *)v348 + 113);
    v49 = *((_DWORD *)v348 + 112);
    if ( v49 == v48 )
    {
      v50 = 2LL * v48;
      v51 = -2147024362;
      if ( v50 > 0xFFFFFFFF )
      {
        v46 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(0x80070216, 0LL, 0, -2147024362, 0x4Cu);
      }
      else
      {
        v52 = v50;
        if ( (unsigned int)v50 <= 0x40 )
          v52 = 64;
        v46 = 0;
        if ( 0xFFFFFFFFFFFFFFFFuLL / v52 <= 0x10 )
        {
          v46 = -2147024809;
        }
        else
        {
          v53 = 16LL * v52;
          if ( !v53 )
            v53 = 1LL;
          v54 = HeapAlloc(WPF::g_processHeap, 0, v53);
          v45 = v348;
          v47 = v54;
          if ( !v54 )
            v46 = -2147024882;
        }
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v46, 0x54u);
        }
        else
        {
          v55 = 16LL * *((unsigned int *)v45 + 112);
          v46 = 0;
          if ( v55 <= 0xFFFFFFFF )
          {
            memcpy_0(v47, *((const void **)v45 + 58), (unsigned int)v55);
            WPF::ProcessHeapImpl::Free(*((void **)v348 + 58));
            v56 = v348;
            *((_QWORD *)v348 + 58) = v47;
            v32 = v56;
            *((_DWORD *)v56 + 113) = v52;
            v49 = *((_DWORD *)v56 + 112);
LABEL_96:
            *(_OWORD *)(*((_QWORD *)v32 + 58) + 16LL * v49) = *(_OWORD *)v373;
            v64 = *((_DWORD *)v32 + 118);
            v65 = *((_DWORD *)v32 + 112) + 1;
            *((_DWORD *)v32 + 112) = v65;
            if ( v64 <= v65 )
              v64 = v65;
            *((_DWORD *)v32 + 118) = v64;
            goto LABEL_81;
          }
          v46 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x56u);
        }
        if ( v47 )
          HeapFree(WPF::g_processHeap, 0, v47);
      }
      v32 = v348;
LABEL_81:
      if ( v46 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v46, retaddr);
      v353 = v44;
      v57 = DynArray<CProcessAttribution *,0>::AddMultipleAndSet((__int64)v40, &v353);
      if ( v57 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v57, retaddr);
      if ( g_HeatMaps_TargetProcessId && g_HeatMaps_TargetProcessId == *((_DWORD *)v44 + 32) )
        CDrawingContext::SetHeatMapForCurrentNode(v32);
      goto LABEL_86;
    }
    v32 = v348;
    goto LABEL_96;
  }
LABEL_86:
  v58 = v351;
  *v351 = 1;
  if ( (*(_BYTE *)(v6 + 93) & 0x60) != 0 )
  {
    CVisual::GetHeatMapProperties(v6, v375);
    v59 = *((_QWORD *)v32 + 4);
    *(_OWORD *)&v373[4] = *(_OWORD *)v375;
    *(_DWORD *)v373 = 2 - ((v60 & 0x20) != 0);
    v374 = *(_DWORD *)&v375[16];
    v61 = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push(v59 + 1088, v373);
    v4 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x1FE3u);
LABEL_89:
      v22 = (unsigned int *)((char *)v32 + 3296);
      goto LABEL_90;
    }
  }
  v66 = *(_DWORD *)(v6 + 96);
  if ( (_BYTE)v66 )
  {
    *(_DWORD *)v375 = (unsigned __int8)v66;
    *(_DWORD *)&v375[16] = (v66 >> 8) & 3;
    v67 = v66;
    *(_DWORD *)&v375[12] = (v66 >> 14) & 0x1F;
    v68 = (_DWORD *)(*((_QWORD *)v32 + 4) + 1088LL);
    *(_DWORD *)&v375[4] = (int)(v67 << 18) >> 28;
    *(_DWORD *)&v375[8] = *(_DWORD *)(v6 + 188);
    if ( *v68 && *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() == 2 )
      *(_DWORD *)&v375[20] = 0;
    else
      *(_DWORD *)&v375[20] = *(_DWORD *)(v6 + 192);
    *(_QWORD *)&v375[24] = *(_QWORD *)(v6 + 196);
    v69 = CDrawingContext::PushRenderOptionsInternal(
            v32,
            (const struct CVisual *)v6,
            (const struct MilRenderOptions *)v375,
            1);
    v4 = v69;
    if ( v69 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x1FF5u);
      goto LABEL_89;
    }
  }
  v71 = *((_DWORD *)v32 + 120);
  v353 = (struct CDrawingContext *)((char *)v32 + 480);
  if ( v71 )
    v72 = (CMILMatrix *)(*((_QWORD *)v32 + 62) + 68LL * (unsigned int)(v71 - 1));
  else
    v72 = (CMILMatrix *)&CMILMatrix::Identity;
  CMILMatrix::Transform3DBoundsHelper<1>(v72);
  v366 = (struct CDrawingContext *)((char *)v32 + 1008);
  CScopedClipStack::GetClipBoundsWorld((struct CDrawingContext *)((char *)v32 + 1008), (__int64)v373);
  v371 = *(_OWORD *)v373;
  v372 = *(_QWORD *)&v375[16];
  TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    v375,
    &v371);
  v381 = *(_OWORD *)v375;
  *(_OWORD *)v373 = *(_OWORD *)v375;
  v382 = *(_QWORD *)&v375[16];
  if ( *(float *)&v375[8] <= *(float *)v375 || *(float *)&v375[12] <= *(float *)&v375[4] )
  {
    v22 = (unsigned int *)((char *)v32 + 3296);
    v329 = *((_DWORD *)v32 + 824);
    if ( v329 )
      *v22 = --v329;
    v330 = *((unsigned int *)v32 + 825);
    if ( v329 == (_DWORD)v330 )
    {
      v331 = 2 * v330;
      if ( v331 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v331, 0LL, 0, -2147024362, 0x4Cu);
        v22 = (unsigned int *)((char *)v32 + 3296);
        *v58 = 0;
        goto LABEL_90;
      }
      v332 = v331;
      if ( (unsigned int)v331 <= 0x40 )
        v332 = 64;
      if ( 0xFFFFFFFFFFFFFFFFuLL / v332 <= 1 )
      {
        v335 = -2147024809;
        goto LABEL_639;
      }
      v333 = HeapAlloc(WPF::g_processHeap, 0, v332);
      v334 = v333;
      if ( !v333 )
      {
        v335 = -2147024882;
LABEL_639:
        MilInstrumentationCheckHR_MaybeFailFast(v331, 0LL, 0, v335, 0x54u);
        v22 = (unsigned int *)((char *)v32 + 3296);
        *v58 = 0;
        goto LABEL_90;
      }
      memcpy_0(v333, *((const void **)v32 + 414), *((unsigned int *)v32 + 824));
      WPF::ProcessHeapImpl::Free(*((void **)v32 + 414));
      *((_QWORD *)v32 + 414) = v334;
      v22 = (unsigned int *)((char *)v32 + 3296);
      v329 = *((_DWORD *)v32 + 824);
      *((_DWORD *)v32 + 825) = v332;
    }
    *(_BYTE *)(v329 + *((_QWORD *)v22 + 2)) = 0;
    v336 = v22[6];
    v337 = *v22 + 1;
    *v22 = v337;
    if ( v336 <= v337 )
      v336 = v337;
    v22[6] = v336;
    *v58 = 0;
    goto LABEL_90;
  }
  v74 = v370[0];
  if ( !*((_BYTE *)v32 + 6347) )
    goto LABEL_160;
  if ( *((_BYTE *)v370[0] + 32) )
  {
    v75 = v6 + 328;
  }
  else
  {
    v82 = *(_QWORD *)(v6 + 224);
    if ( *(int *)v82 >= 0 )
      goto LABEL_138;
    v83 = *(unsigned int *)(v82 + 4);
    v84 = (_BYTE *)(v82 + 8);
    for ( i = 0; i < (unsigned int)v83; ++v84 )
    {
      if ( *v84 == 1 )
        break;
      ++i;
    }
    v73 = i >= (unsigned int)v83 ? 0LL : v82 + v83 + 15 + 8LL * i - (((_BYTE)v83 + 15) & 7);
    v86 = *(_QWORD **)v73;
    if ( !*(_QWORD *)v73 )
      goto LABEL_138;
    v87 = (_QWORD *)*v86;
    if ( (_QWORD *)*v86 == v86 )
      goto LABEL_138;
    while ( 1 )
    {
      v75 = (__int64)(v87 - 28);
      if ( (struct CVisualTree *)v87[4] == v370[0] )
        break;
      v87 = (_QWORD *)*v87;
      if ( v87 == v86 )
        goto LABEL_138;
    }
  }
  if ( !v75 )
    goto LABEL_138;
  v73 = *(_QWORD *)(v75 + 32);
  if ( !v73 )
  {
    v76 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v75 + 24) + 328LL))(*(_QWORD *)(v75 + 24));
    *(_QWORD *)(v75 + 32) = v76;
    v73 = v76;
    if ( !v76 )
      goto LABEL_138;
  }
  v77 = *(unsigned int *)(v73 + 12);
  v78 = *(_QWORD *)(*((_QWORD *)v32 + 784) + 392LL);
  v371 = *(_OWORD *)v373;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v78 + 56LL))(v78, &v371, v77) )
    goto LABEL_138;
  if ( qword_180308258 )
  {
    v79 = *((_DWORD *)qword_180308258 + 18);
    v80 = 0;
    if ( v79 )
    {
      while ( 1 )
      {
        v73 = *(_QWORD *)(*((_QWORD *)qword_180308258 + 6) + 8LL * v80);
        if ( *(_BYTE *)(v73 + 326) || *(_BYTE *)(v73 + 325) || *(_BYTE *)(v73 + 320) )
          break;
        if ( ++v80 >= v79 )
          goto LABEL_124;
      }
      if ( !*((_QWORD *)v32 + 787) )
        *((_QWORD *)v32 + 787) = v6;
LABEL_138:
      if ( !*((_BYTE *)v32 + 6347) )
        goto LABEL_160;
      if ( *((_BYTE *)v74 + 32) )
      {
        v88 = (_QWORD *)(v6 + 328);
      }
      else
      {
        v94 = *(_QWORD *)(v6 + 224);
        if ( *(int *)v94 >= 0 )
          goto LABEL_160;
        v95 = *(unsigned int *)(v94 + 4);
        v96 = (_BYTE *)(v94 + 8);
        for ( j = 0; j < (unsigned int)v95; ++v96 )
        {
          if ( *v96 == 1 )
            break;
          ++j;
        }
        v73 = j >= (unsigned int)v95 ? 0LL : v94 + v95 + 15 + 8LL * j - (((_BYTE)v95 + 15) & 7);
        v98 = *(_QWORD **)v73;
        if ( !*(_QWORD *)v73 )
          goto LABEL_160;
        v99 = (_QWORD *)*v98;
        if ( (_QWORD *)*v98 == v98 )
          goto LABEL_160;
        while ( 1 )
        {
          v88 = v99 - 28;
          if ( (struct CVisualTree *)v99[4] == v74 )
            break;
          v99 = (_QWORD *)*v99;
          if ( v99 == v98 )
            goto LABEL_160;
        }
      }
      if ( v88 )
      {
        v89 = (_DWORD *)v88[4];
        if ( v89
          || (v90 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v88[3] + 328LL))(v88[3], v73),
              v88[4] = v90,
              (v89 = (_DWORD *)v90) != 0LL) )
        {
          v91 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v89 + 24LL))(v89, v73);
          v92 = *((_DWORD *)v32 + 1534);
          *((_DWORD *)v32 + 1572) = v91;
          if ( v91 >= v92 )
          {
            if ( v89[3] >= v92 )
            {
              v22 = (unsigned int *)((char *)v32 + 3296);
              CWatermarkStack<enum MilBitmapBorderMode::Enum,64,2,10>::Pop((char *)v32 + 3296);
              LOBYTE(v347) = 0;
              CWatermarkStack<bool,64,2,10>::Push(v93, &v347);
              *v58 = 0;
              goto LABEL_90;
            }
            goto LABEL_89;
          }
        }
      }
LABEL_160:
      v354 = v6;
      if ( v74 && v6 == *((_QWORD *)v74 + 3) && *((_BYTE *)v74 + 34) )
      {
        v100 = FLOAT_1_0;
      }
      else
      {
        v101 = *(_QWORD *)(v6 + 216);
        if ( (*(_DWORD *)(v101 + 4) & 0x8000000) != 0 )
        {
          v103 = *(_DWORD *)(v101 + 12);
          v104 = (int *)(v101 + 12);
          if ( (v103 & 0x7F000000) != 0x5000000 )
          {
            do
            {
              v104 = (int *)((char *)v104 + (v103 & 0xFFFFFF) + 4);
              v103 = *v104;
            }
            while ( (*v104 & 0x7F000000) != 0x5000000 );
          }
          LODWORD(v367) = v104[1];
          v102 = *(float *)&v367;
        }
        else
        {
          v102 = FLOAT_1_0;
        }
        v100 = fminf(1.0, fmaxf(v102, 0.0));
      }
      v356 = v100;
      v105 = *(_DWORD **)(v6 + 224);
      v106 = FLOAT_1_0;
      if ( (*v105 & 0x200000) != 0 )
      {
        v107 = (unsigned int)v105[1];
        v108 = v105 + 2;
        for ( k = 0; k < (unsigned int)v107; ++v108 )
        {
          if ( *v108 == 11 )
            break;
          ++k;
        }
        if ( k >= (unsigned int)v107 )
          v110 = 0LL;
        else
          v110 = (double **)((char *)v105 + v107 + 8LL * k - (((_BYTE)v107 + 15) & 7) + 15);
        v111 = *v110;
        if ( (*(unsigned __int8 (__fastcall **)(double *, __int64))(*(_QWORD *)v111 + 48LL))(v111, 51LL) )
          v106 = v111[9];
      }
      v112 = *((_DWORD *)v32 + 816);
      v113 = fminf(1.0, fmaxf(v106, 0.0));
      if ( v112 )
        v114 = *(float *)(*((_QWORD *)v32 + 410) + 4LL * (unsigned int)(v112 - 1));
      else
        v114 = FLOAT_1_0;
      v115 = v114 * v113;
      *(float *)v355 = v115;
      v116 = *(CGeometry **)(v6 + 248);
      if ( !v116 )
      {
LABEL_203:
        v127 = *(_DWORD **)(v6 + 224);
        v128 = *v127;
        if ( (*v127 & 0x1000000) != 0 )
        {
          Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v6 + 224), 8LL);
          v130 = (unsigned int)v127[1];
          v131 = Slot >= (unsigned int)v130
               ? 0LL
               : (_QWORD *)((char *)v127 + v130 + 8LL * Slot - (((_BYTE)v130 + 15) & 7) + 15);
          if ( *v131 )
          {
            BYTE1(v363) = 1;
            v127 = *(_DWORD **)(v6 + 224);
            v128 = *v127;
          }
        }
        if ( (v128 & 0x200000) != 0 )
        {
          v132 = (unsigned int)v127[1];
          v133 = v127 + 2;
          for ( m = 0; m < (unsigned int)v132; ++v133 )
          {
            if ( *v133 == 11 )
              break;
            ++m;
          }
          if ( m >= (unsigned int)v132 )
            v135 = 0LL;
          else
            v135 = (_QWORD *)((char *)v127 + v132 + 8LL * m - (((_BYTE)v132 + 15) & 7) + 15);
          v136 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v135 + 48LL))(*v135, 54LL);
          v137 = BYTE2(v363);
          if ( v136 )
            v137 = 1;
          BYTE2(v363) = v137;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v6 + 216) + 4LL) & 0x4000000) != 0 )
        {
          (*(void (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)v32 + 44) + 24LL))(*((_QWORD *)v32 + 44), &v367);
          ColorSpace = CVisual::GetColorSpace((CVisual *)v6);
          v139 = v364;
          if ( ColorSpace != v140 )
            v139 = 1;
          v364 = v139;
        }
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, 86LL)
          && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6) || *(_QWORD *)(v6 + 560)) )
        {
          HIBYTE(v363) = 1;
        }
        if ( v115 < 1.0 )
        {
          v142 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v115 - 1.0)) & _xmm);
          if ( v142 >= 0.0000011920929 )
          {
            v143 = *(_QWORD *)(v6 + 72);
            if ( (v143 & 2) != 0 )
              v143 = *(_QWORD *)(v143 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              LODWORD(v143) = v143 & 1;
            if ( !(_DWORD)v143 && (*(_BYTE *)(v6 + 92) & 1) != 0 && *((_DWORD *)v32 + 64) != 4
              || *((_DWORD *)v32 + 65) == 1
              || *(_DWORD *)(v6 + 100) == 1 )
            {
              *(_DWORD *)&v355[4] = 1;
            }
            else
            {
              *(_DWORD *)&v355[4] = 2;
              if ( EventEnabled(
                     Microsoft_Windows_Dwm_Core_Provider_Context,
                     &EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start) )
              {
                v144 = *(_QWORD *)(v6 + 72);
                if ( (v144 & 2) != 0 )
                  v144 = *(_QWORD *)(v144 & 0xFFFFFFFFFFFFFFFCuLL);
                else
                  LODWORD(v144) = v144 & 1;
                v145 = (_DWORD)v144 == 0;
                v146 = HIDWORD(v362);
                if ( !v145 )
                {
                  v146 = HIDWORD(v362) | 0x20;
                  HIDWORD(v362) |= 0x20u;
                }
                if ( (*(_BYTE *)(v6 + 92) & 1) == 0 )
                  HIDWORD(v362) = v146 | 0x40;
              }
            }
          }
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v6 + 216) + 4LL) & 0x2000000) != 0 )
          *(_DWORD *)&v355[8] = CVisual::GetResampleMode(v6);
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v355) & _xmm) < 0.0000011920929
          || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v356) & _xmm) < 0.0000011920929 )
        {
          if ( !qword_180308258 || !CDisplaySet::NeedsDesktopMoves(qword_180308258) )
          {
LABEL_471:
            *v351 = 0;
            goto LABEL_89;
          }
          CVisual::ClearAllMoveTransformsInSubtree((struct CVisual *)v6);
          if ( !*((_QWORD *)v32 + 787) )
            *((_QWORD *)v32 + 787) = v6;
        }
        v147 = &v361[4];
        v148 = v370[0];
        v149 = *((_QWORD *)v32 + 417);
        if ( !(_BYTE)v363 )
          v147 = 0LL;
        v367 = (__int64)v147;
        v150 = -2003292412;
        if ( *((_BYTE *)v370[0] + 32) )
        {
          v151 = (_QWORD *)(v149 + 328);
        }
        else
        {
          v160 = *(_QWORD *)(v149 + 224);
          if ( *(int *)v160 >= 0 )
            goto LABEL_316;
          v161 = *(unsigned int *)(v160 + 4);
          v162 = (_BYTE *)(v160 + 8);
          for ( n = 0; n < (unsigned int)v161; ++v162 )
          {
            if ( *v162 == 1 )
              break;
            ++n;
          }
          v164 = n >= (unsigned int)v161 ? 0LL : (_QWORD **)(v160 + v161 + 15 + 8LL * n - (((_BYTE)v161 + 15) & 7));
          v141 = *v164;
          if ( !*v164 )
            goto LABEL_316;
          v165 = (_QWORD *)*v141;
          if ( (_QWORD *)*v141 == v141 )
            goto LABEL_316;
          while ( 1 )
          {
            v151 = v165 - 28;
            if ( (struct CVisualTree *)v165[4] == v370[0] )
              break;
            v165 = (_QWORD *)*v165;
            if ( v165 == v141 )
              goto LABEL_316;
          }
        }
        if ( !v151 )
        {
LABEL_316:
          v177 = 0;
          goto LABEL_317;
        }
        v152 = *(_DWORD **)(v149 + 224);
        v150 = 0;
        v153 = 0LL;
        v154 = 0;
        v155 = *(_QWORD *)(*(_QWORD *)(v149 + 16) + 368LL);
        if ( (*v152 & 0x800000) != 0 )
        {
          v156 = (unsigned int)v152[1];
          v157 = v152 + 2;
          for ( ii = 0; ii < (unsigned int)v156; ++v157 )
          {
            if ( *v157 == 9 )
              break;
            ++ii;
          }
          v159 = ii >= (unsigned int)v156
               ? 0LL
               : (_QWORD **)((char *)v152 + v156 + 8LL * ii - (((_BYTE)v156 + 15) & 7) + 15);
          v141 = *v159;
          if ( *v159 )
          {
            v166 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v141 + 152LL))(*v141);
            if ( !v166 || (v151[2] & 4) != 0 && v151[27] == v155 )
            {
              v148 = v370[0];
            }
            else
            {
              v154 = 1;
              TreeData = CVisual::FindTreeData(v166, v370[0]);
              v148 = v370[0];
              v153 = TreeData;
              if ( TreeData )
                goto LABEL_302;
            }
          }
        }
        if ( v149 != *((_QWORD *)v148 + 3) )
        {
          v168 = *(_QWORD *)(v149 + 80);
          v153 = 0LL;
          if ( *((_BYTE *)v148 + 32) )
          {
            v153 = (struct _LIST_ENTRY *)(v168 + 328);
          }
          else
          {
            v169 = *(_QWORD *)(v168 + 224);
            if ( *(int *)v169 < 0 )
            {
              v141 = (_QWORD *)*(unsigned int *)(v169 + 4);
              v170 = (_BYTE *)(v169 + 8);
              for ( jj = 0LL; (unsigned int)jj < (unsigned int)v141; ++v170 )
              {
                if ( *v170 == 1 )
                  break;
                jj = (unsigned int)(jj + 1);
              }
              if ( (unsigned int)jj >= (unsigned int)v141 )
              {
                v172 = 0LL;
              }
              else
              {
                v141 = (_QWORD *)((char *)v141 + 15);
                v172 = (_QWORD **)((char *)v141 + v169 + 8 * jj - ((unsigned __int8)v141 & 7));
              }
              v173 = *v172;
              if ( v173 )
              {
                v174 = (_QWORD *)*v173;
                if ( (_QWORD *)*v173 != v173 )
                {
                  while ( 1 )
                  {
                    LODWORD(v141) = (_DWORD)v174 - 224;
                    if ( (struct CVisualTree *)v174[4] == v148 )
                      break;
                    v174 = (_QWORD *)*v174;
                    if ( v174 == v173 )
                      goto LABEL_301;
                  }
                  v153 = (struct _LIST_ENTRY *)(v174 - 28);
                }
              }
            }
          }
        }
LABEL_301:
        if ( !v153 )
        {
          v175 = 1LL;
LABEL_304:
          if ( v151[15] < v175 )
          {
            updated = CVisual::UpdateWorldTransform(
                        (CComposition **)v149,
                        (CVisual **)v148,
                        (struct CTreeData *)v151,
                        v154,
                        (const struct CTreeData *)v153);
            v150 = updated;
            if ( updated < 0 )
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v141, 0LL, 0, updated, 0x7BEu);
          }
          if ( v150 >= 0 )
          {
            if ( !v151[15] )
            {
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v141, 0LL, 0, -2003292412, 0x65u);
              v150 = -2003292412;
              MilInstrumentationCheckHR_MaybeFailFast(v179, 0LL, 0, -2003292412, 0x722u);
              v4 = -2003292412;
              goto LABEL_313;
            }
            v141 = (_QWORD *)v367;
            v357 = *(_OWORD *)(v151 + 5);
            v358 = *(_OWORD *)(v151 + 7);
            v359 = *(_OWORD *)(v151 + 9);
            v360 = *(_OWORD *)(v151 + 11);
            *(_DWORD *)v361 = *((_DWORD *)v151 + 26);
            v177 = (v151[2] & 2) != 0;
            if ( v367 )
            {
              v178 = v151[14];
              *(_OWORD *)v367 = *(_OWORD *)v178;
              *((_OWORD *)v141 + 1) = *(_OWORD *)(v178 + 16);
              *((_OWORD *)v141 + 2) = *(_OWORD *)(v178 + 32);
              *((_OWORD *)v141 + 3) = *(_OWORD *)(v178 + 48);
              *((_DWORD *)v141 + 16) = *(_DWORD *)(v178 + 64);
            }
            v148 = v370[0];
            v150 = 0;
LABEL_317:
            v4 = v150;
            if ( v150 >= 0 )
            {
              if ( v177 || *((_QWORD *)v148 + 3) == v6 )
              {
                v32 = v348;
                if ( !*((_BYTE *)v348 + 6132) )
                  CMILMatrix::Multiply((CMILMatrix *)&v357, (struct CDrawingContext *)((char *)v348 + 6064));
                v180 = CDrawingContext::PushTransformInternal(
                         v348,
                         (const struct CVisual *)v6,
                         (const struct CMILMatrix *)&v357,
                         0,
                         1);
                v4 = v180;
                if ( v180 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v181, 0LL, 0, v180, 0x208Cu);
                  goto LABEL_89;
                }
              }
              else
              {
                v32 = v348;
                if ( !*((_BYTE *)v348 + 6132) )
                  CMatrixStack::Top((struct CDrawingContext *)((char *)v348 + 480), (struct CMILMatrix *)&v357);
              }
              if ( (_BYTE)v363 && !*((_BYTE *)v32 + 6132) )
                CMILMatrix::Multiply((CMILMatrix *)&v361[4], (struct CDrawingContext *)((char *)v32 + 6064));
              v182 = 0;
              v183 = 0;
              if ( !*(_QWORD *)(v6 + 248) )
                goto LABEL_383;
              if ( SBYTE1(v362) >> 6 )
              {
                v184 = SBYTE1(v362) >> 6 == 1;
              }
              else
              {
                v184 = 0;
                v185 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[12] - 0.0)) & _xmm);
                if ( v185 < 0.000081380211 )
                {
                  v186 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[28] - 0.0)) & _xmm);
                  if ( v186 < 0.000081380211 )
                  {
                    v187 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[60] - 0.0)) & _xmm);
                    if ( v187 < 0.000081380211 )
                      goto LABEL_342;
                  }
                  if ( v185 < 0.000081380211 )
                  {
                    v188 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[28] - 0.0)) & _xmm);
                    if ( v188 < 0.000081380211 )
                    {
                      v189 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[36] - 0.0)) & _xmm);
                      if ( v189 < 0.000081380211 )
                      {
                        v190 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[40] - 0.0)) & _xmm);
                        if ( v190 < 0.000081380211 )
                        {
                          v191 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[44] - 0.0)) & _xmm);
                          if ( v191 < 0.000081380211
                            || (v192 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[44] - 1.0)) & _xmm),
                                v192 < 0.000081380211) )
                          {
                            v193 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[48] - 0.0)) & _xmm);
                            if ( v193 < 0.000081380211 )
                            {
                              v194 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[60] - 0.0)) & _xmm);
                              if ( v194 < 0.000081380211 )
                              {
LABEL_342:
                                v195 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v361[16]) & _xmm);
                                v196 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v361[32]) & _xmm)
                                             * 61440.0)
                                     + (float)(v195 * 61440.0);
                                v197 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v361[64]) & _xmm);
                                v198 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v196 + v197) - 1.0)) & _xmm);
                                v184 = v198 < 0.000081380211;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                BYTE1(v362) = BYTE1(v362) & 0x3F | ((v184 << 7) - 64);
              }
              if ( !v184
                || (v199 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[8] - 0.0)) & _xmm),
                    v199 >= 0.000081380211)
                || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[20] - 0.0)) & _xmm) >= 0.000081380211 )
              {
                if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[4] - 0.0)) & _xmm) >= 0.000081380211
                  || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v361[24] - 0.0)) & _xmm) >= 0.000081380211 )
                {
LABEL_383:
                  if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(v6, 144LL) )
                  {
                    v214 = *(_DWORD **)(v6 + 224);
                    if ( (*v214 & 0x8000) != 0 )
                    {
                      v215 = *(_QWORD *)CSparseAlignedStorage<8,8>::AllocatedStorage::FindData(v214, 17LL);
                      if ( v215 )
                      {
                        if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v215 + 192LL))(v215) )
                          v183 = 5;
                      }
                    }
                  }
                  if ( HIBYTE(v363) )
                    v183 = 5;
                  v216 = v370[0];
                  v217 = 0LL;
                  v218 = *((_BYTE *)v370[0] + 32);
                  if ( v218 )
                  {
                    v217 = v6 + 328;
                  }
                  else
                  {
                    v219 = *(_QWORD *)(v6 + 224);
                    if ( *(int *)v219 < 0 )
                    {
                      v220 = *(unsigned int *)(v219 + 4);
                      v221 = (_BYTE *)(v219 + 8);
                      for ( kk = 0; kk < (unsigned int)v220; ++v221 )
                      {
                        if ( *v221 == 1 )
                          break;
                        ++kk;
                      }
                      v223 = kk >= (unsigned int)v220
                           ? 0LL
                           : (_QWORD **)(v219 + v220 + 15 + 8LL * kk - (((_BYTE)v220 + 15) & 7));
                      v224 = *v223;
                      if ( *v223 )
                      {
                        v225 = (_QWORD *)*v224;
                        if ( (_QWORD *)*v224 != v224 )
                        {
                          while ( (struct CVisualTree *)v225[4] != v370[0] )
                          {
                            v225 = (_QWORD *)*v225;
                            if ( v225 == v224 )
                              goto LABEL_406;
                          }
                          v217 = (__int64)(v225 - 28);
                        }
                      }
                    }
                  }
LABEL_406:
                  if ( v6 != *((_QWORD *)v370[0] + 3) && !v218 )
                  {
                    v226 = *(_QWORD *)(*(_QWORD *)(v6 + 80) + 224LL);
                    if ( *(int *)v226 < 0 )
                    {
                      v227 = *(unsigned int *)(v226 + 4);
                      v228 = (_BYTE *)(v226 + 8);
                      for ( mm = 0; mm < (unsigned int)v227; ++v228 )
                      {
                        if ( *v228 == 1 )
                          break;
                        ++mm;
                      }
                      if ( mm >= (unsigned int)v227 )
                        v230 = 0LL;
                      else
                        v230 = (__int64 ****)(v226 + v227 + 15 + 8LL * mm - (((_BYTE)v227 + 15) & 7));
                      v231 = *v230;
                      if ( *v230 )
                      {
                        for ( nn = *v231; nn != (__int64 **)v231; nn = (__int64 **)*nn )
                        {
                          if ( nn[4] == (__int64 *)v370[0] )
                            break;
                        }
                      }
                    }
                  }
                  LOBYTE(v346) = v182;
                  v233 = CCpuClippingData::Update(v217 + 136, v370[0], v6, v183, v346);
                  v4 = v233;
                  if ( v233 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v235, 0LL, 0, v233, 0x825u);
                  if ( v4 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v235, 0LL, 0, v4, 0x20DBu);
                    goto LABEL_314;
                  }
                  v236 = 0LL;
                  if ( *((_BYTE *)v216 + 32) )
                  {
                    v236 = (_QWORD *)(v6 + 328);
                  }
                  else
                  {
                    v237 = *(_QWORD *)(v6 + 224);
                    if ( *(int *)v237 < 0 )
                    {
                      v238 = *(unsigned int *)(v237 + 4);
                      v239 = (_BYTE *)(v237 + 8);
                      for ( i1 = 0; i1 < (unsigned int)v238; ++v239 )
                      {
                        if ( *v239 == 1 )
                          break;
                        ++i1;
                      }
                      v234 = i1 >= (unsigned int)v238
                           ? 0LL
                           : (const struct Windows::Foundation::Numerics::float4x4 *)(v237
                                                                                    + v238
                                                                                    + 15
                                                                                    + 8LL * i1
                                                                                    - (((_BYTE)v238 + 15) & 7));
                      v241 = *(_QWORD **)v234;
                      if ( *(_QWORD *)v234 )
                      {
                        v242 = (_QWORD *)*v241;
                        if ( (_QWORD *)*v241 != v241 )
                        {
                          while ( (struct CVisualTree *)v242[4] != v216 )
                          {
                            v242 = (_QWORD *)*v242;
                            if ( v242 == v241 )
                              goto LABEL_437;
                          }
                          v236 = v242 - 28;
                        }
                      }
                    }
                  }
LABEL_437:
                  v32 = v348;
                  Blink = *((_DWORD *)v236 + 34);
                  if ( !*((_QWORD *)v348 + 45) && !*((_QWORD *)v348 + 787) )
                  {
                    if ( Blink != 5 )
                    {
                      if ( Blink != 4 )
                      {
                        if ( Blink == 3 )
                        {
                          v248 = CDrawingContext::PushClippingScope(v348, v6, 1, (__int64)&v361[4], (__int64)&v371);
                          v4 = v248;
                          if ( v248 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v249, 0LL, 0, v248, 0x20FBu);
                            goto LABEL_89;
                          }
                          v250 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v348, v6, (unsigned int)&v371, 0, 1);
                          v4 = v250;
                          if ( v250 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v251, 0LL, 0, v250, 0x20FEu);
                            goto LABEL_89;
                          }
                        }
                        goto LABEL_452;
                      }
                      if ( !(_BYTE)v363 )
                      {
LABEL_453:
                        if ( !*(_WORD *)((char *)&v363 + 1)
                          && __PAIR16__(HIBYTE(v363), 0) == v364
                          && !*(_QWORD *)&v355[4]
                          && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v356 - 1.0)) & _xmm) < 0.0000011920929 )
                        {
LABEL_481:
                          if ( *((_QWORD *)v32 + 45) )
                            goto LABEL_537;
                          if ( *((_QWORD *)v32 + 787) )
                            goto LABEL_620;
                          if ( ((Blink - 2) & 0xFFFFFFFD) != 0 )
                          {
LABEL_537:
                            if ( !*((_QWORD *)v32 + 787) )
                            {
                              if ( *((_BYTE *)v32 + 6348) )
                                CDrawingContext::UpdateMoveOptimizations(v32, v234, v373);
                              v295 = (char *)v32 + 3480;
                              v296 = 0LL;
                              v297 = *((_DWORD *)v32 + 870);
                              if ( v297 )
                                v296 = *((_QWORD *)v32 + 437) + 16LL * (unsigned int)(v297 - 1);
                              v350 = *(_BYTE *)(v296 + 8);
                              v298 = Windows::Foundation::Numerics::determinant(
                                       (Windows::Foundation::Numerics *)&v357,
                                       v234);
                              v299 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v298 - 0.0)) & _xmm);
                              if ( v299 >= 0.00000011920929 && _finite((float)(1.0 / v298)) )
                                v300 = v298 < 0.0 == (float)((float)((float)((float)((float)(*((float *)&v357 + 1)
                                                                                           * *((float *)&v358 + 3))
                                                                                   - (float)(*((float *)&v357 + 3)
                                                                                           * *((float *)&v358 + 1)))
                                                                           * *(float *)&v360)
                                                                   + (float)((float)((float)(*((float *)&v357 + 3)
                                                                                           * *(float *)&v358)
                                                                                   - (float)(*(float *)&v357
                                                                                           * *((float *)&v358 + 3)))
                                                                           * *((float *)&v360 + 1)))
                                                           + (float)((float)((float)(*(float *)&v357
                                                                                   * *((float *)&v358 + 1))
                                                                           - (float)(*((float *)&v357 + 1)
                                                                                   * *(float *)&v358))
                                                                   * *((float *)&v360 + 3))) < 0.0;
                              else
                                v300 = (float)((float)(*(float *)&v357 * *((float *)&v358 + 1))
                                             - (float)(*((float *)&v357 + 1) * *(float *)&v358)) > 0.0;
                              if ( (**(_DWORD **)(v6 + 224) & 0x200000) != 0 )
                              {
LABEL_560:
                                *(_QWORD *)v373 = v6;
                                v373[8] = v300;
                                v305 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
                                         v295,
                                         v373);
                                v4 = v305;
                                if ( v305 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(v306, 0LL, 0, v305, 0x2165u);
                                  goto LABEL_89;
                                }
                                goto LABEL_561;
                              }
                              v301 = *(_DWORD *)(v6 + 100);
                              v302 = v365 && *((_DWORD *)v365 + 25) == 1;
                              v303 = *(_QWORD *)(v6 + 72);
                              if ( (v303 & 2) != 0 )
                                v303 = *(_QWORD *)(v303 & 0xFFFFFFFFFFFFFFFCuLL);
                              else
                                LODWORD(v303) = v303 & 1;
                              v304 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6);
                              if ( v301 != 1 )
                              {
                                if ( !v302 )
                                  goto LABEL_561;
                                if ( (_DWORD)v303 )
                                {
LABEL_559:
                                  v32 = v348;
                                  goto LABEL_560;
                                }
                              }
                              if ( v302 && v304 )
                                goto LABEL_559;
LABEL_561:
                              if ( !*((_QWORD *)v348 + 45)
                                && !*((_QWORD *)v348 + 787)
                                && (**(_DWORD **)(v6 + 224) & 0x100000) != 0 )
                              {
                                WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v6);
                                if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 356) )
                                {
                                  CScopedClipStack::GetClipBoundsWorld(v366, (__int64)v373);
                                  TopByReference = CMatrixStack::GetTopByReference(v353);
                                  CMILMatrix::Transform3DBoundsHelper<0>(
                                    TopByReference,
                                    (char *)WindowBackgroundTreatmentInternal + 144,
                                    v375);
                                  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                                          v373,
                                                          v375) )
                                  {
                                    v309 = 1;
                                    v310 = *((_BYTE *)WindowBackgroundTreatmentInternal + 359);
                                    if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 357)
                                      || !CWindowBackgroundTreatment::HasValidSource(
                                            WindowBackgroundTreatmentInternal,
                                            *((const struct IRenderTarget **)v348 + 44)) )
                                    {
                                      ImageSourceForEffectInput = CWindowBackgroundTreatment::GenerateImageSourceForEffectInput(
                                                                    (struct D2D_RECT_F *)WindowBackgroundTreatmentInternal,
                                                                    v348);
                                      v4 = ImageSourceForEffectInput;
                                      v309 = v310 == 0;
                                      if ( ImageSourceForEffectInput < 0 )
                                      {
                                        MilInstrumentationCheckHR_MaybeFailFast(
                                          v312,
                                          0LL,
                                          0,
                                          ImageSourceForEffectInput,
                                          0x2188u);
                                        goto LABEL_314;
                                      }
                                    }
                                    if ( v310 )
                                    {
                                      FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(
                                        *(FRAME_TIME_INFO **)(*((_QWORD *)v348 + 4) + 360LL),
                                        v309);
                                      if ( !v309 )
                                        ++dword_180308150;
                                    }
                                    v313 = CMatrixStack::GetTopByReference(v353);
                                    CWindowBackgroundTreatment::SetWorldTransform(
                                      WindowBackgroundTreatmentInternal,
                                      v313,
                                      3LL);
                                  }
                                }
                              }
                              v314 = *(_DWORD *)(v6 + 100);
                              v315 = v365 && *((_DWORD *)v365 + 25) == 1;
                              v316 = 0;
                              if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6) )
                                goto LABEL_588;
                              v317 = *(_DWORD **)(v6 + 224);
                              if ( (*v317 & 0x200000) == 0 )
                                goto LABEL_587;
                              v318 = (unsigned int)v317[1];
                              v319 = v317 + 2;
                              for ( i2 = 0; i2 < (unsigned int)v318; ++v319 )
                              {
                                if ( *v319 == 11 )
                                  break;
                                ++i2;
                              }
                              v321 = i2 >= (unsigned int)v318
                                   ? 0LL
                                   : (_QWORD *)((char *)v317 + v318 + 8LL * i2 - (((_BYTE)v318 + 15) & 7) + 15);
                              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v321 + 48LL))(
                                     *v321,
                                     54LL) )
                              {
LABEL_588:
                                v322 = 1;
                              }
                              else
                              {
LABEL_587:
                                v322 = 0;
                              }
                              if ( v314 != 1 )
                              {
LABEL_592:
                                v323 = v348;
                                LOBYTE(v347) = 0;
                                if ( !*((_DWORD *)v348 + 66) || (v324 = v350, v350 == v300) )
                                {
                                  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 216LL))(v6) )
                                  {
                                    (*(void (__fastcall **)(__int64, CDrawingContext *, __int64 *))(*(_QWORD *)v6 + 208LL))(
                                      v6,
                                      v323,
                                      &v347);
                                    ++*((_DWORD *)v352 + 8);
                                  }
                                }
                                else if ( ((**(_DWORD **)(v6 + 224) & 0x200000) != 0
                                        || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 176LL))(v6))
                                       && v300
                                       && *(_BYTE *)(CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(v295)
                                                   + 8) != v324 )
                                {
                                  LOBYTE(v347) = 1;
                                }
                                if ( HIBYTE(v363)
                                  && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 48LL))(
                                       v6,
                                       86LL)
                                  && CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled((CLayerVisual *)v6) )
                                {
                                  Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(v6 + 72));
                                  if ( Count )
                                  {
                                    do
                                    {
                                      ChildAt = CVisual::GetChildAt((CVisual *)v6, v316);
                                      CDrawingContext::DrawVisual(v323, ChildAt, 0);
                                      ++v316;
                                    }
                                    while ( v316 < Count );
                                    v32 = v323;
                                    v22 = (unsigned int *)v349;
                                    *v351 = 0;
                                    goto LABEL_90;
                                  }
                                }
                                else if ( !(_BYTE)v347 )
                                {
LABEL_618:
                                  v32 = v323;
                                  v22 = (unsigned int *)v349;
                                  goto LABEL_90;
                                }
                                *v351 = 0;
                                goto LABEL_618;
                              }
                              if ( v315 )
                              {
                                if ( !v322 )
                                  goto LABEL_592;
                              }
                              else if ( !(unsigned int)CPtrArrayBase::GetCount((CPtrArrayBase *)(v6 + 72)) )
                              {
                                goto LABEL_592;
                              }
                              if ( CVisual::HasBspPolygonList((CVisual *)v6) )
                              {
                                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                                  McTemplateU0(
                                    &Microsoft_Windows_Dwm_Core_Provider_Context,
                                    &EVTDESC_P3D_RENDERING_Start);
                                v32 = v348;
                                v325 = CDrawingContext::DrawBspPolygonList(v348, (struct CVisual *)v6, v365);
                                v4 = v325;
                                if ( v325 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(v326, 0LL, 0, v325, 0x21DCu);
                                }
                                else
                                {
                                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                                    McTemplateU0(
                                      &Microsoft_Windows_Dwm_Core_Provider_Context,
                                      &EVTDESC_P3D_RENDERING_Stop);
                                  ++*((_DWORD *)v352 + 8);
                                  *v351 = 0;
                                }
                                goto LABEL_89;
                              }
LABEL_314:
                              v32 = v348;
                              v22 = (unsigned int *)v349;
                              goto LABEL_90;
                            }
LABEL_620:
                            CVisual::ExcludeFromVisibleRegion(v6, v373, v32);
                            goto LABEL_89;
                          }
                          v264 = 0LL;
                          if ( Blink == 2 )
                          {
                            v264 = (__int128 *)(80LL * (unsigned int)(*((_DWORD *)v32 + 258) - 1)
                                              + *((_QWORD *)v32 + 126)
                                              + 8LL);
                          }
                          else if ( Blink == 4 )
                          {
                            v264 = &v357;
                          }
                          v4 = 0;
                          v265 = 0;
                          v266 = 0;
                          if ( *((_DWORD *)v32 + 158) )
                          {
                            v267 = (char *)v32 + 608;
                            while ( 1 )
                            {
                              v268 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v267 + 8LL * v266), v348);
                              v4 = v268;
                              if ( v268 < 0 )
                                break;
                              ++v265;
                              if ( ++v266 >= *((_DWORD *)v348 + 158) )
                              {
                                v32 = v348;
                                goto LABEL_493;
                              }
                            }
                            MilInstrumentationCheckHR_MaybeFailFast(v269, 0LL, 0, v268, 0x1710u);
                          }
                          else
                          {
LABEL_493:
                            v267 = (char *)v32 + 608;
                            *((_DWORD *)v267 + 6) = 0;
                            DynArrayImpl<0>::ShrinkToSize(v267, 8LL);
                          }
                          if ( v265 < *((_DWORD *)v348 + 158) && v265 )
                            DynArray<CD2DLayer *,0>::ShiftLeft(v267, v265);
                          if ( v4 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v270, 0LL, 0, v4, 0x16F2u);
                            v32 = v348;
                          }
                          else
                          {
                            v32 = v348;
                            if ( *((_BYTE *)v348 + 6346) )
                              *(_WORD *)((char *)v348 + 6345) = 1;
                          }
                          if ( v4 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v270, 0LL, 0, v4, 0x1135u);
                          }
                          else
                          {
                            LODWORD(v371) = 3;
                            *((_QWORD *)&v371 + 1) = v6;
                            v271 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
                                     (char *)v32 + 448,
                                     &v371);
                            v4 = v271;
                            if ( v271 >= 0 )
                            {
                              v274 = (_QWORD *)((char *)v32 + 1008);
                              v376 = 0;
                              v275 = *((_DWORD *)v32 + 258);
                              v377 = 1;
                              *(_QWORD *)v375 = 0LL;
                              if ( v275 )
                              {
                                v276 = (unsigned int)(v275 - 1);
                                v277 = 10 * v276;
                                if ( *(_DWORD *)(*v274 + 80 * v276) && (v278 = *((_DWORD *)v32 + 808)) != 0 )
                                  v279 = *(_OWORD *)(*((_QWORD *)v32 + 406) + 16LL * (unsigned int)(v278 - 1));
                                else
                                  v279 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                                v145 = *(_DWORD *)(*v274 + 8 * v277 + 4) == 0;
                                *(_OWORD *)v370 = v279;
                                if ( !v145 )
                                {
                                  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(136LL * (unsigned int)(*((_DWORD *)v32 + 466) - 1) + *((_QWORD *)v32 + 230) + 112LL)) )
                                  {
                                    CScopedClipStack::ComputeCpuClipBoundsInScope((struct CDrawingContext *)((char *)v32 + 1008));
                                    v280 = *((_DWORD *)v32 + 466);
                                  }
                                  TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                                    v370,
                                    *((_QWORD *)v32 + 230) + 112LL + 136LL * (unsigned int)(v280 - 1));
                                }
                              }
                              else
                              {
                                *(_OWORD *)v370 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                              }
                              if ( v264 )
                              {
                                v281 = *v264;
                                v282 = v264[1];
                                v376 = *((_DWORD *)v264 + 16);
                                *(_OWORD *)&v375[8] = v281;
                                v283 = v264[2];
                                *(_OWORD *)&v375[24] = v282;
                                v284 = v264[3];
                                *(_OWORD *)&v375[40] = v283;
                                *(_OWORD *)&v375[56] = v284;
                              }
                              else
                              {
                                CMILMatrix::SetToIdentity((CMILMatrix *)&v375[8]);
                              }
                              v285 = DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet(
                                       (char *)v32 + 1008,
                                       v375);
                              v4 = v285;
                              if ( v285 < 0 )
                                MilInstrumentationCheckHR_MaybeFailFast(v286, 0LL, 0, v285, 0x4Bu);
                              if ( v4 >= 0 )
                              {
LABEL_524:
                                *((_QWORD *)&v371 + 1) = v6;
                                LODWORD(v371) = 1;
                                v288 = 0;
                                v289 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
                                         (char *)v32 + 448,
                                         &v371);
                                v4 = v289;
                                if ( v289 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(v290, 0LL, 0, v289, 0x10E1u);
                                }
                                else
                                {
                                  v288 = 1;
                                  v371 = *(_OWORD *)v370;
                                  v291 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
                                           (unsigned int *)v32 + 808,
                                           &v371);
                                  v4 = v291;
                                  if ( v291 < 0 )
                                  {
                                    MilInstrumentationCheckHR_MaybeFailFast(v292, 0LL, 0, v291, 0x116u);
                                  }
                                  else
                                  {
                                    v294 = 10LL * (unsigned int)(*((_DWORD *)v32 + 258) - 1);
                                    ++*(_DWORD *)(*((_QWORD *)v32 + 126) + 8 * v294);
                                  }
                                  if ( v4 < 0 )
                                    MilInstrumentationCheckHR_MaybeFailFast(v294, 0LL, 0, v4, 0x10E8u);
                                  else
                                    *((_BYTE *)v32 + 6345) = 1;
                                }
                                if ( v4 < 0 )
                                {
                                  if ( v288 )
                                    CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
                                      (char *)v32 + 448,
                                      0LL,
                                      v293);
                                  MilInstrumentationCheckHR_MaybeFailFast(v294, 0LL, 0, v4, 0x214Au);
                                  goto LABEL_89;
                                }
                                goto LABEL_537;
                              }
                              MilInstrumentationCheckHR_MaybeFailFast(v286, 0LL, 0, v4, 0x113Eu);
                              CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
                                (char *)v32 + 448,
                                0LL,
                                v287);
                            }
                            else
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v272, 0LL, 0, v271, 0x113Au);
                            }
                          }
                          if ( v4 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v273, 0LL, 0, v4, 0x2147u);
                            goto LABEL_89;
                          }
                          goto LABEL_524;
                        }
LABEL_457:
                        if ( !*(_DWORD *)(*((_QWORD *)v348 + 4) + 1088LL)
                          || *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() != 2 )
                        {
                          v252 = *((_DWORD *)v348 + 120);
                          if ( v252 )
                            v253 = (CMILMatrix *)(*((_QWORD *)v348 + 62) + 68LL * (unsigned int)(v252 - 1));
                          else
                            v253 = (CMILMatrix *)&CMILMatrix::Identity;
                          CMILMatrix::Transform3DBoundsHelper<1>(v253);
                          v254 = *((_DWORD *)v348 + 120);
                          v380 = *(_QWORD *)&v375[16];
                          *(_DWORD *)&v375[64] = 0;
                          v379 = *(_OWORD *)v375;
                          if ( v254 )
                          {
                            v255 = (unsigned int)(v254 - 1);
                            v256 = *((_QWORD *)v348 + 62);
                            *(_OWORD *)v375 = *(_OWORD *)(68 * v255 + v256);
                            *(_OWORD *)&v375[16] = *(_OWORD *)(68 * v255 + v256 + 16);
                            *(_OWORD *)&v375[32] = *(_OWORD *)(68 * v255 + v256 + 32);
                            *(_OWORD *)&v375[48] = *(_OWORD *)(68 * v255 + v256 + 48);
                            *(_DWORD *)&v375[64] = *(_DWORD *)(68 * v255 + v256 + 64);
                          }
                          else
                          {
                            CMILMatrix::SetToIdentity((CMILMatrix *)v375);
                          }
                          v257 = (*(__int64 (__fastcall **)(__int64, _BYTE *, __int128 *, __int128 *, char *, __int128 *))(*(_QWORD *)v6 + 168LL))(
                                   v6,
                                   v375,
                                   &v381,
                                   &v379,
                                   v378,
                                   &v371);
                          v4 = v257;
                          if ( v257 < 0 )
                            MilInstrumentationCheckHR_MaybeFailFast(v258, 0LL, 0, v257, 0xDF5u);
                          else
                            *(_OWORD *)v370 = v371;
                          if ( v4 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v258, 0LL, 0, v4, 0x2117u);
                            goto LABEL_89;
                          }
                          v259 = CDrawingContext::PushEffects(
                                   v348,
                                   (__int64)&v354,
                                   (__int64)v370,
                                   (__int64)v373,
                                   (__int64)&v347);
                          v4 = v259;
                          if ( v259 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast(v260, 0LL, 0, v259, 0x2120u);
                            goto LABEL_89;
                          }
                          if ( (_BYTE)v347 )
                            goto LABEL_471;
                          if ( *((_BYTE *)v216 + 32) )
                          {
                            v261 = (struct _LIST_ENTRY *)(v6 + 328);
                          }
                          else
                          {
                            TreeDataListHead = CVisual::GetTreeDataListHead((CVisual *)v6);
                            if ( TreeDataListHead )
                            {
                              Flink = TreeDataListHead->Flink;
                              if ( TreeDataListHead->Flink != TreeDataListHead )
                              {
                                while ( (struct CVisualTree *)Flink[2].Flink != v216 )
                                {
                                  Flink = Flink->Flink;
                                  if ( Flink == TreeDataListHead )
                                    goto LABEL_480;
                                }
                                v261 = Flink - 14;
                              }
                            }
                          }
LABEL_480:
                          Blink = (int)v261[8].Blink;
                        }
                        goto LABEL_481;
                      }
                    }
                    if ( *(_BYTE *)(*((_QWORD *)v348 + 126) + 80LL * (unsigned int)(*((_DWORD *)v348 + 258) - 1) + 76) )
                    {
                      v244 = CDrawingContext::PushClippingScope(v348, v6, 0, 0LL, (__int64)&v371);
                      v4 = v244;
                      if ( v244 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v245, 0LL, 0, v244, 0x20ECu);
                        goto LABEL_89;
                      }
                      v246 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v348, v6, (unsigned int)&v371, 0, 1);
                      v4 = v246;
                      if ( v246 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v247, 0LL, 0, v246, 0x20EFu);
                        goto LABEL_89;
                      }
                    }
                  }
LABEL_452:
                  if ( (_BYTE)v363 )
                    goto LABEL_457;
                  goto LABEL_453;
                }
              }
              v200 = *(CGeometry **)(v6 + 248);
              v4 = 0;
              *(_QWORD *)&v371 = 0LL;
              v201 = 0LL;
              v367 = 0LL;
              v202 = 0;
              LOBYTE(v368) = 0;
              BYTE8(v371) = 0;
              ShapeData = CGeometry::GetShapeData(
                            v200,
                            (const struct D2D_SIZE_F *)(v6 + 132),
                            (struct CShapePtr *)&v367);
              v205 = ShapeData;
              if ( ShapeData < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v204, 0LL, 0, ShapeData, 0xBF9u);
              }
              else
              {
                v206 = v367;
                v205 = -2003292412;
                if ( v367 )
                {
                  v207 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v367 + 32LL))(v367, v375, 0LL);
                  v205 = v207;
                  if ( v207 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v204, 0LL, 0, v207, 0x10Du);
                  v206 = v367;
                }
                if ( v205 >= 0 )
                {
                  v202 = LOBYTE(v368);
                  v201 = v206;
                  BYTE8(v371) = LOBYTE(v368);
                  v208 = 0LL;
                  *(_QWORD *)&v371 = v206;
                  v367 = 0LL;
                  LOBYTE(v368) = 0;
LABEL_359:
                  if ( v205 != -2003304438 )
                    v4 = v205;
                  if ( LOBYTE(v368) && v208 )
                    (**v208)(v208, 1LL);
                  if ( v4 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v208, 0LL, 0, v4, 0x20A7u);
                    CShapePtr::Release((CShapePtr *)&v371);
                    v32 = v348;
                    v22 = (unsigned int *)v349;
                    goto LABEL_90;
                  }
                  if ( !v201
                    || !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v206 + 40LL))(v206, &v367)
                    || (_DWORD)v367 != 1 )
                  {
                    goto LABEL_379;
                  }
                  v209 = (*(__int64 (__fastcall **)(__int64, __int64 *, _BYTE *))(*(_QWORD *)v201 + 32LL))(
                           v201,
                           &v367,
                           &v361[4]);
                  if ( v209 < 0 )
                    MilInstrumentationCheckHR_MaybeFailFast(v210, 0LL, 0, v209, 0x10Du);
                  if ( v368 <= *(float *)&v367 )
                    goto LABEL_379;
                  if ( v369 <= *((float *)&v367 + 1) )
                    goto LABEL_379;
                  v211 = *((_QWORD *)v348 + 44);
                  *(float *)&v367 = *(float *)&v367 + -0.015625;
                  *((float *)&v367 + 1) = *((float *)&v367 + 1) + -0.015625;
                  v368 = v368 + 0.015625;
                  v369 = v369 + 0.015625;
                  (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v211 + 56LL))(v211, &v371);
                  v212 = (float)SDWORD1(v371);
                  v213 = (float)SHIDWORD(v371);
                  if ( (float)SDWORD2(v371) <= (float)(int)v371
                    || v213 <= v212
                    || (float)(int)v371 >= *(float *)&v367
                    && v212 >= *((float *)&v367 + 1)
                    && v368 >= (float)SDWORD2(v371)
                    && v369 >= v213 )
                  {
                    v183 = 2;
                    v182 = 1;
                  }
                  else
                  {
LABEL_379:
                    v182 = 0;
                  }
                  if ( v202 && v201 )
                    (**(void (__fastcall ***)(__int64, __int64))v201)(v201, 1LL);
                  goto LABEL_383;
                }
                MilInstrumentationCheckHR_MaybeFailFast(v204, 0LL, 0, v205, 0xBFAu);
              }
              v208 = (void (__fastcall ***)(_QWORD, __int64))v367;
              v206 = 0LL;
              goto LABEL_359;
            }
LABEL_313:
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v141, 0LL, 0, v150, 0x207Au);
            goto LABEL_314;
          }
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v141, 0LL, 0, v150, 0x71Bu);
          v148 = v370[0];
          goto LABEL_316;
        }
LABEL_302:
        v175 = (unsigned __int64)v153[7].Blink;
        goto LABEL_304;
      }
      v367 = 0LL;
      LOBYTE(v368) = 0;
      v117 = CGeometry::GetShapeData(v116, (const struct D2D_SIZE_F *)(v6 + 132), (struct CShapePtr *)&v367);
      v119 = v117;
      if ( v117 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v118, 0LL, 0, v117, 0x62u);
      }
      else
      {
        v120 = (void (__fastcall ***)(_QWORD, __int64))v367;
        v119 = -2003292412;
        if ( v367 )
        {
          v121 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD))(*(_QWORD *)v367 + 32LL))(v367, &v371, 0LL);
          v119 = v121;
          if ( v121 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v122, 0LL, 0, v121, 0x10Du);
          v120 = (void (__fastcall ***)(_QWORD, __int64))v367;
        }
        if ( v119 >= 0 )
          goto LABEL_192;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v120, 0LL, 0, v119, 0x63u);
      }
      v120 = (void (__fastcall ***)(_QWORD, __int64))v367;
LABEL_192:
      v123 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      v124 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v125 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v126 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      if ( v119 == -2003304438 )
      {
        v371 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v119 = 0;
      }
      if ( LOBYTE(v368) && v120 )
      {
        (**v120)(v120, 1LL);
        v123 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
        v124 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v125 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        v126 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      }
      if ( v119 >= 0
        && (v126 < *(float *)&v371 || *((float *)&v371 + 2) < v124)
        && (v125 < *((float *)&v371 + 1) || *((float *)&v371 + 3) < v123) )
      {
        *(_OWORD *)&v361[4] = _xmm;
        LOBYTE(v363) = 1;
        *(_OWORD *)&v361[20] = _xmm;
        LOWORD(v362) = 32085;
        *(_OWORD *)&v361[36] = _xmm;
        *(_OWORD *)&v361[52] = _xmm;
      }
      goto LABEL_203;
    }
  }
LABEL_124:
  v22 = (unsigned int *)((char *)v32 + 3296);
  v81 = *((_DWORD *)v32 + 824);
  if ( v81 )
    *v22 = v81 - 1;
  LOBYTE(v347) = 0;
  CWatermarkStack<bool,64,2,10>::Push((unsigned int *)v32 + 824, &v347);
  *v58 = 0;
LABEL_90:
  if ( *((_BYTE *)v32 + 6352) && *v22 && *(_BYTE *)(*v22 - 1 + *((_QWORD *)v22 + 2)) )
    CVisual::RenderProjectedShadows(v6, v32, 1LL);
  return (unsigned int)v4;
}
