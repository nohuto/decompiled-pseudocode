/*
 * XREFs of ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006AA20
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x180069E10 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800051AC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180005314 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x1800060A0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x1800080AC (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x1800084B4 (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180008548 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x1800085A4 (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180008670 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18000D450 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x1800130DC (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z @ 0x18001DE90 (-NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x18003BB8C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180057308 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18005AC60 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEAVCVisual@@PEBVCVisualTree@@PEAUNodeEffects@1@@Z @ 0x18005FBE0 (-GetEffects@CDrawingContext@@AEAAXPEAVCVisual@@PEBVCVisualTree@@PEAUNodeEffects@1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800600B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18006653C (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180067570 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18006D9E0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006E288 (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18006E36C (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18006E4B4 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18006E548 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x18006FCB0 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071C38 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007481C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800749E0 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800805D4 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180085BC4 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180089560 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x180089DA0 (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18008D2DC (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A1C50 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A1D00 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800A2200 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x1800B4C0C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x1800BA578 (-AddMultipleAndSet@-$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScop.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BAD3C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1800C49D8 (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C9050 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800DC594 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DCE5C (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800EAB88 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     McTemplateU0 @ 0x18015EAF8 (McTemplateU0.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18016CDD8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x18016FAF8 (-GetHeatMapProperties@CVisual@@QEBA-AUHeatMapProperty@1@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x18016FCD8 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x18016FCF8 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18016FF94 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x18017026C (-Push@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CCompos.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x1801703B4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x18017153C (-SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ.c)
 *     ?ShiftLeft@?$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z @ 0x1801716F8 (-ShiftLeft@-$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x18017A1DC (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801C2FDC (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x1801C3054 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801C3860 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18021D270 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
 */

__int64 __fastcall CDrawingContext::PreSubgraph(struct CVisual **this, const struct CVisualTree *a2, bool *a3)
{
  unsigned int v3; // r14d
  int v4; // esi
  CVisual *v6; // rcx
  bool v7; // zf
  __int64 ProjectedShadowReceivers; // rax
  char *v9; // rcx
  char *v10; // rax
  CProjectedShadowReceiver *v11; // r13
  CProjectedShadowScene **v12; // r15
  CProjectedShadowScene **v13; // r12
  CProjectedShadowScene *v14; // rdi
  __int64 ***v15; // rdi
  __int64 **i; // rbx
  char v17; // r15
  unsigned int *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // ecx
  unsigned int v22; // eax
  unsigned __int64 v23; // rdi
  int v24; // eax
  unsigned int v25; // ecx
  void *v26; // rbx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  CVisual *v29; // r13
  __int64 v30; // r9
  __int64 v31; // rdx
  _BYTE *v32; // rcx
  unsigned int j; // eax
  void *v34; // rbx
  HANDLE ProcessHeap; // rax
  __int64 *v36; // rax
  __int64 *v37; // rcx
  void **v38; // rax
  int v39; // edi
  unsigned int v40; // ebx
  __int64 v41; // r10
  __int64 v42; // rax
  _BYTE *v43; // r15
  __int64 v44; // rax
  unsigned int *v45; // r12
  unsigned int v46; // eax
  __int64 v47; // rcx
  unsigned __int64 v48; // rdi
  int v49; // eax
  unsigned int v50; // ecx
  int v51; // ebx
  unsigned __int64 v52; // rax
  void *v53; // rbx
  unsigned int v54; // eax
  unsigned int v55; // ecx
  char *v56; // rcx
  __int64 v57; // rax
  unsigned int v58; // edx
  unsigned int v59; // ecx
  void *v60; // rdi
  HANDLE v61; // rax
  unsigned int v62; // ecx
  struct CDrawingContext *v63; // rdi
  char *v64; // r15
  _DWORD *v65; // rbx
  __int64 v66; // rax
  _DWORD *v67; // rax
  __int64 v68; // r8
  _DWORD *v69; // r12
  unsigned int v70; // edx
  __int64 v71; // rcx
  unsigned __int64 v72; // rdi
  int v73; // eax
  unsigned int v74; // ecx
  int v75; // ebx
  unsigned __int64 v76; // rax
  void *v77; // rbx
  struct CDrawingContext *v78; // rax
  unsigned int v79; // eax
  unsigned int v80; // ecx
  __int64 v81; // rax
  unsigned int v82; // edx
  unsigned int v83; // ebx
  __int64 v84; // r8
  unsigned int v85; // ecx
  int v86; // eax
  unsigned int v87; // ecx
  void *v88; // rdi
  HANDLE v89; // rax
  bool *v90; // r15
  __int64 v91; // rcx
  bool v92; // cf
  int v93; // eax
  unsigned int v94; // ecx
  int v95; // eax
  unsigned int v96; // ecx
  unsigned int v97; // ecx
  unsigned int v98; // eax
  _DWORD *v99; // rcx
  int v100; // eax
  unsigned int v101; // ecx
  CMatrixStack *v102; // r12
  __int64 Bounds; // rax
  CMILMatrix *v104; // r9
  int v105; // eax
  float v106; // xmm0_4
  float v107; // xmm8_4
  float v108; // xmm9_4
  float v109; // xmm6_4
  float v110; // xmm7_4
  struct CVisualTree *v111; // r15
  char *v112; // rbx
  __int64 v113; // rax
  __int64 v114; // r8
  __int64 v115; // rcx
  unsigned int v116; // r8d
  unsigned int v117; // ecx
  _BYTE *v118; // rdx
  unsigned int v119; // eax
  unsigned int v120; // ecx
  unsigned __int64 v121; // rdi
  int v122; // eax
  unsigned int v123; // ecx
  void *v124; // rbx
  unsigned int v125; // eax
  unsigned int v126; // ecx
  __int64 v127; // r8
  __int64 v128; // rdx
  _BYTE *v129; // rcx
  unsigned int k; // eax
  _QWORD **v131; // rdx
  _QWORD *v132; // rcx
  _QWORD *v133; // rax
  char *v134; // rbx
  _DWORD *v135; // rdi
  __int64 v136; // rax
  int v137; // eax
  struct CDrawingContext *v138; // rcx
  int v139; // ecx
  __int64 v140; // rcx
  void *v141; // rbx
  HANDLE v142; // rax
  __int64 v143; // r8
  __int64 v144; // rdx
  _BYTE *v145; // rcx
  unsigned int m; // eax
  _QWORD **v147; // rdx
  _QWORD *v148; // rcx
  _QWORD *v149; // rax
  _QWORD *v150; // rcx
  unsigned int v151; // edx
  __int64 v152; // r9
  int v153; // edx
  unsigned int v154; // r8d
  char *v155; // rax
  struct CVisualTree *v156; // r10
  int v157; // r15d
  CVisual *v158; // r13
  _QWORD *v159; // rbx
  _DWORD *v160; // r9
  char v161; // r12
  struct CTreeData *v162; // rsi
  __int64 v163; // rdi
  __int64 v164; // rcx
  _BYTE *v165; // rax
  unsigned int ii; // edx
  _QWORD **v167; // r8
  __int64 v168; // r8
  __int64 v169; // rdx
  _BYTE *v170; // rcx
  unsigned int n; // eax
  _QWORD **v172; // rdx
  _QWORD *v173; // rax
  CVisual *v174; // rax
  struct CTreeData *TreeData; // rax
  __int64 v176; // rax
  __int64 v177; // r8
  _BYTE *v178; // rax
  __int64 jj; // rdx
  _QWORD **v180; // rdx
  _QWORD *v181; // rdx
  _QWORD *v182; // rax
  unsigned __int64 v183; // rax
  int updated; // eax
  bool v185; // dl
  __int64 v186; // rax
  unsigned int v187; // ecx
  int v188; // eax
  unsigned int v189; // ecx
  CVisual *v190; // rdi
  unsigned int v191; // r13d
  char v192; // bl
  char v193; // cl
  float v194; // xmm3_4
  float v195; // xmm1_4
  float v196; // xmm1_4
  float v197; // xmm1_4
  float v198; // xmm1_4
  float v199; // xmm1_4
  float v200; // xmm1_4
  float v201; // xmm1_4
  float v202; // xmm1_4
  float v203; // xmm1_4
  float v204; // xmm1_4
  float v205; // xmm3_4
  float v206; // xmm1_4
  float v207; // xmm1_4
  float v208; // xmm1_4
  CGeometry *v209; // rcx
  char v210; // r12
  void *v211; // r15
  int ShapeData; // eax
  unsigned int v213; // ecx
  int v214; // ebx
  void *v215; // rdi
  int v216; // eax
  void (__fastcall ***v217)(void *, __int64); // rcx
  int v218; // eax
  unsigned int v219; // ecx
  __int64 v220; // rcx
  float v221; // xmm0_4
  float v222; // xmm1_4
  unsigned int Slot; // eax
  __int64 v224; // r10
  __int64 v225; // rcx
  _QWORD *v226; // rdx
  struct CVisualTree *v227; // r15
  char *v228; // r10
  char v229; // r9
  __int64 v230; // r8
  __int64 v231; // rdx
  _BYTE *v232; // rcx
  unsigned int kk; // eax
  _QWORD **v234; // rdx
  _QWORD *v235; // rdx
  _QWORD *v236; // rax
  __int64 v237; // r8
  __int64 v238; // rdx
  _BYTE *v239; // rcx
  unsigned int mm; // eax
  __int64 ****v241; // rdx
  __int64 ***v242; // rcx
  __int64 **nn; // rax
  __int64 v244; // r9
  int v245; // eax
  CScopedClipStack *v246; // rdx
  unsigned int v247; // ecx
  __int64 v248; // r8
  char *v249; // r9
  __int64 v250; // rdx
  _BYTE *v251; // rcx
  unsigned int i1; // eax
  _QWORD *v253; // rax
  int Blink; // ebx
  int v255; // eax
  unsigned int v256; // ecx
  int v257; // eax
  unsigned int v258; // ecx
  int v260; // eax
  unsigned int v261; // ecx
  int v262; // eax
  unsigned int v263; // ecx
  _QWORD *v264; // rbx
  CMILMatrix *v265; // rax
  int v266; // eax
  __int64 v267; // rcx
  __int64 v268; // rax
  int v269; // eax
  unsigned int v270; // ecx
  __int64 v271; // r9
  int v272; // eax
  unsigned int v273; // ecx
  struct _LIST_ENTRY *v274; // r10
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  CScopedClipStack *v277; // r12
  __int128 *v278; // r13
  struct CDrawingContext *v279; // rdx
  unsigned int v280; // edi
  unsigned int v281; // ebx
  char *v282; // r15
  int v283; // eax
  unsigned int v284; // ecx
  void *v285; // rcx
  unsigned int *v286; // r15
  unsigned int v287; // eax
  unsigned int v288; // ecx
  unsigned __int64 v289; // rdi
  int v290; // eax
  unsigned int v291; // ecx
  int v292; // ebx
  unsigned __int64 v293; // rax
  void *v294; // rbx
  unsigned int v295; // eax
  unsigned int v296; // ecx
  unsigned int v297; // ecx
  void *v298; // rdi
  HANDLE v299; // rax
  int v300; // eax
  __int64 v301; // r8
  __int64 v302; // rax
  __int64 v303; // rdx
  int v304; // eax
  __int128 v305; // xmm0
  __int64 v306; // r8
  __int64 v307; // r9
  __int128 v308; // xmm0
  __int128 v309; // xmm1
  __int128 v310; // xmm0
  __int128 v311; // xmm1
  int v312; // eax
  unsigned int v313; // ecx
  char v314; // r15
  unsigned int *v315; // rdi
  unsigned int v316; // ecx
  unsigned int v317; // eax
  unsigned __int64 v318; // rsi
  int v319; // eax
  unsigned int v320; // ecx
  int v321; // ebx
  unsigned __int64 v322; // rax
  void *v323; // rbx
  unsigned int v324; // eax
  unsigned int v325; // ecx
  int v326; // eax
  unsigned int v327; // ecx
  __int64 v328; // rcx
  void *v329; // rsi
  HANDLE v330; // rax
  char *v331; // r13
  __int64 v332; // rax
  int v333; // ecx
  float v334; // xmm0_4
  float v335; // xmm2_4
  char v336; // r12
  CVisual *v337; // rcx
  int v338; // r15d
  bool v339; // di
  __int64 v340; // rbx
  char v341; // al
  int v342; // eax
  unsigned int v343; // ecx
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rbx
  const struct CMILMatrix *v345; // rax
  char v346; // di
  char v347; // r15
  int ImageSourceForEffectInput; // eax
  unsigned int v349; // ecx
  const struct CMILMatrix *v350; // rax
  struct CVisual *v351; // r15
  int v352; // edi
  bool v353; // bl
  _DWORD *v354; // r8
  __int64 v355; // rdx
  _BYTE *v356; // rcx
  unsigned int i2; // eax
  _QWORD *v358; // rdx
  char v359; // al
  char v360; // bl
  __int64 TopByReference; // rax
  int v362; // eax
  unsigned int v363; // ecx
  unsigned int Count; // ebx
  struct CVisual *ChildAt; // rax
  unsigned int v366; // eax
  unsigned int v367; // ecx
  unsigned __int64 v368; // rdi
  int v369; // eax
  unsigned int v370; // ecx
  void *v371; // rbx
  unsigned int v372; // eax
  unsigned int v373; // ecx
  void *v374; // rbx
  HANDLE v375; // rax
  unsigned int v376; // eax
  unsigned __int64 v377; // rdi
  int v378; // eax
  unsigned int v379; // ecx
  void *v380; // rbx
  unsigned int v381; // eax
  unsigned int v382; // ecx
  void *v383; // rbx
  HANDLE v384; // rax
  int v385; // [rsp+20h] [rbp-E0h]
  __int64 v386; // [rsp+40h] [rbp-C0h] BYREF
  struct CDrawingContext *v387; // [rsp+48h] [rbp-B8h]
  CVisual *v388; // [rsp+50h] [rbp-B0h]
  void *v389; // [rsp+58h] [rbp-A8h] BYREF
  char v390; // [rsp+60h] [rbp-A0h]
  unsigned int *v391; // [rsp+68h] [rbp-98h]
  void *lpMem; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v393; // [rsp+78h] [rbp-88h] BYREF
  CScopedClipStack *v394; // [rsp+80h] [rbp-80h]
  bool *v395; // [rsp+88h] [rbp-78h]
  struct CVisual *v396; // [rsp+90h] [rbp-70h]
  __int64 v397; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v398[12]; // [rsp+A8h] [rbp-58h]
  float v399; // [rsp+B4h] [rbp-4Ch]
  __int128 v400; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v401; // [rsp+C8h] [rbp-38h]
  __int128 v402; // [rsp+D8h] [rbp-28h]
  __int128 v403; // [rsp+E8h] [rbp-18h]
  __int64 v404; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v405; // [rsp+100h] [rbp+0h]
  __int128 v406; // [rsp+110h] [rbp+10h]
  __int128 v407; // [rsp+120h] [rbp+20h]
  __int64 v408; // [rsp+130h] [rbp+30h]
  float v409; // [rsp+138h] [rbp+38h]
  __int64 v410; // [rsp+13Ch] [rbp+3Ch]
  int v411; // [rsp+144h] [rbp+44h]
  unsigned __int8 v412; // [rsp+148h] [rbp+48h]
  void *v413[2]; // [rsp+150h] [rbp+50h] BYREF
  struct CVisualTree *v414[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v415[20]; // [rsp+170h] [rbp+70h] BYREF
  int v416; // [rsp+184h] [rbp+84h]
  __int64 v417[2]; // [rsp+188h] [rbp+88h] BYREF
  __m128 v418; // [rsp+198h] [rbp+98h] BYREF
  __int64 v419; // [rsp+1A8h] [rbp+A8h]
  _BYTE v420[72]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v421; // [rsp+1F8h] [rbp+F8h]
  char v422; // [rsp+1FCh] [rbp+FCh]
  _BYTE v423[16]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v424; // [rsp+210h] [rbp+110h] BYREF
  __int64 v425; // [rsp+220h] [rbp+120h]
  void *retaddr; // [rsp+2C8h] [rbp+1C8h]

  v3 = 0;
  v4 = 0;
  v414[0] = a2;
  v387 = (struct CDrawingContext *)this;
  v410 = 21887LL;
  v395 = a3;
  v6 = 0LL;
  v397 = 0LL;
  *(_QWORD *)v398 = 1065353216LL;
  *(_DWORD *)&v398[8] = 0;
  v399 = 1.0;
  v404 = 0LL;
  v411 = 0;
  v412 = 0;
  v405 = 0LL;
  v406 = 0LL;
  v407 = 0LL;
  v408 = 0LL;
  v409 = 1.0;
  v388 = 0LL;
  if ( *((_BYTE *)this + 6048) )
  {
    if ( *((_BYTE *)this + 6049) )
      v6 = this[417];
    else
      v6 = (CVisual *)*((_QWORD *)this[757] + 3);
    v388 = v6;
  }
  v7 = (**((_DWORD **)v6 + 28) & 0x10000) == 0;
  v396 = this[418];
  v391 = (unsigned int *)(this + 412);
  if ( !v7 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)v6);
    v9 = *(char **)ProjectedShadowReceivers;
    v10 = *(char **)(ProjectedShadowReceivers + 8);
    v389 = v9;
    for ( v413[0] = v10; v9 != v10; v389 = v9 )
    {
      v11 = *(CProjectedShadowReceiver **)v9;
      v12 = *(CProjectedShadowScene ***)(*(_QWORD *)v9 + 64LL);
      v13 = *(CProjectedShadowScene ***)(*(_QWORD *)v9 + 72LL);
      if ( v12 != v13 )
      {
        do
        {
          if ( !CCommonRegistryData::m_fDisableProjectedShadows )
          {
            v14 = *v12;
            if ( !CProjectedShadowScene::IsEmptyProjection(*v12) && !CProjectedShadowReceiver::IsEmptyMaskContent(v11) )
            {
              v15 = (__int64 ***)*((_QWORD *)v14 + 7);
              for ( i = *v15; i != (__int64 **)v15; i = (__int64 **)*i )
              {
                if ( !CProjectedShadowCaster::IsEmptyMaskContent((CProjectedShadowCaster *)i[2]) )
                {
                  v17 = 1;
                  goto LABEL_20;
                }
              }
            }
          }
          ++v12;
        }
        while ( v12 != v13 );
        v9 = (char *)v389;
        v10 = (char *)v413[0];
      }
      v9 += 8;
    }
  }
  v17 = 0;
