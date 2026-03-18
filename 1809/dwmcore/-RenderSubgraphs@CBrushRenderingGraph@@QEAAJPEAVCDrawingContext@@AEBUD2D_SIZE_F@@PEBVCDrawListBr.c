/*
 * XREFs of ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800266A0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C97D0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180003AD8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x18000FE00 (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800268FC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180028E60 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002F090 (-GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNe.c)
 *     ?Top@?$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z @ 0x1800326D8 (-Top@-$CWatermarkStack@VCMILMatrix@@$07$01$07@@QEBAJPEAVCMILMatrix@@I@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ??4?$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionTrackerPositionAnimation@@@Z @ 0x18004ED70 (--4-$ComPtr@VCInteractionTrackerPositionAnimation@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteractionT.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x18005D030 (--1EffectInput@@QEAA@XZ.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x18005D438 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18005D4DC (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x18005E0B0 (-_Tidy@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXXZ.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x18005EC1C (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x18005ED30 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     ?CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z @ 0x1800660FC (-CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x18006A474 (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18008DF04 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800AA850 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800AE83C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x1800C8544 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800E4DF4 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Emplace_reallocate@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAPEAUEffectInput@@QEAU2@$$QEA$$T@Z @ 0x1801D4838 (--$_Emplace_reallocate@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAPEA.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801D4D6C (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderSubgraphs(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        struct CDrawListCache *a5)
{
  unsigned int v7; // r15d
  struct CRenderTargetImageSource *v8; // rbx
  int v9; // r14d
  int v10; // esi
  unsigned __int64 v11; // r12
  unsigned int v12; // esi
  CVisual *CurrentVisual; // rdx
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm1_4
  __int64 v17; // rsi
  __int64 v18; // rcx
  CBrushRenderingGraph *v19; // rcx
  char HasSubtreeSurface; // al
  CVisual *v21; // r14
  char DoesBackdropInputContributeToSubgraph; // r14
  struct D2D_SIZE_F *v23; // rsi
  FLOAT height; // xmm1_4
  int BackdropImageFromRenderTarget; // eax
  __int64 v26; // r15
  unsigned int v27; // r13d
  __int64 v28; // rsi
  __int64 v29; // r14
  __int64 *v30; // r15
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  FLOAT v35; // xmm1_4
  unsigned int v36; // r13d
  __int64 v37; // rbx
  unsigned int v38; // r12d
  __int64 v39; // rsi
  __int64 v40; // rbx
  __int64 v41; // r13
  __int64 v42; // r14
  __int64 v43; // rcx
  _BYTE *v44; // r15
  __int64 v45; // rcx
  unsigned int v46; // edx
  __int64 v47; // r13
  struct CDrawingContext *v48; // rbx
  __int64 v49; // rax
  __int64 v50; // r13
  __int64 v51; // rcx
  __int64 v52; // rdx
  __int64 *v53; // rdx
  unsigned int v54; // ecx
  unsigned int i; // ebx
  unsigned int j; // r12d
  __int64 v57; // r8
  __int64 v58; // rdx
  _QWORD *v59; // rsi
  __int64 v60; // r15
  __int64 v61; // rax
  __int64 *v62; // r15
  __int64 v63; // rbx
  __int64 v64; // rax
  __int64 v65; // rbx
  __int64 v66; // rcx
  int InputBrushParameters; // eax
  __m128 *v68; // r15
  struct D2D_SIZE_F *v69; // rsi
  struct CDrawingContext *v70; // rbx
  unsigned int v71; // xmm0_4
  unsigned int v72; // xmm1_4
  const struct CMILMatrix *TopByReference; // rax
  __m128 v74; // xmm0
  float v75; // xmm1_4
  float v76; // xmm6_4
  float v77; // xmm2_4
  float v78; // xmm7_4
  float v79; // xmm5_4
  float v80; // xmm3_4
  __m128 v81; // xmm0
  __m128 v82; // xmm0
  __m128 v83; // xmm0
  EffectInput *v84; // rdi
  __int64 v85; // rbx
  unsigned int *v87; // rbx
  __int64 v88; // rax
  struct CDrawingContext *v89; // rbx
  const struct _GUID *v90; // r8
  __int64 *v91; // rdx
  __int64 v92; // rdx
  struct IRenderTarget *v93; // rbx
  int v94; // eax
  __int64 v95; // rcx
  __int64 v96; // rax
  __m128 v97; // xmm1
  __m128 v98; // xmm1
  float *DestToTexSpaceTransform; // rax
  __int64 v100; // rcx
  void (__fastcall ***v101)(_QWORD, __int64); // rcx
  unsigned int v102; // [rsp+28h] [rbp-E0h]
  bool v103[8]; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_SIZE_F *v104; // [rsp+50h] [rbp-B8h]
  __int64 v105; // [rsp+58h] [rbp-B0h]
  struct IRenderTarget *v106; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_RECT_F v107; // [rsp+68h] [rbp-A0h] BYREF
  struct CDrawingContext *v108; // [rsp+78h] [rbp-90h]
  CVisual *v109; // [rsp+80h] [rbp-88h]
  struct CRenderTargetImageSource *v110; // [rsp+88h] [rbp-80h] BYREF
  __int64 v111; // [rsp+90h] [rbp-78h]
  __int128 v112; // [rsp+98h] [rbp-70h] BYREF
  __int64 v113; // [rsp+A8h] [rbp-60h]
  __int128 v114; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v115; // [rsp+C0h] [rbp-48h]
  struct CDrawListCache *v116; // [rsp+C8h] [rbp-40h]
  _OWORD v117[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v118; // [rsp+118h] [rbp+10h]
  float v119[10]; // [rsp+128h] [rbp+20h] BYREF
  __m128 v120; // [rsp+150h] [rbp+48h] BYREF
  struct CDrawListBrush *v121; // [rsp+170h] [rbp+68h] BYREF
  float v122; // [rsp+178h] [rbp+70h]
  float v123; // [rsp+17Ch] [rbp+74h]
  _QWORD v124[3]; // [rsp+180h] [rbp+78h] BYREF
  __int128 v125; // [rsp+198h] [rbp+90h] BYREF
  char v126; // [rsp+1A8h] [rbp+A0h]
  __int64 v127; // [rsp+1C8h] [rbp+C0h]
  __int64 v128; // [rsp+1D0h] [rbp+C8h]
  __int64 v129; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v130[2]; // [rsp+210h] [rbp+108h] BYREF
  char v131; // [rsp+220h] [rbp+118h]
  _BYTE v132[4]; // [rsp+23Ch] [rbp+134h]
  __int64 v133; // [rsp+240h] [rbp+138h]
  _QWORD v134[5]; // [rsp+248h] [rbp+140h]
  char v135; // [rsp+275h] [rbp+16Dh]
  __int128 v136; // [rsp+278h] [rbp+170h]
  char v137; // [rsp+288h] [rbp+180h]
  __int64 v138; // [rsp+2A8h] [rbp+1A0h]
  __int64 v139; // [rsp+2B0h] [rbp+1A8h]
  __int64 v140; // [rsp+2E0h] [rbp+1D8h]
  __int64 v141; // [rsp+2E8h] [rbp+1E0h]
  char v142; // [rsp+2F0h] [rbp+1E8h]
  __int64 v143; // [rsp+310h] [rbp+208h]
  __int64 v144; // [rsp+318h] [rbp+210h]
  __int128 v145; // [rsp+348h] [rbp+240h]
  char v146; // [rsp+358h] [rbp+250h]
  __int64 v147; // [rsp+378h] [rbp+270h]
  __int64 v148; // [rsp+380h] [rbp+278h]
  char v149; // [rsp+3B0h] [rbp+2A8h] BYREF
  __int128 v150; // [rsp+3B8h] [rbp+2B0h] BYREF
  char v151; // [rsp+3C8h] [rbp+2C0h]
  __int64 v152; // [rsp+3E8h] [rbp+2E0h]
  __int64 v153; // [rsp+3F0h] [rbp+2E8h]

  v7 = 0;
  v116 = a5;
  v8 = 0LL;
  v110 = 0LL;
  v131 = 0;
  v9 = 0;
  v121 = a4;
  v104 = a3;
  v108 = a2;
  v129 = 0LL;
  v130[0] = 0LL;
  v130[1] = 0LL;
  v133 = 0LL;
  v134[0] = 0LL;
  v136 = 0LL;
  v137 = 0;
  v138 = 0LL;
  v139 = 0LL;
  v140 = 0LL;
  v141 = 0LL;
  v142 = 0;
  v143 = 0LL;
  v144 = 0LL;
  v145 = 0LL;
  v146 = 0;
  v147 = 0LL;
  v148 = 0LL;
  v124[0] = 0LL;
  v124[1] = 0LL;
  v125 = 0LL;
  v126 = 0;
  v127 = 0LL;
  v128 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v125 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v125);
  memset_0(&v125, 0, 0x68uLL);
  v151 = 0;
  v152 = 0LL;
  v150 = 0LL;
  v153 = 0LL;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v150 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v150);
  memset_0(&v150, 0, 0x68uLL);
  v118 = 0;
  if ( *((_DWORD *)a2 + 120) )
  {
    CWatermarkStack<CMILMatrix,8,2,8>::Top((__int64)a2 + 480, (__int64)v117);
  }
  else
  {
    v117[0] = _xmm;
    v117[1] = _xmm;
    v117[2] = _xmm;
    v117[3] = _xmm;
    LOWORD(v118) = 32085;
  }
  v10 = *((_DWORD *)this + 42);
  v11 = *((unsigned int *)this + 10);
  v113 = 0LL;
  v12 = v10 - 1;
  v115 = 0LL;
  *(_DWORD *)&v103[4] = v12;
  v112 = 0LL;
  v114 = 0LL;
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
  v109 = CurrentVisual;
  v14 = *((_DWORD *)a2 + 816);
  if ( v14 )
    v15 = *(float *)(*((_QWORD *)a2 + 410) + 4LL * (unsigned int)(v14 - 1));
  else
    v15 = FLOAT_1_0;
  v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - 1.0)) & _xmm);
  v103[1] = v16 < 0.0000011920929 && *((_DWORD *)a2 + 64) <= 1u;
  v105 = 0LL;
  if ( (_DWORD)v11 )
  {
    v17 = 0LL;
    do
    {
      v18 = *(_QWORD *)(v17 + *((_QWORD *)this + 2));
      if ( v18
        && !(*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, bool *))(*(_QWORD *)v18 + 280LL))(
              v18,
              a2,
              v103) )
      {
        goto LABEL_85;
      }
      ++v7;
      v17 += 24LL;
    }
    while ( v7 < (unsigned int)v11 );
    v12 = *(_DWORD *)&v103[4];
    CurrentVisual = v109;
  }
  HasSubtreeSurface = CVisual::HasSubtreeSurface(CurrentVisual);
  v21 = v109;
  if ( HasSubtreeSurface )
    v105 = *(_QWORD *)((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v109 + 184LL))(v109) + 8);
  if ( !*((_BYTE *)this + 192) )
    goto LABEL_103;
  if ( (**((_DWORD **)v21 + 28) & 0x100000) != 0 )
  {
    v91 = (__int64 *)*((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(v21) + 46);
    if ( v91 )
    {
      EffectInput::operator=((__int64 *)&v125, v91);
LABEL_103:
      v23 = v104;
      goto LABEL_20;
    }
  }
  v103[0] = 0;
  DoesBackdropInputContributeToSubgraph = CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(this, v12, v103);
  if ( v103[0]
    && v103[1]
    && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                       + 8LL * v12)
                                                                           + 16LL)) )
  {
    v9 = -2003304441;
    MilInstrumentationCheckHR_MaybeFailFast(v100, &dword_18029B7A8, 1u, -2003304441, 0x318u);
    goto LABEL_85;
  }
  v23 = v104;
  *(_QWORD *)&v107.left = 0LL;
  height = v104->height;
  v107.right = v104->width;
  v107.bottom = height;
  BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                    a2,
                                    &v107,
                                    DoesBackdropInputContributeToSubgraph,
                                    (struct EffectInput *)&v125);
  v9 = BackdropImageFromRenderTarget;
  if ( BackdropImageFromRenderTarget < 0 )
  {
    v102 = 800;
    goto LABEL_136;
  }
LABEL_20:
  if ( *((_BYTE *)this + 194) )
  {
    BackdropImageFromRenderTarget = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                      a2,
                                      v23,
                                      (struct EffectInput *)&v150);
    v9 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v102 = 808;
      goto LABEL_136;
    }
  }
  std::vector<EffectInput>::reserve((__int64 **)&v114, v11);
  v26 = 0LL;
  v27 = 0;
  if ( (_DWORD)v11 )
  {
    v28 = *((_QWORD *)&v114 + 1);
    v29 = 0LL;
    *(_QWORD *)&v107.left = 0LL;
    v111 = 0LL;
    do
    {
      if ( v115 == v28 )
      {
        std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(&v114, v28);
        v28 = *((_QWORD *)&v114 + 1);
      }
      else
      {
        *(_QWORD *)v28 = 0LL;
        *(_QWORD *)(v28 + 8) = 0LL;
        *(_BYTE *)(v28 + 16) = 0;
        *(_QWORD *)(v28 + 48) = 0LL;
        *(_QWORD *)(v28 + 56) = 0LL;
        v28 += 104LL;
        *((_QWORD *)&v114 + 1) = v28;
      }
      v30 = (__int64 *)(v114 + v26);
      v31 = v30[1];
      if ( v31 )
      {
        v30[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      v32 = *v30;
      if ( *v30 )
      {
        *v30 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      }
      memset_0(v30, 0, 0x68uLL);
      v33 = *(_QWORD *)(v29 + *((_QWORD *)this + 2));
      if ( v33 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 48LL))(v33, 8LL) )
      {
        EffectInput::operator=(v30, (__int64 *)&v125);
      }
      else
      {
        v34 = *(_QWORD *)(v29 + *((_QWORD *)this + 2));
        if ( v34 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v34 + 48LL))(v34, 163LL) )
        {
          EffectInput::operator=(v30, (__int64 *)&v150);
        }
        else if ( !v105 || *(_QWORD *)(v29 + *((_QWORD *)this + 2)) )
        {
          *((_DWORD *)v30 + 12) = v27;
        }
        else
        {
          if ( !v8 )
          {
            v92 = *(_QWORD *)(v105 + 8);
            v106 = 0LL;
            Microsoft::WRL::ComPtr<CInteractionTrackerPositionAnimation>::operator=((__int64 *)&v106, v92);
            v93 = v106;
            (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v106 + 128LL))(v106, 1LL);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v110);
            v94 = CRenderTargetImageSource::Create(v93, 1, &v110);
            v9 = v94;
            if ( v94 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v95, &dword_18029B7A8, 1u, v94, 0x346u);
              Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v106);
              goto LABEL_85;
            }
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v106);
            v8 = v110;
          }
          BackdropImageFromRenderTarget = CDrawListBitmap::FromImageSource((struct IImageSource **)v30, v8, v108, 0);
          v9 = BackdropImageFromRenderTarget;
          if ( BackdropImageFromRenderTarget < 0 )
          {
            v102 = 843;
            goto LABEL_136;
          }
          v96 = v105;
          *((_BYTE *)v30 + 44) = 1;
          *((_BYTE *)v30 + 100) = 1;
          v120.m128_u64[0] = 0LL;
          v97 = _mm_shuffle_ps(v120, v120, 210);
          v97.m128_f32[0] = (float)*(int *)(v96 + 24);
          v98 = _mm_shuffle_ps(v97, v97, 39);
          v98.m128_f32[0] = (float)*(int *)(v96 + 28);
          v120 = _mm_shuffle_ps(v98, v98, 57);
          *(__m128 *)((char *)v30 + 84) = v120;
          DestToTexSpaceTransform = CTreeEffectLayer::GetDestToTexSpaceTransform(v96, v119, v27);
          v29 = *(_QWORD *)&v107.left;
          *((_OWORD *)v30 + 3) = *(_OWORD *)DestToTexSpaceTransform;
          *((_OWORD *)v30 + 4) = *((_OWORD *)DestToTexSpaceTransform + 1);
          *((float *)v30 + 20) = DestToTexSpaceTransform[8];
        }
      }
      v29 += 24LL;
      v26 = v111 + 104;
      *(_QWORD *)&v107.left = v29;
      ++v27;
      v111 += 104LL;
    }
    while ( v27 < (unsigned int)v11 );
  }
  memset_0(&v120, 0, 0x20uLL);
  v35 = v104->height;
  v120.m128_i32[0] = LODWORD(v104->width);
  v120.m128_f32[1] = v35;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v117, &v120.m128_f32[2], &v120.m128_f32[3]);
  v36 = *(_DWORD *)&v103[4];
  v37 = *(unsigned int *)&v103[4];
  v111 = *(unsigned int *)&v103[4];
  std::vector<EffectInput>::reserve((__int64 **)&v112, *(unsigned int *)&v103[4]);
  v38 = 0;
  if ( v36 )
  {
    v39 = *((_QWORD *)&v112 + 1);
    v40 = 0LL;
    *(_QWORD *)&v107.left = 0LL;
    v41 = 0LL;
    v105 = 0LL;
    while ( 1 )
    {
      if ( v113 == v39 )
      {
        std::vector<EffectInput>::_Emplace_reallocate<std::nullptr_t>(&v112, v39);
        v39 = *((_QWORD *)&v112 + 1);
      }
      else
      {
        *(_QWORD *)v39 = 0LL;
        *(_QWORD *)(v39 + 8) = 0LL;
        *(_BYTE *)(v39 + 16) = 0;
        *(_QWORD *)(v39 + 48) = 0LL;
        *(_QWORD *)(v39 + 56) = 0LL;
        v39 += 104LL;
        *((_QWORD *)&v112 + 1) = v39;
      }
      v42 = v112;
      v43 = *(_QWORD *)(v40 + v112 + 8);
      v44 = (_BYTE *)(v40 + v112);
      if ( v43 )
      {
        *((_QWORD *)v44 + 1) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      v45 = *(_QWORD *)v44;
      if ( *(_QWORD *)v44 )
      {
        *(_QWORD *)v44 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      memset_0(v44, 0, 0x68uLL);
      v44[44] = 1;
      v46 = 0;
      v47 = *(_QWORD *)(*((_QWORD *)this + 18) + v41);
      v129 = v38;
      if ( (*(_BYTE *)(v47 + 96) & 1) != 0 )
      {
        v87 = *(unsigned int **)(v47 + 16);
        v88 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v87 + 16LL))(*(_QWORD *)v87);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)v88 + 96LL))(v88, v87[4], v124);
        if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v47 + 16)) )
          goto LABEL_53;
        v89 = v108;
        BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                          this,
                                          v108,
                                          v104,
                                          v38,
                                          0,
                                          &v114,
                                          &v112,
                                          (struct EffectInput *)v130);
        v9 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v102 = 896;
          goto LABEL_136;
        }
        HIDWORD(v129) = 1;
        if ( v132[1] )
        {
LABEL_52:
          v42 = v112;
LABEL_53:
          v50 = v105;
          v51 = *(_QWORD *)(*((_QWORD *)this + 18) + v105);
          v52 = 104LL * *(unsigned int *)(v51 + 100);
          if ( *(_BYTE *)(v51 + 104) )
            v53 = (__int64 *)(v42 + v52);
          else
            v53 = (__int64 *)(v114 + v52);
          EffectInput::operator=((__int64 *)v44, v53);
          goto LABEL_56;
        }
        BackdropImageFromRenderTarget = CBrushRenderingGraph::RenderExternalEffect(
                                          this,
                                          v89,
                                          v90,
                                          (const struct EffectStage *)&v129,
                                          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)&v120,
                                          (struct EffectInput *)v44);
        v9 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v102 = 901;
          goto LABEL_136;
        }
      }
      else
      {
        v48 = v108;
        v49 = 0LL;
        LODWORD(v106) = 0;
        if ( *(_DWORD *)(v47 + 92) )
        {
          do
          {
            BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                              this,
                                              v48,
                                              v104,
                                              v38,
                                              v46,
                                              &v114,
                                              &v112,
                                              (struct EffectInput *)&v130[13 * v49]);
            v9 = BackdropImageFromRenderTarget;
            if ( BackdropImageFromRenderTarget < 0 )
            {
              v102 = 922;
              goto LABEL_136;
            }
            v46 = HIDWORD(v129) + 1;
            v49 = (unsigned int)((_DWORD)v106 + 1);
            ++HIDWORD(v129);
            LODWORD(v106) = v49;
          }
          while ( (unsigned int)v49 < *(_DWORD *)(v47 + 92) );
          if ( v46 == 1
            && v132[0]
            && v135
            && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v47 + 16)) )
          {
            goto LABEL_52;
          }
        }
        BackdropImageFromRenderTarget = CBrushRenderingGraph::RenderInternalEffect(
                                          this,
                                          v48,
                                          (struct EffectStage *)&v129,
                                          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)&v120,
                                          (struct EffectInput *)v44);
        v9 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v102 = 938;
          goto LABEL_136;
        }
      }
      v50 = v105;
LABEL_56:
      v54 = HIDWORD(v129);
      for ( i = 0; i < v54; ++i )
      {
        if ( !v132[104 * i] )
        {
          v101 = (void (__fastcall ***)(_QWORD, __int64))v134[13 * i];
          if ( v101 )
            (**v101)(v101, 1LL);
          v134[13 * i] = 0LL;
          v54 = HIDWORD(v129);
        }
      }
      v41 = v50 + 8;
      v40 = *(_QWORD *)&v107.left + 104LL;
      HIDWORD(v129) = 0;
      ++v38;
      *(_QWORD *)&v107.left += 104LL;
      v105 = v41;
      if ( v38 >= *(_DWORD *)&v103[4] )
      {
        v36 = *(_DWORD *)&v103[4];
        v37 = v111;
        break;
      }
    }
  }
  v129 = v36;
  for ( j = 0; ; ++j )
  {
    v57 = *(_QWORD *)(*((_QWORD *)this + 18) + 8 * v37);
    if ( j >= *(_DWORD *)(v57 + 92) )
      break;
    v58 = 60LL * j;
    v59 = &v130[13 * j];
    v9 = 0;
    if ( *(_BYTE *)(v58 + v57 + 104) )
      v60 = v112;
    else
      v60 = v114;
    v61 = *v59;
    v62 = (__int64 *)(104LL * *(unsigned int *)(v58 + v57 + 100) + v60);
    v63 = *v62;
    if ( *v59 != *v62 )
    {
      if ( v63 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v63 + 8LL))(*v62);
        v61 = *v59;
      }
      *(_QWORD *)&v107.left = v61;
      *v59 = v63;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v107);
    }
    v64 = v59[1];
    v65 = v62[1];
    if ( v64 != v65 )
    {
      if ( v65 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 8LL))(v62[1]);
        v64 = v59[1];
      }
      *(_QWORD *)&v107.left = v64;
      v59[1] = v65;
      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v107);
    }
    *((_BYTE *)v59 + 16) = *((_BYTE *)v62 + 16);
    *(_OWORD *)(v59 + 3) = *(_OWORD *)(v62 + 3);
    *((_DWORD *)v59 + 10) = *((_DWORD *)v62 + 10);
    v66 = *((unsigned __int8 *)v62 + 44);
    *((_BYTE *)v59 + 44) = v66;
    *((_BYTE *)v59 + 45) = *((_BYTE *)v62 + 45);
    *((_OWORD *)v59 + 3) = *((_OWORD *)v62 + 3);
    *((_OWORD *)v59 + 4) = *((_OWORD *)v62 + 4);
    *((_OWORD *)v59 + 5) = *((_OWORD *)v62 + 5);
    v59[12] = v62[12];
    *((_OWORD *)v59 + 3) = *((_OWORD *)v62 + 3);
    if ( !(_BYTE)v66 )
    {
      InputBrushParameters = CBrushRenderingGraph::GetInputBrushParameters(
                               this,
                               v108,
                               v104,
                               v36,
                               j,
                               (struct EffectInput *)&v130[13 * j]);
      v9 = InputBrushParameters;
      if ( InputBrushParameters < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, InputBrushParameters, 0x4FFu);
    }
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v66, &dword_18029B7A8, 1u, v9, 0x3C9u);
      goto LABEL_85;
    }
    ++HIDWORD(v129);
    v37 = v36;
  }
  v68 = (__m128 *)v116;
  v69 = v104;
  v70 = v108;
  BackdropImageFromRenderTarget = CBrushRenderingGraph::UpdateDrawListCache(
                                    this,
                                    v108,
                                    v104,
                                    v121,
                                    (struct EffectStage *)&v129,
                                    v116);
  v9 = BackdropImageFromRenderTarget;
  if ( BackdropImageFromRenderTarget < 0 )
  {
    v102 = 979;
LABEL_136:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v19, &dword_18029B7A8, 1u, BackdropImageFromRenderTarget, v102);
  }
  else if ( *((_BYTE *)this + 192) )
  {
    *(float *)&v71 = v69->width + 0.0;
    *(float *)&v72 = v69->height + 0.0;
    v120.m128_u64[0] = 0LL;
    v120.m128_u64[1] = __PAIR64__(v72, v71);
    TopByReference = CMatrixStack::GetTopByReference((struct CDrawingContext *)((char *)v70 + 480));
    CMILMatrix::Transform2DBoundsHelper<1>(TopByReference, &v120, &v121);
    CScopedClipStack::GetClipBoundsWorld((struct CDrawingContext *)((char *)v70 + 1008), (__int64)&v120);
    v74 = (__m128)(unsigned int)v121;
    if ( v120.m128_f32[0] > *(float *)&v121 )
      v74 = (__m128)v120.m128_u32[0];
    v75 = *((float *)&v121 + 1);
    v76 = *((float *)&v121 + 1);
    if ( v120.m128_f32[1] > *((float *)&v121 + 1) )
    {
      v75 = v120.m128_f32[1];
      v76 = v120.m128_f32[1];
    }
    v77 = v122;
    v78 = v122;
    if ( v122 > v120.m128_f32[2] )
    {
      v77 = v120.m128_f32[2];
      v78 = v120.m128_f32[2];
    }
    v79 = v123;
    v80 = v123;
    if ( v123 > v120.m128_f32[3] )
    {
      v79 = v120.m128_f32[3];
      v80 = v120.m128_f32[3];
    }
    if ( v78 <= v74.m128_f32[0] || v80 <= v76 )
    {
      v79 = 0.0;
      v77 = 0.0;
      v75 = 0.0;
      v74 = 0LL;
    }
    v81 = _mm_shuffle_ps(v74, v74, 225);
    v81.m128_f32[0] = v75;
    v82 = _mm_shuffle_ps(v81, v81, 198);
    v82.m128_f32[0] = v77;
    v83 = _mm_shuffle_ps(v82, v82, 39);
    v19 = *(CBrushRenderingGraph **)(*((_QWORD *)v109 + 2) + 480LL);
    v83.m128_f32[0] = v79;
    v68[4] = _mm_shuffle_ps(v83, v83, 57);
    v68[5].m128_u64[0] = (unsigned __int64)v19;
  }
LABEL_85:
  CBrushRenderingGraph::CleanupEffectStage(v19, (struct EffectStage *)&v129);
  std::vector<EffectInput>::_Tidy((__int64)&v114);
  std::vector<EffectInput>::_Tidy((__int64)&v112);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v150 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v150);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v125 + 1);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v125);
  v84 = (EffectInput *)&v149;
  v85 = 4LL;
  do
  {
    v84 = (EffectInput *)((char *)v84 - 104);
    EffectInput::~EffectInput(v84);
    --v85;
  }
  while ( v85 );
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v110);
  return (unsigned int)v9;
}
