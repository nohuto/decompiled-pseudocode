/*
 * XREFs of ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690
 * Callers:
 *     ??$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCPreComputeContext@@W4WalkReason@@@Z @ 0x1800431B0 (--$WalkSubtree@VCPreComputeContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEA.c)
 * Callees:
 *     ?HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z @ 0x1800042E0 (-HasValidSource@CWindowBackgroundTreatment@@QEBA_NPEBVIRenderTarget@@@Z.c)
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18000ED88 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x180012488 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013BF0 (-AddRectangleToBounds@CWindowBackgroundTreatment@@QEAAJAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF.c)
 *     ??8?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV0@@Z @ 0x180014EFC (--8-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3D.c)
 *     ?AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ @ 0x180015790 (-AreWorldBoundsUnchangedForPreCompute@CWindowBackgroundTreatment@@QEBA_NXZ.c)
 *     ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x18001BE2C (-GetTopLevelWindow@CVisual@@QEBA_KXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z @ 0x1800294B4 (-CopyTransform@CInputManager@@SAXAEBVCMILMatrix@@PEAUtagINPUT_TRANSFORM@@@Z.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CE38 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002F61C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18003066C (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x1800368E0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z @ 0x18003A040 (-ConvertInnerToOuterBounds@CVisual@@IEAAJPEBVCVisualTree@@@Z.c)
 *     ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003F790 (-_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeede.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180040650 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180041420 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVisualTree@@3@Z @ 0x180044D00 (-CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@PEBVCVi.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x1800454C0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180047744 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?IntersectUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180055760 (-IntersectUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUnique.c)
 *     ?UnionUnsafe@?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180056BE0 (-UnionUnsafe@-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness.c)
 *     ?reserve_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBackdropBlur@CBackdropRegion@@_K0@Z @ 0x180059D18 (-reserve_region@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBac.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18005CB5C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Pop@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18006A728 (-Pop@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180073D1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?GetTopByReference@?$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ @ 0x180076330 (-GetTopByReference@-$CWatermarkStack@PEAVCBspNode@@$0EA@$01$09@@QEBAPEBQEAVCBspNode@@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?DoesIntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800AA600 (-DoesIntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DB270 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800DB300 (--$Transform3DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMil.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ @ 0x1800E4794 (-ClearRenderTargetMaps@CWindowBackgroundTreatment@@QEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800E4DF4 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180145780 (McTemplateU0.c)
 *     McTemplateU0p @ 0x180172CC8 (McTemplateU0p.c)
 *     ?IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z @ 0x1801B71D8 (-IsPreserve3DRoot@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1801B7298 (-IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801E2780 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 *     ?CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z @ 0x180224538 (-CheckVisibilityAndInsertIntoBspTree@CBspPreComputeHelper@@AEAAJPEAVCVisual@@_N@Z.c)
 *     ?PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x1802248A0 (-PopStacksForBspChildVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z @ 0x18022496C (-PopStacksForBspRootVisual@CBspPreComputeHelper@@AEAAXPEBVCVisual@@@Z.c)
 *     ?PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z @ 0x1802255A8 (-PreComputePostSubgraph@CDepthSortingPreComputeHelper@@QEAAJPEAVCVisual@@0PEBVCVisualTree@@@Z.c)
 *     ?BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z @ 0x180225F3C (-BuildPolygonList@CBspPolygonListBuilder@@QEAAJPEAVCBspNode@@@Z.c)
 */

