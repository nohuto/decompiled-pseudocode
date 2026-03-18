/*
 * XREFs of ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0
 * Callers:
 *     ??$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCDrawingContext@@W4WalkReason@@@Z @ 0x18005D0C0 (--$WalkSubtree@VCDrawingContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCD.c)
 * Callees:
 *     ?RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z @ 0x18000680C (-RenderProjectedShadows@CVisual@@QEAAXPEAVCDrawingContext@@W4Enum@ProjectedShadowDrawOrder@@@Z.c)
 *     ?IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ @ 0x180006CDC (-IsEmptyMaskContent@CProjectedShadowCaster@@QEBA_NXZ.c)
 *     ?IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ @ 0x180006D70 (-IsEmptyMaskContent@CProjectedShadowReceiver@@QEBA_NXZ.c)
 *     ?IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ @ 0x180006DCC (-IsEmptyProjection@CProjectedShadowScene@@QEBA_NXZ.c)
 *     ?GetProjectedShadowReceivers@CVisual@@QEBAPEAV?$vector@PEAVCProjectedShadowReceiver@@V?$allocator@PEAVCProjectedShadowReceiver@@@std@@@std@@XZ @ 0x180006E98 (-GetProjectedShadowReceivers@CVisual@@QEBAPEAV-$vector@PEAVCProjectedShadowReceiver@@V-$allocato.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000BF44 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18000C0AC (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ @ 0x18000E0EC (-IsAutomaticBoundsToLocalSpaceEnabled@CLayerVisual@@QEBA_NXZ.c)
 *     ?GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z @ 0x180011164 (-GenerateImageSourceForEffectInput@CWindowBackgroundTreatment@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x180011EF0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z @ 0x18001BFB0 (-NotifyWindowBackgroundTreatmentCacheHitOrMiss@FRAME_TIME_INFO@@QEBAX_N@Z.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18002407C (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180028F60 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029BA0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x180034E80 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180035AFC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180037494 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A76C (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRec.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180050F9C (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 *     ?Push@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUStackBackfaceVisibilityEntry@CDrawingContext@@@Z @ 0x18005CF68 (-Push@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEAAJAEBUSta.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$07$01$07@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005CFDC (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x180060C00 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800611C0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NeedsDesktopMoves@CDisplay@@QEBA_NXZ @ 0x18007903C (-NeedsDesktopMoves@CDisplay@@QEBA_NXZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180079F80 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18007DF3C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetEffects@CDrawingContext@@AEAAXPEAVCVisual@@PEBVCVisualTree@@PEAUNodeEffects@1@@Z @ 0x180089C20 (-GetEffects@CDrawingContext@@AEAAXPEAVCVisual@@PEBVCVisualTree@@PEAUNodeEffects@1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?SetToIdentity@CMILMatrix@@QEAAXXZ @ 0x18008E14C (-SetToIdentity@CMILMatrix@@QEAAXXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800910F0 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoin.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AEA10 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AEAC0 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x1800AF1C0 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScopeState@CScopedClipStack@@I@Z @ 0x1800BC330 (-AddMultipleAndSet@-$DynArray@UClippingScopeState@CScopedClipStack@@$0A@@@QEAAJPEFBUClippingScop.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCD5C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z @ 0x1800C44B8 (-SetWorldTransform@CWindowBackgroundTreatment@@QEAAXAEBVCMILMatrix@@W4WalkReason@@@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800C8F70 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z @ 0x1800DD204 (-ClearAllMoveTransformsInSubtree@CVisual@@SAXPEAV1@@Z.c)
 *     ?UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800DDACC (-UpdateMoveOptimizations@CDrawingContext@@AEAA_NPEBVCVisual@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB6D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800ECD80 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18016B6F4 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetHeatMapProperties@CVisual@@QEBA?AUHeatMapProperty@1@XZ @ 0x18016E418 (-GetHeatMapProperties@CVisual@@QEBA-AUHeatMapProperty@1@XZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x18016E5F8 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 *     ?GetTopByReference@?$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@@QEBAPEBUStackBackfaceVisibilityEntry@CDrawingContext@@XZ @ 0x18016E618 (-GetTopByReference@-$CWatermarkStack@UStackBackfaceVisibilityEntry@CDrawingContext@@$0EA@$01$09@.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18016E8B4 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?Push@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CComposition@@@Z @ 0x18016EB8C (-Push@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEAAJAEBUHeatMapOptions@CCompos.c)
 *     ?Push@?$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z @ 0x18016ECD4 (-Push@-$CWatermarkStack@_N$0EA@$01$09@@QEAAJAEB_N@Z.c)
 *     ?SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ @ 0x18016FDE4 (-SetHeatMapForCurrentNode@CDrawingContext@@AEAAXXZ.c)
 *     ?ShiftLeft@?$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z @ 0x18016FFA0 (-ShiftLeft@-$DynArray@PEAVCD2DLayer@@$0A@@@QEAAJI@Z.c)
 *     ?ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ @ 0x180178ADC (-ComputeCpuClipBoundsInScope@CScopedClipStack@@AEAAXXZ.c)
 *     ?ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingContext@@@Z @ 0x1801C183C (-ExcludeFromVisibleRegion@CVisual@@QEAAJAEAV-$CRectF@UDeviceHPC@CoordinateSpace@@@@PEAVCDrawingC.c)
 *     ?GetChildAt@CVisual@@QEAAPEAV1@I@Z @ 0x1801C18B4 (-GetChildAt@CVisual@@QEAAPEAV1@I@Z.c)
 *     ?HasBspPolygonList@CVisual@@IEBA_NXZ @ 0x1801C20C0 (-HasBspPolygonList@CVisual@@IEBA_NXZ.c)
 *     ?determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z @ 0x18021BB60 (-determinant@Numerics@Foundation@Windows@@YAMAEBUfloat4x4@123@@Z.c)
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
  char *v63; // r15
  _DWORD *v64; // rbx
  __int64 v65; // rax
  _DWORD *v66; // rax
  struct CDrawingContext *v67; // r8
  _DWORD *v68; // r12
  unsigned int v69; // edx
  __int64 v70; // rcx
  unsigned __int64 v71; // rdi
  int v72; // eax
  unsigned int v73; // ecx
  int v74; // ebx
  unsigned __int64 v75; // rax
  void *v76; // rbx
  unsigned int v77; // eax
  unsigned int v78; // ecx
  __int64 v79; // rax
  unsigned int v80; // edx
  unsigned int v81; // ebx
  __int64 v82; // r8
  unsigned int v83; // ecx
  int v84; // eax
  unsigned int v85; // ecx
  void *v86; // rdi
  HANDLE v87; // rax
  struct CDrawingContext *v88; // r12
  int v89; // eax
  unsigned int v90; // ecx
  bool *v91; // rdi
  __int64 v92; // rcx
  bool v93; // cf
  int v94; // eax
  unsigned int v95; // ecx
  unsigned int v96; // ecx
  unsigned int v97; // eax
  _DWORD *v98; // rcx
  int v99; // eax
  unsigned int v100; // ecx
  int v101; // eax
  void *v102; // r9
  float *Bounds; // rax
  __int64 v104; // r9
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
  __int64 v125; // r8
  __int64 v126; // rdx
  _BYTE *v127; // rcx
  unsigned int k; // eax
  _QWORD **v129; // rdx
  _QWORD *v130; // rcx
  _QWORD *v131; // rax
  char *v132; // rbx
  _DWORD *v133; // rdi
  __int64 v134; // rax
  int v135; // eax
  int v136; // ecx
  __int64 v137; // rcx
  void *v138; // rbx
  __int64 v139; // r8
  __int64 v140; // rdx
  _BYTE *v141; // rcx
  unsigned int m; // eax
  _QWORD **v143; // rdx
  _QWORD *v144; // rcx
  _QWORD *v145; // rax
  _QWORD *v146; // rcx
  unsigned int v147; // edx
  __int64 v148; // r9
  int v149; // edx
  unsigned int v150; // r8d
  char *v151; // rax
  struct CVisualTree *v152; // r10
  int v153; // r15d
  CVisual *v154; // r13
  _QWORD *v155; // rbx
  _DWORD *v156; // r9
  char v157; // r12
  __int64 **v158; // rsi
  __int64 v159; // rdi
  __int64 v160; // rcx
  _BYTE *v161; // rax
  unsigned int ii; // edx
  _QWORD **v163; // r8
  __int64 v164; // r8
  __int64 v165; // rdx
  _BYTE *v166; // rcx
  unsigned int n; // eax
  _QWORD **v168; // rdx
  _QWORD *v169; // rax
  CVisual *v170; // rax
  __int64 **TreeData; // rax
  __int64 v172; // rax
  __int64 v173; // r8
  _BYTE *v174; // rax
  __int64 jj; // rdx
  _QWORD **v176; // rdx
  _QWORD *v177; // rdx
  _QWORD *v178; // rax
  unsigned __int64 v179; // rax
  int updated; // eax
  bool v181; // dl
  __int64 v182; // rax
  unsigned int v183; // ecx
  int v184; // eax
  unsigned int v185; // ecx
  CVisual *v186; // rdi
  unsigned int v187; // r13d
  char v188; // bl
  char v189; // cl
  float v190; // xmm3_4
  float v191; // xmm1_4
  float v192; // xmm1_4
  float v193; // xmm1_4
  float v194; // xmm1_4
  float v195; // xmm1_4
  float v196; // xmm1_4
  float v197; // xmm1_4
  float v198; // xmm1_4
  float v199; // xmm1_4
  float v200; // xmm1_4
  float v201; // xmm3_4
  float v202; // xmm1_4
  float v203; // xmm1_4
  float v204; // xmm1_4
  CGeometry *v205; // rcx
  char v206; // r12
  void *v207; // r15
  int ShapeData; // eax
  unsigned int v209; // ecx
  int v210; // ebx
  void *v211; // rdi
  int v212; // eax
  void (__fastcall ***v213)(void *, __int64); // rcx
  int v214; // eax
  unsigned int v215; // ecx
  __int64 v216; // rcx
  float v217; // xmm0_4
  float v218; // xmm1_4
  unsigned int Slot; // eax
  __int64 v220; // r10
  __int64 v221; // rcx
  _QWORD *v222; // rdx
  struct CVisualTree *v223; // r15
  char *v224; // r10
  char v225; // r9
  __int64 v226; // r8
  __int64 v227; // rdx
  _BYTE *v228; // rcx
  unsigned int kk; // eax
  _QWORD **v230; // rdx
  _QWORD *v231; // rdx
  _QWORD *v232; // rax
  __int64 v233; // r8
  __int64 v234; // rdx
  _BYTE *v235; // rcx
  unsigned int mm; // eax
  __int64 ****v237; // rdx
  __int64 ***v238; // rcx
  __int64 **nn; // rax
  __int64 v240; // r9
  int v241; // eax
  const struct Windows::Foundation::Numerics::float4x4 *v242; // rdx
  unsigned int v243; // ecx
  char *v244; // r9
  __int64 v245; // r8
  __int64 v246; // rdx
  _BYTE *v247; // rcx
  unsigned int i1; // eax
  _QWORD *v249; // r8
  _QWORD *v250; // rax
  int Blink; // ebx
  int v252; // eax
  unsigned int v253; // ecx
  unsigned int v254; // ecx
  int v256; // eax
  unsigned int v257; // ecx
  unsigned int v258; // ecx
  int v259; // eax
  void *v260; // rax
  int v261; // eax
  __int64 v262; // rcx
  __int64 v263; // rax
  int v264; // eax
  unsigned int v265; // ecx
  int v266; // eax
  unsigned int v267; // ecx
  struct _LIST_ENTRY *v268; // r10
  struct _LIST_ENTRY *TreeDataListHead; // rax
  struct _LIST_ENTRY *Flink; // rcx
  _DWORD *v271; // r12
  __int128 *v272; // r13
  struct CDrawingContext *v273; // rdx
  unsigned int v274; // edi
  unsigned int v275; // ebx
  char *v276; // r15
  int v277; // eax
  unsigned int v278; // ecx
  void *v279; // rcx
  unsigned int *v280; // r15
  unsigned int v281; // eax
  unsigned int v282; // ecx
  unsigned __int64 v283; // rdi
  int v284; // eax
  unsigned int v285; // ecx
  int v286; // ebx
  unsigned __int64 v287; // rax
  void *v288; // rbx
  unsigned int v289; // eax
  unsigned int v290; // ecx
  unsigned int v291; // ecx
  void *v292; // rdi
  HANDLE v293; // rax
  int v294; // eax
  __int64 v295; // r8
  __int64 v296; // rax
  __int64 v297; // rdx
  int v298; // eax
  __int128 v299; // xmm0
  int v300; // r8d
  __int128 v301; // xmm0
  __int128 v302; // xmm1
  __int128 v303; // xmm0
  __int128 v304; // xmm1
  int v305; // eax
  unsigned int v306; // ecx
  char v307; // r15
  unsigned int *v308; // rdi
  unsigned int v309; // ecx
  unsigned int v310; // eax
  unsigned __int64 v311; // rsi
  int v312; // eax
  unsigned int v313; // ecx
  int v314; // ebx
  unsigned __int64 v315; // rax
  void *v316; // rbx
  unsigned int v317; // eax
  unsigned int v318; // ecx
  int v319; // eax
  unsigned int v320; // ecx
  __int64 v321; // rcx
  void *v322; // rsi
  HANDLE v323; // rax
  unsigned int *v324; // r13
  __int64 v325; // rax
  int v326; // ecx
  float v327; // xmm0_4
  float v328; // xmm2_4
  char v329; // r12
  CVisual *v330; // rcx
  int v331; // r15d
  bool v332; // di
  __int64 v333; // rbx
  char v334; // al
  int v335; // eax
  unsigned int v336; // ecx
  struct CDrawingContext *v337; // rdi
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rbx
  const struct CMILMatrix *TopByReference; // rax
  char v340; // di
  char v341; // r15
  int ImageSourceForEffectInput; // eax
  unsigned int v343; // ecx
  const struct CMILMatrix *v344; // rax
  CVisual *v345; // r15
  int v346; // edi
  bool v347; // bl
  _DWORD *v348; // r8
  __int64 v349; // rdx
  _BYTE *v350; // rcx
  unsigned int i2; // eax
  _QWORD *v352; // rdx
  char v353; // al
  struct CDrawingContext *v354; // rbx
  char v355; // bl
  __int64 v356; // rax
  int v357; // eax
  unsigned int v358; // ecx
  unsigned int Count; // ebx
  struct CComposition **v360; // rsi
  struct CVisual *ChildAt; // rax
  int v362; // eax
  unsigned int v363; // ecx
  unsigned int v364; // ecx
  unsigned int v365; // eax
  unsigned int v366; // eax
  unsigned __int64 v367; // rdi
  int v368; // eax
  unsigned int v369; // ecx
  void *v370; // rbx
  unsigned int v371; // eax
  unsigned int v372; // ecx
  HANDLE v373; // rax
  int v374; // [rsp+20h] [rbp-E0h]
  __int64 v375; // [rsp+40h] [rbp-C0h] BYREF
  struct CDrawingContext *v376; // [rsp+48h] [rbp-B8h]
  unsigned int *v377; // [rsp+50h] [rbp-B0h]
  CVisual *v378; // [rsp+58h] [rbp-A8h]
  int v379; // [rsp+60h] [rbp-A0h]
  void *v380; // [rsp+68h] [rbp-98h] BYREF
  char v381; // [rsp+70h] [rbp-90h]
  void *lpMem; // [rsp+78h] [rbp-88h] BYREF
  bool *v383; // [rsp+80h] [rbp-80h]
  unsigned int v384; // [rsp+88h] [rbp-78h] BYREF
  struct CVisual *v385; // [rsp+90h] [rbp-70h]
  __int64 v386; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v387[12]; // [rsp+A8h] [rbp-58h]
  float v388; // [rsp+B4h] [rbp-4Ch]
  __int128 v389; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v390; // [rsp+C8h] [rbp-38h]
  __int128 v391; // [rsp+D8h] [rbp-28h]
  __int128 v392; // [rsp+E8h] [rbp-18h]
  __int64 v393; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v394; // [rsp+100h] [rbp+0h]
  __int128 v395; // [rsp+110h] [rbp+10h]
  __int128 v396; // [rsp+120h] [rbp+20h]
  __int64 v397; // [rsp+130h] [rbp+30h]
  float v398; // [rsp+138h] [rbp+38h]
  __int64 v399; // [rsp+13Ch] [rbp+3Ch]
  int v400; // [rsp+144h] [rbp+44h]
  unsigned __int8 v401; // [rsp+148h] [rbp+48h]
  void *v402[2]; // [rsp+150h] [rbp+50h] BYREF
  struct CVisualTree *v403[2]; // [rsp+160h] [rbp+60h] BYREF
  _BYTE v404[20]; // [rsp+170h] [rbp+70h] BYREF
  int v405; // [rsp+184h] [rbp+84h]
  __int64 v406[2]; // [rsp+188h] [rbp+88h] BYREF
  __m128 v407; // [rsp+198h] [rbp+98h] BYREF
  __int64 v408; // [rsp+1A8h] [rbp+A8h]
  _BYTE v409[72]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v410; // [rsp+1F8h] [rbp+F8h]
  char v411; // [rsp+1FCh] [rbp+FCh]
  char v412[16]; // [rsp+200h] [rbp+100h] BYREF
  __int128 v413; // [rsp+210h] [rbp+110h] BYREF
  __int64 v414; // [rsp+220h] [rbp+120h]
  void *retaddr; // [rsp+2C8h] [rbp+1C8h]

  v3 = 0;
  v4 = 0;
  v403[0] = a2;
  v376 = (struct CDrawingContext *)this;
  v399 = 21887LL;
  v383 = a3;
  v6 = 0LL;
  v386 = 0LL;
  *(_QWORD *)v387 = 1065353216LL;
  *(_DWORD *)&v387[8] = 0;
  v388 = 1.0;
  v393 = 0LL;
  v400 = 0;
  v401 = 0;
  v394 = 0LL;
  v395 = 0LL;
  v396 = 0LL;
  v397 = 0LL;
  v398 = 1.0;
  v378 = 0LL;
  if ( *((_BYTE *)this + 6048) )
  {
    if ( *((_BYTE *)this + 6049) )
      v6 = this[417];
    else
      v6 = (CVisual *)*((_QWORD *)this[757] + 3);
    v378 = v6;
  }
  v7 = (**((_DWORD **)v6 + 28) & 0x10000) == 0;
  v385 = this[418];
  v377 = (unsigned int *)(this + 412);
  if ( !v7 )
  {
    ProjectedShadowReceivers = CVisual::GetProjectedShadowReceivers((__int64)v6);
    v9 = *(char **)ProjectedShadowReceivers;
    v10 = *(char **)(ProjectedShadowReceivers + 8);
    v380 = v9;
    for ( v402[0] = v10; v9 != v10; v380 = v9 )
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
        v9 = (char *)v380;
        v10 = (char *)v402[0];
      }
      v9 += 8;
    }
  }
  v17 = 0;
LABEL_20:
  v18 = v377;
  v19 = 0xFFFFFFFFLL;
  lpMem = 0LL;
  v20 = 64LL;
  v21 = v377[1];
  v22 = *v377;
  if ( *v377 != v21 )
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
    memcpy_0(lpMem, *((const void **)v377 + 2), *v377);
    operator delete(*((void **)v377 + 2));
    v22 = *v377;
    *((_QWORD *)v377 + 2) = v26;
    v18[1] = v23;
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_29:
  v29 = v378;
  if ( (*((_BYTE *)v378 + 94) & 8) != 0 || *((char *)v378 + 88) >= 0 )
    goto LABEL_656;
  if ( v403[0] )
  {
    if ( !*((_BYTE *)v403[0] + 32) )
    {
      v30 = *((_QWORD *)v378 + 2);
      if ( v30 )
      {
        v20 = *((_QWORD *)v378 + 28);
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
                if ( (struct CVisualTree *)v36[4] == v403[0] )
                  break;
                v36 = (__int64 *)*v36;
                if ( v36 == (__int64 *)v20 )
                  goto LABEL_53;
              }
              if ( v36 != (__int64 *)224 && (v37[2] & 4) != 0 && v37[27] == *(_QWORD *)(v30 + 384) )
              {
LABEL_656:
                v366 = *v18;
                if ( *v18 )
                  *v18 = --v366;
                v120 = v18[1];
                v380 = 0LL;
                if ( v366 == v120 )
                {
                  v367 = 2LL * v120;
                  if ( v367 > 0xFFFFFFFF )
                    goto LABEL_670;
                  if ( (unsigned int)v367 <= 0x40 )
                    LODWORD(v367) = 64;
                  v368 = HrMalloc(1uLL, (unsigned int)v367, &v380);
                  if ( v368 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v369, 0LL, 0, v368, 0x53u, 0LL);
                    v138 = v380;
                    if ( v380 )
                      goto LABEL_669;
LABEL_667:
                    *v383 = 0;
                    goto LABEL_417;
                  }
                  v370 = v380;
                  memcpy_0(v380, *((const void **)v18 + 2), *v18);
                  operator delete(*((void **)v18 + 2));
                  v366 = *v18;
                  *((_QWORD *)v18 + 2) = v370;
                  v18[1] = v367;
                }
                *(_BYTE *)(v366 + *((_QWORD *)v18 + 2)) = 0;
                v371 = v18[6];
                v372 = *v18 + 1;
                *v18 = v372;
                if ( v371 <= v372 )
                  v371 = v372;
                v18[6] = v371;
                goto LABEL_667;
              }
            }
          }
        }
      }
    }
  }
LABEL_53:
  if ( (unsigned int)((__int64)(*((_QWORD *)v378 + 36) - *((_QWORD *)v378 + 35)) >> 4)
    || (unsigned int)((__int64)(*((_QWORD *)v378 + 39) - *((_QWORD *)v378 + 38)) >> 4) )
  {
    v38 = v402;
    v402[0] = (void *)0x100000000LL;
    v380 = v402;
    while ( 1 )
    {
      v39 = *(_DWORD *)v38;
      v40 = 0;
      v384 = 0;
      v379 = v39;
      if ( (unsigned int)CVisual::GetLightsCount(v29, v39) )
        break;
LABEL_90:
      v38 = (void **)((char *)v380 + 4);
      v380 = v38;
      if ( v38 == &v402[1] )
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
      v45 = (unsigned int *)((char *)v376 + 448);
      LODWORD(v406[0]) = 9;
      v406[1] = (__int64)v29;
      lpMem = 0LL;
      v46 = *((_DWORD *)v376 + 113);
      v47 = *((unsigned int *)v376 + 112);
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
        v39 = v379;
LABEL_87:
        if ( v4 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v4, 0x1DCCu, 0LL);
          v18 = v377;
          goto LABEL_417;
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
          memcpy_0(lpMem, *((const void **)v376 + 58), (unsigned int)v52);
          operator delete(*((void **)v376 + 58));
          v47 = *v45;
          *((_QWORD *)v376 + 58) = v53;
          v45[1] = v48;
LABEL_75:
          v51 = 0;
          *(_OWORD *)(*((_QWORD *)v45 + 2) + 16 * v47) = *(_OWORD *)v406;
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
      v39 = v379;
      v56 = (char *)v376 + 672;
      *(_QWORD *)v404 = v43;
      *(_DWORD *)&v404[8] = v379;
      v57 = *((unsigned int *)v376 + 174);
      v58 = v57 + 1;
      if ( (int)v57 + 1 >= (unsigned int)v57 )
      {
        v4 = 0;
        if ( v58 <= *((_DWORD *)v376 + 173) )
        {
          *(_OWORD *)(*(_QWORD *)v56 + 16 * v57) = *(_OWORD *)v404;
          *((_DWORD *)v56 + 6) = v58;
LABEL_108:
          (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)v43 + 8LL))(v43);
          goto LABEL_109;
        }
        v84 = DynArrayImpl<0>::AddMultipleAndSet(v56, 16LL, 1LL, v404);
        v4 = v84;
        if ( v84 >= 0 )
          goto LABEL_108;
        MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0, v84, 0xC3u, 0LL);
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
        MilInstrumentationCheckHR_MaybeFailFast(v83, 0LL, 0, v4, 0x23A2u, 0LL);
        CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)v45, 0LL);
        goto LABEL_87;
      }
LABEL_88:
      v40 = v384;
LABEL_89:
      v384 = ++v40;
      if ( v40 >= (unsigned int)CVisual::GetLightsCount(v29, v39) )
        goto LABEL_90;
    }
  }
LABEL_91:
  v63 = (char *)v376 + 912;
  v64 = *(_DWORD **)(*((_QWORD *)v376 + 114) + 8LL * (unsigned int)(*((_DWORD *)v376 + 234) - 1));
  v65 = *(_QWORD *)v29;
  v380 = v64;
  v66 = (_DWORD *)(*(__int64 (__fastcall **)(CVisual *, __int64, __int64))(v65 + 160))(v29, v19, v20);
  v68 = v66;
  if ( !v66 || v66 == v64 )
  {
LABEL_126:
    v88 = v376;
    goto LABEL_127;
  }
  v67 = v376;
  v380 = v66;
  *(_DWORD *)v404 = 10;
  *(_QWORD *)&v404[8] = v29;
  v69 = *((_DWORD *)v376 + 113);
  v70 = *((unsigned int *)v376 + 112);
  v402[0] = 0LL;
  if ( (_DWORD)v70 != v69 )
    goto LABEL_100;
  v71 = 2LL * v69;
  if ( v71 > 0xFFFFFFFF )
  {
    v74 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, -2147024362, 0x4Cu, 0LL);
LABEL_672:
    ModuleFailFastForHRESULT((unsigned int)v74, retaddr, v67);
  }
  if ( (unsigned int)v71 <= 0x40 )
    LODWORD(v71) = 64;
  v72 = HrMalloc(0x10uLL, (unsigned int)v71, v402);
  v74 = v72;
  if ( v72 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0x53u, 0LL);
  }
  else
  {
    v75 = 16LL * *((unsigned int *)v376 + 112);
    if ( v75 <= 0xFFFFFFFF )
    {
      v76 = v402[0];
      memcpy_0(v402[0], *((const void **)v376 + 58), (unsigned int)v75);
      operator delete(*((void **)v376 + 58));
      v67 = v376;
      v70 = *((unsigned int *)v376 + 112);
      *((_QWORD *)v376 + 58) = v76;
      *((_DWORD *)v67 + 113) = v71;
LABEL_100:
      v74 = 0;
      *(_OWORD *)(*((_QWORD *)v67 + 58) + 16 * v70) = *(_OWORD *)v404;
      v77 = *((_DWORD *)v67 + 118);
      v78 = *((_DWORD *)v67 + 112) + 1;
      *((_DWORD *)v67 + 112) = v78;
      if ( v77 <= v78 )
        v77 = v78;
      *((_DWORD *)v67 + 118) = v77;
      goto LABEL_103;
    }
    v74 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v376, 0LL, 0, -2147024362, 0x55u, 0LL);
  }
  v86 = v402[0];
  if ( v402[0] )
  {
    v87 = GetProcessHeap();
    HeapFree(v87, 0, v86);
  }
LABEL_103:
  if ( v74 < 0 )
    goto LABEL_672;
  v79 = *((unsigned int *)v63 + 6);
  v402[0] = v68;
  v80 = v79 + 1;
  if ( (int)v79 + 1 < (unsigned int)v79 )
  {
    v81 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v78, 0LL, 0, -2147024362, 0xB8u, 0LL);
    goto LABEL_674;
  }
  if ( v80 > *((_DWORD *)v63 + 5) )
  {
    v89 = DynArrayImpl<0>::AddMultipleAndSet(v63, 8LL, 1LL, v402);
    v81 = v89;
    if ( v89 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v90, 0LL, 0, v89, 0xC3u, 0LL);
LABEL_674:
      ModuleFailFastForHRESULT(v81, retaddr, v82);
    }
  }
  else
  {
    *(void **)(*(_QWORD *)v63 + 8 * v79) = v402[0];
    *((_DWORD *)v63 + 6) = v80;
  }
  if ( !g_HeatMaps_TargetProcessId )
    goto LABEL_126;
  v7 = g_HeatMaps_TargetProcessId == v68[32];
  v88 = v376;
  if ( v7 )
    CDrawingContext::SetHeatMapForCurrentNode(v376);
LABEL_127:
  v91 = v383;
  *v383 = 1;
  if ( (*((_BYTE *)v29 + 93) & 0x60) != 0 )
  {
    CVisual::GetHeatMapProperties(v29, v409);
    v92 = *((_QWORD *)v88 + 4) + 1104LL;
    v93 = (*((_BYTE *)v29 + 93) & 0x20) != 0;
    *(_OWORD *)&v404[4] = *(_OWORD *)v409;
    *(_DWORD *)v404 = 2 - v93;
    v405 = *(_DWORD *)&v409[16];
    v94 = CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::Push(v92, v404);
    v4 = v94;
    if ( v94 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v94, 0x1DF5u, 0LL);
LABEL_130:
      v18 = v377;
      goto LABEL_417;
    }
  }
  v96 = *((_DWORD *)v29 + 24);
  if ( (_BYTE)v96 )
  {
    *(_DWORD *)v409 = (unsigned __int8)v96;
    *(_DWORD *)&v409[16] = (v96 >> 8) & 3;
    v97 = v96;
    *(_DWORD *)&v409[12] = (v96 >> 14) & 0x1F;
    v98 = (_DWORD *)(*((_QWORD *)v88 + 4) + 1104LL);
    *(_DWORD *)&v409[4] = (int)(v97 << 18) >> 28;
    *(_DWORD *)&v409[8] = *((_DWORD *)v29 + 47);
    if ( *v98 && *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() == 2 )
      *(_DWORD *)&v409[20] = 0;
    else
      *(_DWORD *)&v409[20] = *((_DWORD *)v29 + 48);
    *(_QWORD *)&v409[24] = *(_QWORD *)((char *)v29 + 196);
    v99 = CDrawingContext::PushRenderOptionsInternal(v88, v29, (const struct MilRenderOptions *)v409, 1);
    v4 = v99;
    if ( v99 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v100, 0LL, 0, v99, 0x1E07u, 0LL);
      goto LABEL_130;
    }
  }
  v101 = *((_DWORD *)v88 + 120);
  if ( v101 )
    v102 = (void *)(*((_QWORD *)v88 + 62) + 68LL * (unsigned int)(v101 - 1));
  else
    v102 = &CMILMatrix::Identity;
  Bounds = (float *)CVisual::GetBounds(v29, *((_QWORD *)v88 + 757), v67, v102);
  CMILMatrix::Transform3DBoundsHelper<1>(v104, Bounds, &v407);
  if ( v407.m128_f32[2] > v407.m128_f32[0] && v407.m128_f32[3] > v407.m128_f32[1] )
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
      v407.m128_f32[3] = v407.m128_f32[3] + v106;
      v407.m128_f32[0] = v407.m128_f32[0] - v106;
      v407.m128_f32[1] = v407.m128_f32[1] - v106;
      v407.m128_f32[2] = v407.m128_f32[2] + v106;
      *(float *)&v408 = *(float *)&v408 + 0.0;
      *((float *)&v408 + 1) = *((float *)&v408 + 1) + 0.0;
    }
  }
  lpMem = (char *)v88 + 1008;
  CScopedClipStack::GetClipBoundsWorld((__int64)v88 + 1008, (__int64)v406);
  *(_OWORD *)v409 = *(_OWORD *)v406;
  *(_QWORD *)&v409[16] = v408;
  TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
    &v407,
    v409);
  v107 = v407.m128_f32[0];
  v108 = v407.m128_f32[2];
  v109 = v407.m128_f32[1];
  v110 = v407.m128_f32[3];
  *(__m128 *)v406 = v407;
  if ( v407.m128_f32[2] <= v407.m128_f32[0] || v407.m128_f32[3] <= v407.m128_f32[1] )
  {
    v18 = v377;
    v119 = *v377;
    if ( *v377 )
      *v377 = --v119;
    v120 = v18[1];
    v380 = 0LL;
    if ( v119 != v120 )
      goto LABEL_648;
    v121 = 2LL * v120;
    if ( v121 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v121 <= 0x40 )
        LODWORD(v121) = 64;
      v362 = HrMalloc(1uLL, (unsigned int)v121, &v380);
      if ( v362 >= 0 )
      {
        v124 = v380;
        goto LABEL_647;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v363, 0LL, 0, v362, 0x53u, 0LL);
      v138 = v380;
      goto LABEL_653;
    }
LABEL_670:
    MilInstrumentationCheckHR_MaybeFailFast(v120, 0LL, 0, -2147024362, 0x4Cu, 0LL);
    *v383 = 0;
    goto LABEL_417;
  }
  v111 = v403[0];
  if ( !*((_BYTE *)v88 + 6347) )
    goto LABEL_211;
  if ( *((_BYTE *)v403[0] + 32) )
  {
    v112 = (char *)v29 + 328;
  }
  else
  {
    v125 = *((_QWORD *)v29 + 28);
    if ( *(int *)v125 >= 0 )
      goto LABEL_186;
    v126 = *(unsigned int *)(v125 + 4);
    v127 = (_BYTE *)(v125 + 8);
    for ( k = 0; k < (unsigned int)v126; ++v127 )
    {
      if ( *v127 == 1 )
        break;
      ++k;
    }
    v129 = k >= (unsigned int)v126 ? 0LL : (_QWORD **)(v126 + 15 + v125 + 8LL * k - (((_BYTE)v126 + 15) & 7));
    v130 = *v129;
    if ( !*v129 )
      goto LABEL_186;
    v131 = (_QWORD *)*v130;
    if ( (_QWORD *)*v130 == v130 )
      goto LABEL_186;
    while ( 1 )
    {
      v112 = (char *)(v131 - 28);
      if ( (struct CVisualTree *)v131[4] == v403[0] )
        break;
      v131 = (_QWORD *)*v131;
      if ( v131 == v130 )
        goto LABEL_186;
    }
  }
  if ( v112 )
  {
    v113 = *((_QWORD *)v112 + 4);
    if ( v113
      || (v113 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v112 + 3) + 368LL))(*((_QWORD *)v112 + 3)),
          (*((_QWORD *)v112 + 4) = v113) != 0LL) )
    {
      v114 = *(unsigned int *)(v113 + 12);
      if ( v108 <= v107
        || v110 <= v109
        || (v115 = *(_QWORD *)(*((_QWORD *)v88 + 784) + 400LL),
            v402[0] = (void *)__PAIR64__(LODWORD(v109), LODWORD(v107)),
            v402[1] = (void *)__PAIR64__(LODWORD(v110), LODWORD(v108)),
            (*(unsigned __int8 (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)v115 + 56LL))(v115, v402, v114)) )
      {
        if ( g_DisplayManager )
        {
          v116 = *((_DWORD *)g_DisplayManager + 18);
          v117 = 0;
          if ( v116 )
          {
            while ( 1 )
            {
              v118 = *(_BYTE **)(*((_QWORD *)g_DisplayManager + 6) + 8LL * v117);
              if ( v118[320] || v118[319] || v118[312] )
                break;
              if ( ++v117 >= v116 )
                goto LABEL_167;
            }
            if ( !*((_QWORD *)v88 + 787) )
              *((_QWORD *)v88 + 787) = v29;
            goto LABEL_186;
          }
        }
LABEL_167:
        v18 = v377;
        v119 = *v377;
        if ( *v377 )
          *v377 = --v119;
        v120 = v18[1];
        v402[0] = 0LL;
        if ( v119 != v120 )
          goto LABEL_648;
        v121 = 2LL * v120;
        if ( v121 <= 0xFFFFFFFF )
        {
          if ( (unsigned int)v121 <= 0x40 )
            LODWORD(v121) = 64;
          v122 = HrMalloc(1uLL, (unsigned int)v121, v402);
          if ( v122 >= 0 )
          {
            v124 = v402[0];
LABEL_647:
            memcpy_0(v124, *((const void **)v18 + 2), *v18);
            operator delete(*((void **)v18 + 2));
            *((_QWORD *)v18 + 2) = v124;
            v18[1] = v121;
            v119 = *v18;
LABEL_648:
            *(_BYTE *)(v119 + *((_QWORD *)v18 + 2)) = 0;
            v364 = *v18 + 1;
            *v18 = v364;
            v365 = v18[6];
            if ( v365 <= v364 )
              v365 = v364;
            v18[6] = v365;
            goto LABEL_651;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v123, 0LL, 0, v122, 0x53u, 0LL);
          v138 = v402[0];
LABEL_653:
          if ( !v138 )
          {
LABEL_651:
            *v383 = 0;
            goto LABEL_417;
          }
LABEL_669:
          v373 = GetProcessHeap();
          HeapFree(v373, 0, v138);
          *v383 = 0;
          goto LABEL_417;
        }
        goto LABEL_670;
      }
    }
  }
LABEL_186:
  if ( !*((_BYTE *)v88 + 6347) )
    goto LABEL_211;
  if ( *((_BYTE *)v111 + 32) )
  {
    v132 = (char *)v29 + 328;
    goto LABEL_189;
  }
  v139 = *((_QWORD *)v29 + 28);
  if ( *(int *)v139 >= 0 )
    goto LABEL_211;
  v140 = *(unsigned int *)(v139 + 4);
  v141 = (_BYTE *)(v139 + 8);
  for ( m = 0; m < (unsigned int)v140; ++v141 )
  {
    if ( *v141 == 1 )
      break;
    ++m;
  }
  v143 = m >= (unsigned int)v140 ? 0LL : (_QWORD **)(v139 + v140 + 15 + 8LL * m - (((_BYTE)v140 + 15) & 7));
  v144 = *v143;
  if ( !*v143 || (v145 = (_QWORD *)*v144, (_QWORD *)*v144 == v144) )
  {
LABEL_211:
    CDrawingContext::GetEffects(v88, v29, v111, (struct CDrawingContext::NodeEffects *)&v386);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)v387) & _xmm) < 0.0000011920929
      || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v388) & _xmm) < 0.0000011920929 )
    {
      if ( !g_DisplayManager || (v147 = 0, !*((_DWORD *)g_DisplayManager + 18)) )
      {
LABEL_218:
        *v91 = 0;
        goto LABEL_416;
      }
      v148 = *((_QWORD *)g_DisplayManager + 6);
      while ( !CDisplay::NeedsDesktopMoves(*(CDisplay **)(v148 + 8LL * v147)) )
      {
        v147 = v149 + 1;
        if ( v147 >= v150 )
          goto LABEL_218;
      }
      CVisual::ClearAllMoveTransformsInSubtree(v29);
      if ( !*((_QWORD *)v88 + 787) )
        *((_QWORD *)v88 + 787) = v29;
    }
    v151 = (char *)&v393 + 4;
    v152 = v403[0];
    v153 = -2003292412;
    v154 = (CVisual *)*((_QWORD *)v88 + 417);
    if ( !(_BYTE)v400 )
      v151 = 0LL;
    v402[0] = v151;
    if ( *((_BYTE *)v403[0] + 32) )
    {
      v155 = (_QWORD *)((char *)v154 + 328);
    }
    else
    {
      v164 = *((_QWORD *)v154 + 28);
      if ( *(int *)v164 >= 0 )
        goto LABEL_282;
      v165 = *(unsigned int *)(v164 + 4);
      v166 = (_BYTE *)(v164 + 8);
      for ( n = 0; n < (unsigned int)v165; ++v166 )
      {
        if ( *v166 == 1 )
          break;
        ++n;
      }
      v168 = n >= (unsigned int)v165 ? 0LL : (_QWORD **)(v164 + v165 + 15 + 8LL * n - (((_BYTE)v165 + 15) & 7));
      v146 = *v168;
      if ( !*v168 )
        goto LABEL_282;
      v169 = (_QWORD *)*v146;
      if ( (_QWORD *)*v146 == v146 )
        goto LABEL_282;
      while ( 1 )
      {
        v155 = v169 - 28;
        if ( (struct CVisualTree *)v169[4] == v403[0] )
          break;
        v169 = (_QWORD *)*v169;
        if ( v169 == v146 )
          goto LABEL_282;
      }
    }
    if ( !v155 )
    {
LABEL_282:
      v181 = 0;
      goto LABEL_283;
    }
    v156 = (_DWORD *)*((_QWORD *)v154 + 28);
    v157 = 0;
    v153 = 0;
    v158 = 0LL;
    v159 = *(_QWORD *)(*((_QWORD *)v154 + 2) + 384LL);
    if ( (*v156 & 0x800000) != 0 )
    {
      v160 = (unsigned int)v156[1];
      v161 = v156 + 2;
      for ( ii = 0; ii < (unsigned int)v160; ++v161 )
      {
        if ( *v161 == 9 )
          break;
        ++ii;
      }
      v163 = ii >= (unsigned int)v160
           ? 0LL
           : (_QWORD **)((char *)v156 + v160 + 8LL * ii - (((_BYTE)v160 + 15) & 7) + 15);
      v146 = *v163;
      if ( *v163 )
      {
        v170 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v146 + 192LL))(*v146);
        if ( !v170 || (v155[2] & 4) != 0 && v155[27] == v159 )
        {
          v152 = v403[0];
        }
        else
        {
          v157 = 1;
          TreeData = CVisual::FindTreeData(v170, v403[0]);
          v152 = v403[0];
          v158 = TreeData;
          if ( TreeData )
            goto LABEL_269;
        }
      }
    }
    if ( v154 != *((CVisual **)v152 + 3) )
    {
      v158 = 0LL;
      v172 = *((_QWORD *)v154 + 10);
      if ( *((_BYTE *)v152 + 32) )
      {
        v158 = (__int64 **)(v172 + 328);
      }
      else
      {
        v173 = *(_QWORD *)(v172 + 224);
        if ( *(int *)v173 < 0 )
        {
          v146 = (_QWORD *)*(unsigned int *)(v173 + 4);
          v174 = (_BYTE *)(v173 + 8);
          for ( jj = 0LL; (unsigned int)jj < (unsigned int)v146; ++v174 )
          {
            if ( *v174 == 1 )
              break;
            jj = (unsigned int)(jj + 1);
          }
          if ( (unsigned int)jj >= (unsigned int)v146 )
          {
            v176 = 0LL;
          }
          else
          {
            v146 = (_QWORD *)((char *)v146 + 15);
            v176 = (_QWORD **)((char *)v146 + v173 + 8 * jj - ((unsigned __int8)v146 & 7));
          }
          v177 = *v176;
          if ( v177 )
          {
            v178 = (_QWORD *)*v177;
            if ( (_QWORD *)*v177 != v177 )
            {
              while ( 1 )
              {
                LODWORD(v146) = (_DWORD)v178 - 224;
                if ( (struct CVisualTree *)v178[4] == v152 )
                  break;
                v178 = (_QWORD *)*v178;
                if ( v178 == v177 )
                  goto LABEL_268;
              }
              v158 = (__int64 **)(v178 - 28);
            }
          }
        }
      }
    }
LABEL_268:
    if ( !v158 )
    {
      v179 = 1LL;
LABEL_271:
      if ( v155[15] < v179 )
      {
        updated = CVisual::UpdateWorldTransform(
                    v154,
                    (CVisual **)v152,
                    (struct CTreeData *)v155,
                    v157,
                    (const struct CTreeData *)v158);
        v153 = updated;
        if ( updated < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v146, 0LL, 0, updated, 0x80Bu, 0LL);
      }
      if ( v153 >= 0 )
      {
        if ( !v155[15] )
        {
          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v146, 0LL, 0, -2003292412, 0x65u, 0LL);
          v153 = -2003292412;
          MilInstrumentationCheckHR_MaybeFailFast(v183, 0LL, 0, -2003292412, 0x76Fu, 0LL);
          v4 = -2003292412;
          goto LABEL_280;
        }
        v146 = v402[0];
        v389 = *(_OWORD *)(v155 + 5);
        v390 = *(_OWORD *)(v155 + 7);
        v391 = *(_OWORD *)(v155 + 9);
        v392 = *(_OWORD *)(v155 + 11);
        LODWORD(v393) = *((_DWORD *)v155 + 26);
        v181 = (v155[2] & 2) != 0;
        if ( v402[0] )
        {
          v182 = v155[14];
          *(_OWORD *)v402[0] = *(_OWORD *)v182;
          *((_OWORD *)v146 + 1) = *(_OWORD *)(v182 + 16);
          *((_OWORD *)v146 + 2) = *(_OWORD *)(v182 + 32);
          *((_OWORD *)v146 + 3) = *(_OWORD *)(v182 + 48);
          *((_DWORD *)v146 + 16) = *(_DWORD *)(v182 + 64);
        }
        v88 = v376;
        v153 = 0;
        v152 = v403[0];
LABEL_283:
        v4 = v153;
        if ( v153 >= 0 )
        {
          v29 = v378;
          if ( v181 || *((CVisual **)v152 + 3) == v378 )
          {
            if ( !*((_BYTE *)v88 + 6132) )
              CMILMatrix::Multiply((CMILMatrix *)&v389, (struct CDrawingContext *)((char *)v88 + 6064));
            v184 = CDrawingContext::PushTransformInternal(v88, v378, (const struct CMILMatrix *)&v389, 0, 1);
            v4 = v184;
            if ( v184 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v185, 0LL, 0, v184, 0x1E98u, 0LL);
              goto LABEL_416;
            }
          }
          else if ( !*((_BYTE *)v88 + 6132) )
          {
            CDrawingContext::GetWorldTransform(v88, (struct CMILMatrix *)&v389);
          }
          if ( (_BYTE)v400 && !*((_BYTE *)v88 + 6132) )
            CMILMatrix::Multiply((CMILMatrix *)((char *)&v393 + 4), (struct CDrawingContext *)((char *)v88 + 6064));
          v186 = v378;
          v187 = 0;
          v188 = 0;
          if ( !*((_QWORD *)v378 + 31) )
            goto LABEL_350;
          if ( SBYTE1(v399) >> 6 )
          {
            v189 = SBYTE1(v399) >> 6 == 1;
          }
          else
          {
            v189 = 0;
            v190 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v394 + 1) - 0.0)) & _xmm);
            if ( v190 < 0.000081380211 )
            {
              v191 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v395 + 1) - 0.0)) & _xmm);
              if ( v191 < 0.000081380211 )
              {
                v192 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v397 + 1) - 0.0)) & _xmm);
                if ( v192 < 0.000081380211 )
                  goto LABEL_308;
              }
              if ( v190 < 0.000081380211 )
              {
                v193 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v395 + 1) - 0.0)) & _xmm);
                if ( v193 < 0.000081380211 )
                {
                  v194 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v395 + 3) - 0.0)) & _xmm);
                  if ( v194 < 0.000081380211 )
                  {
                    v195 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v396 - 0.0)) & _xmm);
                    if ( v195 < 0.000081380211 )
                    {
                      v196 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v396 + 1) - 0.0)) & _xmm);
                      if ( v196 < 0.000081380211
                        || (v197 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v396 + 1) - 1.0)) & _xmm),
                            v197 < 0.000081380211) )
                      {
                        v198 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v396 + 2) - 0.0)) & _xmm);
                        if ( v198 < 0.000081380211 )
                        {
                          v199 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v397 + 1) - 0.0)) & _xmm);
                          if ( v199 < 0.000081380211 )
                          {
LABEL_308:
                            v200 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v394 + 2)) & _xmm);
                            v201 = (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v395 + 2)) & _xmm)
                                         * 61440.0)
                                 + (float)(v200 * 61440.0);
                            v202 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v398) & _xmm);
                            v203 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)(v201 + v202) - 1.0)) & _xmm);
                            v189 = v203 < 0.000081380211;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            BYTE1(v399) = BYTE1(v399) & 0x3F | ((v189 << 7) - 64);
          }
          if ( !v189
            || (v204 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v394 - 0.0)) & _xmm),
                v204 >= 0.000081380211)
            || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v394 + 3) - 0.0)) & _xmm) >= 0.000081380211 )
          {
            if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v393 + 1) - 0.0)) & _xmm) >= 0.000081380211
              || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v395 - 0.0)) & _xmm) >= 0.000081380211 )
            {
LABEL_350:
              if ( (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v186 + 48LL))(v186, 175LL)
                && (**((_DWORD **)v186 + 28) & 0x8000) != 0 )
              {
                Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*((_QWORD *)v186 + 28), 17LL);
                v221 = *(unsigned int *)(v220 + 4);
                v222 = Slot >= (unsigned int)v221
                     ? 0LL
                     : (_QWORD *)(v221 + 15 + v220 + 8LL * Slot - (((_BYTE)v221 + 15) & 7));
                if ( *v222 && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v222 + 232LL))(*v222) )
                  v187 = 5;
              }
              if ( HIBYTE(v400) )
                v187 = 5;
              v223 = v403[0];
              v224 = 0LL;
              v225 = *((_BYTE *)v403[0] + 32);
              if ( v225 )
              {
                v224 = (char *)v186 + 328;
              }
              else
              {
                v226 = *((_QWORD *)v186 + 28);
                if ( *(int *)v226 < 0 )
                {
                  v227 = *(unsigned int *)(v226 + 4);
                  v228 = (_BYTE *)(v226 + 8);
                  for ( kk = 0; kk < (unsigned int)v227; ++v228 )
                  {
                    if ( *v228 == 1 )
                      break;
                    ++kk;
                  }
                  v230 = kk >= (unsigned int)v227
                       ? 0LL
                       : (_QWORD **)(v226 + v227 + 15 + 8LL * kk - (((_BYTE)v227 + 15) & 7));
                  v231 = *v230;
                  if ( v231 )
                  {
                    v232 = (_QWORD *)*v231;
                    if ( (_QWORD *)*v231 != v231 )
                    {
                      while ( (struct CVisualTree *)v232[4] != v403[0] )
                      {
                        v232 = (_QWORD *)*v232;
                        if ( v232 == v231 )
                          goto LABEL_376;
                      }
                      v224 = (char *)(v232 - 28);
                    }
                  }
                }
              }
LABEL_376:
              if ( v186 != *((CVisual **)v403[0] + 3) && !v225 )
              {
                v233 = *(_QWORD *)(*((_QWORD *)v186 + 10) + 224LL);
                if ( *(int *)v233 < 0 )
                {
                  v234 = *(unsigned int *)(v233 + 4);
                  v235 = (_BYTE *)(v233 + 8);
                  for ( mm = 0; mm < (unsigned int)v234; ++v235 )
                  {
                    if ( *v235 == 1 )
                      break;
                    ++mm;
                  }
                  if ( mm >= (unsigned int)v234 )
                    v237 = 0LL;
                  else
                    v237 = (__int64 ****)(v234 + 15 + v233 + 8LL * mm - (((_BYTE)v234 + 15) & 7));
                  v238 = *v237;
                  if ( *v237 )
                  {
                    for ( nn = *v238; nn != (__int64 **)v238; nn = (__int64 **)*nn )
                    {
                      if ( nn[4] == (__int64 *)v403[0] )
                        break;
                    }
                  }
                }
              }
              v240 = v187;
              LOBYTE(v374) = v188;
              v29 = v378;
              v241 = CCpuClippingData::Update(v224 + 136, v403[0], v378, v240, v374);
              v379 = v241;
              v4 = v241;
              if ( v241 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v243, 0LL, 0, v241, 0x872u, 0LL);
              if ( v4 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v243, 0LL, 0, v4, 0x1EE7u, 0LL);
                goto LABEL_416;
              }
              v244 = 0LL;
              if ( *((_BYTE *)v223 + 32) )
              {
                v244 = (char *)v378 + 328;
              }
              else
              {
                v245 = *((_QWORD *)v378 + 28);
                if ( *(int *)v245 < 0 )
                {
                  v246 = *(unsigned int *)(v245 + 4);
                  v247 = (_BYTE *)(v245 + 8);
                  for ( i1 = 0; i1 < (unsigned int)v246; ++v247 )
                  {
                    if ( *v247 == 1 )
                      break;
                    ++i1;
                  }
                  v242 = i1 >= (unsigned int)v246
                       ? 0LL
                       : (const struct Windows::Foundation::Numerics::float4x4 *)(v245
                                                                                + v246
                                                                                + 15
                                                                                + 8LL * i1
                                                                                - (((_BYTE)v246 + 15) & 7));
                  v249 = *(_QWORD **)v242;
                  if ( *(_QWORD *)v242 )
                  {
                    v250 = (_QWORD *)*v249;
                    if ( (_QWORD *)*v249 != v249 )
                    {
                      while ( (struct CVisualTree *)v250[4] != v223 )
                      {
                        v250 = (_QWORD *)*v250;
                        if ( v250 == v249 )
                          goto LABEL_407;
                      }
                      v244 = (char *)(v250 - 28);
                    }
                  }
                }
              }
LABEL_407:
              Blink = *((_DWORD *)v244 + 34);
              if ( *((_QWORD *)v88 + 45) || *((_QWORD *)v88 + 787) )
                goto LABEL_428;
              if ( Blink != 5 )
              {
                if ( Blink != 4 )
                {
                  if ( Blink == 3 )
                  {
                    v256 = CDrawingContext::PushClippingScope(v88, (__int64)v378, 1, (__int64)&v393 + 4, (__int64)v404);
                    v4 = v256;
                    if ( v256 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v257, 0LL, 0, v256, 0x1F07u, 0LL);
                      goto LABEL_416;
                    }
                    v379 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v88, (_DWORD)v378, (unsigned int)v404, 0, 1);
                    v4 = v379;
                    if ( v379 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v258, 0LL, 0, v379, 0x1F0Au, 0LL);
                      goto LABEL_416;
                    }
                  }
                  goto LABEL_428;
                }
                if ( !(_BYTE)v400 )
                {
LABEL_429:
                  if ( !*(_WORD *)((char *)&v400 + 1)
                    && __PAIR16__(HIBYTE(v400), 0) == v401
                    && !*(_QWORD *)&v387[4]
                    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v388 - 1.0)) & _xmm) < 0.0000011920929 )
                  {
LABEL_457:
                    if ( *((_QWORD *)v88 + 45) )
                      goto LABEL_545;
                    if ( *((_QWORD *)v88 + 787) )
                      goto LABEL_634;
                    if ( ((Blink - 2) & 0xFFFFFFFD) != 0 )
                    {
LABEL_545:
                      if ( !*((_QWORD *)v88 + 787) )
                      {
                        if ( *((_BYTE *)v88 + 6348) )
                          CDrawingContext::UpdateMoveOptimizations(v88, v242, v406);
                        v324 = (unsigned int *)((char *)v88 + 3480);
                        v325 = 0LL;
                        v326 = *((_DWORD *)v88 + 870);
                        if ( v326 )
                          v325 = *((_QWORD *)v88 + 437) + 16LL * (unsigned int)(v326 - 1);
                        v381 = *(_BYTE *)(v325 + 8);
                        v327 = Windows::Foundation::Numerics::determinant((Windows::Foundation::Numerics *)&v389, v242);
                        v328 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v327 - 0.0)) & _xmm);
                        if ( v328 >= 0.00000011920929 && _finite((float)(1.0 / v327)) )
                          v329 = v327 < 0.0 == (float)((float)((float)((float)((float)(*((float *)&v389 + 1)
                                                                                     * *((float *)&v390 + 3))
                                                                             - (float)(*((float *)&v389 + 3)
                                                                                     * *((float *)&v390 + 1)))
                                                                     * *(float *)&v392)
                                                             + (float)((float)((float)(*((float *)&v389 + 3)
                                                                                     * *(float *)&v390)
                                                                             - (float)(*(float *)&v389
                                                                                     * *((float *)&v390 + 3)))
                                                                     * *((float *)&v392 + 1)))
                                                     + (float)((float)((float)(*(float *)&v389 * *((float *)&v390 + 1))
                                                                     - (float)(*((float *)&v389 + 1) * *(float *)&v390))
                                                             * *((float *)&v392 + 3))) < 0.0;
                        else
                          v329 = (float)((float)(*(float *)&v389 * *((float *)&v390 + 1))
                                       - (float)(*((float *)&v389 + 1) * *(float *)&v390)) > 0.0;
                        v330 = v378;
                        if ( (**((_DWORD **)v378 + 28) & 0x200000) == 0 )
                        {
                          v331 = *((_DWORD *)v378 + 25);
                          v332 = v385 && *((_DWORD *)v385 + 25) == 1;
                          v333 = *((_QWORD *)v378 + 9);
                          if ( (v333 & 2) != 0 )
                            v333 = *(_QWORD *)(v333 & 0xFFFFFFFFFFFFFFFCuLL);
                          else
                            LODWORD(v333) = v333 & 1;
                          v334 = (*(__int64 (**)(void))(*(_QWORD *)v378 + 216LL))();
                          if ( v331 == 1 )
                            goto LABEL_566;
                          if ( !v332 )
                            goto LABEL_569;
                          if ( !(_DWORD)v333 )
                          {
LABEL_566:
                            if ( !v332 || !v334 )
                            {
LABEL_569:
                              v337 = v376;
                              if ( !*((_QWORD *)v376 + 45)
                                && !*((_QWORD *)v376 + 787)
                                && (**((_DWORD **)v378 + 28) & 0x100000) != 0 )
                              {
                                WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal(v378);
                                if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 356) )
                                {
                                  CScopedClipStack::GetClipBoundsWorld((__int64)lpMem, (__int64)v404);
                                  TopByReference = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)v337 + 480));
                                  CMILMatrix::Transform3DBoundsHelper<0>(
                                    (__int64)TopByReference,
                                    (float *)WindowBackgroundTreatmentInternal + 36,
                                    (__m128 *)v409);
                                  if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                                                          v404,
                                                          v409) )
                                  {
                                    v340 = 1;
                                    v341 = *((_BYTE *)WindowBackgroundTreatmentInternal + 359);
                                    if ( *((_BYTE *)WindowBackgroundTreatmentInternal + 357)
                                      || !CWindowBackgroundTreatment::HasValidSource(
                                            WindowBackgroundTreatmentInternal,
                                            *((const struct IRenderTarget **)v376 + 44)) )
                                    {
                                      ImageSourceForEffectInput = CWindowBackgroundTreatment::GenerateImageSourceForEffectInput(
                                                                    (struct D2D_RECT_F *)WindowBackgroundTreatmentInternal,
                                                                    v376);
                                      v379 = ImageSourceForEffectInput;
                                      v4 = ImageSourceForEffectInput;
                                      v340 = v341 == 0;
                                      if ( ImageSourceForEffectInput < 0 )
                                      {
                                        MilInstrumentationCheckHR_MaybeFailFast(
                                          v343,
                                          0LL,
                                          0,
                                          ImageSourceForEffectInput,
                                          0x1F94u,
                                          0LL);
                                        v29 = v378;
                                        goto LABEL_416;
                                      }
                                    }
                                    if ( v341 )
                                    {
                                      FRAME_TIME_INFO::NotifyWindowBackgroundTreatmentCacheHitOrMiss(
                                        *(FRAME_TIME_INFO **)(*((_QWORD *)v376 + 4) + 376LL),
                                        v340);
                                      if ( !v340 )
                                        ++dword_180339920;
                                    }
                                    v344 = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)v376 + 480));
                                    CWindowBackgroundTreatment::SetWorldTransform(
                                      WindowBackgroundTreatmentInternal,
                                      v344,
                                      3LL);
                                  }
                                }
                              }
                              v345 = v378;
                              v346 = *((_DWORD *)v378 + 25);
                              v347 = v385 && *((_DWORD *)v385 + 25) == 1;
                              if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v378 + 216LL))(v378) )
                                goto LABEL_596;
                              v348 = (_DWORD *)*((_QWORD *)v345 + 28);
                              if ( (*v348 & 0x200000) == 0 )
                                goto LABEL_595;
                              v349 = (unsigned int)v348[1];
                              v350 = v348 + 2;
                              for ( i2 = 0; i2 < (unsigned int)v349; ++v350 )
                              {
                                if ( *v350 == 11 )
                                  break;
                                ++i2;
                              }
                              v352 = i2 >= (unsigned int)v349
                                   ? 0LL
                                   : (_QWORD *)((char *)v348 + v349 + 8LL * i2 - (((_BYTE)v349 + 15) & 7) + 15);
                              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v352 + 48LL))(
                                     *v352,
                                     56LL) )
                              {
LABEL_596:
                                v353 = 1;
                              }
                              else
                              {
LABEL_595:
                                v353 = 0;
                              }
                              if ( v346 == 1 )
                              {
                                if ( !v347 )
                                {
                                  if ( !(unsigned int)CPtrArrayBase::GetCount((CVisual *)((char *)v345 + 72)) )
                                    goto LABEL_600;
LABEL_608:
                                  v29 = v345;
                                  if ( CVisual::HasBspPolygonList(v345) )
                                  {
                                    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                                      McTemplateU0(
                                        &Microsoft_Windows_Dwm_Core_Provider_Context,
                                        &EVTDESC_P3D_RENDERING_Start);
                                    v357 = CDrawingContext::DrawBspPolygonList(v376, v345, v385);
                                    v4 = v357;
                                    if ( v357 < 0 )
                                    {
                                      MilInstrumentationCheckHR_MaybeFailFast(v358, 0LL, 0, v357, 0x1FF7u, 0LL);
                                    }
                                    else
                                    {
                                      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                                        McTemplateU0(
                                          &Microsoft_Windows_Dwm_Core_Provider_Context,
                                          &EVTDESC_P3D_RENDERING_Stop);
                                      ++*((_DWORD *)v380 + 8);
                                      *v383 = 0;
                                    }
                                  }
                                  goto LABEL_416;
                                }
                                if ( v353 )
                                  goto LABEL_608;
                              }
LABEL_600:
                              v354 = v376;
                              LOBYTE(v375) = 0;
                              if ( *((_DWORD *)v376 + 66) )
                              {
                                v355 = v381;
                                if ( v381 != v329 )
                                {
                                  if ( ((**((_DWORD **)v345 + 28) & 0x200000) != 0
                                     || (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v345 + 216LL))(v345))
                                    && v329 )
                                  {
                                    v356 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::GetTopByReference(v324);
                                    v29 = v345;
                                    if ( *(_BYTE *)(v356 + 8) != v355 )
                                      LOBYTE(v375) = 1;
                                  }
                                  else
                                  {
                                    v29 = v345;
                                  }
                                  goto LABEL_624;
                                }
                                v354 = v376;
                              }
                              v29 = v345;
                              if ( (*(unsigned __int8 (__fastcall **)(CVisual *))(*(_QWORD *)v345 + 256LL))(v345) )
                              {
                                (*(void (__fastcall **)(CVisual *, struct CDrawingContext *, __int64 *))(*(_QWORD *)v345 + 248LL))(
                                  v345,
                                  v354,
                                  &v375);
                                ++*((_DWORD *)v380 + 8);
                              }
                              else if ( (*((_BYTE *)v345 + 95) & 8) != 0 )
                              {
                                if ( *(_BYTE *)(*((_QWORD *)v354 + 4) + 1273LL) )
                                  LOBYTE(v375) = 1;
                                else
                                  *((_BYTE *)v354 + 6354) = 1;
                              }
LABEL_624:
                              if ( HIBYTE(v400)
                                && (*(unsigned __int8 (__fastcall **)(CVisual *, __int64))(*(_QWORD *)v29 + 48LL))(
                                     v29,
                                     91LL)
                                && CLayerVisual::IsAutomaticBoundsToLocalSpaceEnabled(v29) )
                              {
                                Count = CPtrArrayBase::GetCount((CVisual *)((char *)v29 + 72));
                                if ( Count )
                                {
                                  v360 = (struct CComposition **)v376;
                                  do
                                  {
                                    ChildAt = CVisual::GetChildAt(v29, v3);
                                    CDrawingContext::DrawVisual(v360, ChildAt, 0);
                                    ++v3;
                                  }
                                  while ( v3 < Count );
                                  v4 = v379;
                                  *v383 = 0;
                                  goto LABEL_416;
                                }
                              }
                              else if ( !(_BYTE)v375 )
                              {
                                goto LABEL_416;
                              }
                              *v383 = 0;
                              goto LABEL_416;
                            }
                          }
                          v330 = v378;
                        }
                        *(_QWORD *)v404 = v330;
                        v404[8] = v329;
                        v335 = CWatermarkStack<CDrawingContext::StackBackfaceVisibilityEntry,64,2,10>::Push(v324, v404);
                        v379 = v335;
                        v4 = v335;
                        if ( v335 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v336, 0LL, 0, v335, 0x1F71u, 0LL);
                          v29 = v378;
                          goto LABEL_416;
                        }
                        goto LABEL_569;
                      }
LABEL_634:
                      CVisual::ExcludeFromVisibleRegion(v29, v406, v88);
                      goto LABEL_416;
                    }
                    v271 = lpMem;
                    v272 = 0LL;
                    if ( Blink == 2 )
                    {
                      v272 = (__int128 *)(80LL * (unsigned int)(*((_DWORD *)lpMem + 6) - 1) + *(_QWORD *)lpMem + 8LL);
                    }
                    else if ( Blink == 4 )
                    {
                      v272 = &v389;
                    }
                    v273 = v376;
                    v4 = 0;
                    v274 = 0;
                    v275 = 0;
                    if ( *((_DWORD *)v376 + 158) )
                    {
                      v276 = (char *)v376 + 608;
                      while ( 1 )
                      {
                        v277 = CD2DLayer::ApplyState(*(CD2DLayer **)(*(_QWORD *)v276 + 8LL * v275), v273);
                        v4 = v277;
                        if ( v277 < 0 )
                          break;
                        v273 = v376;
                        ++v274;
                        if ( ++v275 >= *((_DWORD *)v376 + 158) )
                          goto LABEL_468;
                      }
                      MilInstrumentationCheckHR_MaybeFailFast(v278, 0LL, 0, v277, 0x1664u, 0LL);
                    }
                    else
                    {
LABEL_468:
                      v276 = (char *)v273 + 608;
                      v279 = (void *)*((_QWORD *)v273 + 76);
                      *((_DWORD *)v273 + 158) = 0;
                      if ( v279 == *((void **)v273 + 77) )
                      {
LABEL_471:
                        if ( v274 < *((_DWORD *)v273 + 158) && v274 )
                        {
                          DynArray<CD2DLayer *,0>::ShiftLeft(v276, v274);
                          v273 = v376;
                        }
                        if ( v4 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v279, 0LL, 0, v4, 0x1646u, 0LL);
                          v273 = v376;
                        }
                        else if ( *((_BYTE *)v273 + 6346) )
                        {
                          *(_WORD *)((char *)v273 + 6345) = 1;
                        }
                        if ( v4 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v279, 0LL, 0, v4, 0x108Bu, 0LL);
                          goto LABEL_515;
                        }
                        v280 = (unsigned int *)((char *)v273 + 448);
                        v281 = *((_DWORD *)v273 + 112);
                        *(_QWORD *)&v404[8] = v378;
                        v282 = *((_DWORD *)v273 + 113);
                        *(_DWORD *)v404 = 3;
                        v402[0] = 0LL;
                        if ( v281 != v282 )
                          goto LABEL_487;
                        v283 = 2LL * v282;
                        if ( v283 > 0xFFFFFFFF )
                        {
                          v286 = -2147024362;
                          MilInstrumentationCheckHR_MaybeFailFast(v282, 0LL, 0, -2147024362, 0x4Cu, 0LL);
                          v4 = -2147024362;
                          goto LABEL_491;
                        }
                        if ( (unsigned int)v283 <= 0x40 )
                          LODWORD(v283) = 64;
                        v284 = HrMalloc(0x10uLL, (unsigned int)v283, v402);
                        v286 = v284;
                        if ( v284 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v285, 0LL, 0, v284, 0x53u, 0LL);
                        }
                        else
                        {
                          v287 = 16LL * *v280;
                          if ( v287 <= 0xFFFFFFFF )
                          {
                            v288 = v402[0];
                            memcpy_0(v402[0], *((const void **)v280 + 2), (unsigned int)v287);
                            operator delete(*((void **)v280 + 2));
                            v281 = *v280;
                            *((_QWORD *)v280 + 2) = v288;
                            v280[1] = v283;
LABEL_487:
                            v286 = 0;
                            *(_OWORD *)(*((_QWORD *)v280 + 2) + 16LL * v281) = *(_OWORD *)v404;
                            v289 = v280[6];
                            v290 = *v280 + 1;
                            *v280 = v290;
                            if ( v289 <= v290 )
                              v289 = v290;
                            v280[6] = v289;
LABEL_490:
                            v4 = v286;
                            if ( v286 < 0 )
                            {
LABEL_491:
                              MilInstrumentationCheckHR_MaybeFailFast(v290, 0LL, 0, v286, 0x1090u, 0LL);
                              goto LABEL_515;
                            }
                            v294 = v271[6];
                            v410 = 0;
                            v411 = 1;
                            *(_QWORD *)v409 = 0LL;
                            if ( v294 )
                            {
                              v295 = *(_QWORD *)v271;
                              v296 = (unsigned int)(v294 - 1);
                              v297 = 10 * v296;
                              if ( *(_DWORD *)(*(_QWORD *)v271 + 80 * v296) && (v298 = v271[556]) != 0 )
                                v299 = *(_OWORD *)(*((_QWORD *)v271 + 280) + 16LL * (unsigned int)(v298 - 1));
                              else
                                v299 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                              *(_OWORD *)v403 = v299;
                              if ( *(_DWORD *)(v295 + 8 * v297 + 4) )
                              {
                                if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(
                                                        136LL * (unsigned int)(v271[214] - 1)
                                                      + *((_QWORD *)v271 + 104)
                                                      + 112LL) )
                                {
                                  CScopedClipStack::ComputeCpuClipBoundsInScope((CScopedClipStack *)v271);
                                  v300 = v271[214];
                                }
                                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                                  v403,
                                  *((_QWORD *)v271 + 104) + 112LL + 136LL * (unsigned int)(v300 - 1));
                              }
                            }
                            else
                            {
                              *(_OWORD *)v403 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
                            }
                            if ( v272 )
                            {
                              v301 = *v272;
                              v302 = v272[1];
                              v410 = *((_DWORD *)v272 + 16);
                              *(_OWORD *)&v409[8] = v301;
                              v303 = v272[2];
                              *(_OWORD *)&v409[24] = v302;
                              v304 = v272[3];
                              *(_OWORD *)&v409[40] = v303;
                              *(_OWORD *)&v409[56] = v304;
                            }
                            else
                            {
                              CMILMatrix::SetToIdentity((CMILMatrix *)&v409[8]);
                            }
                            v305 = DynArray<CScopedClipStack::ClippingScopeState,0>::AddMultipleAndSet(v271, v409);
                            v4 = v305;
                            if ( v305 < 0 )
                              MilInstrumentationCheckHR_MaybeFailFast(v306, 0LL, 0, v305, 0x4Bu, 0LL);
                            if ( v4 >= 0 )
                              goto LABEL_516;
                            MilInstrumentationCheckHR_MaybeFailFast(v306, 0LL, 0, v4, 0x1094u, 0LL);
                            CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)v280, 0LL);
LABEL_515:
                            if ( v4 < 0 )
                            {
                              MilInstrumentationCheckHR_MaybeFailFast(v291, 0LL, 0, v4, 0x1F53u, 0LL);
                              v29 = v378;
                              goto LABEL_416;
                            }
LABEL_516:
                            v307 = 0;
                            v29 = v378;
                            v308 = (unsigned int *)((char *)v376 + 448);
                            *(_DWORD *)v404 = 1;
                            *(_QWORD *)&v404[8] = v378;
                            v402[0] = 0LL;
                            v309 = *((_DWORD *)v376 + 113);
                            v310 = *((_DWORD *)v376 + 112);
                            if ( v310 == v309 )
                            {
                              v311 = 2LL * v309;
                              if ( v311 > 0xFFFFFFFF )
                              {
                                v314 = -2147024362;
                                MilInstrumentationCheckHR_MaybeFailFast(v309, 0LL, 0, -2147024362, 0x4Cu, 0LL);
                                v4 = -2147024362;
                                v379 = -2147024362;
                                goto LABEL_534;
                              }
                              if ( (unsigned int)v311 <= 0x40 )
                                LODWORD(v311) = 64;
                              v312 = HrMalloc(0x10uLL, (unsigned int)v311, v402);
                              v314 = v312;
                              if ( v312 < 0 )
                              {
                                MilInstrumentationCheckHR_MaybeFailFast(v313, 0LL, 0, v312, 0x53u, 0LL);
                              }
                              else
                              {
                                v315 = 16LL * *v308;
                                if ( v315 <= 0xFFFFFFFF )
                                {
                                  v316 = v402[0];
                                  memcpy_0(v402[0], *((const void **)v308 + 2), (unsigned int)v315);
                                  operator delete(*((void **)v308 + 2));
                                  v310 = *v308;
                                  *((_QWORD *)v308 + 2) = v316;
                                  v308[1] = v311;
                                  goto LABEL_523;
                                }
                                v314 = -2147024362;
                                MilInstrumentationCheckHR_MaybeFailFast(v313, 0LL, 0, -2147024362, 0x55u, 0LL);
                              }
                              v322 = v402[0];
                              if ( v402[0] )
                              {
                                v323 = GetProcessHeap();
                                HeapFree(v323, 0, v322);
                              }
LABEL_526:
                              v379 = v314;
                              v4 = v314;
                              if ( v314 >= 0 )
                              {
                                v307 = 1;
                                *(_OWORD *)v404 = *(_OWORD *)v403;
                                v319 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,8,2,8>::Push(
                                         v271 + 556,
                                         v404);
                                v379 = v319;
                                v4 = v319;
                                if ( v319 < 0 )
                                {
                                  MilInstrumentationCheckHR_MaybeFailFast(v320, 0LL, 0, v319, 0x116u, 0LL);
                                }
                                else
                                {
                                  v321 = 10LL * (unsigned int)(v271[6] - 1);
                                  ++*(_DWORD *)(*(_QWORD *)v271 + 8 * v321);
                                }
                                if ( v4 >= 0 )
                                {
                                  v88 = v376;
                                  *((_BYTE *)v376 + 6345) = 1;
LABEL_536:
                                  if ( v4 < 0 )
                                  {
                                    if ( v307 )
                                      CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)v308, 0LL);
                                    MilInstrumentationCheckHR_MaybeFailFast(v321, 0LL, 0, v4, 0x1F56u, 0LL);
                                    goto LABEL_416;
                                  }
                                  goto LABEL_545;
                                }
                                MilInstrumentationCheckHR_MaybeFailFast(v321, 0LL, 0, v4, 0x103Eu, 0LL);
LABEL_535:
                                v88 = v376;
                                goto LABEL_536;
                              }
LABEL_534:
                              MilInstrumentationCheckHR_MaybeFailFast(v318, 0LL, 0, v314, 0x1037u, 0LL);
                              goto LABEL_535;
                            }
LABEL_523:
                            v314 = 0;
                            *(_OWORD *)(*((_QWORD *)v308 + 2) + 16LL * v310) = *(_OWORD *)v404;
                            v317 = v308[6];
                            v318 = *v308 + 1;
                            *v308 = v318;
                            if ( v317 <= v318 )
                              v317 = v318;
                            v308[6] = v317;
                            goto LABEL_526;
                          }
                          v286 = -2147024362;
                          MilInstrumentationCheckHR_MaybeFailFast(v285, 0LL, 0, -2147024362, 0x55u, 0LL);
                        }
                        v292 = v402[0];
                        if ( v402[0] )
                        {
                          v293 = GetProcessHeap();
                          HeapFree(v293, 0, v292);
                        }
                        goto LABEL_490;
                      }
                      operator delete(v279);
                      *(_QWORD *)v276 = *((_QWORD *)v276 + 1);
                      *((_DWORD *)v276 + 5) = *((_DWORD *)v276 + 4);
                    }
                    v273 = v376;
                    goto LABEL_471;
                  }
LABEL_433:
                  if ( !*(_DWORD *)(*((_QWORD *)v88 + 4) + 1104LL)
                    || *(_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference() != 2 )
                  {
                    v259 = *((_DWORD *)v88 + 120);
                    if ( v259 )
                      v260 = (void *)(*((_QWORD *)v88 + 62) + 68LL * (unsigned int)(v259 - 1));
                    else
                      v260 = &CMILMatrix::Identity;
                    CMILMatrix::Transform3DBoundsHelper<1>((__int64)v260, (float *)v378 + 41, (__m128 *)v409);
                    v261 = *((_DWORD *)v88 + 120);
                    v414 = *(_QWORD *)&v409[16];
                    *(_DWORD *)&v409[64] = 0;
                    v413 = *(_OWORD *)v409;
                    if ( v261 )
                    {
                      v262 = (unsigned int)(v261 - 1);
                      v263 = *((_QWORD *)v88 + 62);
                      *(_OWORD *)v409 = *(_OWORD *)(68 * v262 + v263);
                      *(_OWORD *)&v409[16] = *(_OWORD *)(68 * v262 + v263 + 16);
                      *(_OWORD *)&v409[32] = *(_OWORD *)(68 * v262 + v263 + 32);
                      *(_OWORD *)&v409[48] = *(_OWORD *)(68 * v262 + v263 + 48);
                      *(_DWORD *)&v409[64] = *(_DWORD *)(68 * v262 + v263 + 64);
                    }
                    else
                    {
                      CMILMatrix::SetToIdentity((CMILMatrix *)v409);
                    }
                    v264 = (*(__int64 (__fastcall **)(CVisual *, _BYTE *, __m128 *, __int128 *, char *, _BYTE *))(*(_QWORD *)v378 + 208LL))(
                             v378,
                             v409,
                             &v407,
                             &v413,
                             v412,
                             v404);
                    v4 = v264;
                    if ( v264 < 0 )
                      MilInstrumentationCheckHR_MaybeFailFast(v265, 0LL, 0, v264, 0xE16u, 0LL);
                    else
                      *(_OWORD *)v402 = *(_OWORD *)v404;
                    if ( v4 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v265, 0LL, 0, v4, 0x1F23u, 0LL);
                      goto LABEL_416;
                    }
                    v266 = CDrawingContext::PushEffects(
                             v88,
                             (__int64)&v386,
                             (__int64)v402,
                             (__int64)v406,
                             (__int64)&v375);
                    v379 = v266;
                    v4 = v266;
                    if ( v266 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v267, 0LL, 0, v266, 0x1F2Cu, 0LL);
                      goto LABEL_416;
                    }
                    if ( (_BYTE)v375 )
                    {
                      *v383 = 0;
                      goto LABEL_416;
                    }
                    if ( *((_BYTE *)v223 + 32) )
                    {
                      v268 = (struct _LIST_ENTRY *)((char *)v29 + 328);
                    }
                    else
                    {
                      TreeDataListHead = CVisual::GetTreeDataListHead(v29);
                      if ( TreeDataListHead )
                      {
                        Flink = TreeDataListHead->Flink;
                        if ( TreeDataListHead->Flink != TreeDataListHead )
                        {
                          while ( (struct CVisualTree *)Flink[2].Flink != v223 )
                          {
                            Flink = Flink->Flink;
                            if ( Flink == TreeDataListHead )
                              goto LABEL_456;
                          }
                          v268 = Flink - 14;
                        }
                      }
                    }
LABEL_456:
                    Blink = (int)v268[8].Blink;
                  }
                  goto LABEL_457;
                }
              }
              v242 = (const struct Windows::Foundation::Numerics::float4x4 *)lpMem;
              if ( *(_BYTE *)(*(_QWORD *)lpMem + 80LL * (unsigned int)(*((_DWORD *)lpMem + 6) - 1) + 76) )
              {
                v252 = CDrawingContext::PushClippingScope(v88, (__int64)v378, 0, 0LL, (__int64)v404);
                v4 = v252;
                if ( v252 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v253, 0LL, 0, v252, 0x1EF8u, 0LL);
                  goto LABEL_416;
                }
                v379 = CDrawingContext::PushGpuClipRectInternal((_DWORD)v88, (_DWORD)v378, (unsigned int)v404, 0, 1);
                v4 = v379;
                if ( v379 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v254, 0LL, 0, v379, 0x1EFBu, 0LL);
                  goto LABEL_416;
                }
              }
LABEL_428:
              if ( (_BYTE)v400 )
                goto LABEL_433;
              goto LABEL_429;
            }
          }
          v205 = (CGeometry *)*((_QWORD *)v378 + 31);
          v206 = 0;
          *(_QWORD *)v404 = 0LL;
          v404[8] = 0;
          LOBYTE(v402[1]) = 0;
          v207 = 0LL;
          v402[0] = 0LL;
          ShapeData = CGeometry::GetShapeData(
                        v205,
                        (const struct D2D_SIZE_F *)((char *)v378 + 132),
                        (struct CShapePtr *)v402);
          v210 = ShapeData;
          if ( ShapeData < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v209, 0LL, 0, ShapeData, 0xC37u, 0LL);
          }
          else
          {
            v211 = v402[0];
            v210 = -2003292412;
            if ( v402[0] )
            {
              v212 = (*(__int64 (__fastcall **)(void *, _BYTE *, _QWORD))(*(_QWORD *)v402[0] + 32LL))(
                       v402[0],
                       v409,
                       0LL);
              v210 = v212;
              if ( v212 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(v209, 0LL, 0, v212, 0x10Du, 0LL);
              v211 = v402[0];
            }
            if ( v210 >= 0 )
            {
              v206 = (char)v402[1];
              v213 = 0LL;
              v404[8] = v402[1];
              v207 = v211;
              v402[0] = 0LL;
              LOBYTE(v402[1]) = 0;
              *(_QWORD *)v404 = v211;
LABEL_325:
              v4 = 0;
              if ( v210 != -2003304438 )
                v4 = v210;
              if ( LOBYTE(v402[1]) && v213 )
                (**v213)(v213, 1LL);
              if ( v4 >= 0 )
              {
                if ( !v207
                  || !(*(unsigned __int8 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v211 + 40LL))(v211, &v384)
                  || v384 != 1 )
                {
                  goto LABEL_345;
                }
                v214 = (*(__int64 (__fastcall **)(void *, void **, char *))(*(_QWORD *)v207 + 32LL))(
                         v207,
                         v402,
                         (char *)&v393 + 4);
                if ( v214 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(v215, 0LL, 0, v214, 0x10Du, 0LL);
                if ( *(float *)&v402[1] <= *(float *)v402 )
                  goto LABEL_345;
                if ( *((float *)&v402[1] + 1) <= *((float *)v402 + 1) )
                  goto LABEL_345;
                v216 = *((_QWORD *)v376 + 44);
                *(float *)v402 = *(float *)v402 + -0.015625;
                *((float *)v402 + 1) = *((float *)v402 + 1) + -0.015625;
                *(float *)&v402[1] = *(float *)&v402[1] + 0.015625;
                *((float *)&v402[1] + 1) = *((float *)&v402[1] + 1) + 0.015625;
                (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v216 + 56LL))(v216, v404);
                v217 = (float)*(int *)&v404[4];
                v218 = (float)*(int *)&v404[12];
                if ( (float)*(int *)&v404[8] <= (float)*(int *)v404
                  || v218 <= v217
                  || (float)*(int *)v404 >= *(float *)v402
                  && v217 >= *((float *)v402 + 1)
                  && *(float *)&v402[1] >= (float)*(int *)&v404[8]
                  && *((float *)&v402[1] + 1) >= v218 )
                {
                  v187 = 2;
                  v188 = 1;
                }
                else
                {
LABEL_345:
                  v188 = 0;
                }
                if ( v206 && v207 )
                  (**(void (__fastcall ***)(void *, __int64))v207)(v207, 1LL);
                v186 = v378;
                v88 = v376;
                goto LABEL_350;
              }
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v213, 0LL, 0, v4, 0x1EB3u, 0LL);
              CShapePtr::Release((CShapePtr *)v404);
              v29 = v378;
LABEL_416:
              v18 = v377;
              goto LABEL_417;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v209, 0LL, 0, v210, 0xC38u, 0LL);
          }
          v213 = (void (__fastcall ***)(void *, __int64))v402[0];
          v211 = 0LL;
          goto LABEL_325;
        }
LABEL_280:
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v146, 0LL, 0, v153, 0x1E86u, 0LL);
        v29 = v378;
        goto LABEL_416;
      }
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v146, 0LL, 0, v153, 0x768u, 0LL);
      v152 = v403[0];
      v88 = v376;
      goto LABEL_282;
    }
LABEL_269:
    v179 = (unsigned __int64)v158[15];
    goto LABEL_271;
  }
  while ( 1 )
  {
    v132 = (char *)(v145 - 28);
    if ( (struct CVisualTree *)v145[4] == v111 )
      break;
    v145 = (_QWORD *)*v145;
    if ( v145 == v144 )
      goto LABEL_211;
  }
LABEL_189:
  if ( !v132 )
    goto LABEL_211;
  v133 = (_DWORD *)*((_QWORD *)v132 + 4);
  if ( !v133
    && (v134 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v132 + 3) + 368LL))(*((_QWORD *)v132 + 3)),
        *((_QWORD *)v132 + 4) = v134,
        (v133 = (_DWORD *)v134) == 0LL)
    || (v135 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v133 + 24LL))(v133),
        v136 = *((_DWORD *)v88 + 1534),
        *((_DWORD *)v88 + 1572) = v135,
        v135 < v136) )
  {
    v91 = v383;
    goto LABEL_211;
  }
  v18 = v377;
  if ( v133[3] >= v136 )
  {
    CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop(v377);
    LOBYTE(v375) = 0;
    CWatermarkStack<bool,64,2,10>::Push(v137, &v375);
    *v383 = 0;
  }
LABEL_417:
  if ( *((_BYTE *)v376 + 6352) && *v18 && *(_BYTE *)(*v18 - 1 + *((_QWORD *)v18 + 2)) )
    CVisual::RenderProjectedShadows((__int64)v29, v376, 1);
  return (unsigned int)v4;
}
