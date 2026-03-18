/*
 * XREFs of ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083B20
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x180083600 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 * Callees:
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18000C0AC (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x180011EF0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001405C (-AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18001410C (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ??8?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV0@@Z @ 0x180014CCC (--8-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3D.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x1800157AC (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?AddMultipleAndSet@?$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INPUT_SINK_TRANSFORM@@I@Z @ 0x1800164A8 (-AddMultipleAndSet@-$DynArray@UCOMPOSITION_INPUT_SINK_TRANSFORM@@$0A@@@QEAAJPEFBUCOMPOSITION_INP.c)
 *     ?AddMultipleAndSet@?$DynArray@UtagWINDOW_INPUTSINK_HINT@@$0A@@@QEAAJPEFBUtagWINDOW_INPUTSINK_HINT@@I@Z @ 0x18001CFBC (-AddMultipleAndSet@-$DynArray@UtagWINDOW_INPUTSINK_HINT@@$0A@@@QEAAJPEFBUtagWINDOW_INPUTSINK_HIN.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18001D438 (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180028EDC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180028F60 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029BA0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180033BE4 (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800342E8 (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x180034E80 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180035AFC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180079F80 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007DEA0 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007F5CC (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?reserve_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBackdropBlur@CBackdropRegion@@_K0@Z @ 0x18008295C (-reserve_region@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBac.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180082A84 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x180082C60 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18008A0F0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18008A330 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x18008B720 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18008C180 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AEA10 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AEAC0 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AF5A0 (-UnionUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x1800BCD5C (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ?CopyInputTransform@@YAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800CBDBC (-CopyInputTransform@@YAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4A8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x1800D41F0 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800ECD80 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x18015D418 (McTemplateU0.c)
 *     ?Pop@?$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z @ 0x18016E8B4 (-Pop@-$CWatermarkStack@UD2D_VECTOR_2F@@$01$01$09@@QEAA_NPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1801C21A0 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1801C2260 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18021B50C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180252F64 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1802532EC (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1802533B8 (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z @ 0x180253FF8 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x1802549A4 (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CPreComputeContext::PostSubgraph(
        CPreComputeContext *this,
        const struct CVisualTree *a2,
        bool *a3,
        __int64 a4)
{
  _QWORD *v4; // r15
  __int64 v5; // rbx
  CPreComputeContext *v6; // r13
  bool v7; // zf
  struct CVisualTree *v8; // rsi
  struct CVisual *v9; // r14
  unsigned __int64 ii; // rcx
  __int64 v11; // rax
  __m128 *v12; // r14
  int v14; // esi
  unsigned int i; // edi
  __int64 v16; // rax
  _BYTE *v17; // rcx
  __int64 v18; // rax
  __int128 v19; // xmm0
  int v20; // eax
  signed int v21; // eax
  unsigned int v22; // edi
  _DWORD *v23; // r8
  __int64 v24; // rdx
  _BYTE *v25; // rcx
  unsigned int jj; // eax
  _QWORD **v27; // rdi
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  unsigned int kk; // eax
  __int64 v31; // rdx
  bool *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // rdx
  bool *v36; // rcx
  unsigned int j; // eax
  bool *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // ecx
  int v42; // eax
  __int64 v43; // r12
  float v44; // xmm9_4
  float v45; // xmm8_4
  float v46; // xmm6_4
  float v47; // xmm7_4
  int *v48; // r10
  int v49; // r11d
  unsigned __int64 v50; // rdi
  char v51; // r14
  __int64 v52; // rsi
  unsigned int v53; // eax
  __int64 v54; // r10
  __int64 v55; // rcx
  unsigned __int64 *v56; // rdx
  unsigned __int64 *v57; // rax
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  CVisual *v60; // rax
  unsigned __int64 *v61; // rax
  float v62; // xmm2_4
  float v63; // xmm1_4
  __int128 *v64; // rax
  __int128 v65; // xmm1
  int ShapeData; // eax
  signed int v67; // eax
  __int64 v68; // rcx
  char v69; // al
  void *v70; // rsi
  int v71; // eax
  __int64 v72; // rcx
  int v73; // eax
  void *v74; // r9
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  const struct CMILMatrix *TopByReference; // rax
  __m128 v80; // xmm0
  unsigned int v81; // eax
  _DWORD *v82; // r8
  __int64 v83; // rcx
  __int64 v84; // rdx
  _BYTE *v85; // rcx
  unsigned int k; // eax
  __int64 *v87; // rcx
  signed int v88; // eax
  float *Bounds; // rax
  __int64 v90; // r9
  int v91; // eax
  __m128 v92; // xmm6
  char *v93; // rax
  signed int v94; // eax
  struct CWindowBackgroundTreatment *v95; // rax
  struct CWindowBackgroundTreatment *v96; // rsi
  unsigned int v97; // ecx
  __int64 v98; // rdx
  float *v99; // r14
  char v100; // r12
  __int64 v101; // r8
  signed int v102; // eax
  __int64 v103; // rcx
  char v104; // di
  char v105; // r13
  char *v106; // rax
  bool v107; // al
  int v108; // eax
  float *v109; // rax
  bool v110; // al
  __int32 v111; // xmm5_4
  __int32 v112; // xmm4_4
  __int32 v113; // xmm3_4
  __int32 v114; // xmm2_4
  int v115; // eax
  float v116; // xmm0_4
  int v117; // eax
  __int64 v118; // rsi
  signed int v119; // eax
  __int64 v120; // r11
  unsigned __int8 v121; // r8
  unsigned int v122; // r10d
  signed int v123; // eax
  _DWORD *v124; // r10
  __int64 v125; // rdx
  unsigned int m; // eax
  __int64 v127; // rdx
  __int64 *v128; // rax
  __int64 v129; // rax
  __int64 v130; // r14
  __int64 v131; // rsi
  __int64 **TreeData; // rdi
  unsigned int Slot; // eax
  __int64 v134; // r10
  __int64 v135; // rcx
  unsigned __int64 *v136; // rdx
  CVisual *v137; // rax
  unsigned __int64 *TreeDataListHead; // rax
  __int64 v139; // r10
  unsigned __int64 v140; // rax
  int v141; // eax
  _QWORD *v142; // rcx
  signed int v143; // eax
  struct CVisual *v144; // r12
  signed int v145; // eax
  bool HasEffects; // r14
  signed int v147; // eax
  __int64 v148; // rcx
  struct CBspNode *v149; // rdx
  signed int v150; // eax
  __int64 v151; // rcx
  signed int v152; // eax
  __int64 v153; // rcx
  int v154; // eax
  int v155; // ecx
  int v156; // ecx
  int v157; // eax
  _DWORD *v158; // r8
  __int64 v159; // rdx
  _BYTE *v160; // rcx
  unsigned int n; // eax
  _QWORD *v162; // rsi
  char v164; // [rsp+40h] [rbp-238h]
  char v165[7]; // [rsp+41h] [rbp-237h] BYREF
  struct CVisualTree *v166; // [rsp+48h] [rbp-230h]
  CPreComputeContext *v167; // [rsp+50h] [rbp-228h]
  __int64 v168; // [rsp+58h] [rbp-220h]
  struct CVisual *v169; // [rsp+60h] [rbp-218h]
  __int128 v170; // [rsp+70h] [rbp-208h] BYREF
  __int128 v171; // [rsp+80h] [rbp-1F8h]
  __int128 v172; // [rsp+90h] [rbp-1E8h]
  __int128 v173; // [rsp+A0h] [rbp-1D8h]
  int v174; // [rsp+B0h] [rbp-1C8h]
  __int128 v175; // [rsp+C0h] [rbp-1B8h] BYREF
  __int128 v176; // [rsp+D0h] [rbp-1A8h]
  __int128 v177; // [rsp+E0h] [rbp-198h]
  __int128 v178; // [rsp+F0h] [rbp-188h]
  int v179; // [rsp+100h] [rbp-178h]
  char v180[64]; // [rsp+110h] [rbp-168h] BYREF
  __int128 v181; // [rsp+150h] [rbp-128h] BYREF
  _QWORD v182[4]; // [rsp+160h] [rbp-118h] BYREF
  void *lpMem; // [rsp+180h] [rbp-F8h]
  int v184; // [rsp+188h] [rbp-F0h]
  __int64 v185; // [rsp+190h] [rbp-E8h]
  __m128 v186; // [rsp+1A0h] [rbp-D8h] BYREF
  __int64 v187; // [rsp+1B0h] [rbp-C8h]
  __m128 v188; // [rsp+1B8h] [rbp-C0h] BYREF
  __int64 v189; // [rsp+1C8h] [rbp-B0h]
  __m128 v190; // [rsp+1D0h] [rbp-A8h] BYREF

  *a3 = 1;
  v4 = 0LL;
  v5 = *((_QWORD *)this + 70);
  v6 = this;
  v7 = *((_BYTE *)a2 + 32) == 0;
  v8 = a2;
  v9 = (struct CVisual *)*((_QWORD *)this + 71);
  v167 = this;
  ii = 1LL;
  v11 = v5 + 328;
  v166 = a2;
  if ( v7 )
    v11 = 0LL;
  v169 = v9;
  v168 = v11;
  if ( (unsigned int)((__int64)(*(_QWORD *)(v5 + 288) - *(_QWORD *)(v5 + 280)) >> 4)
    || (unsigned int)((__int64)(*(_QWORD *)(v5 + 312) - *(_QWORD *)(v5 + 304)) >> 4) )
  {
    v190.m128_u64[0] = 0x100000000LL;
    v12 = &v190;
    do
    {
      v14 = v12->m128_i32[0];
      for ( i = 0; i < (unsigned int)CVisual::GetLightsCount((_QWORD *)v5, v14); ++i )
      {
        if ( v14 )
          v16 = *(_QWORD *)(v5 + 312) - *(_QWORD *)(v5 + 304);
        else
          v16 = *(_QWORD *)(v5 + 288) - *(_QWORD *)(v5 + 280);
        if ( i < (unsigned int)(v16 >> 4) )
        {
          if ( v14 )
            v18 = *(_QWORD *)(v5 + 304);
          else
            v18 = *(_QWORD *)(v5 + 280);
          v17 = *(_BYTE **)(v18 + 16LL * i);
        }
        else
        {
          v17 = 0LL;
        }
        if ( v17[162] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, __int64))(*(_QWORD *)v17 + 248LL))(
                 v17,
                 a2,
                 v5) )
          {
            v19 = *(_OWORD *)(*((_QWORD *)v6 + 38) + 16LL * (unsigned int)--*((_DWORD *)v6 + 82));
            if ( (_QWORD)v19 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
      }
      v12 = (__m128 *)((char *)v12 + 4);
    }
    while ( v12 != (__m128 *)&v190.m128_u16[4] );
    v9 = v169;
    v8 = a2;
  }
  v20 = *(_DWORD *)(v5 + 88);
  if ( (v20 & 1) == 0 )
  {
LABEL_26:
    if ( (v20 & 0x10) == 0 )
    {
LABEL_61:
      if ( v9 )
      {
        a3 = *(bool **)(v5 + 224);
        v34 = 0LL;
        if ( (*(_DWORD *)a3 & 0x400000) != 0 )
        {
          v35 = *((unsigned int *)a3 + 1);
          v36 = a3 + 8;
          for ( j = 0; j < (unsigned int)v35; ++v36 )
          {
            if ( *v36 == 10 )
              break;
            ++j;
          }
          if ( j >= (unsigned int)v35 )
            v38 = 0LL;
          else
            v38 = &a3[8LL * j - (((_BYTE)v35 + 15) & 7) + 15 + v35];
          v39 = *(_QWORD *)v38;
          if ( v39 )
          {
            v40 = *(_QWORD *)(v39 + 96);
            if ( v40 )
              v34 = *(_QWORD *)(v40 + 64);
          }
        }
        a4 = -v34;
        v41 = a4 != 0 ? 0x40 : 0;
        if ( *(char *)(v5 + 94) < 0 )
          v41 = 64;
        ii = (unsigned int)(v41 << 7);
        v42 = *((_DWORD *)v9 + 22) | ii | *(_DWORD *)(v5 + 88) & 0x3F80;
        *((_DWORD *)v9 + 22) = v42;
        if ( (v42 & 1) != 0 )
          TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((char *)v9 + 164);
      }
      if ( (*(_BYTE *)(v5 + 272) & 2) == 0 )
        goto LABEL_135;
      v43 = v5;
      LODWORD(v44) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v45 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
      v46 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v47 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
      v190 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v175 = _xmm;
      v176 = _xmm;
      v177 = _xmm;
      v178 = _xmm;
      LOWORD(v179) = 32085;
      v164 = 0;
      while ( 1 )
      {
        v48 = *(int **)(v43 + 224);
        v49 = *v48;
        if ( (*v48 & 0x100000) != 0 )
        {
          if ( !v164 )
            goto LABEL_160;
          WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v43);
          v76 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 232);
          v170 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 216);
          v77 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 248);
          v171 = v76;
          v78 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 264);
          LODWORD(WindowBackgroundTreatmentInternal) = *((_DWORD *)WindowBackgroundTreatmentInternal + 70);
          v172 = v77;
          v173 = v78;
          v174 = (int)WindowBackgroundTreatmentInternal;
          if ( CMILMatrix::Invert((CMILMatrix *)&v170) )
          {
            TopByReference = CMatrixStack::GetTopByReference((CPreComputeContext *)((char *)v6 + 240));
            CMILMatrix::Multiply(TopByReference, (const struct CMILMatrix *)&v170, (struct CMILMatrix *)&v175);
LABEL_160:
            v80 = *(__m128 *)(v5 + 164);
            v187 = *(_QWORD *)(v5 + 180);
            v186 = v80;
            CMILMatrix::Transform3DBoundsHelper<0>((__int64)&v175, v186.m128_f32, &v188);
            if ( (TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v44
               || v46 < *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
              && (*(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v45
               || v47 < *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
            {
              v187 = v189;
              v186.m128_u64[0] = __PAIR64__(LODWORD(v45), LODWORD(v44));
              v186.m128_u64[1] = __PAIR64__(LODWORD(v47), LODWORD(v46));
              TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
                &v188,
                &v186);
            }
            ii = 1LL;
            v81 = *((float *)&v189 + 1) <= *(float *)&v189;
            if ( v188.m128_f32[2] <= v188.m128_f32[0] )
              ++v81;
            if ( v188.m128_f32[3] <= v188.m128_f32[1] )
              ++v81;
            if ( v81 <= 1 )
            {
              v82 = *(_DWORD **)(v43 + 224);
              if ( (*v82 & 0x100000) != 0 )
              {
                v84 = (unsigned int)v82[1];
                v85 = v82 + 2;
                for ( k = 0; k < (unsigned int)v84; ++v85 )
                {
                  if ( *v85 == 12 )
                    break;
                  ++k;
                }
                v87 = k >= (unsigned int)v84
                    ? 0LL
                    : (__int64 *)((char *)v82 + v84 + 8LL * k - (((_BYTE)v84 + 15) & 7) + 15);
                v83 = *v87;
              }
              else
              {
                v83 = 0LL;
              }
              v88 = CWindowBackgroundTreatment::AddRectangleToBounds(v83, (__int64)&v188);
              v22 = v88;
              if ( v88 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(ii, 0LL, 0, v88, 0x35Bu, 0LL);
                return v22;
              }
            }
          }
LABEL_135:
          v69 = *(_BYTE *)(v5 + 92);
          if ( (v69 & 2) != 0 )
          {
            ii = *((unsigned int *)v6 + 60);
            if ( (_DWORD)ii )
            {
              *((_DWORD *)v6 + 60) = ii - 1;
              v69 = *(_BYTE *)(v5 + 92);
            }
          }
          if ( (v69 & 4) != 0 )
          {
            ii = *((unsigned int *)v6 + 68);
            if ( (_DWORD)ii )
            {
              *((_DWORD *)v6 + 68) = ii - 1;
              v69 = *(_BYTE *)(v5 + 92);
            }
          }
          if ( (v69 & 0x10) != 0 )
          {
            CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)v6 + 176);
            v69 = *(_BYTE *)(v5 + 92);
          }
          if ( (v69 & 8) != 0 )
          {
            CWatermarkStack<D2D_VECTOR_2F,2,2,10>::Pop((char *)v6 + 144);
            v69 = *(_BYTE *)(v5 + 92);
          }
          if ( (v69 & 0x20) != 0 )
          {
            ii = *((unsigned int *)v6 + 52);
            if ( (_DWORD)ii )
            {
              *((_DWORD *)v6 + 52) = ii - 1;
              v69 = *(_BYTE *)(v5 + 92);
            }
          }
          if ( (v69 & 0x40) != 0 )
            *((_BYTE *)v6 + 1185) = *((_BYTE *)v6 + 1185) == 0;
          v70 = &CMILMatrix::Identity;
          if ( (*(_BYTE *)(v5 + 272) & 1) != 0 )
          {
            ii = *(_QWORD *)(v5 + 256);
            if ( ii && (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)ii + 48LL))(ii, 14LL) )
              *(_BYTE *)(v5 + 560) &= ~1u;
            v71 = *((_DWORD *)v6 + 28);
            if ( v71 )
            {
              v72 = (unsigned int)(v71 - 1);
              *((_DWORD *)v6 + 28) = v72;
              v73 = *((_DWORD *)v6 + 60);
              v188 = *(__m128 *)(*((_QWORD *)v6 + 16) + 16 * v72);
              if ( v73 )
                v74 = (void *)(*((_QWORD *)v6 + 32) + 68LL * (unsigned int)(v73 - 1));
              else
                v74 = &CMILMatrix::Identity;
              Bounds = (float *)CVisual::GetBounds(v5, v166, a3, v74);
              CMILMatrix::Transform3DBoundsHelper<1>(v90, Bounds, &v190);
              v91 = *((_DWORD *)v6 + 68);
              if ( v91 )
              {
                v186 = *(__m128 *)(*((_QWORD *)v6 + 36) + 16LL * (unsigned int)(v91 - 1));
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v186, &v190);
                v92 = v186;
              }
              else
              {
                v92 = v190;
              }
              v7 = (*(_BYTE *)(v5 + 94) & 0x10) == 0;
              v186 = v92;
              if ( !v7 )
              {
                v93 = detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::reserve_region(
                        (_QWORD *)(*((_QWORD *)v6 + 89) + 16LL),
                        (*(_QWORD *)(*((_QWORD *)v6 + 89) + 24LL) - *(_QWORD *)(*((_QWORD *)v6 + 89) + 16LL)) / 24LL);
                *(_QWORD *)v93 = v5;
                *(__m128 *)(v93 + 8) = v92;
              }
              if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(v188.m128_f32, v186.m128_f32) )
              {
                LOBYTE(a3) = 1;
                v94 = CDirtyRegion::Add(*((CDirtyRegion **)v6 + 88), v5, (__int64)a3, (__int64)&v186);
                v22 = v94;
                if ( v94 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(ii, 0LL, 0, v94, 0x3A5u, 0LL);
                  return v22;
                }
                *(_BYTE *)(v5 + 560) |= 1u;
              }
            }
          }
          if ( (**(_DWORD **)(v5 + 224) & 0x100000) != 0 )
          {
            v95 = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v5);
            ii = *((unsigned int *)v6 + 28);
            v96 = v95;
            if ( (_DWORD)ii )
            {
              v97 = ii - 1;
              *((_DWORD *)v6 + 28) = v97;
              v98 = v97;
              ii = *((_QWORD *)v6 + 16);
              v188 = *(__m128 *)(ii + 16 * v98);
              if ( *((_BYTE *)v95 + 356) )
              {
                v99 = (float *)((char *)v95 + 144);
                v100 = 0;
                CMILMatrix::Transform2DBoundsHelper<0>((struct CWindowBackgroundTreatment *)((char *)v95 + 216));
                if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(
                       v188.m128_f32,
                       v186.m128_f32) )
                {
                  LOBYTE(v101) = 1;
                  v102 = CDirtyRegion::Add(*((CDirtyRegion **)v6 + 88), v5, v101, (__int64)&v186);
                  v22 = v102;
                  if ( v102 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v103, 0LL, 0, v102, 0x3CBu, 0LL);
                    return v22;
                  }
                  v100 = 1;
                }
                v104 = *((_BYTE *)v96 + 360);
                v105 = *((_BYTE *)v96 + 359);
                if ( v104 && *((_BYTE *)v166 + 32) )
                {
                  v106 = detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::reserve_region(
                           (_QWORD *)(*((_QWORD *)v167 + 89) + 16LL),
                           (*(_QWORD *)(*((_QWORD *)v167 + 89) + 24LL) - *(_QWORD *)(*((_QWORD *)v167 + 89) + 16LL))
                         / 24LL);
                  *(__m128 *)(v106 + 8) = v186;
                  *(_QWORD *)v106 = v5;
                }
                if ( CWindowBackgroundTreatment::HasValidSource(v96, 0LL)
                  && TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::operator==(
                       v99,
                       (float *)v96 + 48)
                  && (unsigned __int8)CWindowBackgroundTreatment::AreWorldBoundsUnchangedForPreCompute(v96) )
                {
                  v107 = 0;
                  if ( v104 )
                  {
                    ii = *(_QWORD *)(*(_QWORD *)v167 + 496LL) - *((_QWORD *)v96 + 47);
                    if ( ii < CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta )
                      v107 = 1;
                  }
                  if ( !v105 || v107 || !v100 )
                    *((_BYTE *)v96 + 357) = 0;
                }
                else
                {
                  CWindowBackgroundTreatment::ClearRenderTargetMaps(v96);
                }
                v6 = v167;
              }
            }
            v70 = &CMILMatrix::Identity;
          }
          if ( (*(_BYTE *)(v5 + 88) & 4) != 0 )
          {
            --*(_DWORD *)(*((_QWORD *)v6 + 88) + 2856LL);
            v108 = *((_DWORD *)v6 + 60);
            if ( v108 )
              v70 = (void *)(*((_QWORD *)v6 + 32) + 68LL * (unsigned int)(v108 - 1));
            v109 = (float *)CVisual::GetBounds(v5, *((_QWORD *)v6 + 1), a3, a4);
            CMILMatrix::Transform3DBoundsHelper<1>((__int64)v70, v109, &v188);
            v110 = *((_DWORD *)v6 + 136) || (*(_DWORD *)(v5 + 88) & 0x100) != 0;
            v111 = v188.m128_i32[2];
            v112 = v188.m128_i32[0];
            v113 = v188.m128_i32[3];
            v114 = v188.m128_i32[1];
            if ( v188.m128_f32[2] > v188.m128_f32[0] && v188.m128_f32[3] > v188.m128_f32[1] )
            {
              v7 = !v110;
              v115 = *(_DWORD *)(v5 + 88);
              if ( v7 )
              {
                if ( (v115 & 0x400) != 0 )
                  v116 = FLOAT_0_5;
                else
                  v116 = 0.0;
              }
              else
              {
                v116 = FLOAT_4_0;
              }
              if ( (v115 & 0x800) != 0 )
                v116 = v116 + 0.5;
              if ( v116 != 0.0 )
              {
                *(float *)&v112 = v188.m128_f32[0] - v116;
                *(float *)&v114 = v188.m128_f32[1] - v116;
                *(float *)&v111 = v188.m128_f32[2] + v116;
                *(float *)&v113 = v188.m128_f32[3] + v116;
                v188.m128_f32[0] = v188.m128_f32[0] - v116;
                v188.m128_f32[1] = v188.m128_f32[1] - v116;
                v188.m128_f32[2] = v188.m128_f32[2] + v116;
                v188.m128_f32[3] = v188.m128_f32[3] + v116;
                *(float *)&v189 = *(float *)&v189 + 0.0;
                *((float *)&v189 + 1) = *((float *)&v189 + 1) + 0.0;
              }
            }
            v117 = *((_DWORD *)v6 + 68);
            if ( v117 )
            {
              v186 = *(__m128 *)(*((_QWORD *)v6 + 36) + 16LL * (unsigned int)(v117 - 1));
              TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v186, &v188);
              v111 = v186.m128_i32[2];
              v114 = v186.m128_i32[1];
              v112 = v186.m128_i32[0];
              v113 = _mm_shuffle_ps(v186, v186, 255).m128_u32[0];
            }
            else
            {
              v186.m128_u64[0] = __PAIR64__(v114, v112);
              v186.m128_u64[1] = __PAIR64__(v113, v111);
            }
            v22 = 0;
            v118 = *((_QWORD *)v6 + 88);
            if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= *(float *)&v112
              && *(float *)&v111 >= *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
              || *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= *(float *)&v114
              && *(float *)&v113 >= *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
            {
              CDirtyRegion::SetFullDirty(*((CDirtyRegion **)v6 + 88));
            }
            if ( !*(_BYTE *)(v118 + 2883) && !*(_DWORD *)(v118 + 2856) )
            {
              v119 = CDirtyRegion::_Add((CDirtyRegion *)v118);
              v22 = v119;
              if ( v119 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(ii, 0LL, 0, v119, 0x1A8u, 0LL);
            }
            if ( (v22 & 0x80000000) != 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(ii, 0LL, 0, v22, 0x403u, 0LL);
              return v22;
            }
          }
          v120 = v168;
          if ( v168 )
          {
            v121 = *(_BYTE *)(v5 + 93);
            if ( (v121 & 1) != 0 )
            {
              ii = (unsigned int)(*(int *)(v5 + 88) >> 7) >> 5;
              LOBYTE(ii) = (v121 >> 1) ^ ii;
              if ( (ii & 1) != 0 )
              {
                *(_BYTE *)(v5 + 93) = v121 ^ (v121 ^ (*(_DWORD *)(v5 + 88) >> 11)) & 2;
                v186.m128_u64[0] = CVisual::GetTopLevelWindow((CVisual *)v5);
                v186.m128_i32[2] = (v122 >> 1) & 1;
                v123 = DynArray<tagWINDOW_INPUTSINK_HINT,0>::AddMultipleAndSet((__int64)v6 + 640, &v186);
                v22 = v123;
                if ( v123 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(ii, 0LL, 0, v123, 0x40Du, 0LL);
                  return v22;
                }
                v120 = v168;
              }
            }
            v124 = *(_DWORD **)(v5 + 224);
            if ( (*v124 & 0x400000) != 0 )
            {
              v125 = (unsigned int)v124[1];
              ii = (unsigned __int64)(v124 + 2);
              for ( m = 0; m < (unsigned int)v125; ++ii )
              {
                if ( *(_BYTE *)ii == 10 )
                  break;
                ++m;
              }
              if ( m >= (unsigned int)v125 )
              {
                v128 = 0LL;
              }
              else
              {
                v127 = v125 + 15;
                ii = 8LL * m - (v127 & 7);
                v128 = (__int64 *)((char *)v124 + ii + v127);
              }
              v129 = *v128;
              if ( v129 )
              {
                ii = *(_QWORD *)(v129 + 96);
                v130 = 0LL;
                if ( ii )
                  v130 = *(_QWORD *)(ii + 64);
                if ( v130 )
                {
                  if ( *((_BYTE *)v6 + 1185) )
                    goto LABEL_288;
                  v131 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 384LL);
                  if ( *(_QWORD *)(v120 + 120) == v131 )
                    goto LABEL_288;
                  TreeData = 0LL;
                  if ( (*v124 & 0x800000) != 0 )
                  {
                    Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*(_QWORD *)(v5 + 224), 9LL);
                    v135 = *(unsigned int *)(v134 + 4);
                    v136 = Slot >= (unsigned int)v135
                         ? 0LL
                         : (unsigned __int64 *)(v135 + 15 + v134 + 8LL * Slot - (((_BYTE)v135 + 15) & 7));
                    ii = *v136;
                    if ( *v136 )
                    {
                      v137 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)ii + 192LL))(*(_QWORD *)ii);
                      v120 = v168;
                      if ( v137 )
                      {
                        if ( (*(_BYTE *)(v168 + 16) & 4) == 0 || *(_QWORD *)(v168 + 216) != v131 )
                        {
                          TreeData = CVisual::FindTreeData(v137, v166);
                          if ( TreeData )
                            goto LABEL_285;
                        }
                      }
                    }
                  }
                  if ( v5 != *((_QWORD *)v166 + 3) )
                  {
                    TreeData = 0LL;
                    ii = *(_QWORD *)(v5 + 80);
                    if ( *((_BYTE *)v166 + 32) )
                    {
                      TreeData = (__int64 **)(ii + 328);
                    }
                    else
                    {
                      TreeDataListHead = (unsigned __int64 *)CVisual::GetTreeDataListHead((CVisual *)ii);
                      if ( TreeDataListHead )
                      {
                        ii = *TreeDataListHead;
                        if ( (unsigned __int64 *)*TreeDataListHead != TreeDataListHead )
                        {
                          while ( *(_QWORD *)(ii + 32) != v139 )
                          {
                            ii = *(_QWORD *)ii;
                            if ( (unsigned __int64 *)ii == TreeDataListHead )
                              goto LABEL_284;
                          }
                          TreeData = (__int64 **)(ii - 224);
                        }
                      }
                    }
                  }
LABEL_284:
                  if ( TreeData )
LABEL_285:
                    v140 = (unsigned __int64)TreeData[15];
                  else
                    v140 = 1LL;
                  if ( *(_QWORD *)(v120 + 120) < v140 )
                  {
LABEL_288:
                    v141 = *((_DWORD *)v6 + 52);
                    v142 = 0LL;
                    *(_QWORD *)&v181 = v130;
                    if ( v141 )
                      v142 = (_QWORD *)(*((_QWORD *)v6 + 28) + 8LL * (unsigned int)(v141 - 1));
                    *((_QWORD *)&v181 + 1) = *v142;
                    CopyInputTransform((const struct CMILMatrix *)(v120 + 40), (struct tagINPUT_TRANSFORM *)v182);
                    v143 = DynArray<COMPOSITION_INPUT_SINK_TRANSFORM,0>::AddMultipleAndSet((__int64)v6 + 672, &v181);
                    v22 = v143;
                    if ( v143 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(ii, 0LL, 0, v143, 0x422u, 0LL);
                      return v22;
                    }
                  }
                }
              }
            }
            *(_BYTE *)(v5 + 92) &= ~0x80u;
          }
          v144 = v169;
          if ( *((_BYTE *)v6 + 1184) )
          {
            v145 = CDepthSortingPreComputeHelper::PreComputePostSubgraph(
                     (CPreComputeContext *)((char *)v6 + 720),
                     (struct CVisual *)v5,
                     v169,
                     v166);
            v22 = v145;
            if ( v145 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(ii, 0LL, 0, v145, 0x42Cu, 0LL);
              return v22;
            }
          }
          v22 = 0;
          if ( !*((_DWORD *)v6 + 210)
            || (!v144 || *((_DWORD *)v144 + 25) != 1) && !CVisual::IsPreserve3DRoot((CVisual *)v5, v144) )
          {
            goto LABEL_320;
          }
          HasEffects = CVisual::IsSimple3DRootOrHasEffects((CVisual *)v5, v144);
          v147 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
                   (CPreComputeContext *)((char *)v6 + 744),
                   (struct CVisual *)v5,
                   HasEffects);
          v22 = v147;
          if ( v147 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v148, 0LL, 0, v147, 0x17Fu, 0LL);
            goto LABEL_320;
          }
          if ( CVisual::IsPreserve3DRoot((CVisual *)v5, v144) )
          {
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
            {
              McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_P3D_BUILDING_BSPTREE_Stop);
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_P3D_BUILDING_POLYGONLIST_Start);
            }
            *(_QWORD *)((char *)&v182[2] + 4) = 0LL;
            lpMem = 0LL;
            v184 = 0;
            *(_QWORD *)((char *)&v182[1] + 4) = 1LL;
            DWORD1(v181) = 0;
            *((_QWORD *)&v181 + 1) = 0LL;
            v182[0] = 0LL;
            v185 = v5;
            v149 = *(struct CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference((char *)v6 + 744);
            if ( v149 )
            {
              v150 = CBspPolygonListBuilder::BuildPolygonList((CBspPolygonListBuilder *)&v181, v149);
              v22 = v150;
              if ( v150 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v151, 0LL, 0, v150, 0x18Cu, 0LL);
                goto LABEL_308;
              }
            }
            CBspPreComputeHelper::PopStacksForBspRootVisual((CPreComputeContext *)((char *)v6 + 744), v149);
            if ( *((_DWORD *)v6 + 210) )
            {
              if ( HasEffects )
              {
                v152 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
                         (CPreComputeContext *)((char *)v6 + 744),
                         (struct CVisual *)v5,
                         1);
                v22 = v152;
                if ( v152 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v153, 0LL, 0, v152, 0x194u, 0LL);
LABEL_308:
                  operator delete(lpMem);
LABEL_320:
                  if ( (v22 & 0x80000000) != 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(ii, 0LL, 0, v22, 0x42Fu, 0LL);
                    return v22;
                  }
                  v154 = *(_DWORD *)(v5 + 96);
                  if ( (v154 & 2) != 0 )
                  {
                    v155 = *((_DWORD *)v6 + 4);
                    if ( v155 )
                    {
                      *((_DWORD *)v6 + 4) = v155 - 1;
                      v154 = *(_DWORD *)(v5 + 96);
                    }
                  }
                  if ( (v154 & 8) != 0 )
                  {
                    v156 = *((_DWORD *)v6 + 12);
                    if ( v156 )
                    {
                      *((_DWORD *)v6 + 12) = v156 - 1;
                      v154 = *(_DWORD *)(v5 + 96);
                    }
                  }
                  if ( (v154 & 0x80u) != 0 )
                  {
                    v157 = *((_DWORD *)v6 + 20);
                    if ( v157 )
                      *((_DWORD *)v6 + 20) = v157 - 1;
                  }
                  v158 = *(_DWORD **)(v5 + 224);
                  if ( (*v158 & 0x200000) != 0 )
                  {
                    v159 = (unsigned int)v158[1];
                    v160 = v158 + 2;
                    for ( n = 0; n < (unsigned int)v159; ++v160 )
                    {
                      if ( *v160 == 11 )
                        break;
                      ++n;
                    }
                    if ( n < (unsigned int)v159 )
                      v4 = (_QWORD *)((char *)v158 + v159 + 8LL * n - (((_BYTE)v159 + 15) & 7) + 15);
                    v162 = (_QWORD *)*v4;
                    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v4 + 48LL))(*v4, 180LL) )
                    {
LABEL_339:
                      if ( v162 )
                        --*((_DWORD *)v6 + 136);
                    }
                    else if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v162 + 48LL))(v162, 53LL) )
                    {
                      v162 = (_QWORD *)v162[10];
                      goto LABEL_339;
                    }
                  }
                  *(_DWORD *)(v5 + 88) &= 0xFFFFFF80;
                  *(_BYTE *)(v5 + 92) &= 0x81u;
                  return v22;
                }
              }
            }
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
              McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_P3D_BUILDING_POLYGONLIST_Stop);
            operator delete(lpMem);
          }
          if ( v144 && *((_DWORD *)v144 + 25) == 1 )
            CBspPreComputeHelper::PopStacksForBspChildVisual(
              (CPreComputeContext *)((char *)v6 + 744),
              (const struct CVisual *)v5);
          goto LABEL_320;
        }
        if ( *((_BYTE *)v8 + 32) )
        {
          v50 = v43 + 328;
        }
        else
        {
          v57 = (unsigned __int64 *)CVisual::GetTreeDataListHead((CVisual *)v43);
          if ( !v57 )
            goto LABEL_89;
          ii = *v57;
          if ( (unsigned __int64 *)*v57 == v57 )
            goto LABEL_89;
          while ( 1 )
          {
            v50 = ii - 224;
            if ( *(struct CVisualTree **)(ii + 32) == v8 )
              break;
            ii = *(_QWORD *)ii;
            if ( (unsigned __int64 *)ii == v57 )
              goto LABEL_89;
          }
        }
        if ( !v50 )
          goto LABEL_89;
        v51 = 0;
        v52 = *(_QWORD *)(*(_QWORD *)(v43 + 16) + 384LL);
        if ( (v49 & 0x800000) != 0
          && ((v53 = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(v48, 9LL),
               v55 = *(unsigned int *)(v54 + 4),
               v53 >= (unsigned int)v55)
            ? (v56 = 0LL)
            : (v56 = (unsigned __int64 *)(v55 + 15 + v54 + 8LL * v53 - (((_BYTE)v55 + 15) & 7))),
              (ii = *v56) != 0
           && (v60 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)ii + 192LL))(*(_QWORD *)ii)) != 0LL
           && ((*(_BYTE *)(v50 + 16) & 4) == 0 || *(_QWORD *)(v50 + 216) != v52)) )
        {
          v8 = v166;
          v51 = 1;
          if ( CVisual::FindTreeData(v60, v166) )
            goto LABEL_107;
        }
        else
        {
          v8 = v166;
        }
        if ( v43 != *((_QWORD *)v8 + 3) && !*((_BYTE *)v8 + 32) )
        {
          v61 = (unsigned __int64 *)CVisual::GetTreeDataListHead(*(CVisual **)(v43 + 80));
          if ( v61 )
          {
            for ( ii = *v61; (unsigned __int64 *)ii != v61; ii = *(_QWORD *)ii )
            {
              if ( *(struct CVisualTree **)(ii + 32) == v8 )
                break;
            }
          }
        }
        if ( !v51 )
        {
LABEL_89:
          v165[0] = 0;
          v174 = 0;
          LODWORD(v185) = 0;
          CVisual::CalcEffectiveTransform(v43, 5LL, 0LL, v165, &v170, v8, &v181);
          if ( !v164 )
          {
            if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(&v175) )
            {
              v175 = v170;
              v58 = v172;
              v176 = v171;
              v59 = v173;
              v179 = v174;
              goto LABEL_117;
            }
            CMILMatrix::Ensure3DFlags((CMILMatrix *)&v170);
            if ( (v174 & 3) != 1 )
            {
              if ( (v174 & 0xC) == 4 )
                goto LABEL_115;
              if ( (v174 & 0xC0) == 0x40 )
              {
                v62 = *((float *)&v171 + 1);
                v63 = *(float *)&v170;
                goto LABEL_114;
              }
              if ( (BYTE1(v174) & 0xC) == 4 )
              {
                CMILMatrix::Rotate90((CMILMatrix *)&v175);
                v62 = *((float *)&v170 + 1);
                LODWORD(v63) = v171 ^ _xmm;
LABEL_114:
                CMILMatrix::Scale((CMILMatrix *)&v175, v63, v62, *((float *)&v172 + 2));
LABEL_115:
                CMILMatrix::Translate(
                  (CMILMatrix *)&v175,
                  *(float *)&v173,
                  *((float *)&v173 + 1),
                  *((float *)&v173 + 2));
              }
              else
              {
                v64 = Windows::Foundation::Numerics::operator*((__int64)v180, &v175, &v170);
                v179 = 0;
                v65 = v64[1];
                v175 = *v64;
                v58 = v64[2];
                v176 = v65;
                v59 = v64[3];
LABEL_117:
                v178 = v59;
                v177 = v58;
              }
            }
          }
          if ( (TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v44
             || v46 < *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
            && (*(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v45
             || v47 < *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
          {
            CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v170);
            v47 = v190.m128_f32[3];
            v46 = v190.m128_f32[2];
            v45 = v190.m128_f32[1];
            v44 = v190.m128_f32[0];
          }
          ii = *(_QWORD *)(v43 + 248);
          if ( ii )
          {
            v186.m128_u64[0] = 0LL;
            v186.m128_i8[8] = 0;
            ShapeData = CGeometry::GetShapeData(
                          (CGeometry *)ii,
                          (const struct D2D_SIZE_F *)(v43 + 132),
                          (struct CShapePtr *)&v186);
            ii = v186.m128_u64[0];
            if ( ShapeData >= 0 && v186.m128_u64[0] )
            {
              v67 = (*(__int64 (__fastcall **)(unsigned __int64, __m128 *, __int128 *))(*(_QWORD *)v186.m128_u64[0]
                                                                                      + 32LL))(
                      v186.m128_u64[0],
                      &v188,
                      &v181);
              if ( v67 >= 0 )
              {
                TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v190, &v188);
                v47 = v190.m128_f32[3];
                v46 = v190.m128_f32[2];
                v45 = v190.m128_f32[1];
                v44 = v190.m128_f32[0];
              }
              else
              {
                MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x10Du, 0LL);
              }
              ii = v186.m128_u64[0];
            }
            if ( v186.m128_i8[8] && ii )
              (**(void (__fastcall ***)(unsigned __int64, __int64))ii)(ii, 1LL);
            v186.m128_u64[0] = 0LL;
            v186.m128_i8[8] = 0;
          }
          goto LABEL_134;
        }
LABEL_107:
        LODWORD(v44) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v45 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        v46 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v47 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
        v190 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
        v164 = 1;
LABEL_134:
        v43 = *(_QWORD *)(v43 + 80);
        if ( !v43 )
          goto LABEL_135;
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 264LL))(v5) )
      *(_DWORD *)(v5 + 88) |= 0x80u;
    v23 = *(_DWORD **)(v5 + 224);
    if ( (*v23 & 0x200000) != 0 )
    {
      v24 = (unsigned int)v23[1];
      v25 = v23 + 2;
      for ( jj = 0; jj < (unsigned int)v24; ++v25 )
      {
        if ( *v25 == 11 )
          break;
        ++jj;
      }
      if ( jj >= (unsigned int)v24 )
        v27 = 0LL;
      else
        v27 = (_QWORD **)((char *)v23 + 8LL * jj - (((_BYTE)v24 + 15) & 7) + v24 + 15);
      v28 = *v27;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v28 + 48LL))(v28, 180LL) )
        goto LABEL_40;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v28 + 48LL))(v28, 53LL) )
      {
        v28 = (_QWORD *)v28[10];
LABEL_40:
        if ( v28 )
          *(_DWORD *)(v5 + 88) |= 0x100u;
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 352LL))(v5) )
      *(_DWORD *)(v5 + 88) |= 0x200u;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 360LL))(v5) )
      *(_DWORD *)(v5 + 88) |= 0x400u;
    ii = *(_QWORD *)(v5 + 256);
    if ( ii
      && (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)ii + 48LL))(ii, 14LL)
      && (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 256) + 352LL))(*(_QWORD *)(v5 + 256)) )
    {
      *(_DWORD *)(v5 + 88) |= 0x800u;
    }
    a3 = *(bool **)(v5 + 224);
    if ( (*(_DWORD *)a3 & 0x400000) != 0 )
    {
      v29 = *((unsigned int *)a3 + 1);
      ii = (unsigned __int64)(a3 + 8);
      for ( kk = 0; kk < (unsigned int)v29; ++ii )
      {
        if ( *(_BYTE *)ii == 10 )
          break;
        ++kk;
      }
      if ( kk >= (unsigned int)v29 )
      {
        v32 = 0LL;
      }
      else
      {
        v31 = v29 + 15;
        ii = 8LL * kk - (v31 & 7);
        v32 = &a3[ii + v31];
      }
      v33 = *(_QWORD *)v32;
      if ( v33 )
      {
        ii = *(_QWORD *)(v33 + 96);
        if ( ii )
        {
          if ( *(_QWORD *)(ii + 64) )
            *(_DWORD *)(v5 + 88) |= 0x1000u;
        }
      }
    }
    goto LABEL_61;
  }
  v21 = CVisual::ConvertInnerToOuterBounds((CVisual *)v5, v8);
  v22 = v21;
  if ( v21 >= 0 )
  {
    *(_DWORD *)(v5 + 88) &= ~1u;
    v20 = *(_DWORD *)(v5 + 88);
    goto LABEL_26;
  }
  MilInstrumentationCheckHR_MaybeFailFast(ii, 0LL, 0, v21, 0x2A4u, 0LL);
  return v22;
}