LABEL_20:
  v18 = v391;
  v19 = 0xFFFFFFFFLL;
  lpMem = 0LL;
  v20 = 64LL;
  v21 = v391[1];
  v22 = *v391;
  if ( *v391 != v21 )
  {
LABEL_26:
    *(_BYTE *)(v22 + *((_QWORD *)v18 + 2)) = v17;
    v27 = v18[6];
    v28 = *v18 + 1;
    *v18 = v28;
    if ( v27 <= v28 )
      v27 = v28;
    v18[6] = v27;
    goto LABEL_29;
  }
  v23 = 2LL * v21;
  if ( v23 <= 0xFFFFFFFF )
  {
    if ( (unsigned int)v23 <= 0x40 )
      LODWORD(v23) = 64;
    v24 = HrMalloc(1uLL, (unsigned int)v23, &lpMem);
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x53u, 0LL);
      v34 = lpMem;
      if ( lpMem )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v34);
      }
      goto LABEL_29;
    }
    v26 = lpMem;
    memcpy_0(lpMem, *((const void **)v391 + 2), *v391);
    operator delete(*((void **)v391 + 2));
    v22 = *v391;
    *((_QWORD *)v391 + 2) = v26;
    v18[1] = v23;
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_29:
  v29 = v388;
  if ( (*((_BYTE *)v388 + 94) & 8) != 0 || *((char *)v388 + 88) >= 0 )
    goto LABEL_657;
  if ( v414[0] )
  {
    if ( !*((_BYTE *)v414[0] + 32) )
    {
      v30 = *((_QWORD *)v388 + 2);
      if ( v30 )
      {
        v20 = *((_QWORD *)v388 + 28);
        if ( *(int *)v20 < 0 )
        {
          v31 = *(unsigned int *)(v20 + 4);
          v32 = (_BYTE *)(v20 + 8);
          for ( j = 0; j < (unsigned int)v31; ++v32 )
          {
            if ( *v32 == 1 )
              break;
            ++j;
          }
          v19 = j >= (unsigned int)v31 ? 0LL : v20 + v31 + 15 + 8LL * j - (((_BYTE)v31 + 15) & 7);
          v20 = *(_QWORD *)v19;
          if ( *(_QWORD *)v19 )
          {
            v36 = *(__int64 **)v20;
            if ( *(_QWORD *)v20 != v20 )
            {
              while ( 1 )
              {
                v37 = v36 - 28;
                if ( (struct CVisualTree *)v36[4] == v414[0] )
                  break;
                v36 = (__int64 *)*v36;
                if ( v36 == (__int64 *)v20 )
                  goto LABEL_53;
              }
              if ( v36 != (__int64 *)224 && (v37[2] & 4) != 0 && v37[27] == *(_QWORD *)(v30 + 384) )
              {
LABEL_657:
                v376 = *v18;
                if ( *v18 )
                  *v18 = --v376;
                v120 = v18[1];
                v389 = 0LL;
                if ( v376 == v120 )
                {
                  v377 = 2LL * v120;
                  if ( v377 > 0xFFFFFFFF )
                    goto LABEL_671;
                  if ( (unsigned int)v377 <= 0x40 )
                    LODWORD(v377) = 64;
                  v378 = HrMalloc(1uLL, (unsigned int)v377, &v389);
                  if ( v378 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v379, 0LL, 0, v378, 0x53u, 0LL);
                    v383 = v389;
                    if ( v389 )
                    {
                      v384 = GetProcessHeap();
                      HeapFree(v384, 0, v383);
                      v63 = v387;
                      *v395 = 0;
                      goto LABEL_421;
                    }
                    goto LABEL_668;
                  }
                  v380 = v389;
                  memcpy_0(v389, *((const void **)v18 + 2), *v18);
                  operator delete(*((void **)v18 + 2));
                  v376 = *v18;
                  *((_QWORD *)v18 + 2) = v380;
                  v18[1] = v377;
                }
                *(_BYTE *)(v376 + *((_QWORD *)v18 + 2)) = 0;
                v381 = v18[6];
                v382 = *v18 + 1;
                *v18 = v382;
                if ( v381 <= v382 )
                  v381 = v382;
                v18[6] = v381;
LABEL_668:
                v63 = v387;
                *v395 = 0;
                goto LABEL_421;
              }
            }
          }
        }
      }
    }
  }