__int64 __fastcall CPreComputeContext::PostSubgraph(CPreComputeContext *this, const struct CVisualTree *a2, bool *a3)
{
  _QWORD *v3; // r12
  __int64 v4; // rbx
  struct CVisualTree *v5; // r9
  bool v6; // zf
  struct CWindowBackgroundTreatment *v8; // r15
  __int64 v9; // rax
  __int64 v10; // r14
  _DWORD *v11; // r8
  _DWORD *v12; // r8
  int v13; // edi
  unsigned __int64 n; // rcx
  char v15; // al
  CMILMatrix *v16; // r13
  unsigned __int8 v17; // dl
  _DWORD *v18; // r8
  int v19; // r9d
  int v20; // edi
  int v21; // eax
  _DWORD *v22; // r8
  int v24; // ecx
  int v25; // r8d
  unsigned __int64 TopLevelWindow; // rax
  unsigned int v27; // r10d
  __int64 v28; // rax
  unsigned int v29; // edx
  int v30; // eax
  char v31; // dl
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // ecx
  __int64 v35; // rax
  _BYTE *v36; // rdx
  unsigned int j; // ecx
  _QWORD **v38; // rdi
  _QWORD *v39; // rdi
  __int64 v40; // rax
  _BYTE *v41; // rdx
  unsigned int kk; // ecx
  _QWORD *v43; // r14
  float v44; // xmm6_4
  int v45; // eax
  float v46; // xmm2_4
  float v47; // xmm1_4
  float v48; // xmm3_4
  float v49; // xmm4_4
  int v50; // eax
  __int128 v51; // xmm6
  bool v52; // cc
  FLOAT v53; // xmm5_4
  float v54; // xmm2_4
  float v55; // xmm0_4
  float v56; // xmm0_4
  __int64 v57; // r13
  __int64 v58; // rax
  _BYTE *v59; // rdx
  __int64 k; // rcx
  __int64 *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // r10
  unsigned int ii; // eax
  __int64 *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rdi
  struct _LIST_ENTRY *TreeData; // r13
  unsigned __int64 Blink; // rax
  int v71; // eax
  _QWORD *v72; // rcx
  unsigned int v73; // ecx
  __int64 v74; // rax
  unsigned int v75; // edx
  int v76; // eax
  int v77; // eax
  __int64 v78; // rcx
  int v79; // eax
  CMILMatrix *v80; // rcx
  int v81; // eax
  __int64 v82; // rax
  struct CWindowBackgroundTreatment *v83; // r10
  int v84; // eax
  int v85; // eax
  const struct CVisualTree *v86; // r15
  struct D2D_RECT_F *v87; // r13
  unsigned int i; // edi
  __int64 v89; // rax
  __int64 v90; // rax
  _BYTE *v91; // rcx
  __int128 v92; // xmm0
  int v93; // eax
  __int64 v94; // rdi
  float v95; // xmm6_4
  float v96; // xmm7_4
  float v97; // xmm8_4
  float v98; // xmm9_4
  _DWORD *v99; // r8
  int v100; // r10d
  struct CVisualTree *v101; // r11
  unsigned __int64 v102; // r13
  char v103; // r11
  __int128 v104; // xmm0
  __int128 v105; // xmm1
  int v106; // eax
  unsigned int v107; // ecx
  float v108; // xmm2_4
  float v109; // xmm3_4
  float v110; // xmm1_4
  unsigned __int128 v111; // xmm0
  unsigned int v112; // eax
  struct CWindowBackgroundTreatment *v113; // rax
  int v114; // eax
  _OWORD *v115; // rcx
  __int128 v116; // xmm1
  FLOAT v117; // xmm0_4
  float v118; // xmm7_4
  FLOAT v119; // xmm2_4
  float v120; // xmm6_4
  FLOAT v121; // xmm4_4
  float v122; // xmm3_4
  struct CWindowBackgroundTreatment *v123; // rdi
  __int64 v124; // r8
  __int64 v125; // r8
  char v126; // cl
  __int64 v127; // rax
  bool v128; // al
  unsigned __int64 *TreeDataListHead; // rax
  unsigned __int64 *v130; // rax
  __int64 v131; // rdx
  _BYTE *v132; // rcx
  unsigned int m; // eax
  unsigned __int64 *v134; // rcx
  CVisual *v135; // rax
  struct CWindowBackgroundTreatment *WindowBackgroundTreatmentInternal; // rax
  __int128 v137; // xmm1
  __int128 v138; // xmm0
  __int128 v139; // xmm1
  const struct CMILMatrix *TopByReference; // rax
  int v141; // eax
  unsigned int v142; // ecx
  __int64 v143; // rcx
  unsigned int v144; // eax
  float v145; // xmm2_4
  float v146; // xmm1_4
  __int128 *v147; // rax
  __int128 v148; // xmm1
  _BYTE *v149; // rcx
  unsigned int jj; // eax
  unsigned __int64 *v151; // rcx
  CVisual *v152; // rax
  unsigned __int64 *v153; // rax
  __int64 v154; // r10
  int v155; // eax
  bool HasEffects; // r13
  int v157; // eax
  unsigned int v158; // ecx
  __int64 v159; // rdx
  __int64 v160; // r8
  __int64 v161; // r9
  struct CBspNode *v162; // rdx
  int v163; // eax
  unsigned int v164; // ecx
  int v165; // eax
  unsigned int v166; // ecx
  unsigned int v167; // [rsp+20h] [rbp-248h]
  char v168; // [rsp+40h] [rbp-228h] BYREF
  char v169; // [rsp+41h] [rbp-227h]
  char v170; // [rsp+42h] [rbp-226h]
  struct CVisualTree *v171; // [rsp+48h] [rbp-220h]
  struct CWindowBackgroundTreatment *v172; // [rsp+50h] [rbp-218h]
  __int128 v173; // [rsp+60h] [rbp-208h] BYREF
  __int128 v174; // [rsp+70h] [rbp-1F8h]
  __int128 v175; // [rsp+80h] [rbp-1E8h]
  __int128 v176; // [rsp+90h] [rbp-1D8h]
  int v177; // [rsp+A0h] [rbp-1C8h]
  __int128 v178; // [rsp+B0h] [rbp-1B8h] BYREF
  __int128 v179; // [rsp+C0h] [rbp-1A8h]
  __int128 v180; // [rsp+D0h] [rbp-198h]
  __int128 v181; // [rsp+E0h] [rbp-188h]
  int v182; // [rsp+F0h] [rbp-178h]
  char v183[64]; // [rsp+100h] [rbp-168h] BYREF
  __int128 v184; // [rsp+140h] [rbp-128h] BYREF
  __m256i v185; // [rsp+150h] [rbp-118h] BYREF
  void *v186[2]; // [rsp+170h] [rbp-F8h]
  __int128 v187; // [rsp+180h] [rbp-E8h]
  unsigned __int128 v188; // [rsp+190h] [rbp-D8h] BYREF
  struct D2D_RECT_F v189; // [rsp+1A0h] [rbp-C8h] BYREF
  __int128 v190; // [rsp+1B0h] [rbp-B8h] BYREF
  __int64 v191; // [rsp+1C0h] [rbp-A8h]
  unsigned __int128 v192; // [rsp+1C8h] [rbp-A0h] BYREF
  __int64 v193; // [rsp+1D8h] [rbp-90h]

  *a3 = 1;
  v3 = 0LL;
  v4 = *((_QWORD *)this + 69);
  v5 = a2;
  v6 = *((_BYTE *)a2 + 32) == 0;
  v8 = (struct CWindowBackgroundTreatment *)*((_QWORD *)this + 70);
  v171 = a2;
  v9 = *(_QWORD *)(v4 + 288);
  v10 = v4 + 328;
  if ( v6 )
    v10 = 0LL;
  v172 = v8;
  if ( (unsigned int)((v9 - *(_QWORD *)(v4 + 280)) >> 4)
    || (unsigned int)((__int64)(*(_QWORD *)(v4 + 312) - *(_QWORD *)(v4 + 304)) >> 4) )
  {
    v86 = a2;
    v87 = (struct D2D_RECT_F *)&v188;
    *(_QWORD *)&v188 = 0x100000000LL;
    do
    {
      *(FLOAT *)&a2 = v87->left;
      for ( i = 0; i < (unsigned int)CVisual::GetLightsCount((_QWORD *)v4, (int)a2); ++i )
      {
        if ( (_DWORD)a2 )
          v89 = *(_QWORD *)(v4 + 312) - *(_QWORD *)(v4 + 304);
        else
          v89 = *(_QWORD *)(v4 + 288) - *(_QWORD *)(v4 + 280);
        if ( i >= (unsigned int)(v89 >> 4) )
        {
          v91 = 0LL;
        }
        else
        {
          if ( (_DWORD)a2 )
            v90 = *(_QWORD *)(v4 + 304);
          else
            v90 = *(_QWORD *)(v4 + 280);
          v91 = *(_BYTE **)(v90 + 16LL * i);
        }
        if ( v91[154] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, __int64))(*(_QWORD *)v91 + 208LL))(
                 v91,
                 v86,
                 v4) )
          {
            v92 = *(_OWORD *)(*((_QWORD *)this + 37) + 16LL * (unsigned int)--*((_DWORD *)this + 80));
            if ( (_QWORD)v92 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v92 + 16LL))(v92);
          }
          *(FLOAT *)&a2 = v87->left;
        }
      }
      v87 = (struct D2D_RECT_F *)((char *)v87 + 4);
    }
    while ( v87 != (struct D2D_RECT_F *)((char *)&v188 + 8) );
    v8 = v172;
    v5 = v171;
  }
  if ( (*(_BYTE *)(v4 + 88) & 1) != 0 )
  {
    v31 = *(_BYTE *)(v4 + 94);
    if ( (v31 & 8) != 0 )
    {
      v143 = (unsigned int)(*(float *)(v4 + 184) <= *(float *)(v4 + 180)) + 1;
      if ( *(float *)(v4 + 172) > *(float *)(v4 + 164) )
        v143 = *(float *)(v4 + 184) <= *(float *)(v4 + 180);
      v144 = v143 + 1;
      if ( *(float *)(v4 + 176) > *(float *)(v4 + 168) )
        v144 = v143;
      if ( v144 <= 1 )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        {
          McTemplateU0p(v143, &EVTDESC_PROCESS_VISUAL_FIRSTFRAME, v4, v5);
          v31 = *(_BYTE *)(v4 + 94);
          v5 = v171;
        }
        *(_BYTE *)(v4 + 94) = v31 & 0xF7;
      }
    }
    v32 = CVisual::ConvertInnerToOuterBounds((CVisual *)v4, (CVisual **)v5);
    v20 = v32;
    if ( v32 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x2A7u);
      return (unsigned int)v20;
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, const struct CVisualTree *, bool *, struct CVisualTree *))(*(_QWORD *)v4 + 312LL))(
         v4,
         a2,
         a3,
         v5) )
  {
    *(_DWORD *)(v4 + 88) |= 0x100u;
  }
  v11 = *(_DWORD **)(v4 + 224);
  if ( (*v11 & 0x200000) == 0 )
    goto LABEL_9;
  v35 = (unsigned int)v11[1];
  v36 = v11 + 2;
  for ( j = 0; j < (unsigned int)v35; ++v36 )
  {
    if ( *v36 == 11 )
      break;
    ++j;
  }
  if ( j >= (unsigned int)v35 )
    v38 = 0LL;
  else
    v38 = (_QWORD **)((char *)v11 + v35 + 8LL * j - (((_BYTE)v35 + 15) & 7) + 15);
  v39 = *v38;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v39 + 48LL))(v39, 149LL) )
    goto LABEL_64;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v39 + 48LL))(v39, 51LL) )
  {
    v39 = (_QWORD *)v39[11];
LABEL_64:
    if ( v39 )
      *(_DWORD *)(v4 + 88) |= 0x80u;
  }
