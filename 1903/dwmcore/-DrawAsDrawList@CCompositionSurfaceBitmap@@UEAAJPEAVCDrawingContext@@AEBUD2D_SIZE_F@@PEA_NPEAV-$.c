/*
 * XREFs of ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180013C40
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A0020 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1801A4700 (-DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 * Callees:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180013DD0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_VailSuperWetInk@@@wil@@CAX_NW4Report.c)
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800141C8 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014238 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180014340 (-IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180014388 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180019460 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x18002AA90 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18007A9BC (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180167F50 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Draw@CRemoteSuperWetSource@@QEAAJPEAVCDrawingContext@@@Z @ 0x1801B29C0 (-Draw@CRemoteSuperWetSource@@QEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801C82B0 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     McTemplateU0pppffff @ 0x1801C87BC (McTemplateU0pppffff.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::DrawAsDrawList(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  CRemoteSuperWetSource *v16; // rcx
  float v18; // xmm7_4
  float v19; // xmm6_4
  unsigned int CurrentVisual; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rax
  float top; // xmm0_4
  float v27; // xmm7_4
  float v28; // xmm6_4
  int v29; // eax
  unsigned int v30; // ecx
  float bottom; // xmm1_4
  int v32; // eax
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  int v39; // [rsp+28h] [rbp-E0h]
  bool v40; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DCOLORVALUE v41; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v42[64]; // [rsp+78h] [rbp-90h] BYREF
  int v43; // [rsp+B8h] [rbp-50h]
  struct D2D_RECT_F v44; // [rsp+C8h] [rbp-40h] BYREF
  struct D2D_RECT_F v45; // [rsp+D8h] [rbp-30h] BYREF
  FLOAT v46; // [rsp+E8h] [rbp-20h] BYREF
  float v47; // [rsp+ECh] [rbp-1Ch]
  FLOAT v48; // [rsp+F0h] [rbp-18h]
  float v49; // [rsp+F4h] [rbp-14h]
  struct D2D_RECT_F v50; // [rsp+F8h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+180h] [rbp+78h]

  *(_QWORD *)&v44.left = a6;
  v10 = 0;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)a1, 0) )
  {
    v43 = 0;
    CCompositionSurfaceBitmap::CalcImageTransform(a1, a3, v42, &v50);
    if ( !IsEmpty(&v50) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v42);
      CDrawingContext::EtwLogCurrentState((CDrawingContext *)a2);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
      {
        v18 = v45.bottom - v45.top;
        v19 = v45.right - v45.left;
        CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 8));
        McTemplateU0pppffff(v22, v21, CurrentVisual, (_DWORD)a1, (char)a1, 0, 0, SLOBYTE(v19), SLOBYTE(v18));
      }
      v11 = a1[12];
      if ( v11 && (*(_BYTE *)(v11 + 268) & 2) != 0 && *(_BYTE *)(a1[2] + 1273LL) )
      {
        v23 = CDrawingContext::DrawSolidRectangle((struct CDrawingContext *)a2, &v45);
        v10 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x35Au, 0LL);
          return v10;
        }
      }
      else
      {
        v40 = 0;
        v12 = CDrawingContext::DrawAsOverlay(
                (CDrawingContext *)a2,
                (struct ISwapChainContent *)((unsigned __int64)(a1 + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)),
                &v40);
        v10 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x361u, 0LL);
          return v10;
        }
        if ( !v40 && !CCompositionSurfaceBitmap::IsOverlayRequired((CCompositionSurfaceBitmap *)(a1 + 7)) )
        {
          v39 = a5;
          v14 = CContent::DrawAsDrawList(a1, a2, a3, a4);
          v10 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x36Du, 0LL);
            return v10;
          }
        }
      }
      if ( (unsigned __int8)CCompositionSurfaceBitmap::BoundsFromLayoutSize(a1, a3, &v46) )
      {
        CCompositionSurfaceBitmap::GetBorderColor((CCompositionSurfaceBitmap *)(a1 + 7), &v41);
        v25 = a1[12];
        if ( !v25 || *(_DWORD *)(v25 + 168) )
        {
          top = v45.top;
          v27 = v48;
          v28 = v46;
          if ( v45.top > v47 )
          {
            v44.top = v47;
            v44.bottom = v45.top;
            v44.left = v46;
            v44.right = v48;
            v29 = CDrawingContext::DrawSolidRectangle((struct CDrawingContext *)a2, &v44);
            v10 = v29;
            if ( v29 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0x386u, 0LL);
              return v10;
            }
            top = v45.top;
          }
          bottom = v45.bottom;
          if ( v49 > v45.bottom )
          {
            v44.top = v45.bottom;
            v44.bottom = v49;
            v44.left = v28;
            v44.right = v27;
            v32 = CDrawingContext::DrawSolidRectangle((struct CDrawingContext *)a2, &v44);
            v10 = v32;
            if ( v32 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x392u, 0LL);
              return v10;
            }
            bottom = v45.bottom;
            top = v45.top;
          }
          if ( v45.left > v28 )
          {
            v44.top = top;
            v44.bottom = bottom;
            v44.left = v28;
            v44.right = v45.left;
            v34 = CDrawingContext::DrawSolidRectangle((struct CDrawingContext *)a2, &v44);
            v10 = v34;
            if ( v34 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x39Eu, 0LL);
              return v10;
            }
            bottom = v45.bottom;
            top = v45.top;
          }
          if ( v27 > v45.right && bottom > top )
          {
            v44.top = top;
            v44.bottom = bottom;
            v44.left = v45.right;
            v44.right = v27;
            v36 = CDrawingContext::DrawSolidRectangle((struct CDrawingContext *)a2, &v44);
            v10 = v36;
            if ( v36 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v36, 0x3ACu, 0LL);
              return v10;
            }
          }
        }
      }
    }
    v16 = (CRemoteSuperWetSource *)a1[18];
    if ( v16 )
    {
      v38 = CRemoteSuperWetSource::Draw(v16, (struct CDrawingContext *)a2);
      if ( v38 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3B4,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\compositionsurfacebitmap.cpp",
          (const char *)(unsigned int)v38,
          v39);
    }
    else
    {
      wil::Feature<__WilFeatureTraits_Feature_VailSuperWetInk>::ReportUsageToService();
    }
  }
  return v10;
}