LABEL_53:
  if ( (unsigned int)((__int64)(*((_QWORD *)v388 + 36) - *((_QWORD *)v388 + 35)) >> 4)
    || (unsigned int)((__int64)(*((_QWORD *)v388 + 39) - *((_QWORD *)v388 + 38)) >> 4) )
  {
    v38 = v413;
    v413[0] = (void *)0x100000000LL;
    v389 = v413;
    while ( 1 )
    {
      v39 = *(_DWORD *)v38;
      v40 = 0;
      v393 = 0;
      LODWORD(v394) = v39;
      if ( (unsigned int)CVisual::GetLightsCount(v29, v39) )
        break;
LABEL_90:
      v38 = (void **)((char *)v389 + 4);
      v389 = v38;
      if ( v38 == &v413[1] )
        goto LABEL_91;
    }
    while ( 1 )
    {
      if ( v39 )
        v42 = *((_QWORD *)v29 + 39) - *((_QWORD *)v29 + 38);
      else
        v42 = *((_QWORD *)v29 + 36) - *((_QWORD *)v29 + 35);
      if ( v40 < (unsigned int)(v42 >> 4) )
      {
        if ( v39 )
          v44 = *((_QWORD *)v29 + 38);
        else
          v44 = *((_QWORD *)v29 + 35);
        v43 = *(_BYTE **)(v44 + 16LL * v40);
      }
      else
      {
        v43 = 0LL;
      }
      if ( !v43[162]
        || !(*(unsigned __int8 (__fastcall **)(_BYTE *, __int64, CVisual *))(*(_QWORD *)v43 + 248LL))(v43, v41, v29) )
      {
        goto LABEL_89;
      }
      v45 = (unsigned int *)((char *)v387 + 448);
      LODWORD(v417[0]) = 9;
      v417[1] = (__int64)v29;
      lpMem = 0LL;
      v46 = *((_DWORD *)v387 + 113);
      v47 = *((unsigned int *)v387 + 112);
      if ( (_DWORD)v47 != v46 )
        goto LABEL_75;
      v48 = 2LL * v46;
      if ( v48 > 0xFFFFFFFF )
      {
        v51 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        v4 = -2147024362;
LABEL_86:
        MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v51, 0x239Fu, 0LL);
        v39 = (int)v394;
LABEL_87:
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v4, 0x1DCCu, 0LL);
          v63 = v387;
          v18 = v391;
          goto LABEL_421;
        }
        goto LABEL_88;
      }
      if ( (unsigned int)v48 <= 0x40 )
        LODWORD(v48) = 64;
      v49 = HrMalloc(0x10uLL, (unsigned int)v48, &lpMem);
      v51 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x53u, 0LL);
      }
      else
      {
        v52 = 16LL * *v45;
        if ( v52 <= 0xFFFFFFFF )
        {
          v53 = lpMem;
          memcpy_0(lpMem, *((const void **)v387 + 58), (unsigned int)v52);
          operator delete(*((void **)v387 + 58));
          v47 = *v45;
          *((_QWORD *)v387 + 58) = v53;
          v45[1] = v48;
LABEL_75:
          v51 = 0;
          *(_OWORD *)(*((_QWORD *)v45 + 2) + 16 * v47) = *(_OWORD *)v417;
          v54 = v45[6];
          v55 = *v45 + 1;
          *v45 = v55;
          if ( v54 <= v55 )
            v54 = v55;
          v45[6] = v54;
          goto LABEL_78;
        }
        v51 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, -2147024362, 0x55u, 0LL);
      }
      v60 = lpMem;
      if ( lpMem )
      {
        v61 = GetProcessHeap();
        HeapFree(v61, 0, v60);
      }
LABEL_78:
      v4 = v51;
      if ( v51 < 0 )
        goto LABEL_86;
      v39 = (int)v394;
      v56 = (char *)v387 + 672;
      *(_QWORD *)v415 = v43;
      *(_DWORD *)&v415[8] = (_DWORD)v394;
      v57 = *((unsigned int *)v387 + 174);
      v58 = v57 + 1;
      if ( (int)v57 + 1 >= (unsigned int)v57 )
      {
        v4 = 0;
        if ( v58 <= *((_DWORD *)v387 + 173) )
        {
          *(_OWORD *)(*(_QWORD *)v56 + 16 * v57) = *(_OWORD *)v415;
          *((_DWORD *)v56 + 6) = v58;
LABEL_108:
          (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v43 + 8LL))(v43);
          goto LABEL_109;
        }
        v86 = DynArrayImpl<0>::AddMultipleAndSet(v56, 16LL, 1LL, v415);
        v4 = v86;
        if ( v86 >= 0 )
          goto LABEL_108;
        MilInstrumentationCheckHR_MaybeFailFast(v87, 0LL, 0, v86, 0xC3u, 0LL);
      }
      else
      {
        v4 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v56, 0LL, 0, -2147024362, 0xB8u, 0LL);
      }
      MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v4, 0x20u, 0LL);
LABEL_109:
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0, v4, 0x23A2u, 0LL);
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)v45, 0LL);
        goto LABEL_87;
      }
LABEL_88:
      v40 = v393;
LABEL_89:
      v393 = ++v40;
      if ( v40 >= (unsigned int)CVisual::GetLightsCount(v29, v39) )
        goto LABEL_90;
    }
  }
LABEL_91:
  v63 = v387;
  v64 = (char *)v387 + 912;
  v65 = *(_DWORD **)(*((_QWORD *)v387 + 114) + 8LL * (unsigned int)(*((_DWORD *)v387 + 234) - 1));
  v66 = *(_QWORD *)v29;
  v389 = v65;
  v67 = (_DWORD *)(*(__int64 (__fastcall **)(CVisual *, __int64, __int64))(v66 + 160))(v29, v19, v20);
  v69 = v67;
  if ( !v67 || v67 == v65 )
    goto LABEL_124;
  v70 = *((_DWORD *)v387 + 113);
  v71 = *((unsigned int *)v387 + 112);
  v389 = v67;
  *(_DWORD *)v415 = 10;
  *(_QWORD *)&v415[8] = v29;
  v413[0] = 0LL;
  if ( (_DWORD)v71 != v70 )
    goto LABEL_100;
  v72 = 2LL * v70;
  if ( v72 > 0xFFFFFFFF )
  {
    v75 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_673:
    ModuleFailFastForHRESULT((unsigned int)v75, retaddr, v68);
  }
  if ( (unsigned int)v72 <= 0x40 )
    LODWORD(v72) = 64;
  v73 = HrMalloc(0x10uLL, (unsigned int)v72, v413);
  v75 = v73;
  if ( v73 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x53u, 0LL);
  }
  else
  {
    v76 = 16LL * *((unsigned int *)v387 + 112);
    if ( v76 <= 0xFFFFFFFF )
    {
      v77 = v413[0];
      memcpy_0(v413[0], *((const void **)v387 + 58), (unsigned int)v76);
      operator delete(*((void **)v387 + 58));
      v78 = v387;
      v71 = *((unsigned int *)v387 + 112);
      *((_DWORD *)v387 + 113) = v72;
      v63 = v78;
      *((_QWORD *)v78 + 58) = v77;
LABEL_100:
      v75 = 0;
      *(_OWORD *)(*((_QWORD *)v63 + 58) + 16 * v71) = *(_OWORD *)v415;
      v79 = *((_DWORD *)v63 + 118);
      v80 = *((_DWORD *)v63 + 112) + 1;
      *((_DWORD *)v63 + 112) = v80;
      if ( v79 <= v80 )
        v79 = v80;
      *((_DWORD *)v63 + 118) = v79;
      goto LABEL_103;
    }
    v75 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v387, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v88 = v413[0];
  if ( v413[0] )
  {
    v89 = GetProcessHeap();
    HeapFree(v89, 0, v88);
  }
LABEL_103:
  if ( v75 < 0 )
    goto LABEL_673;
  v81 = *((unsigned int *)v64 + 6);
  v413[0] = v69;
  v82 = v81 + 1;
  if ( (int)v81 + 1 < (unsigned int)v81 )
  {
    v83 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v80, 0LL, 0, -2147024362, 0xB8u, 0LL);
    goto LABEL_675;
  }
  if ( v82 > *((_DWORD *)v64 + 5) )
  {
    v95 = DynArrayImpl<0>::AddMultipleAndSet(v64, 8LL, 1LL, v413);
    v83 = v95;
    if ( v95 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v96, 0LL, 0, v95, 0xC3u, 0LL);
LABEL_675:
      ModuleFailFastForHRESULT(v83, retaddr, v84);
    }
  }
  else
  {
    *(void **)(*(_QWORD *)v64 + 8 * v81) = v413[0];
    *((_DWORD *)v64 + 6) = v82;
  }
  v63 = v387;
  if ( g_HeatMaps_TargetProcessId && g_HeatMaps_TargetProcessId == v69[32] )
    CDrawingContext::SetHeatMapForCurrentNode(v387);
