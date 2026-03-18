/*
 * XREFs of ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874
 * Callers:
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180075D50 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F1060 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 * Callees:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x1800057C4 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180012DA0 (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z @ 0x180034D20 (-IsExternallyImplementedSubgraph@CRenderingTechnique@@QEBA_NPEAU_GUID@@@Z.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18003B01C (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ??4?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z @ 0x180047A70 (--4-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@QEAAAEAV012@PEAUID3D11PixelShader@@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x180047F78 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180052140 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1800534D8 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18006E548 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x18006F20C (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?_Tidy@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXXZ @ 0x180075CBC (-_Tidy@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXXZ.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x1800767A0 (-IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCSpriteVisualContent@@I@Z @ 0x1800767F4 (-GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCSpriteVisualContent@@I@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x180076824 (-IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?Reset@EffectInput@@SAXPEAU1@@Z @ 0x1800770E8 (-Reset@EffectInput@@SAXPEAU1@@Z.c)
 *     ?CheckIfDisposed@CBrushRenderingGraph@@AEBAXXZ @ 0x180077124 (-CheckIfDisposed@CBrushRenderingGraph@@AEBAXXZ.c)
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x180077160 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ?GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@2PEAUEffectInput@@@Z @ 0x1800771B8 (-GetEffectStageInput@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIAEBV-$vec.c)
 *     ??4EffectInput@@QEAAAEAU0@AEBU0@@Z @ 0x18007727C (--4EffectInput@@QEAAAEAU0@AEBU0@@Z.c)
 *     ??$emplace_back@$$T@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffectInput@@$$QEA$$T@Z @ 0x180077354 (--$emplace_back@$$T@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAAEAUEffect.c)
 *     ?CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z @ 0x180077390 (-CleanupEffectStage@CBrushRenderingGraph@@AEAAXPEAUEffectStage@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ??0EffectStage@@QEAA@XZ @ 0x180077424 (--0EffectStage@@QEAA@XZ.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800787A8 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180079BAC (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?HasSubtreeSurface@CVisual@@QEBA_NXZ @ 0x180079C3C (-HasSubtreeSurface@CVisual@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1EffectInput@@QEAA@XZ @ 0x1800C1A80 (--1EffectInput@@QEAA@XZ.c)
 *     ?DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z @ 0x1800C60F4 (-DoesBackdropInputContributeToSubgraph@CBrushRenderingGraph@@AEBA_NIPEA_N@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x1800C61D4 (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802062AC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderSubgraphs(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        const struct CDrawListBrush *a4,
        struct CDrawListCache *a5)
{
  unsigned int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // r8
  int v12; // eax
  float v13; // xmm0_4
  float v14; // xmm1_4
  char v15; // r14
  __int64 v16; // r13
  __int64 v17; // rcx
  CBrushRenderingGraph *v18; // rcx
  CVisual *v19; // rbx
  unsigned int v20; // ebx
  unsigned int v21; // r14d
  __int64 v22; // r12
  __int64 v23; // rsi
  struct D2D_SIZE_F *v24; // rbx
  FLOAT v25; // xmm1_4
  unsigned int v26; // r14d
  __int64 v27; // r13
  unsigned int v28; // r12d
  unsigned int v29; // esi
  int BackdropImageFromRenderTarget; // eax
  struct CDrawListCache *v31; // rsi
  __int64 v32; // rdi
  EffectInput *v33; // rsi
  struct CRenderTargetImageSource *v35; // rdx
  struct IRenderTarget *v36; // rbx
  int v37; // eax
  unsigned int v38; // ecx
  FLOAT v39; // xmm1_4
  float *DestToTexSpaceTransform; // rax
  struct IRenderTarget *v41; // r14
  __int64 v42; // rsi
  struct EffectInput *v43; // r13
  __int64 v44; // rsi
  const struct _GUID *v45; // r8
  __int64 v46; // rsi
  bool DoesBackdropInputContributeToSubgraph; // bl
  FLOAT width; // xmm0_4
  FLOAT height; // xmm1_4
  unsigned int v50; // edx
  unsigned int v51; // r14d
  float v52; // xmm1_4
  __int128 v53; // xmm0
  __int64 v54; // rax
  unsigned int v55; // ecx
  unsigned int v56; // [rsp+20h] [rbp-E0h]
  bool v57[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v58; // [rsp+44h] [rbp-BCh]
  struct IRenderTarget *v59; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v60; // [rsp+50h] [rbp-B0h]
  struct D2D_SIZE_F *v61; // [rsp+58h] [rbp-A8h]
  struct CRenderTargetImageSource *v62; // [rsp+60h] [rbp-A0h] BYREF
  struct D2D_RECT_F v63; // [rsp+68h] [rbp-98h] BYREF
  __int64 v64[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-60h]
  CVisual *CurrentVisual; // [rsp+A8h] [rbp-58h]
  float v69[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v70; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v71; // [rsp+C8h] [rbp-38h]
  _BYTE v72[64]; // [rsp+E0h] [rbp-20h] BYREF
  int v73; // [rsp+120h] [rbp+20h]
  struct CDrawListBrush *v74[2]; // [rsp+130h] [rbp+30h] BYREF
  struct CDrawListCache *v75[2]; // [rsp+140h] [rbp+40h] BYREF
  struct _GUID v76; // [rsp+150h] [rbp+50h] BYREF
  __int128 v77; // [rsp+160h] [rbp+60h] BYREF
  char v78; // [rsp+170h] [rbp+70h]
  __int64 v79; // [rsp+190h] [rbp+90h]
  __int64 v80; // [rsp+198h] [rbp+98h]
  __int128 v81; // [rsp+1D0h] [rbp+D0h] BYREF
  char v82; // [rsp+1E0h] [rbp+E0h]
  __int64 v83; // [rsp+200h] [rbp+100h]
  __int64 v84; // [rsp+208h] [rbp+108h]
  unsigned int v85; // [rsp+240h] [rbp+140h] BYREF
  unsigned int v86; // [rsp+244h] [rbp+144h]
  _QWORD v87[5]; // [rsp+248h] [rbp+148h] BYREF
  char v88; // [rsp+274h] [rbp+174h]
  char v89; // [rsp+275h] [rbp+175h]
  char v90; // [rsp+2ADh] [rbp+1ADh]
  char v91; // [rsp+3E8h] [rbp+2E8h] BYREF
  void *retaddr; // [rsp+448h] [rbp+348h]

  v75[0] = a5;
  v74[0] = a4;
  v61 = a3;
  CBrushRenderingGraph::CheckIfDisposed(this);
  v8 = 0;
  v9 = 0;
  v62 = 0LL;
  EffectStage::EffectStage((EffectStage *)&v85);
  v78 = 0;
  *(_QWORD *)&v76.Data1 = 0LL;
  *(_QWORD *)v76.Data4 = 0LL;
  v77 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v77);
  v82 = 0;
  v83 = 0LL;
  v81 = 0LL;
  v84 = 0LL;
  EffectInput::Reset((struct EffectInput *)&v81);
  v73 = 0;
  CMatrixStack::Top((struct CDrawingContext *)((char *)a2 + 480), (struct CMILMatrix *)v72);
  LODWORD(v60) = *((_DWORD *)this + 10);
  v10 = *((_DWORD *)this + 42) - 1;
  v67 = 0LL;
  v58 = v10;
  *(_OWORD *)v66 = 0LL;
  v65 = 0LL;
  *(_OWORD *)v64 = 0LL;
  CurrentVisual = CDrawingContext::GetCurrentVisual((struct CDrawingContext *)((char *)a2 + 8));
  v12 = *((_DWORD *)a2 + 816);
  if ( v12 )
    v13 = *(float *)(*((_QWORD *)a2 + 410) + 4LL * (unsigned int)(v12 - 1));
  else
    v13 = *(float *)&FLOAT_1_0;
  v14 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v13 - 1.0)) & _xmm);
  if ( v14 >= 0.0000011920929 || (v15 = 1, *((_DWORD *)a2 + 64) > 1u) )
    v15 = 0;
  v16 = 0LL;
  if ( (_DWORD)v60 )
  {
    do
    {
      if ( *((_BYTE *)this + 200) )
        ModuleFailFastForHRESULT(2291662981LL, retaddr, v11);
      v17 = *(_QWORD *)(*((_QWORD *)this + 2) + 24LL * v8);
      if ( v17
        && !(*(unsigned __int8 (__fastcall **)(__int64, struct CDrawingContext *, bool *))(*(_QWORD *)v17 + 336LL))(
              v17,
              a2,
              v57) )
      {
        goto LABEL_30;
      }
      ++v8;
    }
    while ( v8 < (unsigned int)v60 );
  }
  v19 = CurrentVisual;
  if ( CVisual::HasSubtreeSurface(CurrentVisual) )
    v16 = *(_QWORD *)((*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)v19 + 224LL))(v19) + 8);
  if ( *((_BYTE *)this + 196) )
  {
    if ( (**((_DWORD **)v19 + 28) & 0x100000) != 0
      && *((_QWORD *)CVisual::GetWindowBackgroundTreatmentInternal(v19) + 46) )
    {
      EffectInput::operator=(&v77);
    }
    else
    {
      v46 = v58;
      v57[0] = 0;
      DoesBackdropInputContributeToSubgraph = CBrushRenderingGraph::DoesBackdropInputContributeToSubgraph(
                                                this,
                                                v58,
                                                v57);
      if ( v57[0]
        && v15
        && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                           + 8 * v46)
                                                                               + 8LL)) )
      {
        v9 = -2003304441;
        MilInstrumentationCheckHR_MaybeFailFast(v55, (const int *const)"\a", 1u, -2003304441, 0x321u, 0LL);
        goto LABEL_30;
      }
      width = a3->width;
      height = a3->height;
      v63.left = 0.0;
      v63.top = 0.0;
      v63.right = width;
      v63.bottom = height;
      BackdropImageFromRenderTarget = CDrawingContext::GetBackdropImageFromRenderTarget(
                                        a2,
                                        &v63,
                                        DoesBackdropInputContributeToSubgraph,
                                        (struct EffectInput *)&v77);
      v9 = BackdropImageFromRenderTarget;
      if ( BackdropImageFromRenderTarget < 0 )
      {
        v56 = 809;
        goto LABEL_81;
      }
    }
  }
  if ( *((_BYTE *)this + 198) )
  {
    BackdropImageFromRenderTarget = CDrawingContext::GetWindowBackgroundTreatmentEffectInput(
                                      a2,
                                      a3,
                                      (struct EffectInput *)&v81);
    v9 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v56 = 817;
      goto LABEL_81;
    }
  }
  v20 = v60;
  std::vector<EffectInput>::reserve(v64, (unsigned int)v60);
  v21 = 0;
  if ( v20 )
  {
    v22 = 0LL;
    do
    {
      std::vector<EffectInput>::emplace_back<std::nullptr_t>(v64);
      v23 = v22 + v64[0];
      EffectInput::Reset((struct EffectInput *)(v22 + v64[0]));
      if ( CBrushRenderingGraph::IsBackdropInput(this, v21) || CBrushRenderingGraph::IsWindowBackdropInput(this, v21) )
      {
        EffectInput::operator=(v23);
      }
      else if ( !v16 || CBrushRenderingGraph::GetNamedInput(this, v21) )
      {
        *(_DWORD *)(v23 + 48) = v21;
      }
      else
      {
        v35 = v62;
        if ( !v62 )
        {
          v59 = 0LL;
          Microsoft::WRL::ComPtr<ID3D11PixelShader>::operator=((__int64 *)&v59, *(_QWORD *)(v16 + 8));
          v36 = v59;
          (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v59 + 128LL))(v59, 1LL);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v62);
          v37 = CRenderTargetImageSource::Create(v36, 1, 0LL, &v62);
          v9 = v37;
          if ( v37 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v38, (const int *const)"\a", 1u, v37, 0x34Fu, 0LL);
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v59);
            goto LABEL_30;
          }
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v59);
          v35 = v62;
        }
        BackdropImageFromRenderTarget = CDrawListBitmap::FromImageSource((struct IImageSource **)v23, v35, a2, 0);
        v9 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v56 = 852;
          goto LABEL_81;
        }
        v63.left = 0.0;
        v63.top = 0.0;
        *(_BYTE *)(v23 + 44) = 1;
        *(_BYTE *)(v23 + 100) = 1;
        v39 = (float)*(int *)(v16 + 28);
        v63.right = (float)*(int *)(v16 + 24);
        v63.bottom = v39;
        *(struct D2D_RECT_F *)(v23 + 84) = v63;
        DestToTexSpaceTransform = CTreeEffectLayer::GetDestToTexSpaceTransform(v16, v69, v21);
        v20 = v60;
        *(_OWORD *)(v23 + 48) = *(_OWORD *)DestToTexSpaceTransform;
        *(_OWORD *)(v23 + 64) = *((_OWORD *)DestToTexSpaceTransform + 1);
        *(float *)(v23 + 80) = DestToTexSpaceTransform[8];
      }
      ++v21;
      v22 += 104LL;
    }
    while ( v21 < v20 );
  }
  v24 = v61;
  v71 = 0LL;
  v70 = 0LL;
  v25 = v61->height;
  v69[0] = v61->width;
  v69[1] = v25;
  CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v72, (float *)&v70, (float *)&v70 + 1);
  v26 = v58;
  *(_QWORD *)&v63.left = v58;
  v27 = v58;
  std::vector<EffectInput>::reserve(v66, v58);
  v28 = 0;
  if ( v26 )
  {
    v41 = 0LL;
    v42 = 0LL;
    v59 = 0LL;
    v60 = 0LL;
    while ( 1 )
    {
      std::vector<EffectInput>::emplace_back<std::nullptr_t>(v66);
      v43 = (struct EffectInput *)(v42 + v66[0]);
      EffectInput::Reset((struct EffectInput *)(v42 + v66[0]));
      *((_BYTE *)v43 + 44) = 1;
      v44 = *(_QWORD *)((char *)v41 + *((_QWORD *)this + 18));
      v86 = 0;
      v85 = v28;
      if ( CRenderingTechnique::IsExternallyImplementedSubgraph((CRenderingTechnique *)v44, &v76) )
      {
        if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v44 + 8)) )
          goto LABEL_61;
        BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                          this,
                                          a2,
                                          v24,
                                          v28,
                                          0,
                                          (__int64)v64,
                                          (__int64)v66,
                                          (struct EffectInput *)v87);
        v9 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v56 = 905;
          goto LABEL_81;
        }
        v86 = 1;
        if ( v89 )
          goto LABEL_61;
        BackdropImageFromRenderTarget = CBrushRenderingGraph::RenderExternalEffect(
                                          this,
                                          a2,
                                          v45,
                                          (const struct EffectStage *)&v85,
                                          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v69,
                                          v43);
        v9 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v56 = 910;
          goto LABEL_81;
        }
      }
      else
      {
        v50 = v86;
        v51 = 0;
        if ( *(_DWORD *)(v44 + 84) )
        {
          while ( 1 )
          {
            BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                              this,
                                              a2,
                                              v24,
                                              v28,
                                              v50,
                                              (__int64)v64,
                                              (__int64)v66,
                                              (struct EffectInput *)&v87[13 * v51]);
            v9 = BackdropImageFromRenderTarget;
            if ( BackdropImageFromRenderTarget < 0 )
              break;
            ++v51;
            v24 = v61;
            v50 = ++v86;
            if ( v51 >= *(_DWORD *)(v44 + 84) )
              goto LABEL_56;
          }
          v56 = 931;
LABEL_81:
          MilInstrumentationCheckHR_MaybeFailFast(
            (unsigned int)v18,
            (const int *const)"\a",
            1u,
            BackdropImageFromRenderTarget,
            v56,
            0LL);
          goto LABEL_30;
        }
LABEL_56:
        if ( v50 == 1 && v88 && v90 && CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(v44 + 8)) )
        {
          v41 = v59;
LABEL_61:
          EffectInput::operator=(v43);
          goto LABEL_46;
        }
        BackdropImageFromRenderTarget = CBrushRenderingGraph::RenderInternalEffect(
                                          this,
                                          a2,
                                          (struct EffectStage *)&v85,
                                          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v69,
                                          v43);
        v9 = BackdropImageFromRenderTarget;
        if ( BackdropImageFromRenderTarget < 0 )
        {
          v56 = 947;
          goto LABEL_81;
        }
        v41 = v59;
      }
LABEL_46:
      CBrushRenderingGraph::CleanupEffectStage(v18, (struct EffectStage *)&v85);
      v41 = (struct IRenderTarget *)((char *)v41 + 8);
      v24 = v61;
      v42 = v60 + 104;
      ++v28;
      v60 += 104LL;
      v59 = v41;
      if ( v28 >= v58 )
      {
        v26 = v58;
        v27 = *(_QWORD *)&v63.left;
        break;
      }
    }
  }
  v86 = 0;
  v29 = 0;
  v85 = v26;
  while ( v29 < *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 8 * v27) + 84LL) )
  {
    BackdropImageFromRenderTarget = CBrushRenderingGraph::GetEffectStageInput(
                                      this,
                                      a2,
                                      v24,
                                      v26,
                                      v29,
                                      (__int64)v64,
                                      (__int64)v66,
                                      (struct EffectInput *)&v87[13 * v29]);
    v9 = BackdropImageFromRenderTarget;
    if ( BackdropImageFromRenderTarget < 0 )
    {
      v56 = 978;
      goto LABEL_81;
    }
    ++v86;
    v24 = v61;
    ++v29;
  }
  v31 = v75[0];
  BackdropImageFromRenderTarget = CBrushRenderingGraph::UpdateDrawListCache(
                                    this,
                                    a2,
                                    v24,
                                    v74[0],
                                    (struct EffectStage *)&v85,
                                    v75[0]);
  v9 = BackdropImageFromRenderTarget;
  if ( BackdropImageFromRenderTarget < 0 )
  {
    v56 = 988;
    goto LABEL_81;
  }
  if ( *((_BYTE *)this + 196) )
  {
    v74[0] = 0LL;
    v52 = v61->height + 0.0;
    *(float *)&v74[1] = v61->width + 0.0;
    *((float *)&v74[1] + 1) = v52;
    CDrawingContext::CalcWorldSpaceClippedBounds((__int64)a2, (__int64)v74, (float *)v75);
    v53 = *(_OWORD *)v75;
    v54 = *((_QWORD *)CurrentVisual + 2);
    *(_OWORD *)v74 = *(_OWORD *)v75;
    v18 = *(CBrushRenderingGraph **)(v54 + 496);
    *((_QWORD *)v31 + 10) = v18;
    *((_OWORD *)v31 + 4) = v53;
  }
LABEL_30:
  CBrushRenderingGraph::CleanupEffectStage(v18, (struct EffectStage *)&v85);
  std::vector<EffectInput>::_Tidy((__int64)v64);
  std::vector<EffectInput>::_Tidy((__int64)v66);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v81 + 1);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v81);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v77 + 1);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v77);
  v32 = 4LL;
  v33 = (EffectInput *)&v91;
  do
  {
    v33 = (EffectInput *)((char *)v33 - 104);
    EffectInput::~EffectInput(v33);
    --v32;
  }
  while ( v32 );
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v62);
  return v9;
}