LABEL_9:
  v12 = *(_DWORD **)(v4 + 224);
  v13 = 0;
  if ( (*v12 & 0x400000) != 0 )
  {
    v58 = (unsigned int)v12[1];
    v59 = v12 + 2;
    for ( k = 0LL; (unsigned int)k < (unsigned int)v58; ++v59 )
    {
      if ( *v59 == 10 )
        break;
      k = (unsigned int)(k + 1);
    }
    if ( (unsigned int)k >= (unsigned int)v58 )
      v61 = 0LL;
    else
      v61 = (__int64 *)((char *)v12 + v58 + 8 * k - (((_BYTE)v58 + 15) & 7) + 15);
    v62 = *v61;
    if ( v62 )
    {
      v63 = *(_QWORD *)(v62 + 96);
      if ( v63 )
      {
        if ( *(_QWORD *)(v63 + 64) )
        {
          *(_DWORD *)(v4 + 88) |= 0x200u;
          v13 = 16;
        }
      }
    }
  }
  if ( (*(_BYTE *)(v4 + 95) & 1) != 0 )
    v13 = 16;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 224LL))(v4) )
    *(_DWORD *)(v4 + 88) |= 0x400u;
  if ( v8 )
  {
    LODWORD(n) = (v13 << 7) | *((_DWORD *)v8 + 22) ^ ((unsigned __int16)*((_DWORD *)v8 + 22) ^ (unsigned __int16)(*((_DWORD *)v8 + 22) | *(_DWORD *)(v4 + 88))) & 0xF80;
    *((_DWORD *)v8 + 22) = n;
    if ( (n & 1) != 0 )
      TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::UnionUnsafe((char *)v8 + 164);
  }
  if ( (*(_BYTE *)(v4 + 272) & 2) == 0 )
    goto LABEL_18;
  v94 = v4;
  LODWORD(v95) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v96 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v97 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v98 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v188 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v178 = _xmm;
  v179 = _xmm;
  v180 = _xmm;
  v181 = _xmm;
  LOWORD(v182) = 32085;
  v169 = 0;
  while ( 1 )
  {
    v99 = *(_DWORD **)(v94 + 224);
    v100 = *v99;
    if ( (*v99 & 0x100000) != 0 )
      break;
    v101 = v171;
    if ( *((_BYTE *)v171 + 32) )
    {
      v102 = v94 + 328;
    }
    else
    {
      TreeDataListHead = (unsigned __int64 *)CVisual::GetTreeDataListHead((CVisual *)v94);
      if ( !TreeDataListHead )
        goto LABEL_192;
      n = *TreeDataListHead;
      if ( (unsigned __int64 *)*TreeDataListHead == TreeDataListHead )
        goto LABEL_192;
      while ( 1 )
      {
        v102 = n - 224;
        if ( *(struct CVisualTree **)(n + 32) == v101 )
          break;
        n = *(_QWORD *)n;
        if ( (unsigned __int64 *)n == TreeDataListHead )
          goto LABEL_192;
      }
      v99 = *(_DWORD **)(v94 + 224);
    }
    if ( !v102 )
      goto LABEL_192;
    v103 = 0;
    v172 = *(struct CWindowBackgroundTreatment **)(*(_QWORD *)(v94 + 16) + 368LL);
    if ( (v100 & 0x800000) != 0 )
    {
      v131 = (unsigned int)v99[1];
      v132 = v99 + 2;
      for ( m = 0; m < (unsigned int)v131; ++v132 )
      {
        if ( *v132 == 9 )
          break;
        ++m;
      }
      v134 = m >= (unsigned int)v131
           ? 0LL
           : (unsigned __int64 *)((char *)v99 + v131 + 8LL * m - (((_BYTE)v131 + 15) & 7) + 15);
      n = *v134;
      if ( n )
      {
        v135 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)n + 152LL))(*(_QWORD *)n);
        if ( !v135
          || (*(_BYTE *)(v102 + 16) & 4) != 0
          && (LODWORD(n) = (_DWORD)v172, *(struct CWindowBackgroundTreatment **)(v102 + 216) == v172) )
        {
          v103 = 0;
        }
        else
        {
          if ( CVisual::FindTreeData(v135, v171) )
            goto LABEL_293;
          v103 = 1;
        }
      }
    }
    if ( v94 != *((_QWORD *)v171 + 3) && !*((_BYTE *)v171 + 32) )
    {
      v130 = (unsigned __int64 *)CVisual::GetTreeDataListHead(*(CVisual **)(v94 + 80));
      if ( v130 )
      {
        for ( n = *v130; (unsigned __int64 *)n != v130; n = *(_QWORD *)n )
        {
          if ( *(struct CVisualTree **)(n + 32) == v171 )
            break;
        }
      }
    }
    if ( !v103 )
    {
      v101 = v171;
LABEL_192:
      v168 = 0;
      v177 = 0;
      LODWORD(v187) = 0;
      CVisual::CalcEffectiveTransform(v94, 5LL, 0LL, &v168, &v173, v101, &v184);
      if ( !v169 )
      {
        if ( CMILMatrix::IsIdentity<1>((__int64)&v178) )
        {
          v178 = v173;
          v104 = v175;
          v179 = v174;
          v105 = v176;
          v182 = v177;
        }
        else
        {
          CMILMatrix::Ensure3DFlags((CMILMatrix *)&v173);
          if ( (v177 & 3) == 1 )
            goto LABEL_195;
          if ( (v177 & 0xC) == 4 )
          {
LABEL_224:
            CMILMatrix::Translate((CMILMatrix *)&v178, *(float *)&v176, *((float *)&v176 + 1), *((float *)&v176 + 2));
            goto LABEL_195;
          }
          if ( (v177 & 0xC0) == 0x40 )
          {
            v145 = *((float *)&v174 + 1);
            v146 = *(float *)&v173;
LABEL_325:
            CMILMatrix::Scale((CMILMatrix *)&v178, v146, v145, *((float *)&v175 + 2));
            goto LABEL_224;
          }
          if ( (BYTE1(v177) & 0xC) == 4 )
          {
            CMILMatrix::Rotate90((CMILMatrix *)&v178);
            LODWORD(v146) = v174 ^ _xmm;
            v145 = *((float *)&v173 + 1);
            goto LABEL_325;
          }
          v147 = Windows::Foundation::Numerics::operator*((__int64)v183, &v178, &v173);
          v182 = 0;
          v148 = v147[1];
          v178 = *v147;
          v104 = v147[2];
          v179 = v148;
          v105 = v147[3];
        }
        v181 = v105;
        v180 = v104;
      }
LABEL_195:
      if ( (TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite < v95
         || v97 < *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2))
        && (*(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) < v96
         || v98 < *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3)) )
      {
        CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)&v173);
        v98 = *((float *)&v188 + 3);
        v97 = *((float *)&v188 + 2);
        v96 = *((float *)&v188 + 1);
        LODWORD(v95) = v188;
      }
      n = *(_QWORD *)(v94 + 248);
      if ( !n )
        goto LABEL_199;
      *(_QWORD *)&v189.left = 0LL;
      LOBYTE(v189.right) = 0;
      if ( (int)CGeometry::GetShapeData(
                  (CGeometry *)n,
                  (const struct D2D_SIZE_F *)(v94 + 132),
                  (struct CShapePtr *)&v189) < 0 )
      {
LABEL_218:
        n = *(_QWORD *)&v189.left;
      }
      else
      {
        n = *(_QWORD *)&v189.left;
        if ( *(_QWORD *)&v189.left )
        {
          v106 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int128 *))(**(_QWORD **)&v189.left + 32LL))(
                   *(_QWORD *)&v189.left,
                   &v190,
                   &v184);
          if ( v106 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v107, 0LL, 0, v106, 0x10Du);
          }
          else
          {
            if ( *(float *)&v190 > v95 )
            {
              LODWORD(v188) = v190;
              LODWORD(v95) = v190;
            }
            v108 = v96;
            if ( *((float *)&v190 + 1) > v96 )
            {
              DWORD1(v188) = DWORD1(v190);
              v96 = *((float *)&v190 + 1);
              v108 = *((float *)&v190 + 1);
            }
            v109 = v97;
            if ( v97 > *((float *)&v190 + 2) )
            {
              DWORD2(v188) = DWORD2(v190);
              v97 = *((float *)&v190 + 2);
              v109 = *((float *)&v190 + 2);
            }
            v110 = v98;
            if ( v98 > *((float *)&v190 + 3) )
            {
              HIDWORD(v188) = HIDWORD(v190);
              v98 = *((float *)&v190 + 3);
              v110 = *((float *)&v190 + 3);
            }
            if ( v109 <= v95 || v110 <= v108 )
            {
              v98 = 0.0;
              v97 = 0.0;
              v96 = 0.0;
              v95 = 0.0;
              v188 = 0uLL;
            }
          }
          goto LABEL_218;
        }
      }
      if ( LOBYTE(v189.right) && n )
        (**(void (__fastcall ***)(unsigned __int64, __int64))n)(n, 1LL);
      *(_QWORD *)&v189.left = 0LL;
      LOBYTE(v189.right) = 0;
      goto LABEL_199;
    }