LABEL_124:
  v90 = v395;
  *v395 = 1;
  if ( (*((_BYTE *)v29 + 93) & 0x60) != 0 )
  {
    CVisual::GetHeatMapProperties(v29, v420);
    v91 = *((_QWORD *)v63 + 4) + 1104LL;
    v92 = (*((_BYTE *)v29 + 93) & 0x20) != 0;
    *(_OWORD *)&v415[4] = *(_OWORD *)v420;
    *(_DWORD *)v415 = 2 - v92;
    v416 = *(_DWORD *)&v420[16];
    v93 = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push(v91, v415);
    v4 = v93;
    if ( v93 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0, v93, 0x1DF5u, 0LL);
LABEL_127:
      v18 = (unsigned int *)((char *)v63 + 3296);
      goto LABEL_421;
    }
  }
  v97 = *((_DWORD *)v29 + 24);
  if ( (_BYTE)v97 )
  {
    *(_DWORD *)v420 = (unsigned __int8)v97;
    *(_DWORD *)&v420[16] = (v97 >> 8) & 3;
    v98 = v97;
    *(_DWORD *)&v420[12] = (v97 >> 14) & 0x1F;
    v99 = (_DWORD *)(*((_QWORD *)v63 + 4) + 1104LL);
    *(_DWORD *)&v420[4] = (int)(v98 << 18) >> 28;
    *(_DWORD *)&v420[8] = *((_DWORD *)v29 + 47);
    if ( *v99 && *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() == 2 )
      *(_DWORD *)&v420[20] = 0;
    else
      *(_DWORD *)&v420[20] = *((_DWORD *)v29 + 48);
    *(_QWORD *)&v420[24] = *(_QWORD *)((char *)v29 + 196);
    v100 = CDrawingContext::PushRenderOptionsInternal(v63, v29, (const struct MilRenderOptions *)v420, 1);
    v4 = v100;
    if ( v100 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v101, 0LL, 0, v100, 0x1E07u, 0LL);
      goto LABEL_127;
    }
  }
  v102 = (struct CDrawingContext *)((char *)v63 + 480);
  lpMem = (char *)v63 + 480;
  Bounds = CVisual::GetBounds(v29, *((_QWORD *)v63 + 757));
  CMILMatrix::Transform3DBoundsHelper<1>(v104, Bounds, &v418);
  if ( v418.m128_f32[2] > v418.m128_f32[0] && v418.m128_f32[3] > v418.m128_f32[1] )
  {
    v105 = *((_DWORD *)v29 + 22);
    if ( (v105 & 0x400) != 0 )
      v106 = FLOAT_0_5;
    else
      v106 = 0.0;
    if ( (v105 & 0x800) != 0 )
      v106 = v106 + 0.5;
    if ( v106 != 0.0 )
    {
      v418.m128_f32[3] = v418.m128_f32[3] + v106;
      v418.m128_f32[0] = v418.m128_f32[0] - v106;
      v418.m128_f32[1] = v418.m128_f32[1] - v106;
      v418.m128_f32[2] = v418.m128_f32[2] + v106;
      *(float *)&v419 = *(float *)&v419 + 0.0;
      *((float *)&v419 + 1) = *((float *)&v419 + 1) + 0.0;
    }
  }
  v394 = (struct CDrawingContext *)((char *)v63 + 1008);
  CScopedClipStack::GetClipBoundsWorld((char *)v63 + 1008, v417);
  *(_OWORD *)v420 = *(_OWORD *)v417;
  *(_QWORD *)&v420[16] = v419;
  TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    &v418,
    v420);
  v107 = v418.m128_f32[0];
  v108 = v418.m128_f32[2];
  v109 = v418.m128_f32[1];
  v110 = v418.m128_f32[3];
  *(__m128 *)v417 = v418;
  if ( v418.m128_f32[2] <= v418.m128_f32[0] || v418.m128_f32[3] <= v418.m128_f32[1] )
  {
    v18 = v391;
    v366 = *v391;
    if ( *v391 )
      *v391 = --v366;
    v367 = v18[1];
    v389 = 0LL;
    if ( v366 == v367 )
    {
      v368 = 2LL * v367;
      if ( v368 > 0xFFFFFFFF )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v367, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        v63 = v387;
        *v90 = 0;
        goto LABEL_421;
      }
      if ( (unsigned int)v368 <= 0x40 )
        LODWORD(v368) = 64;
      v369 = HrMalloc(1uLL, (unsigned int)v368, &v389);
      if ( v369 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v370, 0LL, 0, v369, 0x53u, 0LL);
        v374 = v389;
        if ( v389 )
        {
          v375 = GetProcessHeap();
          HeapFree(v375, 0, v374);
          v63 = v387;
          *v90 = 0;
          goto LABEL_421;
        }
        goto LABEL_652;
      }
      v371 = v389;
      memcpy_0(v389, *((const void **)v18 + 2), *v18);
      operator delete(*((void **)v18 + 2));
      v366 = *v18;
      *((_QWORD *)v18 + 2) = v371;
      v18[1] = v368;
    }
    *(_BYTE *)(v366 + *((_QWORD *)v18 + 2)) = 0;
    v372 = v18[6];
    v373 = *v18 + 1;
    *v18 = v373;
    if ( v372 <= v373 )
      v372 = v373;
    v18[6] = v372;
LABEL_652:
    *v90 = 0;
    goto LABEL_653;
  }
  v111 = v414[0];
  if ( !*((_BYTE *)v63 + 6347) )
    goto LABEL_213;
  if ( *((_BYTE *)v414[0] + 32) )
  {
    v112 = (char *)v29 + 328;
  }
  else
  {
    v127 = *((_QWORD *)v29 + 28);
    if ( *(int *)v127 >= 0 )
      goto LABEL_186;
    v128 = *(unsigned int *)(v127 + 4);
    v129 = (_BYTE *)(v127 + 8);
    for ( k = 0; k < (unsigned int)v128; ++v129 )
    {
      if ( *v129 == 1 )
        break;
      ++k;
    }
    v131 = k >= (unsigned int)v128 ? 0LL : (_QWORD **)(v128 + 15 + v127 + 8LL * k - (((_BYTE)v128 + 15) & 7));
    v132 = *v131;
    if ( !*v131 )
      goto LABEL_186;
    v133 = (_QWORD *)*v132;
    if ( (_QWORD *)*v132 == v132 )
      goto LABEL_186;
    while ( 1 )
    {
      v112 = (char *)(v133 - 28);
      if ( (struct CVisualTree *)v133[4] == v414[0] )
        break;
      v133 = (_QWORD *)*v133;
      if ( v133 == v132 )
        goto LABEL_186;
    }
  }
  if ( !v112 )
    goto LABEL_186;
  v113 = *((_QWORD *)v112 + 4);
  if ( !v113 )
  {
    v113 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v112 + 3) + 368LL))(*((_QWORD *)v112 + 3));
    *((_QWORD *)v112 + 4) = v113;
    if ( !v113 )
      goto LABEL_186;
  }
  v114 = *(unsigned int *)(v113 + 12);
  if ( v108 > v107 && v110 > v109 )
  {
    v115 = *(_QWORD *)(*((_QWORD *)v63 + 784) + 400LL);
    v413[0] = (void *)__PAIR64__(LODWORD(v109), LODWORD(v107));
    v413[1] = (void *)__PAIR64__(LODWORD(v110), LODWORD(v108));
    if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)v115 + 56LL))(v115, v413, v114) )
      goto LABEL_186;
  }
  if ( !g_DisplayManager || (v116 = *((_DWORD *)g_DisplayManager + 18), v117 = 0, !v116) )
  {
LABEL_163:
    v18 = v391;
    v119 = *v391;
    if ( *v391 )
      *v391 = --v119;
    v120 = v18[1];
    v413[0] = 0LL;
    if ( v119 != v120 )
      goto LABEL_171;
    v121 = 2LL * v120;
    if ( v121 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v121 <= 0x40 )
        LODWORD(v121) = 64;
      v122 = HrMalloc(1uLL, (unsigned int)v121, v413);
      if ( v122 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v123, 0LL, 0, v122, 0x53u, 0LL);
        v141 = v413[0];
        if ( v413[0] )
        {
          v142 = GetProcessHeap();
          HeapFree(v142, 0, v141);
          v63 = v387;
          *v395 = 0;
          goto LABEL_421;
        }
        goto LABEL_174;
      }
      v124 = v413[0];
      memcpy_0(v413[0], *((const void **)v18 + 2), *v18);
      operator delete(*((void **)v18 + 2));
      v119 = *v18;
      *((_QWORD *)v18 + 2) = v124;
      v18[1] = v121;
LABEL_171:
      *(_BYTE *)(v119 + *((_QWORD *)v18 + 2)) = 0;
      v125 = v18[6];
      v126 = *v18 + 1;
      *v18 = v126;
      if ( v125 <= v126 )
        v125 = v126;
      v18[6] = v125;
LABEL_174:
      v63 = v387;
      *v395 = 0;
      goto LABEL_421;
    }
LABEL_671:
    MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    v63 = v387;
    *v395 = 0;
    goto LABEL_421;
  }
  while ( 1 )
  {
    v118 = *(_BYTE **)(*((_QWORD *)g_DisplayManager + 6) + 8LL * v117);
    if ( v118[320] || v118[319] || v118[312] )
      break;
    if ( ++v117 >= v116 )
      goto LABEL_163;
  }
  if ( !*((_QWORD *)v63 + 787) )
    *((_QWORD *)v63 + 787) = v29;
LABEL_186:
  if ( !*((_BYTE *)v63 + 6347) )
    goto LABEL_213;
  if ( *((_BYTE *)v111 + 32) )
  {
    v134 = (char *)v29 + 328;
  }
  else
  {
    v143 = *((_QWORD *)v29 + 28);
    if ( *(int *)v143 >= 0 )
      goto LABEL_213;
    v144 = *(unsigned int *)(v143 + 4);
    v145 = (_BYTE *)(v143 + 8);
    for ( m = 0; m < (unsigned int)v144; ++v145 )
    {
      if ( *v145 == 1 )
        break;
      ++m;
    }
    v147 = m >= (unsigned int)v144 ? 0LL : (_QWORD **)(v143 + v144 + 15 + 8LL * m - (((_BYTE)v144 + 15) & 7));
    v148 = *v147;
    if ( !*v147 )
      goto LABEL_213;
    v149 = (_QWORD *)*v148;
    if ( (_QWORD *)*v148 == v148 )
      goto LABEL_213;
    while ( 1 )
    {
      v134 = (char *)(v149 - 28);
      if ( (struct CVisualTree *)v149[4] == v111 )
        break;
      v149 = (_QWORD *)*v149;
      if ( v149 == v148 )
        goto LABEL_213;
    }
  }
  if ( v134 )
  {
    v135 = (_DWORD *)*((_QWORD *)v134 + 4);
    if ( v135
      || (v136 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v134 + 3) + 368LL))(*((_QWORD *)v134 + 3)),
          *((_QWORD *)v134 + 4) = v136,
          (v135 = (_DWORD *)v136) != 0LL) )
    {
      v137 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v135 + 24LL))(v135);
      v138 = v387;
      *((_DWORD *)v387 + 1572) = v137;
      v139 = *((_DWORD *)v138 + 1534);
      if ( v137 >= v139 )
      {
        v18 = v391;
        if ( v135[3] >= v139 )
        {
          CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v391);
          LOBYTE(v386) = 0;
          CWatermarkStack<bool,64,2,10>::Push(v140, &v386);
          v63 = v387;
          *v395 = 0;
          goto LABEL_421;
        }
