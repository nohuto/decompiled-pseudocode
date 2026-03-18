/*
 * XREFs of ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801C8B78
 * Callers:
 *     ?PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x1801CBDC0 (-PrepareForDrawing@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801C8358 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCNineGridBrush@@@.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801C851C (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCSurfaceBrush@@@WR.c)
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCSpriteVisualContent@@0@Z @ 0x1801C876C (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCSpriteVisualContent@@0@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@@Z @ 0x1801C9140 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEA.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@45@@Z @ 0x1801CA030 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCImageSourceRes.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCImageSourceResource@@@WRL@Microsoft@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@45@@Z @ 0x1801CA17C (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCImageSourceReso.c)
 *     ?GetApproxBlurStage@CProjectedShadow@@AEBA?AW4Enum@ApproxBlurStage@@XZ @ 0x1801CA270 (-GetApproxBlurStage@CProjectedShadow@@AEBA-AW4Enum@ApproxBlurStage@@XZ.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x1801CA2E8 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 *     ?GetFinalColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801CA7E0 (-GetFinalColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlur(CProjectedShadow *this, struct CDrawingContext *a2)
{
  struct CSpriteVisualContent *v3; // rbx
  int v5; // edx
  int ApproxBlurStage; // r12d
  int ApproxBlurIntermediate; // eax
  __int64 v8; // rcx
  struct CSpriteVisualContent *v9; // r14
  float v10; // xmm6_4
  float v11; // xmm1_4
  int v12; // eax
  __int64 v13; // rcx
  int NineGridBrush; // eax
  __int64 v15; // rcx
  int v16; // eax
  int v17; // edx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // edx
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rcx
  double BlurForBoundary; // xmm0_8
  int CrossFadeGraph; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  int v43; // eax
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  int v47; // eax
  __int64 v48; // rcx
  int v49; // eax
  __int64 v50; // rcx
  int v51; // eax
  int v52; // edx
  __int64 v53; // rcx
  int SurfaceBrush; // eax
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rcx
  _BYTE v59[4]; // [rsp+48h] [rbp-29h] BYREF
  _BYTE v60[4]; // [rsp+4Ch] [rbp-25h] BYREF
  float v61; // [rsp+50h] [rbp-21h] BYREF
  __int128 v62; // [rsp+58h] [rbp-19h] BYREF
  struct _D3DCOLORVALUE v63; // [rsp+68h] [rbp-9h] BYREF

  v3 = 0LL;
  ApproxBlurStage = CProjectedShadow::GetApproxBlurStage();
  v62 = _xmm;
  if ( ApproxBlurStage == 3 )
  {
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 8);
    if ( !CProjectedShadow::s_cp2xBlurAsset )
    {
      ApproxBlurIntermediate = CProjectedShadow::GenerateApproxBlurIntermediate(
                                 this,
                                 a2,
                                 (__int64)&CProjectedShadow::s_cp2xBlurAsset);
      LODWORD(v3) = ApproxBlurIntermediate;
      if ( ApproxBlurIntermediate < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ApproxBlurIntermediate, 0x672u);
    }
    return (unsigned int)v3;
  }
  v9 = 0LL;
  v10 = 0.0;
  v11 = 0.0;
  switch ( ApproxBlurStage )
  {
    case 0:
      if ( !CProjectedShadow::s_cpHalfBlurAsset )
      {
        v12 = CProjectedShadow::GenerateApproxBlurIntermediate(this, a2, (__int64)&CProjectedShadow::s_cpHalfBlurAsset);
        LODWORD(v3) = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x681u);
          return (unsigned int)v3;
        }
      }
      if ( !CProjectedShadow::s_cpHalfBlurNineGrid )
      {
        NineGridBrush = CProjectedShadow::GenerateNineGridBrush(
                          (_DWORD)this,
                          v5,
                          (unsigned int)&CProjectedShadow::s_cpHalfBlurAsset,
                          (unsigned int)&v62,
                          (__int64)&CProjectedShadow::s_cpHalfBlurNineGrid);
        LODWORD(v3) = NineGridBrush;
        if ( NineGridBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, NineGridBrush, 0x686u);
          return (unsigned int)v3;
        }
      }
      v16 = CProjectedShadow::AdjustNineGridBrush(
              (struct CComposition **)this,
              a2,
              (__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
      LODWORD(v3) = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v16, 0x689u);
        return (unsigned int)v3;
      }
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        v19 = CProjectedShadow::GenerateApproxBlurIntermediate(this, a2, (__int64)&CProjectedShadow::s_cp1xBlurAsset);
        LODWORD(v3) = v19;
        if ( v19 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x68Du);
          return (unsigned int)v3;
        }
      }
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        v21 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v17,
                (unsigned int)&CProjectedShadow::s_cp1xBlurAsset,
                (unsigned int)&v62,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        LODWORD(v3) = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x692u);
          return (unsigned int)v3;
        }
      }
      v23 = CProjectedShadow::AdjustNineGridBrush(
              (struct CComposition **)this,
              a2,
              (__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      LODWORD(v3) = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x695u);
        return (unsigned int)v3;
      }
      v3 = CProjectedShadow::s_cpHalfBlurNineGrid;
      v9 = CProjectedShadow::s_cp1xBlurNineGrid;
      CProjectedShadow::GetBlurForBoundary(this, 0LL);
      v25 = 1LL;
      goto LABEL_39;
    case 1:
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        v26 = CProjectedShadow::GenerateApproxBlurIntermediate(this, a2, (__int64)&CProjectedShadow::s_cp1xBlurAsset);
        LODWORD(v3) = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x6A1u);
          return (unsigned int)v3;
        }
      }
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        v28 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v5,
                (unsigned int)&CProjectedShadow::s_cp1xBlurAsset,
                (unsigned int)&v62,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        LODWORD(v3) = v28;
        if ( v28 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x6A6u);
          return (unsigned int)v3;
        }
      }
      v30 = CProjectedShadow::AdjustNineGridBrush(
              (struct CComposition **)this,
              a2,
              (__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
      LODWORD(v3) = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v30, 0x6A9u);
        return (unsigned int)v3;
      }
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        v33 = CProjectedShadow::GenerateApproxBlurIntermediate(this, a2, (__int64)&CProjectedShadow::s_cp2xBlurAsset);
        LODWORD(v3) = v33;
        if ( v33 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x6ADu);
          return (unsigned int)v3;
        }
      }
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        v35 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v31,
                (unsigned int)&CProjectedShadow::s_cp2xBlurAsset,
                (unsigned int)&v62,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        LODWORD(v3) = v35;
        if ( v35 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x6B2u);
          return (unsigned int)v3;
        }
      }
      v37 = CProjectedShadow::AdjustNineGridBrush(
              (struct CComposition **)this,
              a2,
              &CProjectedShadow::s_cp2xBlurNineGrid);
      LODWORD(v3) = v37;
      if ( v37 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x6B5u);
        return (unsigned int)v3;
      }
      v3 = CProjectedShadow::s_cp1xBlurNineGrid;
      v9 = (struct CSpriteVisualContent *)CProjectedShadow::s_cp2xBlurNineGrid;
      CProjectedShadow::GetBlurForBoundary(this, 1LL);
      v25 = 2LL;
      goto LABEL_39;
    case 2:
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        v47 = CProjectedShadow::GenerateApproxBlurIntermediate(this, a2, (__int64)&CProjectedShadow::s_cp2xBlurAsset);
        LODWORD(v3) = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x6C1u);
          return (unsigned int)v3;
        }
      }
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        v49 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v5,
                (unsigned int)&CProjectedShadow::s_cp2xBlurAsset,
                (unsigned int)&v62,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        LODWORD(v3) = v49;
        if ( v49 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x6C6u);
          return (unsigned int)v3;
        }
      }
      v51 = CProjectedShadow::AdjustNineGridBrush(
              (struct CComposition **)this,
              a2,
              &CProjectedShadow::s_cp2xBlurNineGrid);
      LODWORD(v3) = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v51, 0x6C9u);
        return (unsigned int)v3;
      }
      if ( !CProjectedShadow::s_cp2xBlurSurface )
      {
        SurfaceBrush = CProjectedShadow::GenerateSurfaceBrush(
                         (_DWORD)this,
                         v52,
                         (unsigned int)&CProjectedShadow::s_cp2xBlurAsset,
                         (unsigned int)&v62,
                         (__int64)&CProjectedShadow::s_cp2xBlurSurface);
        LODWORD(v3) = SurfaceBrush;
        if ( SurfaceBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, SurfaceBrush, 0x6CDu);
          return (unsigned int)v3;
        }
      }
      v56 = CProjectedShadow::AdjustSurfaceBrush((struct CComposition **)this, a2);
      LODWORD(v3) = v56;
      if ( v56 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v56, 0x6D0u);
        return (unsigned int)v3;
      }
      v3 = (struct CSpriteVisualContent *)CProjectedShadow::s_cp2xBlurNineGrid;
      v9 = CProjectedShadow::s_cp2xBlurSurface;
      CProjectedShadow::GetBlurForBoundary(this, 2LL);
      v25 = 3LL;
LABEL_39:
      v10 = *(float *)&_xmm;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary(this, v25);
      v11 = *(float *)&BlurForBoundary;
      break;
  }
  v61 = (float)(*((float *)this + 24) - v10) / (float)(v11 - v10);
  CProjectedShadow::GetFinalColor(this, &v63, a2);
  if ( *((_QWORD *)this + 8) && ApproxBlurStage == *((_DWORD *)this + 100)
    || (CrossFadeGraph = CProjectedShadow::CreateCrossFadeGraph(this, v3, v9),
        LODWORD(v3) = CrossFadeGraph,
        CrossFadeGraph >= 0) )
  {
    v42 = *((_QWORD *)this + 49);
    *((_DWORD *)this + 100) = ApproxBlurStage;
    v43 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, struct _D3DCOLORVALUE *, _BYTE *, _BYTE *))(*(_QWORD *)v42 + 32LL))(
            v42,
            0LL,
            69LL,
            &v63,
            v59,
            v60);
    LODWORD(v3) = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x6E8u);
    }
    else
    {
      v45 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, float *, _BYTE *, _BYTE *))(**((_QWORD **)this + 49)
                                                                                           + 32LL))(
              *((_QWORD *)this + 49),
              1LL,
              18LL,
              &v61,
              v59,
              v60);
      LODWORD(v3) = v45;
      if ( v45 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v46, 0LL, 0, v45, 0x6E9u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, CrossFadeGraph, 0x6E0u);
  }
  return (unsigned int)v3;
}