LABEL_293:
    LODWORD(v95) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v96 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    v97 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
    v98 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v188 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    v169 = 1;
LABEL_199:
    v94 = *(_QWORD *)(v94 + 80);
    if ( !v94 )
      goto LABEL_18;
  }
  if ( !v169 )
    goto LABEL_226;
  WindowBackgroundTreatmentInternal = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v94);
  v137 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 232);
  v173 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 216);
  v138 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 248);
  v174 = v137;
  v139 = *(_OWORD *)((char *)WindowBackgroundTreatmentInternal + 264);
  LODWORD(WindowBackgroundTreatmentInternal) = *((_DWORD *)WindowBackgroundTreatmentInternal + 70);
  v175 = v138;
  v176 = v139;
  v177 = (int)WindowBackgroundTreatmentInternal;
  if ( CMILMatrix::Invert((CMILMatrix *)&v173) )
  {
    TopByReference = CMatrixStack::GetTopByReference((CPreComputeContext *)((char *)this + 232));
    CMILMatrix::Multiply(TopByReference, (const struct CMILMatrix *)&v173, (struct CMILMatrix *)&v178);
LABEL_226:
    v111 = *(_OWORD *)(v4 + 164);
    v193 = *(_QWORD *)(v4 + 180);
    v192 = v111;
    CMILMatrix::Transform3DBoundsHelper<0>(&v178, &v192, &v190);
    if ( !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v188) )
    {
      v193 = v191;
      *(_QWORD *)&v192 = __PAIR64__(LODWORD(v96), LODWORD(v95));
      *((_QWORD *)&v192 + 1) = __PAIR64__(LODWORD(v98), LODWORD(v97));
      TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(
        &v190,
        &v192);
    }
    LODWORD(n) = 1;
    v112 = *((float *)&v191 + 1) <= *(float *)&v191;
    if ( *((float *)&v190 + 2) <= *(float *)&v190 )
      ++v112;
    if ( *((float *)&v190 + 3) <= *((float *)&v190 + 1) )
      ++v112;
    if ( v112 <= 1 )
    {
      v113 = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v94);
      v114 = CWindowBackgroundTreatment::AddRectangleToBounds((__int64)v113, (__int64)&v190);
      v20 = v114;
      if ( v114 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(n, 0LL, 0, v114, 0x349u);
        return (unsigned int)v20;
      }
    }
  }