LABEL_653:
        v63 = v387;
        goto LABEL_421;
      }
    }
    v63 = v387;
  }
LABEL_213:
  CDrawingContext::GetEffects(v63, v29, (struct CVisual **)v111, (struct CDrawingContext::NodeEffects *)&v397);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v398) & _xmm) < 0.0000011920929
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v399) & _xmm) < 0.0000011920929 )
  {
    if ( !g_DisplayManager || (v151 = 0, !*((_DWORD *)g_DisplayManager + 18)) )
    {
LABEL_451:
      *v395 = 0;
      goto LABEL_420;
    }
    v152 = *((_QWORD *)g_DisplayManager + 6);
    while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v152 + 8LL * v151)) )
    {
      v151 = v153 + 1;
      if ( v151 >= v154 )
      {
        *v395 = 0;
        goto LABEL_420;
      }
    }
    CVisual::ClearAllMoveTransformsInSubtree(v29);
    if ( !*((_QWORD *)v63 + 787) )
      *((_QWORD *)v63 + 787) = v29;
  }
  v155 = (char *)&v404 + 4;
  v156 = v414[0];
  v157 = -2003292412;
  v158 = (CVisual *)*((_QWORD *)v63 + 417);
  if ( !(_BYTE)v411 )
    v155 = 0LL;
  v413[0] = v155;
  if ( *((_BYTE *)v414[0] + 32) )
  {
    v159 = (_QWORD *)((char *)v158 + 328);
  }
  else
  {
    v168 = *((_QWORD *)v158 + 28);
    if ( *(int *)v168 >= 0 )
      goto LABEL_286;
    v169 = *(unsigned int *)(v168 + 4);
    v170 = (_BYTE *)(v168 + 8);
    for ( n = 0; n < (unsigned int)v169; ++v170 )
    {
      if ( *v170 == 1 )
        break;
      ++n;
    }
    v172 = n >= (unsigned int)v169 ? 0LL : (_QWORD **)(v168 + v169 + 15 + 8LL * n - (((_BYTE)v169 + 15) & 7));
    v150 = *v172;
    if ( !*v172 )
      goto LABEL_286;
    v173 = (_QWORD *)*v150;
    if ( (_QWORD *)*v150 == v150 )
      goto LABEL_286;
    while ( 1 )
    {
      v159 = v173 - 28;
      if ( (struct CVisualTree *)v173[4] == v414[0] )
        break;
      v173 = (_QWORD *)*v173;
      if ( v173 == v150 )
        goto LABEL_286;
    }
  }
  if ( !v159 )
  {
LABEL_286:
    v185 = 0;
    goto LABEL_287;
  }
  v160 = (_DWORD *)*((_QWORD *)v158 + 28);
  v161 = 0;
  v157 = 0;
  v162 = 0LL;
  v163 = *(_QWORD *)(*((_QWORD *)v158 + 2) + 384LL);
  if ( (*v160 & 0x800000) != 0 )
  {
    v164 = (unsigned int)v160[1];
    v165 = v160 + 2;
    for ( ii = 0; ii < (unsigned int)v164; ++v165 )
    {
      if ( *v165 == 9 )
        break;
      ++ii;
    }
    v167 = ii >= (unsigned int)v164 ? 0LL : (_QWORD **)((char *)v160 + v164 + 8LL * ii - (((_BYTE)v164 + 15) & 7) + 15);
    v150 = *v167;
    if ( *v167 )
    {
      v174 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v150 + 192LL))(*v150);
      if ( !v174 || (v159[2] & 4) != 0 && v159[27] == v163 )
      {
        v156 = v414[0];
      }
      else
      {
        v161 = 1;
        TreeData = CVisual::FindTreeData(v174, v414[0]);
        v156 = v414[0];
        v162 = TreeData;
        if ( TreeData )
          goto LABEL_271;
      }
    }
  }
  if ( v158 != *((CVisual **)v156 + 3) )
  {
    v162 = 0LL;
    v176 = *((_QWORD *)v158 + 10);
    if ( *((_BYTE *)v156 + 32) )
    {
      v162 = (struct CTreeData *)(v176 + 328);
    }
    else
    {
      v177 = *(_QWORD *)(v176 + 224);
      if ( *(int *)v177 < 0 )
      {
        v150 = (_QWORD *)*(unsigned int *)(v177 + 4);
        v178 = (_BYTE *)(v177 + 8);
        for ( jj = 0LL; (unsigned int)jj < (unsigned int)v150; ++v178 )
        {
          if ( *v178 == 1 )
            break;
          jj = (unsigned int)(jj + 1);
        }
        if ( (unsigned int)jj >= (unsigned int)v150 )
        {
          v180 = 0LL;
        }
        else
        {
          v150 = (_QWORD *)((char *)v150 + 15);
          v180 = (_QWORD **)((char *)v150 + v177 + 8 * jj - ((unsigned __int8)v150 & 7));
        }
        v181 = *v180;
        if ( v181 )
        {
          v182 = (_QWORD *)*v181;
          if ( (_QWORD *)*v181 != v181 )
          {
            while ( 1 )
            {
              LODWORD(v150) = (_DWORD)v182 - 224;
              if ( (struct CVisualTree *)v182[4] == v156 )
                break;
              v182 = (_QWORD *)*v182;
              if ( v182 == v181 )
                goto LABEL_270;
            }
            v162 = (struct CTreeData *)(v182 - 28);
          }
        }
      }
    }
  }
LABEL_270:
  if ( !v162 )
  {
    v183 = 1LL;
    goto LABEL_273;
  }
LABEL_271:
  v183 = *((_QWORD *)v162 + 15);
LABEL_273:
  if ( v159[15] < v183 )
  {
    updated = CVisual::UpdateWorldTransform(v158, (CVisual **)v156, (struct CTreeData *)v159, v161, v162);
    v157 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v150, 0LL, 0, updated, 0x80Bu, 0LL);
  }
  if ( v157 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v150, 0LL, 0, v157, 0x768u, 0LL);
    v156 = v414[0];
    v102 = (CMatrixStack *)lpMem;
    v63 = v387;
    goto LABEL_286;
  }
  if ( !v159[15] )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v150, 0LL, 0, -2003292412, 0x65u, 0LL);
    v157 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(v187, 0LL, 0, -2003292412, 0x76Fu, 0LL);
    v4 = -2003292412;
LABEL_282:
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v150, 0LL, 0, v157, 0x1E86u, 0LL);
    goto LABEL_283;
  }
  v150 = v413[0];
  v400 = *(_OWORD *)(v159 + 5);
  v401 = *(_OWORD *)(v159 + 7);
  v402 = *(_OWORD *)(v159 + 9);
  v403 = *(_OWORD *)(v159 + 11);
  LODWORD(v404) = *((_DWORD *)v159 + 26);
  v185 = (v159[2] & 2) != 0;
  if ( v413[0] )
  {
    v186 = v159[14];
    *(_OWORD *)v413[0] = *(_OWORD *)v186;
    *((_OWORD *)v150 + 1) = *(_OWORD *)(v186 + 16);
    *((_OWORD *)v150 + 2) = *(_OWORD *)(v186 + 32);
    *((_OWORD *)v150 + 3) = *(_OWORD *)(v186 + 48);
    *((_DWORD *)v150 + 16) = *(_DWORD *)(v186 + 64);
  }
  v102 = (CMatrixStack *)lpMem;
  v157 = 0;
  v63 = v387;
  v156 = v414[0];
