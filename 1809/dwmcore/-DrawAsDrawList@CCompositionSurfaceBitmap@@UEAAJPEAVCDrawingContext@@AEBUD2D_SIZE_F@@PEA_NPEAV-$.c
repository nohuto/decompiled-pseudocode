/*
 * XREFs of ?DrawAsDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180012A50
 * Callers:
 *     ?DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015E560 (-DrawAsDrawList@COverlayRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilR.c)
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180174FD0 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 * Callees:
 *     ?CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180013150 (-CalcImageTransform@CCompositionSurfaceBitmap@@AEAA_NPEBUD2D_SIZE_F@@PEAVCMILMatrix@@PEAV-$TMilR.c)
 *     ?BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800131C0 (-BoundsFromLayoutSize@CCompositionSurfaceBitmap@@AEBA_NPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRect.c)
 *     ?IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800132A0 (-IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x1800132E8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x180018470 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18002915C (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z @ 0x1800A0F80 (-EnsureBitmapRealization@CCompositionSurfaceBitmap@@AEAA_N_N@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800B3200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?GetBorderColor@CCompositionSurfaceBitmap@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x1801920D0 (-GetBorderColor@CCompositionSurfaceBitmap@@UEBA-AU_D3DCOLORVALUE@@XZ.c)
 *     McTemplateU0pppffff @ 0x1801925DC (McTemplateU0pppffff.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::DrawAsDrawList(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned int v10; // ebx
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  float v17; // xmm7_4
  float v18; // xmm6_4
  unsigned int CurrentVisual; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rax
  float top; // xmm0_4
  float v26; // xmm7_4
  float v27; // xmm6_4
  int v28; // eax
  unsigned int v29; // ecx
  float bottom; // xmm1_4
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  bool v37; // [rsp+58h] [rbp-B0h] BYREF
  struct _D3DCOLORVALUE v38; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v39[64]; // [rsp+78h] [rbp-90h] BYREF
  int v40; // [rsp+B8h] [rbp-50h]
  struct D2D_RECT_F v41; // [rsp+C8h] [rbp-40h] BYREF
  struct D2D_RECT_F v42; // [rsp+D8h] [rbp-30h] BYREF
  FLOAT v43; // [rsp+E8h] [rbp-20h] BYREF
  float v44; // [rsp+ECh] [rbp-1Ch]
  FLOAT v45; // [rsp+F0h] [rbp-18h]
  float v46; // [rsp+F4h] [rbp-14h]
  struct D2D_RECT_F v47; // [rsp+F8h] [rbp-10h] BYREF

  *(_QWORD *)&v41.left = a6;
  v10 = 0;
  if ( CCompositionSurfaceBitmap::EnsureBitmapRealization((CCompositionSurfaceBitmap *)a1, 0) )
  {
    v40 = 0;
    CCompositionSurfaceBitmap::CalcImageTransform(a1, a3, v39, &v47);
    if ( !IsEmpty(&v47) )
    {
      CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)v39);
      CDrawingContext::EtwLogCurrentState((CDrawingContext *)a2);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 )
      {
        v17 = v42.bottom - v42.top;
        v18 = v42.right - v42.left;
        CurrentVisual = (unsigned int)CDrawingContext::GetCurrentVisual((CDrawingContext *)(a2 + 8));
        McTemplateU0pppffff(v21, v20, CurrentVisual, (_DWORD)a1, (char)a1, 0, 0, SLOBYTE(v18), SLOBYTE(v17));
      }
      v11 = a1[12];
      if ( v11 && (*(_BYTE *)(v11 + 268) & 2) != 0 && *(_BYTE *)(a1[2] + 1256LL) )
      {
        v22 = CDrawingContext::DrawSolidRectangle((struct CDrawingContext *)a2, &v42);
        v10 = v22;
        if ( v22 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x34Cu);
          return v10;
        }
      }
      else
      {
        v37 = 0;
        v12 = CDrawingContext::DrawAsOverlay(
                (CDrawingContext *)a2,
                (struct ISwapChainContent *)((unsigned __int64)(a1 + 7) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)),
                &v37);
        v10 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x353u);
          return v10;
        }
        if ( !v37 && !CCompositionSurfaceBitmap::IsOverlayRequired((CCompositionSurfaceBitmap *)(a1 + 7)) )
        {
          v14 = CContent::DrawAsDrawList(a1, a2, a3, a4, a5, *(_QWORD *)&v41.left);
          v10 = v14;
          if ( v14 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x35Fu);
            return v10;
          }
        }
      }
      if ( (unsigned __int8)CCompositionSurfaceBitmap::BoundsFromLayoutSize(a1, a3, &v43) )
      {
        CCompositionSurfaceBitmap::GetBorderColor((CCompositionSurfaceBitmap *)(a1 + 7), &v38);
        v24 = a1[12];
        if ( !v24 || *(_DWORD *)(v24 + 168) )
        {
          top = v42.top;
          v26 = v45;
          v27 = v43;
          if ( v42.top > v44 )
          {
            v41.top = v44;
            v41.bottom = v42.top;
            v41.left = v43;
            v41.right = v45;
            v28 = CDrawingContext::DrawSolidRectangle((struct CDrawingContext *)a2, &v41);
            v10 = v28;
            if ( v28 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x378u);
              return v10;
            }
            top = v42.top;
          }
          bottom = v42.bottom;
          if ( v46 > v42.bottom )
          {
            v41.top = v42.bottom;
            v41.bottom = v46;
            v41.left = v27;
            v41.right = v26;
            v31 = CDrawingContext::DrawSolidRectangle((struct CDrawingContext *)a2, &v41);
            v10 = v31;
            if ( v31 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x384u);
              return v10;
            }
            bottom = v42.bottom;
            top = v42.top;
          }
          if ( v42.left > v27 )
          {
            v41.top = top;
            v41.bottom = bottom;
            v41.left = v27;
            v41.right = v42.left;
            v33 = CDrawingContext::DrawSolidRectangle((struct CDrawingContext *)a2, &v41);
            v10 = v33;
            if ( v33 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x390u);
              return v10;
            }
            bottom = v42.bottom;
            top = v42.top;
          }
          if ( v26 > v42.right && bottom > top )
          {
            v41.top = top;
            v41.bottom = bottom;
            v41.left = v42.right;
            v41.right = v26;
            v35 = CDrawingContext::DrawSolidRectangle((struct CDrawingContext *)a2, &v41);
            v10 = v35;
            if ( v35 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x39Eu);
          }
        }
      }
    }
  }
  return v10;
}