LABEL_18:
  v15 = *(_BYTE *)(v4 + 92);
  if ( (v15 & 2) != 0 )
  {
    LODWORD(n) = *((_DWORD *)this + 58);
    if ( (_DWORD)n )
    {
      *((_DWORD *)this + 58) = n - 1;
      v15 = *(_BYTE *)(v4 + 92);
    }
  }
  if ( (v15 & 4) != 0 )
  {
    LODWORD(n) = *((_DWORD *)this + 66);
    if ( (_DWORD)n )
    {
      *((_DWORD *)this + 66) = n - 1;
      v15 = *(_BYTE *)(v4 + 92);
    }
  }
  if ( (v15 & 0x10) != 0 )
  {
    LODWORD(n) = *((_DWORD *)this + 42);
    if ( (_DWORD)n )
    {
      *((_DWORD *)this + 42) = n - 1;
      v15 = *(_BYTE *)(v4 + 92);
    }
  }
  if ( (v15 & 8) != 0 )
  {
    LODWORD(n) = *((_DWORD *)this + 34);
    if ( (_DWORD)n )
    {
      *((_DWORD *)this + 34) = n - 1;
      v15 = *(_BYTE *)(v4 + 92);
    }
  }
  if ( (v15 & 0x20) != 0 )
  {
    LODWORD(n) = *((_DWORD *)this + 50);
    if ( (_DWORD)n )
    {
      *((_DWORD *)this + 50) = n - 1;
      v15 = *(_BYTE *)(v4 + 92);
    }
  }
  if ( (v15 & 0x40) != 0 )
    *((_BYTE *)this + 1177) = *((_BYTE *)this + 1177) == 0;
  v16 = (CMILMatrix *)&CMILMatrix::Identity;
  if ( (*(_BYTE *)(v4 + 272) & 1) != 0 )
  {
    n = *(_QWORD *)(v4 + 256);
    if ( n && (*(unsigned __int8 (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)n + 48LL))(n, 14LL) )
      *(_BYTE *)(v4 + 560) &= ~1u;
    v77 = *((_DWORD *)this + 26);
    if ( v77 )
    {
      v78 = (unsigned int)(v77 - 1);
      *((_DWORD *)this + 26) = v78;
      v79 = *((_DWORD *)this + 58);
      v189 = *(struct D2D_RECT_F *)(*((_QWORD *)this + 15) + 16 * v78);
      v80 = v79
          ? (CMILMatrix *)(*((_QWORD *)this + 31) + 68LL * (unsigned int)(v79 - 1))
          : (CMILMatrix *)&CMILMatrix::Identity;
      CMILMatrix::Transform3DBoundsHelper<1>(v80, v4 + 140, (__m128 *)&v192);
      v81 = *((_DWORD *)this + 66);
      if ( v81 )
      {
        v115 = (_OWORD *)(*((_QWORD *)this + 35) + 16LL * (unsigned int)(v81 - 1));
        v116 = *v115;
        v52 = *(float *)&v192 <= COERCE_FLOAT(*v115);
        v190 = *v115;
        if ( !v52 )
          LODWORD(v116) = v192;
        v117 = *((float *)&v190 + 1);
        v118 = *((float *)&v190 + 1);
        if ( *((float *)&v192 + 1) > *((float *)&v190 + 1) )
        {
          v117 = *((float *)&v192 + 1);
          v118 = *((float *)&v192 + 1);
        }
        v119 = *((float *)&v190 + 2);
        v120 = *((float *)&v190 + 2);
        if ( *((float *)&v190 + 2) > *((float *)&v192 + 2) )
        {
          v119 = *((float *)&v192 + 2);
          v120 = *((float *)&v192 + 2);
        }
        v121 = *((float *)&v190 + 3);
        v122 = *((float *)&v190 + 3);
        if ( *((float *)&v190 + 3) > *((float *)&v192 + 3) )
        {
          v121 = *((float *)&v192 + 3);
          v122 = *((float *)&v192 + 3);
        }
        if ( v120 <= *(float *)&v116 || v122 <= v118 )
        {
          v121 = 0.0;
          v119 = 0.0;
          v117 = 0.0;
          LODWORD(v116) = 0;
        }
        LODWORD(v188) = v116;
        *((FLOAT *)&v188 + 1) = v117;
        *((FLOAT *)&v188 + 2) = v119;
        *((FLOAT *)&v188 + 3) = v121;
      }
      else
      {
        v188 = v192;
      }
      if ( (*(_BYTE *)(v4 + 94) & 0x20) != 0 )
      {
        v82 = detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::reserve_region(
                *((_QWORD *)this + 88) + 16LL,
                (*(_QWORD *)(*((_QWORD *)this + 88) + 24LL) - *(_QWORD *)(*((_QWORD *)this + 88) + 16LL)) / 24LL);
        *(_OWORD *)(v82 + 8) = v188;
        *(_QWORD *)v82 = v4;
      }
      if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(&v189, &v188) )
      {
        v172 = (struct CWindowBackgroundTreatment *)*((_QWORD *)this + 87);
        v20 = 0;
        if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)&v188) )
        {
          CDirtyRegion::SetFullDirty(v83);
          v83 = v172;
        }
        if ( !*((_BYTE *)v83 + 2883) && !*((_DWORD *)v83 + 714) )
        {
          v84 = CDirtyRegion::_Add(v83, v4, 1, (const struct D2D_RECT_F *)&v188);
          v20 = v84;
          if ( v84 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(n, 0LL, 0, v84, 0x1ABu);
        }
        if ( v20 >= 0 )
        {
          *(_BYTE *)(v4 + 560) |= 1u;
          goto LABEL_26;
        }
        v167 = 913;
LABEL_390:
        MilInstrumentationCheckHR_MaybeFailFast(n, 0LL, 0, v20, v167);
        return (unsigned int)v20;
      }
    }
  }