LABEL_287:
  v4 = v157;
  if ( v157 < 0 )
    goto LABEL_282;
  v29 = v388;
  if ( v185 || *((CVisual **)v156 + 3) == v388 )
  {
    if ( !*((_BYTE *)v63 + 6132) )
      CMILMatrix::Multiply((CMILMatrix *)&v400, (struct CDrawingContext *)((char *)v63 + 6064));
    v188 = CDrawingContext::PushTransformInternal(v63, v388, (const struct CMILMatrix *)&v400, 0, 1);
    v4 = v188;
    if ( v188 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v189, 0LL, 0, v188, 0x1E98u, 0LL);
      goto LABEL_420;
    }
  }
  else if ( !*((_BYTE *)v63 + 6132) )
  {
    CMatrixStack::Top(v102, (struct CMILMatrix *)&v400);
  }
  if ( (_BYTE)v411 && !*((_BYTE *)v63 + 6132) )
    CMILMatrix::Multiply((CMILMatrix *)((char *)&v404 + 4), (struct CDrawingContext *)((char *)v63 + 6064));
  v190 = v388;
  v191 = 0;
  v192 = 0;
  if ( *((_QWORD *)v388 + 31) )
  {
    if ( SBYTE1(v410) >> 6 )
    {
      v193 = SBYTE1(v410) >> 6 == 1;
    }
    else
    {
      v193 = 0;
      v194 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v405 + 1) - 0.0)) & _xmm);
      if ( v194 < 0.000081380211 )
      {
        v195 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v406 + 1) - 0.0)) & _xmm);
        if ( v195 < 0.000081380211 )
        {
          v196 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v408 + 1) - 0.0)) & _xmm);
          if ( v196 < 0.000081380211 )
            goto LABEL_312;
        }
        if ( v194 < 0.000081380211 )
        {
          v197 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v406 + 1) - 0.0)) & _xmm);
          if ( v197 < 0.000081380211 )
          {
            v198 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v406 + 3) - 0.0)) & _xmm);
            if ( v198 < 0.000081380211 )
            {
              v199 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v407 - 0.0)) & _xmm);
              if ( v199 < 0.000081380211 )
              {
                v200 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v407 + 1) - 0.0)) & _xmm);
                if ( v200 < 0.000081380211
                  || (v201 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v407 + 1) - 1.0)) & _xmm),
                      v201 < 0.000081380211) )
                {
                  v202 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v407 + 2) - 0.0)) & _xmm);
                  if ( v202 < 0.000081380211 )
                  {
                    v203 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v408 + 1) - 0.0)) & _xmm);
                    if ( v203 < 0.000081380211 )
                    {
LABEL_312:
                      v204 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v405 + 2)) & _xmm);
                      v205 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v406 + 2)) & _xmm) * 61440.0)
                           + (float)(v204 * 61440.0);
                      v206 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v409) & _xmm);
                      v207 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v205 + v206) - 1.0)) & _xmm);
                      v193 = v207 < 0.000081380211;
                    }
                  }
                }
              }
            }
          }
        }
      }
      BYTE1(v410) = BYTE1(v410) & 0x3F | ((v193 << 7) - 64);
    }
    if ( v193
      && (v208 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v405 - 0.0)) & _xmm), v208 < 0.000081380211)
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v405 + 3) - 0.0)) & _xmm) < 0.000081380211
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v404 + 1) - 0.0)) & _xmm) < 0.000081380211
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v406 - 0.0)) & _xmm) < 0.000081380211 )
    {
      v209 = (CGeometry *)*((_QWORD *)v388 + 31);
      v210 = 0;
      *(_QWORD *)v415 = 0LL;
      v415[8] = 0;
      LOBYTE(v413[1]) = 0;
      v211 = 0LL;
      v413[0] = 0LL;
      ShapeData = CGeometry::GetShapeData(
                    v209,
                    (const struct D2D_SIZE_F *)((char *)v388 + 132),
                    (struct CShapePtr *)v413);
      v214 = ShapeData;
      if ( ShapeData < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v213, 0LL, 0, ShapeData, 0xC37u, 0LL);
      }
      else
      {
        v215 = v413[0];
        v214 = -2003292412;
        if ( v413[0] )
        {
          v216 = (*(__int64 (__fastcall **)(void *, _BYTE *, _QWORD))(*(_QWORD *)v413[0] + 32LL))(v413[0], v420, 0LL);
          v214 = v216;
          if ( v216 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v213, 0LL, 0, v216, 0x10Du, 0LL);
          v215 = v413[0];
        }
        if ( v214 >= 0 )
        {
          v210 = (char)v413[1];
          v217 = 0LL;
          v415[8] = v413[1];
          v211 = v215;
          v413[0] = 0LL;
          LOBYTE(v413[1]) = 0;
          *(_QWORD *)v415 = v215;
LABEL_329:
          v4 = 0;
          if ( v214 != -2003304438 )
            v4 = v214;
          if ( LOBYTE(v413[1]) && v217 )
            (**v217)(v217, 1LL);
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v217, 0LL, 0, v4, 0x1EB3u, 0LL);
            CShapePtr::Release((CShapePtr *)v415);
            v29 = v388;
            v63 = v387;
            v18 = v391;
            goto LABEL_421;
          }
          if ( !v211
            || !(*(unsigned __int8 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v215 + 40LL))(v215, &v393)
            || v393 != 1 )
          {
            goto LABEL_349;
          }
          v218 = (*(__int64 (__fastcall **)(void *, void **, char *))(*(_QWORD *)v211 + 32LL))(
                   v211,
                   v413,
                   (char *)&v404 + 4);
          if ( v218 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v219, 0LL, 0, v218, 0x10Du, 0LL);
          if ( *(float *)&v413[1] <= *(float *)v413 )
            goto LABEL_349;
          if ( *((float *)&v413[1] + 1) <= *((float *)v413 + 1) )
            goto LABEL_349;
          v220 = *((_QWORD *)v387 + 44);
          *(float *)v413 = *(float *)v413 + -0.015625;
          *((float *)v413 + 1) = *((float *)v413 + 1) + -0.015625;
          *(float *)&v413[1] = *(float *)&v413[1] + 0.015625;
          *((float *)&v413[1] + 1) = *((float *)&v413[1] + 1) + 0.015625;
          (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v220 + 56LL))(v220, v415);
          v221 = (float)*(int *)&v415[4];
          v222 = (float)*(int *)&v415[12];
          if ( (float)*(int *)&v415[8] <= (float)*(int *)v415
            || v222 <= v221
            || (float)*(int *)v415 >= *(float *)v413
            && v221 >= *((float *)v413 + 1)
            && *(float *)&v413[1] >= (float)*(int *)&v415[8]
            && *((float *)&v413[1] + 1) >= v222 )
          {
            v191 = 2;
            v192 = 1;
          }
          else
          {
LABEL_349:
            v192 = 0;
          }
          if ( v210 && v211 )
            (**(void (__fastcall ***)(void *, __int64))v211)(v211, 1LL);
          v190 = v388;
          goto LABEL_354;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v213, 0LL, 0, v214, 0xC38u, 0LL);
      }
      v217 = (void (__fastcall ***)(void *, __int64))v413[0];
      v215 = 0LL;
      goto LABEL_329;
    }
  }
LABEL_354:
  if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v190 + 48LL))(v190, 175LL)
    && (**((_DWORD **)v190 + 28) & 0x8000) != 0 )
  {
    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*((_QWORD *)v190 + 28), 17LL);
    v225 = *(unsigned int *)(v224 + 4);
    v226 = Slot >= (unsigned int)v225 ? 0LL : (_QWORD *)(v225 + 15 + v224 + 8LL * Slot - (((_BYTE)v225 + 15) & 7));
    if ( *v226 && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v226 + 232LL))(*v226) )
      v191 = 5;
  }
  if ( HIBYTE(v411) )
    v191 = 5;
  v227 = v414[0];
  v228 = 0LL;
  v229 = *((_BYTE *)v414[0] + 32);
  if ( v229 )
  {
    v228 = (char *)v190 + 328;
  }
  else
  {
    v230 = *((_QWORD *)v190 + 28);
    if ( *(int *)v230 < 0 )
    {
      v231 = *(unsigned int *)(v230 + 4);
      v232 = (_BYTE *)(v230 + 8);
      for ( kk = 0; kk < (unsigned int)v231; ++v232 )
      {
        if ( *v232 == 1 )
          break;
        ++kk;
      }
      v234 = kk >= (unsigned int)v231 ? 0LL : (_QWORD **)(v230 + v231 + 15 + 8LL * kk - (((_BYTE)v231 + 15) & 7));
      v235 = *v234;
      if ( v235 )
      {
        v236 = (_QWORD *)*v235;
        if ( (_QWORD *)*v235 != v235 )
        {
          while ( (struct CVisualTree *)v236[4] != v414[0] )
          {
            v236 = (_QWORD *)*v236;
            if ( v236 == v235 )
              goto LABEL_380;
          }
          v228 = (char *)(v236 - 28);
        }
      }
    }
  }
LABEL_380:
  if ( v190 != *((CVisual **)v414[0] + 3) && !v229 )
  {
    v237 = *(_QWORD *)(*((_QWORD *)v190 + 10) + 224LL);
    if ( *(int *)v237 < 0 )
    {
      v238 = *(unsigned int *)(v237 + 4);
      v239 = (_BYTE *)(v237 + 8);
      for ( mm = 0; mm < (unsigned int)v238; ++v239 )
      {
        if ( *v239 == 1 )
          break;
        ++mm;
      }
      if ( mm >= (unsigned int)v238 )
        v241 = 0LL;
      else
        v241 = (__int64 ****)(v238 + 15 + v237 + 8LL * mm - (((_BYTE)v238 + 15) & 7));
      v242 = *v241;
      if ( *v241 )
      {
        for ( nn = *v242; nn != (__int64 **)v242; nn = (__int64 **)*nn )
        {
          if ( nn[4] == (__int64 *)v414[0] )
            break;
        }
      }
    }
  }
  v244 = v191;
  LOBYTE(v385) = v192;
  v29 = v388;
  v245 = CCpuClippingData::Update(v228 + 136, v414[0], v388, v244, v385);
  v4 = v245;
  if ( v245 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v247, 0LL, 0, v245, 0x872u, 0LL);
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v247, 0LL, 0, v4, 0x1EE7u, 0LL);
    v63 = v387;
    v18 = v391;
    goto LABEL_421;
  }
  v249 = 0LL;
  if ( *((_BYTE *)v227 + 32) )
  {
    v249 = (char *)v388 + 328;
  }
  else
  {
    v248 = *((_QWORD *)v388 + 28);
    if ( *(int *)v248 < 0 )
    {
      v250 = *(unsigned int *)(v248 + 4);
      v251 = (_BYTE *)(v248 + 8);
      for ( i1 = 0; i1 < (unsigned int)v250; ++v251 )
      {
        if ( *v251 == 1 )
          break;
        ++i1;
      }
      v246 = i1 >= (unsigned int)v250
           ? 0LL
           : (CScopedClipStack *)(v248 + v250 + 15 + 8LL * i1 - (((_BYTE)v250 + 15) & 7));
      v248 = *(_QWORD *)v246;
      if ( *(_QWORD *)v246 )
      {
        v253 = *(_QWORD **)v248;
        if ( *(_QWORD *)v248 != v248 )
        {
          while ( (struct CVisualTree *)v253[4] != v227 )
          {
            v253 = (_QWORD *)*v253;
            if ( v253 == (_QWORD *)v248 )
              goto LABEL_411;
          }
          v249 = (char *)(v253 - 28);
        }
      }
    }
  }
LABEL_411:
  v63 = v387;
  Blink = *((_DWORD *)v249 + 34);
  if ( *((_QWORD *)v387 + 45) || *((_QWORD *)v387 + 787) )
    goto LABEL_432;
  switch ( Blink )
  {
    case 5:
      goto LABEL_416;
    case 4:
      if ( !(_BYTE)v411 )
        goto LABEL_433;
LABEL_416:
      v246 = v394;
      if ( *(_BYTE *)(*(_QWORD *)v394 + 80LL * (unsigned int)(*((_DWORD *)v394 + 6) - 1) + 76) )
      {
        v255 = CDrawingContext::PushClippingScope((_DWORD)v387, (_DWORD)v388, 0, 0, (__int64)v415);
        v4 = v255;
        if ( v255 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v256, 0LL, 0, v255, 0x1EF8u, 0LL);
          goto LABEL_420;
        }
        v257 = CDrawingContext::PushGpuClipRectInternal((__int64)v387, (__int64)v388, (float *)v415, 0, 1);
        v4 = v257;
        if ( v257 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v258, 0LL, 0, v257, 0x1EFBu, 0LL);
LABEL_420:
          v18 = (unsigned int *)((char *)v63 + 3296);
          goto LABEL_421;
        }
      }
      break;
    case 3:
      LOBYTE(v248) = 1;
      v260 = CDrawingContext::PushClippingScope(
               (_DWORD)v387,
               (_DWORD)v388,
               v248,
               (unsigned int)&v404 + 4,
               (__int64)v415);
      v4 = v260;
      if ( v260 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v261, 0LL, 0, v260, 0x1F07u, 0LL);
        goto LABEL_420;
      }
      v262 = CDrawingContext::PushGpuClipRectInternal((__int64)v387, (__int64)v388, (float *)v415, 0, 1);
      v4 = v262;
      if ( v262 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v263, 0LL, 0, v262, 0x1F0Au, 0LL);
        goto LABEL_420;
      }
      break;
  }
LABEL_432:
  if ( (_BYTE)v411 )
    goto LABEL_437;
