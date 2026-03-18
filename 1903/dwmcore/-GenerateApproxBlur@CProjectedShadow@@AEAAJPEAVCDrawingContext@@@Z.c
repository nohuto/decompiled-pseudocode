/*
 * XREFs of ?GenerateApproxBlur@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F0764
 * Callers:
 *     ?UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z @ 0x1801F2338 (-UpdateShadowIntermediates@CProjectedShadow@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801EFC28 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCNineGridBrush@@@.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801EFE68 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@AEAV-$ComPtr@VCSurfaceBrush@@@WR.c)
 *     ?CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCSpriteVisualContent@@0@Z @ 0x1801F02C4 (-CreateCrossFadeGraph@CProjectedShadow@@AEAAJPEAVCSpriteVisualContent@@0@Z.c)
 *     ?GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEAV?$ComPtr@VCRenderTargetImageSource@@@WRL@Microsoft@@@Z @ 0x1801F0EC0 (-GenerateApproxBlurIntermediate@CProjectedShadow@@AEAAJPEAVCDrawingContext@@MAEBUD2D_SIZE_F@@AEA.c)
 *     ?GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCNineGridBrush@@@WRL@Microsoft@@@Z @ 0x1801F1688 (-GenerateNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@.c)
 *     ?GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@AEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEAV?$ComPtr@VCSurfaceBrush@@@WRL@Microsoft@@@Z @ 0x1801F17DC (-GenerateSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCRenderTargetImageSource@@.c)
 *     ?GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z @ 0x1801F1920 (-GetBlurForBoundary@CProjectedShadow@@AEBAMW4Enum@ApproxBlurStageBoundary@@@Z.c)
 */