LABEL_26:
  if ( (**(_DWORD **)(v4 + 224) & 0x100000) != 0 )
  {
    v172 = CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v4);
    v123 = v172;
    if ( (unsigned __int8)CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Pop(
                            (char *)this + 104,
                            &v189,
                            v124) )
    {
      if ( *((_BYTE *)v123 + 356) )
      {
        v168 = 0;
        CMILMatrix::Transform2DBoundsHelper<0>((struct CWindowBackgroundTreatment *)((char *)v123 + 216));
        if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::DoesIntersectUnsafe(&v189, &v190) )
        {
          LOBYTE(v125) = 1;
          v141 = CDirtyRegion::Add(*((CDirtyRegion **)this + 87), v4, v125, (__int64)&v190);
          v20 = v141;
          if ( v141 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v142, 0LL, 0, v141, 0x3B7u);
            return (unsigned int)v20;
          }
          v123 = v172;
          v168 = 1;
        }
        v126 = *((_BYTE *)v123 + 359);
        v169 = *((_BYTE *)v123 + 360);
        v170 = v126;
        if ( v169 && *((_BYTE *)v171 + 32) )
        {
          v127 = detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::reserve_region(
                   *((_QWORD *)this + 88) + 16LL,
                   (*(_QWORD *)(*((_QWORD *)this + 88) + 24LL) - *(_QWORD *)(*((_QWORD *)this + 88) + 16LL)) / 24LL);
          *(_OWORD *)(v127 + 8) = v190;
          *(_QWORD *)v127 = v4;
        }
        if ( CWindowBackgroundTreatment::HasValidSource(v123, 0LL)
          && TMil3DRect<float,TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,Mil3DRectF,RectUniqueness::NotNeeded>::operator==(
               (float *)v123 + 36,
               (float *)v123 + 48)
          && (unsigned __int8)CWindowBackgroundTreatment::AreWorldBoundsUnchangedForPreCompute(v123) )
        {
          v128 = 0;
          if ( v169 )
          {
            n = *(_QWORD *)(*(_QWORD *)this + 480LL) - *((_QWORD *)v123 + 47);
            if ( n < CCommonRegistryData::m_backdropBlurCachingThrottleQPCTimeDelta )
              v128 = 1;
          }
          if ( !v170 || v128 || !v168 )
            *((_BYTE *)v123 + 357) = 0;
        }
        else
        {
          CWindowBackgroundTreatment::ClearRenderTargetMaps(v123);
        }
      }
    }
  }
  if ( (*(_BYTE *)(v4 + 88) & 4) != 0 )
  {
    --*(_DWORD *)(*((_QWORD *)this + 87) + 2856LL);
    if ( *((_DWORD *)this + 134) || *(char *)(v4 + 88) < 0 )
    {
      v44 = FLOAT_4_0;
    }
    else if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 320LL))(v4) )
    {
      v44 = FLOAT_0_5;
    }
    else
    {
      v44 = 0.0;
    }
    v45 = *((_DWORD *)this + 58);
    if ( v45 )
      v16 = (CMILMatrix *)(*((_QWORD *)this + 31) + 68LL * (unsigned int)(v45 - 1));
    CMILMatrix::Transform3DBoundsHelper<1>(v16, v4 + 140, (__m128 *)&v192);
    v46 = *(float *)&v192;
    v47 = *((float *)&v192 + 1);
    v48 = *((float *)&v192 + 2);
    v49 = *((float *)&v192 + 3);
    if ( v44 > 0.0 && *((float *)&v192 + 2) > *(float *)&v192 && *((float *)&v192 + 3) > *((float *)&v192 + 1) )
    {
      v46 = *(float *)&v192 - v44;
      v47 = *((float *)&v192 + 1) - v44;
      v48 = *((float *)&v192 + 2) + v44;
      v49 = *((float *)&v192 + 3) + v44;
    }
    v50 = *((_DWORD *)this + 66);
    if ( v50 )
    {
      n = *((_QWORD *)this + 35) + 16LL * (unsigned int)(v50 - 1);
      v51 = *(_OWORD *)n;
      v52 = v46 <= COERCE_FLOAT(*(_OWORD *)n);
      v190 = *(_OWORD *)n;
      if ( !v52 )
        *(float *)&v51 = v46;
      v53 = *((float *)&v190 + 1);
      v54 = *((float *)&v190 + 1);
      if ( v47 > *((float *)&v190 + 1) )
      {
        v53 = v47;
        v54 = v47;
      }
      v55 = *((float *)&v190 + 2);
      if ( *((float *)&v190 + 2) > v48 )
        v55 = v48;
      v48 = v55;
      v56 = *((float *)&v190 + 3);
      if ( *((float *)&v190 + 3) > v49 )
        v56 = v49;
      if ( v48 <= *(float *)&v51 || v56 <= v54 )
      {
        v53 = 0.0;
        LODWORD(v51) = 0;
        v48 = 0.0;
        v49 = 0.0;
      }
      else
      {
        v49 = v56;
      }
      LODWORD(v189.left) = v51;
      v46 = *(float *)&v51;
      v189.top = v53;
      v47 = v53;
    }
    else
    {
      v189.left = v46;
      v189.top = v47;
    }
    v20 = 0;
    v57 = *((_QWORD *)this + 87);
    v189.bottom = v49;
    v189.right = v48;
    if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= v46
      && v48 >= *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2)
      || *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= v47
      && v49 >= *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
    {
      CDirtyRegion::SetFullDirty((CDirtyRegion *)v57);
    }
    if ( !*(_BYTE *)(v57 + 2883) && !*(_DWORD *)(v57 + 2856) )
    {
      v85 = CDirtyRegion::_Add((CDirtyRegion *)v57, v4, 1, &v189);
      v20 = v85;
      if ( v85 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(n, 0LL, 0, v85, 0x1ABu);
    }
    if ( v20 < 0 )
    {
      v167 = 1012;
      goto LABEL_390;
    }
  }
  if ( v10 )
  {
    v17 = *(_BYTE *)(v4 + 93);
    if ( (v17 & 1) != 0 )
    {
      v25 = *(_DWORD *)(v4 + 88);
      LODWORD(n) = (unsigned int)(v25 >> 7) >> 2;
      LOBYTE(n) = (v17 >> 1) ^ n;
      if ( (n & 1) != 0 )
      {
        *(_BYTE *)(v4 + 93) = v17 ^ (v17 ^ BYTE1(v25)) & 2;
        TopLevelWindow = CVisual::GetTopLevelWindow((CVisual *)v4);
        n = (unsigned __int64)this + 632;
        *(_QWORD *)&v190 = TopLevelWindow;
        v28 = *((unsigned int *)this + 164);
        DWORD2(v190) = (v27 >> 1) & 1;
        v29 = v28 + 1;
        if ( (int)v28 + 1 < (unsigned int)v28 )
        {
          v20 = -2147024362;
          MilInstrumentationCheckHR_MaybeFailFast(n, 0LL, 0, -2147024362, 0xB5u);
LABEL_48:
          if ( v20 < 0 )
          {
            v167 = 1022;
            goto LABEL_390;
          }
        }
        else
        {
          if ( v29 > *((_DWORD *)this + 163) )
          {
            v30 = DynArrayImpl<0>::AddMultipleAndSet(n, 16, 1, &v190);
            v20 = v30;
            if ( v30 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(n, 0LL, 0, v30, 0xC0u);
            goto LABEL_48;
          }
          *(_OWORD *)(*(_QWORD *)n + 16 * v28) = v190;
          *((_DWORD *)this + 164) = v29;
        }
      }
    }
    v18 = *(_DWORD **)(v4 + 224);
    v19 = *v18;
    if ( (*v18 & 0x400000) != 0 )
    {
      v64 = (unsigned int)v18[1];
      n = (unsigned __int64)(v18 + 2);
      for ( ii = 0; ii < (unsigned int)v64; ++n )
      {
        if ( *(_BYTE *)n == 10 )
          break;
        ++ii;
      }
      if ( ii >= (unsigned int)v64 )
      {
        v66 = 0LL;
      }
      else
      {
        n = 8LL * ii - (((_BYTE)v64 + 15) & 7);
        v66 = (__int64 *)((char *)v18 + v64 + n + 15);
      }
      v67 = *v66;
      if ( v67 )
      {
        n = *(_QWORD *)(v67 + 96);
        v68 = 0LL;
        if ( n )
          v68 = *(_QWORD *)(n + 64);
        if ( v68 )
        {
          if ( *((_BYTE *)this + 1177) )
            goto LABEL_126;
          v172 = *(struct CWindowBackgroundTreatment **)(*(_QWORD *)(v4 + 16) + 368LL);
          if ( *(struct CWindowBackgroundTreatment **)(v10 + 120) == v172 )
            goto LABEL_126;
          TreeData = 0LL;
          if ( (v19 & 0x800000) != 0 )
          {
            v149 = v18 + 2;
            for ( jj = 0; jj < (unsigned int)v64; ++v149 )
            {
              if ( *v149 == 9 )
                break;
              ++jj;
            }
            v151 = jj >= (unsigned int)v64
                 ? 0LL
                 : (unsigned __int64 *)((char *)v18 + v64 + 8LL * jj - (((_BYTE)v64 + 15) & 7) + 15);
            n = *v151;
            if ( n )
            {
              v152 = (CVisual *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)n + 152LL))(*(_QWORD *)n);
              if ( v152 )
              {
                if ( (*(_BYTE *)(v10 + 16) & 4) == 0
                  || (LODWORD(n) = (_DWORD)v172, *(struct CWindowBackgroundTreatment **)(v10 + 216) != v172) )
                {
                  TreeData = CVisual::FindTreeData(v152, v171);
                  if ( TreeData )
                    goto LABEL_124;
                }
              }
            }
          }
          if ( v4 != *((_QWORD *)v171 + 3) )
          {
            TreeData = 0LL;
            n = *(_QWORD *)(v4 + 80);
            if ( *((_BYTE *)v171 + 32) )
            {
              TreeData = (struct _LIST_ENTRY *)(n + 328);
            }
            else
            {
              v153 = (unsigned __int64 *)CVisual::GetTreeDataListHead((CVisual *)n);
              if ( v153 )
              {
                n = *v153;
                if ( (unsigned __int64 *)*v153 != v153 )
                {
                  while ( *(_QWORD *)(n + 32) != v154 )
                  {
                    n = *(_QWORD *)n;
                    if ( (unsigned __int64 *)n == v153 )
                      goto LABEL_123;
                  }
                  TreeData = (struct _LIST_ENTRY *)(n - 224);
                }
              }
            }
          }
LABEL_123:
          if ( TreeData )
LABEL_124:
            Blink = (unsigned __int64)TreeData[7].Blink;
          else
            Blink = 1LL;
          if ( *(_QWORD *)(v10 + 120) < Blink )
          {
LABEL_126:
            v71 = *((_DWORD *)this + 50);
            v72 = 0LL;
            *(_QWORD *)&v184 = v68;
            if ( v71 )
              v72 = (_QWORD *)(*((_QWORD *)this + 27) + 8LL * (unsigned int)(v71 - 1));
            *((_QWORD *)&v184 + 1) = *v72;
            CInputManager::CopyTransform((const struct CMILMatrix *)(v10 + 40), (struct tagINPUT_TRANSFORM *)&v185);
            v74 = *((unsigned int *)this + 172);
            v75 = v74 + 1;
            if ( (int)v74 + 1 < (unsigned int)v74 )
            {
              v20 = -2147024362;
              MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, -2147024362, 0xB5u);
LABEL_132:
              if ( v20 < 0 )
              {
                v167 = 1043;
                goto LABEL_390;
              }
            }
            else
            {
              if ( v75 > *((_DWORD *)this + 171) )
              {
                v76 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 664, 80, 1, &v184);
                v20 = v76;
                if ( v76 < 0 )
                  MilInstrumentationCheckHR_MaybeFailFast(n, 0LL, 0, v76, 0xC0u);
                goto LABEL_132;
              }
              n = *((_QWORD *)this + 83) + 80 * v74;
              *(_OWORD *)n = v184;
              *(__m256i *)(n + 16) = v185;
              *(_OWORD *)(n + 48) = *(_OWORD *)v186;
              *(_OWORD *)(n + 64) = v187;
              *((_DWORD *)this + 172) = v75;
            }
          }
        }
      }
    }
    *(_BYTE *)(v4 + 92) &= ~0x80u;
  }
  if ( *((_BYTE *)this + 1176) )
  {
    v155 = CDepthSortingPreComputeHelper::PreComputePostSubgraph(
             (CPreComputeContext *)((char *)this + 712),
             (struct CVisual *)v4,
             v8,
             v171);
    v20 = v155;
    if ( v155 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(n, 0LL, 0, v155, 0x41Du);
      return (unsigned int)v20;
    }
  }
  v20 = 0;
  if ( *((_DWORD *)this + 208) && (v8 && *((_DWORD *)v8 + 25) == 1 || CVisual::IsPreserve3DRoot((CVisual *)v4, v8)) )
  {
    HasEffects = CVisual::IsSimple3DRootOrHasEffects((CVisual *)v4, v8);
    v157 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
             (CPreComputeContext *)((char *)this + 736),
             (struct CVisual *)v4,
             HasEffects);
    v20 = v157;
    if ( v157 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v158, 0LL, 0, v157, 0x181u);
    }
    else
    {
      if ( !CVisual::IsPreserve3DRoot((CVisual *)v4, v8) )
        goto LABEL_385;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      {
        McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_P3D_BUILDING_BSPTREE_Stop);
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_P3D_BUILDING_POLYGONLIST_Start);
      }
      *(__int64 *)((char *)&v185.m256i_i64[2] + 4) = 0LL;
      v186[0] = 0LL;
      LODWORD(v186[1]) = 0;
      *(__int64 *)((char *)&v185.m256i_i64[1] + 4) = 1LL;
      DWORD1(v184) = 0;
      *((_QWORD *)&v184 + 1) = 0LL;
      v185.m256i_i64[0] = 0LL;
      *(_QWORD *)&v187 = v4;
      v162 = *(struct CBspNode **)CWatermarkStack<CBspNode *,64,2,10>::GetTopByReference(
                                    (char *)this + 736,
                                    v159,
                                    v160,
                                    v161);
      if ( v162 )
      {
        v163 = CBspPolygonListBuilder::BuildPolygonList((CBspPolygonListBuilder *)&v184, v162);
        v20 = v163;
        if ( v163 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v164, 0LL, 0, v163, 0x18Eu);
          goto LABEL_378;
        }
      }
      CBspPreComputeHelper::PopStacksForBspRootVisual((CPreComputeContext *)((char *)this + 736), v162);
      if ( *((_DWORD *)this + 208)
        && HasEffects
        && (v165 = CBspPreComputeHelper::CheckVisibilityAndInsertIntoBspTree(
                     (CPreComputeContext *)((char *)this + 736),
                     (struct CVisual *)v4,
                     1),
            v20 = v165,
            v165 < 0) )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v166, 0LL, 0, v165, 0x196u);