LABEL_433:
  if ( *(_WORD *)((char *)&v411 + 1)
    || __PAIR16__(HIBYTE(v411), 0) != v412
    || *(_QWORD *)&v398[4]
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v399 - 1.0)) & _xmm) >= 0.0000011920929 )
  {
LABEL_437:
    if ( !*(_DWORD *)(*((_QWORD *)v387 + 4) + 1104LL)
      || *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() != 2 )
    {
      v264 = lpMem;
      if ( *(_DWORD *)lpMem )
        v265 = (CMILMatrix *)(*((_QWORD *)lpMem + 2) + 68LL * (unsigned int)(*(_DWORD *)lpMem - 1));
      else
        v265 = (CMILMatrix *)&CMILMatrix::Identity;
      CMILMatrix::Transform3DBoundsHelper<1>(v265, (__int64)v388 + 164, (__m128 *)v420);
      v266 = *(_DWORD *)v264;
      v425 = *(_QWORD *)&v420[16];
      *(_DWORD *)&v420[64] = 0;
      v424 = *(_OWORD *)v420;
      if ( v266 )
      {
        v267 = (unsigned int)(v266 - 1);
        v268 = v264[2];
        *(_OWORD *)v420 = *(_OWORD *)(68 * v267 + v268);
        *(_OWORD *)&v420[16] = *(_OWORD *)(68 * v267 + v268 + 16);
        *(_OWORD *)&v420[32] = *(_OWORD *)(68 * v267 + v268 + 32);
        *(_OWORD *)&v420[48] = *(_OWORD *)(68 * v267 + v268 + 48);
        *(_DWORD *)&v420[64] = *(_DWORD *)(68 * v267 + v268 + 64);
      }
      else
      {
        CMILMatrix::SetToIdentity((CMILMatrix *)v420);
      }
      v269 = (*(__int64 (__fastcall **)(CVisual *, _BYTE *, __m128 *, __int128 *, _BYTE *, _BYTE *))(*(_QWORD *)v388 + 208LL))(
               v388,
               v420,
               &v418,
               &v424,
               v423,
               v415);
      v4 = v269;
      if ( v269 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v270, 0LL, 0, v269, 0xE16u, 0LL);
      else
        *(_OWORD *)v413 = *(_OWORD *)v415;
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v270, 0LL, 0, v4, 0x1F23u, 0LL);
        goto LABEL_420;
      }
      v272 = CDrawingContext::PushEffects(v387, (float *)&v397, v423, v271, (__int64)v413, (__int64)v417, &v386);
      v4 = v272;
      if ( v272 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v273, 0LL, 0, v272, 0x1F2Cu, 0LL);
        goto LABEL_420;
      }
      if ( (_BYTE)v386 )
        goto LABEL_451;
      if ( *((_BYTE *)v227 + 32) )
      {
        v274 = (struct _LIST_ENTRY *)((char *)v29 + 328);
      }
      else
      {
        TreeDataListHead = CVisual::GetTreeDataListHead(v29);
        if ( TreeDataListHead )
        {
          Flink = TreeDataListHead->Flink;
          if ( TreeDataListHead->Flink != TreeDataListHead )
          {
            while ( (struct CVisualTree *)Flink[2].Flink != v227 )
            {
              Flink = Flink->Flink;
              if ( Flink == TreeDataListHead )
                goto LABEL_460;
            }
            v274 = Flink - 14;
          }
        }
      }
LABEL_460:
      Blink = (int)v274[8].Blink;
    }
  }
  if ( *((_QWORD *)v63 + 45) )
    goto LABEL_549;
  if ( *((_QWORD *)v63 + 787) )
    goto LABEL_636;
  if ( ((Blink - 2) & 0xFFFFFFFD) != 0 )
  {
LABEL_549:
    if ( !*((_QWORD *)v63 + 787) )
    {
      if ( *((_BYTE *)v63 + 6348) )
        CDrawingContext::UpdateMoveOptimizations(v63, v246, v417);
      v331 = (char *)v63 + 3480;
      v332 = 0LL;
      v333 = *((_DWORD *)v63 + 870);
      if ( v333 )
        v332 = *((_QWORD *)v63 + 437) + 16LL * (unsigned int)(v333 - 1);
      v390 = *(_BYTE *)(v332 + 8);
      v334 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)&v400, v246);
      v335 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v334 - 0.0)) & _xmm);
      if ( v335 >= 0.00000011920929 && _finite((float)(1.0 / v334)) )
        v336 = v334 < 0.0 == (float)((float)((float)((float)((float)(*((float *)&v400 + 1) * *((float *)&v401 + 3))
                                                           - (float)(*((float *)&v400 + 3) * *((float *)&v401 + 1)))
                                                   * *(float *)&v403)
                                           + (float)((float)((float)(*((float *)&v400 + 3) * *(float *)&v401)
                                                           - (float)(*(float *)&v400 * *((float *)&v401 + 3)))
                                                   * *((float *)&v403 + 1)))
                                   + (float)((float)((float)(*(float *)&v400 * *((float *)&v401 + 1))
                                                   - (float)(*((float *)&v400 + 1) * *(float *)&v401))
                                           * *((float *)&v403 + 3))) < 0.0;
      else
        v336 = (float)((float)(*(float *)&v400 * *((float *)&v401 + 1))
                     - (float)(*((float *)&v400 + 1) * *(float *)&v401)) > 0.0;
      v337 = v388;
      if ( (**((_DWORD **)v388 + 28) & 0x200000) != 0 )
      {
LABEL_572:
        *(_QWORD *)v415 = v337;
        v415[8] = v336;
        v342 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(v331, v415);
        v4 = v342;
        if ( v342 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v343, 0LL, 0, v342, 0x1F71u, 0LL);
          v29 = v388;
          goto LABEL_420;
        }
        goto LABEL_573;
      }
      v338 = *((_DWORD *)v388 + 25);
      v339 = v396 && *((_DWORD *)v396 + 25) == 1;
      v340 = *((_QWORD *)v388 + 9);
      if ( (v340 & 2) != 0 )
        v340 = *(_QWORD *)(v340 & 0xFFFFFFFFFFFFFFFCuLL);
      else
        LODWORD(v340) = v340 & 1;
      v341 = (*(__int64 (**)(void))(*(_QWORD *)v388 + 216LL))();
      if ( v338 != 1 )
      {
        if ( !v339 )
          goto LABEL_573;
        if ( (_DWORD)v340 )
        {
LABEL_571:
          v63 = v387;
          v337 = v388;
          goto LABEL_572;
        }
      }
      if ( v339 && v341 )
        goto LABEL_571;
LABEL_573:
      if ( *((_QWORD *)v387 + 45)
        || *((_QWORD *)v387 + 787)
        || (**((_DWORD **)v388 + 28) & 0x100000) == 0
        || (WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v388),
            !*((_BYTE *)WindowBackgroundTreatmentInternal + 356))
        || (CScopedClipStack::GetClipBoundsWorld(v394, v415),
            v345 = CMatrixStack::GetTopByReference((CMatrixStack *)lpMem),
            CMILMatrix::Transform3DBoundsHelper<0>(v345, (char *)WindowBackgroundTreatmentInternal + 144, v420),
            !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v415, v420)) )
      {
LABEL_585:
        v351 = v388;
        v352 = *((_DWORD *)v388 + 25);
        v353 = v396 && *((_DWORD *)v396 + 25) == 1;
        if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v388 + 216LL))(v388) )
          goto LABEL_600;
        v354 = (_DWORD *)*((_QWORD *)v351 + 28);
        if ( (*v354 & 0x200000) == 0 )
          goto LABEL_599;
        v355 = (unsigned int)v354[1];
        v356 = v354 + 2;
        for ( i2 = 0; i2 < (unsigned int)v355; ++v356 )
        {
          if ( *v356 == 11 )
            break;
          ++i2;
        }
        v358 = i2 >= (unsigned int)v355
             ? 0LL
             : (_QWORD *)((char *)v354 + v355 + 8LL * i2 - (((_BYTE)v355 + 15) & 7) + 15);
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v358 + 48LL))(*v358, 56LL) )
LABEL_600:
          v359 = 1;
        else
LABEL_599:
          v359 = 0;
        if ( v352 != 1 )
        {
LABEL_604:
          v63 = v387;
          LOBYTE(v386) = 0;
          if ( !*((_DWORD *)v387 + 66) || (v360 = v390, v390 == v336) )
          {
            v29 = v351;
            if ( (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)v351 + 256LL))(v351) )
            {
              (*(void (__fastcall **)(struct CVisual *, struct CDrawingContext *, __int64 *))(*(_QWORD *)v351 + 248LL))(
                v351,
                v63,
                &v386);
              ++*((_DWORD *)v389 + 8);
            }
            else if ( (*((_BYTE *)v351 + 95) & 8) != 0 )
            {
              if ( *(_BYTE *)(*((_QWORD *)v63 + 4) + 1273LL) )
                LOBYTE(v386) = 1;
              else
                *((_BYTE *)v63 + 6354) = 1;
            }
          }
          else if ( ((**((_DWORD **)v351 + 28) & 0x200000) != 0
                  || (*(unsigned __int8 (__fastcall **)(struct CVisual *))(*(_QWORD *)v351 + 216LL))(v351))
                 && v336 )
          {
            TopByReference = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(v331);
            v29 = v351;
            if ( *(_BYTE *)(TopByReference + 8) != v360 )
              LOBYTE(v386) = 1;
          }
          else
          {
            v29 = v351;
          }
          if ( HIBYTE(v411)
            && (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v29 + 48LL))(v29, 91LL)
            && CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v29) )
          {
            Count = CPtrArrayBase::GetCount((CVisual *)((char *)v29 + 72));
            if ( Count )
            {
              do
              {
                ChildAt = CVisual::GetChildAt(v29, v3);
                CDrawingContext::DrawVisual(v63, ChildAt, 0);
                ++v3;
              }
              while ( v3 < Count );
              *v395 = 0;
              goto LABEL_420;
            }
          }
          else if ( !(_BYTE)v386 )
          {
            goto LABEL_420;
          }
          *v395 = 0;
          goto LABEL_420;
        }
        if ( v353 )
        {
          if ( !v359 )
            goto LABEL_604;
        }
        else if ( !(unsigned int)CPtrArrayBase::GetCount((struct CVisual *)((char *)v351 + 72)) )
        {
          goto LABEL_604;
        }
        v29 = v351;
        if ( CVisual::HasBspPolygonList(v351) )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_P3D_RENDERING_Start);
          v63 = v387;
          v362 = CDrawingContext::DrawBspPolygonList(v387, v351, v396);
          v4 = v362;
          if ( v362 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v363, 0LL, 0, v362, 0x1FF7u, 0LL);
          }
          else
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_P3D_RENDERING_Stop);
            ++*((_DWORD *)v389 + 8);
            *v395 = 0;
          }
          goto LABEL_420;
        }