__int64 __fastcall CProjectedShadow::GenerateApproxBlur(CProjectedShadow *this, struct CDrawingContext *a2, __int64 a3)
{
  int v3; // eax
  unsigned int v6; // ebx
  signed int ApproxBlurIntermediate; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  CSurfaceBrush *v10; // rcx
  struct CSpriteVisualContent *v11; // r15
  struct CSpriteVisualContent *v12; // r14
  float v13; // xmm2_4
  float v14; // xmm1_4
  signed int v15; // eax
  __int64 v16; // rcx
  struct CSpriteVisualContent *v17; // rcx
  signed int NineGridBrush; // eax
  __int64 v19; // rcx
  signed int v20; // eax
  int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // r8
  signed int v24; // eax
  __int64 v25; // rcx
  struct CSpriteVisualContent *v26; // rcx
  signed int v27; // eax
  __int64 v28; // rcx
  signed int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  float BlurForBoundary; // xmm0_4
  __int64 v33; // rdx
  signed int v34; // eax
  __int64 v35; // rcx
  struct CSpriteVisualContent *v36; // rcx
  signed int v37; // eax
  __int64 v38; // rcx
  signed int v39; // eax
  int v40; // edx
  __int64 v41; // rcx
  __int64 v42; // r8
  signed int v43; // eax
  __int64 v44; // rcx
  __int64 v45; // rcx
  CSurfaceBrush *v46; // rcx
  signed int v47; // eax
  __int64 v48; // rcx
  signed int v49; // eax
  __int64 v50; // rcx
  signed int CrossFadeGraph; // eax
  __int64 v52; // rcx
  signed int v53; // eax
  __int64 v54; // rcx
  signed int v55; // eax
  __int64 v56; // rcx
  signed int v57; // eax
  __int64 v58; // rcx
  __int64 v59; // rcx
  CSurfaceBrush *v60; // rcx
  signed int v61; // eax
  __int64 v62; // rcx
  signed int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  signed int v67; // eax
  __int64 v68; // rcx
  signed int v69; // eax
  __int64 v70; // rcx
  _BYTE v72[4]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v73[4]; // [rsp+44h] [rbp-2Ch] BYREF
  float v74; // [rsp+48h] [rbp-28h] BYREF
  __int128 v75; // [rsp+50h] [rbp-20h] BYREF

  v3 = *((_DWORD *)this + 62);
  v6 = 0;
  if ( v3 == 5 )
  {
    if ( !CProjectedShadow::s_cp2xBlurAsset )
    {
      ApproxBlurIntermediate = CProjectedShadow::GenerateApproxBlurIntermediate(
                                 this,
                                 a2,
                                 a3,
                                 &unk_180312108,
                                 &CProjectedShadow::s_cp2xBlurAsset);
      v6 = ApproxBlurIntermediate;
      if ( ApproxBlurIntermediate < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ApproxBlurIntermediate, 0x387u, 0LL);
      }
      else
      {
        v9 = CProjectedShadow::s_cp2xBlurNineGrid;
        if ( CProjectedShadow::s_cp2xBlurNineGrid )
        {
          CProjectedShadow::s_cp2xBlurNineGrid = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        v10 = CProjectedShadow::s_cp2xBlurSurface;
        if ( CProjectedShadow::s_cp2xBlurSurface )
        {
          CProjectedShadow::s_cp2xBlurSurface = 0LL;
          (*(void (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)v10 + 16LL))(v10);
        }
      }
    }
    return v6;
  }
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0.0;
  v14 = 0.0;
  v75 = _xmm;
  switch ( v3 )
  {
    case 2:
      if ( !CProjectedShadow::s_cpHalfBlurAsset )
      {
        v15 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                a3,
                &unk_180312108,
                &CProjectedShadow::s_cpHalfBlurAsset);
        v6 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x39Eu, 0LL);
          return v6;
        }
        v17 = CProjectedShadow::s_cpHalfBlurNineGrid;
        if ( CProjectedShadow::s_cpHalfBlurNineGrid )
        {
          CProjectedShadow::s_cpHalfBlurNineGrid = 0LL;
          (*(void (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)v17 + 16LL))(v17);
        }
      }
      if ( !CProjectedShadow::s_cpHalfBlurNineGrid )
      {
        NineGridBrush = CProjectedShadow::GenerateNineGridBrush(
                          (_DWORD)this,
                          (_DWORD)a2,
                          (_DWORD)CProjectedShadow::s_cpHalfBlurAsset,
                          (unsigned int)&v75,
                          (__int64)&CProjectedShadow::s_cpHalfBlurNineGrid);
        v6 = NineGridBrush;
        if ( NineGridBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, NineGridBrush, 0x3A4u, 0LL);
          return v6;
        }
      }
      v20 = CProjectedShadow::AdjustNineGridBrush((__int64)this, (__int64)a2, &CProjectedShadow::s_cpHalfBlurNineGrid);
      v6 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v20, 0x3A7u, 0LL);
        return v6;
      }
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        v24 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                v23,
                &unk_180312108,
                &CProjectedShadow::s_cp1xBlurAsset);
        v6 = v24;
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x3ABu, 0LL);
          return v6;
        }
        v26 = CProjectedShadow::s_cp1xBlurNineGrid;
        if ( CProjectedShadow::s_cp1xBlurNineGrid )
        {
          CProjectedShadow::s_cp1xBlurNineGrid = 0LL;
          (*(void (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)v26 + 16LL))(v26);
        }
      }
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        v27 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v21,
                (_DWORD)CProjectedShadow::s_cp1xBlurAsset,
                (unsigned int)&v75,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v6 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, v27, 0x3B1u, 0LL);
          return v6;
        }
      }
      v29 = CProjectedShadow::AdjustNineGridBrush((__int64)this, (__int64)a2, &CProjectedShadow::s_cp1xBlurNineGrid);
      v6 = v29;
      if ( v29 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x3B4u, 0LL);
        return v6;
      }
      v11 = CProjectedShadow::s_cpHalfBlurNineGrid;
      v12 = CProjectedShadow::s_cp1xBlurNineGrid;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary(this, 0LL);
      v33 = 1LL;
      goto LABEL_53;
    case 3:
      if ( !CProjectedShadow::s_cp1xBlurAsset )
      {
        v34 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                a3,
                &unk_180312108,
                &CProjectedShadow::s_cp1xBlurAsset);
        v6 = v34;
        if ( v34 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x3C0u, 0LL);
          return v6;
        }
        v36 = CProjectedShadow::s_cp1xBlurNineGrid;
        if ( CProjectedShadow::s_cp1xBlurNineGrid )
        {
          CProjectedShadow::s_cp1xBlurNineGrid = 0LL;
          (*(void (__fastcall **)(struct CSpriteVisualContent *))(*(_QWORD *)v36 + 16LL))(v36);
        }
      }
      if ( !CProjectedShadow::s_cp1xBlurNineGrid )
      {
        v37 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                (_DWORD)a2,
                (_DWORD)CProjectedShadow::s_cp1xBlurAsset,
                (unsigned int)&v75,
                (__int64)&CProjectedShadow::s_cp1xBlurNineGrid);
        v6 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x3C6u, 0LL);
          return v6;
        }
      }
      v39 = CProjectedShadow::AdjustNineGridBrush((__int64)this, (__int64)a2, &CProjectedShadow::s_cp1xBlurNineGrid);
      v6 = v39;
      if ( v39 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v39, 0x3C9u, 0LL);
        return v6;
      }
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        v43 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                v42,
                &unk_180312108,
                &CProjectedShadow::s_cp2xBlurAsset);
        v6 = v43;
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0x3CDu, 0LL);
          return v6;
        }
        v45 = CProjectedShadow::s_cp2xBlurNineGrid;
        if ( CProjectedShadow::s_cp2xBlurNineGrid )
        {
          CProjectedShadow::s_cp2xBlurNineGrid = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
        }
        v46 = CProjectedShadow::s_cp2xBlurSurface;
        if ( CProjectedShadow::s_cp2xBlurSurface )
        {
          CProjectedShadow::s_cp2xBlurSurface = 0LL;
          (*(void (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)v46 + 16LL))(v46);
        }
      }
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        v47 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                v40,
                (_DWORD)CProjectedShadow::s_cp2xBlurAsset,
                (unsigned int)&v75,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v6 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x3D4u, 0LL);
          return v6;
        }
      }
      v49 = CProjectedShadow::AdjustNineGridBrush(
              (__int64)this,
              (__int64)a2,
              (CNineGridBrush **)&CProjectedShadow::s_cp2xBlurNineGrid);
      v6 = v49;
      if ( v49 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0x3D7u, 0LL);
        return v6;
      }
      v11 = CProjectedShadow::s_cp1xBlurNineGrid;
      v12 = (struct CSpriteVisualContent *)CProjectedShadow::s_cp2xBlurNineGrid;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary(this, 1LL);
      v33 = 2LL;
      goto LABEL_53;
    case 4:
      if ( !CProjectedShadow::s_cp2xBlurAsset )
      {
        v57 = CProjectedShadow::GenerateApproxBlurIntermediate(
                this,
                a2,
                a3,
                &unk_180312108,
                &CProjectedShadow::s_cp2xBlurAsset);
        v6 = v57;
        if ( v57 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x3E3u, 0LL);
          return v6;
        }
        v59 = CProjectedShadow::s_cp2xBlurNineGrid;
        if ( CProjectedShadow::s_cp2xBlurNineGrid )
        {
          CProjectedShadow::s_cp2xBlurNineGrid = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
        }
        v60 = CProjectedShadow::s_cp2xBlurSurface;
        if ( CProjectedShadow::s_cp2xBlurSurface )
        {
          CProjectedShadow::s_cp2xBlurSurface = 0LL;
          (*(void (__fastcall **)(CSurfaceBrush *))(*(_QWORD *)v60 + 16LL))(v60);
        }
      }
      if ( !CProjectedShadow::s_cp2xBlurNineGrid )
      {
        v61 = CProjectedShadow::GenerateNineGridBrush(
                (_DWORD)this,
                (_DWORD)a2,
                (_DWORD)CProjectedShadow::s_cp2xBlurAsset,
                (unsigned int)&v75,
                (__int64)&CProjectedShadow::s_cp2xBlurNineGrid);
        v6 = v61;
        if ( v61 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x3EAu, 0LL);
          return v6;
        }
      }
      v63 = CProjectedShadow::AdjustNineGridBrush(
              (__int64)this,
              (__int64)a2,
              (CNineGridBrush **)&CProjectedShadow::s_cp2xBlurNineGrid);
      v6 = v63;
      if ( v63 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v63, 0x3EDu, 0LL);
        return v6;
      }
      if ( !CProjectedShadow::s_cp2xBlurSurface )
      {
        v67 = CProjectedShadow::GenerateSurfaceBrush(
                this,
                v64,
                CProjectedShadow::s_cp2xBlurAsset,
                &v75,
                &CProjectedShadow::s_cp2xBlurSurface);
        v6 = v67;
        if ( v67 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x3F1u, 0LL);
          return v6;
        }
      }
      v69 = CProjectedShadow::AdjustSurfaceBrush((__int64)this, (__int64)a2, v66);
      v6 = v69;
      if ( v69 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x3F4u, 0LL);
        return v6;
      }
      v11 = (struct CSpriteVisualContent *)CProjectedShadow::s_cp2xBlurNineGrid;
      v12 = CProjectedShadow::s_cp2xBlurSurface;
      BlurForBoundary = CProjectedShadow::GetBlurForBoundary(this, 2LL);
      v33 = 3LL;