LABEL_378:
        WPF::ProcessHeapImpl::Free(v186[0]);
      }
      else
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_P3D_BUILDING_POLYGONLIST_Stop);
        WPF::ProcessHeapImpl::Free(v186[0]);
LABEL_385:
        if ( v8 && *((_DWORD *)v8 + 25) == 1 )
          CBspPreComputeHelper::PopStacksForBspChildVisual(
            (CPreComputeContext *)((char *)this + 736),
            (const struct CVisual *)v4);
      }
    }
  }
  if ( v20 < 0 )
  {
    v167 = 1056;
    goto LABEL_390;
  }
  v21 = *(_DWORD *)(v4 + 96);
  if ( (v21 & 2) != 0 )
  {
    v34 = *((_DWORD *)this + 2);
    if ( v34 )
    {
      *((_DWORD *)this + 2) = v34 - 1;
      v21 = *(_DWORD *)(v4 + 96);
    }
  }
  if ( (v21 & 8) != 0 )
  {
    v24 = *((_DWORD *)this + 10);
    if ( v24 )
    {
      *((_DWORD *)this + 10) = v24 - 1;
      v21 = *(_DWORD *)(v4 + 96);
    }
  }
  if ( (v21 & 0x80u) != 0 )
  {
    v93 = *((_DWORD *)this + 18);
    if ( v93 )
      *((_DWORD *)this + 18) = v93 - 1;
  }
  v22 = *(_DWORD **)(v4 + 224);
  if ( (*v22 & 0x200000) != 0 )
  {
    v40 = (unsigned int)v22[1];
    v41 = v22 + 2;
    for ( kk = 0; kk < (unsigned int)v40; ++v41 )
    {
      if ( *v41 == 11 )
        break;
      ++kk;
    }
    if ( kk < (unsigned int)v40 )
      v3 = (_QWORD *)((char *)v22 + v40 + 8LL * kk - (((_BYTE)v40 + 15) & 7) + 15);
    v43 = (_QWORD *)*v3;
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*v3 + 48LL))(*v3, 149LL) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*v43 + 48LL))(v43, 51LL) )
        goto LABEL_39;
      v43 = (_QWORD *)v43[11];
    }
    if ( v43 )
      --*((_DWORD *)this + 134);
  }
LABEL_39:
  *(_DWORD *)(v4 + 88) &= 0xFFFFFF80;
  *(_BYTE *)(v4 + 92) &= 0x81u;
  return (unsigned int)v20;
}