LABEL_284:
        v63 = v387;
        v18 = v391;
        goto LABEL_421;
      }
      v346 = 1;
      v347 = *((_BYTE *)WindowBackgroundTreatmentInternal + 359);
      if ( !*((_BYTE *)WindowBackgroundTreatmentInternal + 357)
        && CWindowBackgroundTreatment::HasValidSource(
             WindowBackgroundTreatmentInternal,
             *((const struct IRenderTarget **)v387 + 44))
        || (ImageSourceForEffectInput = CWindowBackgroundTreatment::GenerateImageSourceForEffectInput(
                                          (struct D2D_RECT_F *)WindowBackgroundTreatmentInternal,
                                          v387),
            v4 = ImageSourceForEffectInput,
            v346 = v347 == 0,
            ImageSourceForEffectInput >= 0) )
      {
        if ( v347 )
        {
          FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(
            *(FRAME_TIME_INFO **)(*((_QWORD *)v387 + 4) + 376LL),
            v346);
          if ( !v346 )
            ++dword_18033C830;
        }
        v350 = CMatrixStack::GetTopByReference((CMatrixStack *)lpMem);
        CWindowBackgroundTreatment::SetWorldTransform(WindowBackgroundTreatmentInternal, v350, 3LL);
        goto LABEL_585;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v349, 0LL, 0, ImageSourceForEffectInput, 0x1F94u, 0LL);
LABEL_283:
      v29 = v388;
      goto LABEL_284;
    }
LABEL_636:
    CVisual::ExcludeFromVisibleRegion(v29, v417, v63);
    goto LABEL_420;
  }
  v277 = v394;
  v278 = 0LL;
  if ( Blink == 2 )
  {
    v278 = (__int128 *)(80LL * (unsigned int)(*((_DWORD *)v394 + 6) - 1) + *(_QWORD *)v394 + 8LL);
  }
  else if ( Blink == 4 )
  {
    v278 = &v400;
  }
  v279 = v387;
  v4 = 0;
  v280 = 0;
  v281 = 0;
  if ( *((_DWORD *)v387 + 158) )
  {
    v282 = (char *)v387 + 608;
    while ( 1 )
    {
      v283 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v282 + 8LL * v281), v279);
      v4 = v283;
      if ( v283 < 0 )
        break;
      v279 = v387;
      ++v280;
      if ( ++v281 >= *((_DWORD *)v387 + 158) )
        goto LABEL_472;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v284, 0LL, 0, v283, 0x1664u, 0LL);
    goto LABEL_474;
  }
LABEL_472:
  v282 = (char *)v279 + 608;
  v285 = (void *)*((_QWORD *)v279 + 76);
  *((_DWORD *)v279 + 158) = 0;
  if ( v285 != *((void **)v279 + 77) )
  {
    operator delete(v285);
    *(_QWORD *)v282 = *((_QWORD *)v282 + 1);
    *((_DWORD *)v282 + 5) = *((_DWORD *)v282 + 4);
LABEL_474:
    v279 = v387;
  }
  if ( v280 < *((_DWORD *)v279 + 158) && v280 )
  {
    DynArray<CD2DLayer *,0>::ShiftLeft(v282, v280);
    v279 = v387;
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v285, 0LL, 0, v4, 0x1646u, 0LL);
    v279 = v387;
  }
  else if ( *((_BYTE *)v279 + 6346) )
  {
    *(_WORD *)((char *)v279 + 6345) = 1;
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v285, 0LL, 0, v4, 0x108Bu, 0LL);
    goto LABEL_519;
  }
  v286 = (unsigned int *)((char *)v279 + 448);
  v287 = *((_DWORD *)v279 + 112);
  *(_QWORD *)&v415[8] = v388;
  v288 = *((_DWORD *)v279 + 113);
  *(_DWORD *)v415 = 3;
  v413[0] = 0LL;
  if ( v287 != v288 )
    goto LABEL_491;
  v289 = 2LL * v288;
  if ( v289 > 0xFFFFFFFF )
  {
    v292 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v288, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    v4 = -2147024362;
    goto LABEL_495;
  }
  if ( (unsigned int)v289 <= 0x40 )
    LODWORD(v289) = 64;
  v290 = HrMalloc(0x10uLL, (unsigned int)v289, v413);
  v292 = v290;
  if ( v290 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v291, 0LL, 0, v290, 0x53u, 0LL);
LABEL_498:
    v298 = v413[0];
    if ( v413[0] )
    {
      v299 = GetProcessHeap();
      HeapFree(v299, 0, v298);
    }
    goto LABEL_494;
  }
  v293 = 16LL * *v286;
  if ( v293 > 0xFFFFFFFF )
  {
    v292 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v291, 0LL, 0, -2147024362, 0x55u, 0LL);
    goto LABEL_498;
  }
  v294 = v413[0];
  memcpy_0(v413[0], *((const void **)v286 + 2), (unsigned int)v293);
  operator delete(*((void **)v286 + 2));
  v287 = *v286;
  *((_QWORD *)v286 + 2) = v294;
  v286[1] = v289;
LABEL_491:
  v292 = 0;
  *(_OWORD *)(*((_QWORD *)v286 + 2) + 16LL * v287) = *(_OWORD *)v415;
  v295 = v286[6];
  v296 = *v286 + 1;
  *v286 = v296;
  if ( v295 <= v296 )
    v295 = v296;
  v286[6] = v295;
LABEL_494:
  v4 = v292;
  if ( v292 < 0 )
  {
LABEL_495:
    MilInstrumentationCheckHR_MaybeFailFast(v296, 0LL, 0, v292, 0x1090u, 0LL);
    goto LABEL_519;
  }
  v300 = *((_DWORD *)v277 + 6);
  v421 = 0;
  v422 = 1;
  *(_QWORD *)v420 = 0LL;
  if ( v300 )
  {
    v301 = *(_QWORD *)v277;
    v302 = (unsigned int)(v300 - 1);
    v303 = 10 * v302;
    if ( *(_DWORD *)(*(_QWORD *)v277 + 80 * v302) && (v304 = *((_DWORD *)v277 + 556)) != 0 )
      v305 = *(_OWORD *)(*((_QWORD *)v277 + 280) + 16LL * (unsigned int)(v304 - 1));
    else
      v305 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    *(_OWORD *)v414 = v305;
    if ( *(_DWORD *)(v301 + 8 * v303 + 4) )
    {
      if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(136LL
                                                                                         * (unsigned int)(*((_DWORD *)v277 + 214) - 1) + *((_QWORD *)v277 + 104) + 112LL) )
      {
        CScopedClipStack::ComputeCpuClipBoundsInScope(v277);
        v306 = *((unsigned int *)v277 + 214);
      }
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
        v414,
        *((_QWORD *)v277 + 104) + 112LL + 136LL * (unsigned int)(v306 - 1),
        v306,
        v307);
    }
  }
  else
  {
    *(_OWORD *)v414 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  if ( v278 )
  {
    v308 = *v278;
    v309 = v278[1];
    v421 = *((_DWORD *)v278 + 16);
    *(_OWORD *)&v420[8] = v308;
    v310 = v278[2];
    *(_OWORD *)&v420[24] = v309;
    v311 = v278[3];
    *(_OWORD *)&v420[40] = v310;
    *(_OWORD *)&v420[56] = v311;
  }
  else
  {
    CMILMatrix::SetToIdentity((CMILMatrix *)&v420[8]);
  }
  v312 = DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet(v277, v420);
  v4 = v312;
  if ( v312 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v313, 0LL, 0, v312, 0x4Bu, 0LL);
  if ( v4 >= 0 )
    goto LABEL_520;
  MilInstrumentationCheckHR_MaybeFailFast(v313, 0LL, 0, v4, 0x1094u, 0LL);
  CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)v286, 0LL);
LABEL_519:
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v297, 0LL, 0, v4, 0x1F53u, 0LL);
    goto LABEL_283;
  }
LABEL_520:
  v314 = 0;
  v29 = v388;
  v315 = (unsigned int *)((char *)v387 + 448);
  *(_DWORD *)v415 = 1;
  *(_QWORD *)&v415[8] = v388;
  v413[0] = 0LL;
  v316 = *((_DWORD *)v387 + 113);
  v317 = *((_DWORD *)v387 + 112);
  if ( v317 != v316 )
  {
LABEL_527:
    v321 = 0;
    *(_OWORD *)(*((_QWORD *)v315 + 2) + 16LL * v317) = *(_OWORD *)v415;
    v324 = v315[6];
    v325 = *v315 + 1;
    *v315 = v325;
    if ( v324 <= v325 )
      v324 = v325;
    v315[6] = v324;
    goto LABEL_530;
  }
  v318 = 2LL * v316;
  if ( v318 > 0xFFFFFFFF )
  {
    v321 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v316, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    v4 = -2147024362;
    goto LABEL_538;
  }
  if ( (unsigned int)v318 <= 0x40 )
    LODWORD(v318) = 64;
  v319 = HrMalloc(0x10uLL, (unsigned int)v318, v413);
  v321 = v319;
  if ( v319 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v320, 0LL, 0, v319, 0x53u, 0LL);
  }
  else
  {
    v322 = 16LL * *v315;
    if ( v322 <= 0xFFFFFFFF )
    {
      v323 = v413[0];
      memcpy_0(v413[0], *((const void **)v315 + 2), (unsigned int)v322);
      operator delete(*((void **)v315 + 2));
      v317 = *v315;
      *((_QWORD *)v315 + 2) = v323;
      v315[1] = v318;
      goto LABEL_527;
    }
    v321 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v320, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v329 = v413[0];
  if ( v413[0] )
  {
    v330 = GetProcessHeap();
    HeapFree(v330, 0, v329);
  }
LABEL_530:
  v4 = v321;
  if ( v321 < 0 )
  {
LABEL_538:
    MilInstrumentationCheckHR_MaybeFailFast(v325, 0LL, 0, v321, 0x1037u, 0LL);
    goto LABEL_539;
  }
  v314 = 1;
  *(_OWORD *)v415 = *(_OWORD *)v414;
  v326 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
           (char *)v277 + 2224,
           v415);
  v4 = v326;
  if ( v326 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v327, 0LL, 0, v326, 0x116u, 0LL);
  }
  else
  {
    v328 = 10LL * (unsigned int)(*((_DWORD *)v277 + 6) - 1);
    ++*(_DWORD *)(*(_QWORD *)v277 + 8 * v328);
  }
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v328, 0LL, 0, v4, 0x103Eu, 0LL);
  else
    *((_BYTE *)v387 + 6345) = 1;
LABEL_539:
  if ( v4 >= 0 )
  {
    v63 = v387;
    goto LABEL_549;
  }
  if ( v314 )
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)v315, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v328, 0LL, 0, v4, 0x1F56u, 0LL);
  v63 = v387;
  v18 = v391;
LABEL_421:
  if ( *((_BYTE *)v63 + 6352) && *v18 && *(_BYTE *)(*v18 - 1 + *((_QWORD *)v18 + 2)) )
    CVisual::RenderProjectedShadows((__int64)v29, v63, 1);
  return (unsigned int)v4;
}