LABEL_53:
      v13 = BlurForBoundary;
      v14 = CProjectedShadow::GetBlurForBoundary(v31, v33);
      break;
  }
  v74 = (float)(*((float *)this + 20) - v13) / (float)(v14 - v13);
  if ( *((struct CSpriteVisualContent **)this + 32) != v11 || *((struct CSpriteVisualContent **)this + 33) != v12 )
    Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)this + 37);
  if ( !*((_QWORD *)this + 37) )
  {
    CrossFadeGraph = CProjectedShadow::CreateCrossFadeGraph(this, v11, v12);
    v6 = CrossFadeGraph;
    if ( CrossFadeGraph < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, CrossFadeGraph, 0x408u, 0LL);
      return v6;
    }
    *((_QWORD *)this + 32) = v11;
    *((_QWORD *)this + 33) = v12;
  }
  v53 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, char *, _BYTE *, _BYTE *))(**((_QWORD **)this + 38) + 32LL))(
          *((_QWORD *)this + 38),
          0LL,
          69LL,
          (char *)this + 272,
          v72,
          v73);
  v6 = v53;
  if ( v53 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x412u, 0LL);
  }
  else
  {
    v55 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, float *, _BYTE *, _BYTE *))(**((_QWORD **)this + 38)
                                                                                         + 32LL))(
            *((_QWORD *)this + 38),
            1LL,
            18LL,
            &v74,
            v72,
            v73);
    v6 = v55;
    if ( v55 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x413u, 0LL);
  }
  return v6;
}
