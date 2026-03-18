/*
 * XREFs of ?GetClipBoundsWorld@CScopedClipStack@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A930
 * Callers:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000D240 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180011614 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18002431C (-CalcClippedNodeWorldSpaceBounds@CDrawingContext@@AEAAXPEBVCVisual@@PEAV-$CRectF@UDeviceHPC@Coor.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z @ 0x1800367E0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBUD2D_RECT_F@@_NPEAUEffectInput@@@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180038D08 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003A818 (-EnterClippingScope@CScopedClipStack@@QEAAJ_NPEBVCMILMatrix@@PEAV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?EtwLogCurrentState@CDrawingContext@@QEAAXXZ @ 0x18003F5B4 (-EtwLogCurrentState@CDrawingContext@@QEAAXXZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18003F9A0 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180059680 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOverlayContext@@H_N33PEBV3@333@Z @ 0x18005C990 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DCD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x1800611C0 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800616E0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180068B40 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 *     ?DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@1HW4Enum@MilCompositingMode@@_N@Z @ 0x180069C68 (-DrawBitmapWithPartialOcclusionAsDrawList@CDrawingContext@@AEAAJPEAVIImageSource@@AEBUMilRectF@@.c)
 *     ?RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006A564 (-RecordBitmapContentInfo@CDrawingContext@@QEAAXPEAVIBitmapContent@@PEAVISwapChainContent@@AEBV-$.c)
 *     ?RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z @ 0x18006A664 (-RecordWindowMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEAUHWND__@@PEA_N@Z.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18007DA1C (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?CalcLocalSpaceClippedBounds@CDrawingContext@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x18016AE4C (-CalcLocalSpaceClippedBounds@CDrawingContext@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ?CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@HPEAPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAI@Z @ 0x18016AF44 (-CalcPartiallyVisibleRectangleSet@CDrawingContext@@AEAA_NAEBV-$CRectF@ULocalRenderingHPC@Coordin.c)
 *     ?ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z @ 0x18016B428 (-ComputeExternalLayerOffsetAndBounds@CDrawingContext@@AEAAJPEAUMilPointAndSizeL@@@Z.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18016C808 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18016CB64 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?IsOccluded@CDrawingContext@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H@Z @ 0x18016E720 (-IsOccluded@CDrawingContext@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUHWND__@@@Z @ 0x18016F734 (-RecordVisualMove@CDrawingContext@@QEAAJPEAVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?VisualWasRendered@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCVisual@@@Z @ 0x180170280 (-VisualWasRendered@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMilPoint2F@@PEAUHRGN__@@PEAPEAUHWND__@@PEA_N@Z @ 0x18019A584 (-RecordMoveOptimization@CDrawingContext@@QEAAJPEAVCWindowNode@@PEBV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18020CEFC (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180213960 (-Draw@CGenericInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 * Callees:
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180004A74 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007F5CC (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800F0187 (ceilf_0.c)
 *     floorf_0 @ 0x1800F019F (floorf_0.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CScopedClipStack::GetClipBoundsWorld(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v5; // eax
  __int128 v6; // xmm0
  __int64 result; // rax
  __int64 v8; // rdx
  unsigned int v9; // r8d
  unsigned int v10; // edx
  float v11; // xmm4_4
  float v12; // xmm3_4
  __int64 v13; // rax
  __int64 v14; // rcx
  float v15; // xmm2_4
  __int64 v16; // rcx
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm5_4
  unsigned int v24; // r14d
  float v25; // xmm6_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm9_4
  __m128 *v29; // rsi
  float v30; // xmm0_4
  float v31; // xmm0_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  float v34; // xmm2_4
  float v35; // xmm0_4
  float v36; // xmm1_4
  __int64 v37; // rax
  __int64 v38; // rdx
  int TightBounds; // eax
  __int64 v40; // r8
  float v41; // xmm13_4
  float v42; // xmm12_4
  float v43; // xmm11_4
  float v44; // xmm10_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm1_4
  float v48; // xmm1_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  _BYTE v52[64]; // [rsp+20h] [rbp-E0h] BYREF
  int v53; // [rsp+60h] [rbp-A0h]
  __m128 v54; // [rsp+70h] [rbp-90h]
  __int128 X; // [rsp+80h] [rbp-80h]
  void *retaddr; // [rsp+158h] [rbp+58h]

  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 && *(_DWORD *)(*(_QWORD *)a1 + 80LL * (unsigned int)(v2 - 1)) && (v5 = *(_DWORD *)(a1 + 2224)) != 0 )
  {
    v6 = *(_OWORD *)(*(_QWORD *)(a1 + 2240) + 16LL * (unsigned int)(v5 - 1));
  }
  else
  {
    v6 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    X = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  *(_OWORD *)a2 = v6;
  result = *(unsigned int *)(a1 + 24);
  if ( !(_DWORD)result )
    return result;
  v8 = 5LL * (unsigned int)(result - 1);
  result = *(_QWORD *)a1;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 16 * v8 + 4);
  if ( !v9 )
    return result;
  v10 = *(_DWORD *)(a1 + 856);
  v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v12 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v13 = 136LL * (v10 - 1);
  v14 = *(_QWORD *)(a1 + 832);
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite >= *(float *)(v13 + v14 + 112)
    && *(float *)(v13 + v14 + 120) >= *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2) )
  {
    v23 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    v15 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
    goto LABEL_23;
  }
  v15 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  if ( *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1) >= *(float *)(v13 + v14 + 116) )
  {
    v23 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
    if ( *(float *)(v13 + v14 + 124) >= *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3) )
    {
LABEL_23:
      v54.m128_u64[0] = __PAIR64__(LODWORD(v15), TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite);
      v24 = v10 - v9;
      v54.m128_u64[1] = __PAIR64__(
                          LODWORD(v23),
                          *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2));
      v25 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v26 = v15;
      v27 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
      v28 = v23;
      if ( v10 < v9 )
        goto LABEL_10;
      while ( 1 )
      {
        v29 = (__m128 *)(*(_QWORD *)(a1 + 832) + 136LL * v24);
        if ( (v11 < v29[7].m128_f32[0] || v29[7].m128_f32[2] < v12)
          && (v15 < v29[7].m128_f32[1] || v29[7].m128_f32[3] < v23) )
        {
          v54 = v29[7];
          v27 = v54.m128_f32[2];
          v26 = v54.m128_f32[1];
          v25 = v54.m128_f32[0];
          LODWORD(v28) = _mm_shuffle_ps(v54, v54, 255).m128_u32[0];
          goto LABEL_38;
        }
        if ( v29[8].m128_i8[0] )
        {
          v30 = v29[6].m128_f32[0];
          if ( v30 > v25 )
          {
            v54.m128_i32[0] = v29[6].m128_i32[0];
            v25 = v30;
          }
          v31 = v29[6].m128_f32[1];
          v32 = v26;
          if ( v31 > v26 )
          {
            v54.m128_i32[1] = v29[6].m128_i32[1];
            v26 = v31;
            v32 = v31;
          }
          v33 = v29[6].m128_f32[2];
          v34 = v27;
          if ( v27 > v33 )
          {
            v54.m128_i32[2] = v29[6].m128_i32[2];
            v27 = v33;
            v34 = v33;
          }
          v35 = v29[6].m128_f32[3];
          v36 = v28;
          if ( v28 > v35 )
          {
            v54.m128_i32[3] = v29[6].m128_i32[3];
            v28 = v35;
            v36 = v35;
          }
          if ( v34 > v25 && v36 > v32 )
            goto LABEL_37;
        }
        else
        {
          v37 = (unsigned int)(*(_DWORD *)(a1 + 24) - 1);
          v38 = *(_QWORD *)a1 + 8LL;
          v53 = 0;
          CMILMatrix::Multiply(
            (const struct CMILMatrix *)&v29[1],
            (const struct CMILMatrix *)(80 * v37 + v38),
            (struct CMILMatrix *)v52);
          TightBounds = CShapePtr::GetTightBounds((__int64 *)v29);
          if ( TightBounds < 0 )
          {
            if ( TightBounds != -2003304438 )
              ModuleFailFastForHRESULT((unsigned int)TightBounds, retaddr, v40);
            v41 = 0.0;
            v42 = 0.0;
            v43 = 0.0;
            v44 = 0.0;
          }
          else
          {
            v41 = *((float *)&X + 3);
            v42 = *((float *)&X + 2);
            v43 = *((float *)&X + 1);
            v44 = *(float *)&X;
          }
          v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v44) & _xmm);
          if ( v45 < 8388608.0 )
            v44 = (float)(int)floorf_0(v44);
          *(float *)&X = v44;
          v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v43) & _xmm);
          if ( v46 < 8388608.0 )
            v43 = (float)(int)floorf_0(v43);
          *((float *)&X + 1) = v43;
          v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v42) & _xmm);
          if ( v47 < 8388608.0 )
            v42 = (float)(int)ceilf_0(v42);
          *((float *)&X + 2) = v42;
          v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v41) & _xmm);
          if ( v48 < 8388608.0 )
            v41 = (float)(int)ceilf_0(v41);
          *((float *)&X + 3) = v41;
          if ( v44 > v25 )
          {
            v25 = v44;
            v54.m128_f32[0] = v44;
          }
          v49 = v26;
          if ( v43 > v26 )
          {
            v26 = v43;
            v49 = v43;
            v54.m128_f32[1] = v43;
          }
          v50 = v27;
          if ( v27 > v42 )
          {
            v54.m128_f32[2] = v42;
            v27 = v42;
            v50 = v42;
          }
          v51 = v28;
          if ( v28 > v41 )
          {
            v54.m128_f32[3] = v41;
            v28 = v41;
            v51 = v41;
          }
          if ( v50 > v25 && v51 > v49 )
            goto LABEL_37;
        }
        v25 = 0.0;
        v26 = 0.0;
        v27 = 0.0;
        v54 = 0uLL;
        v28 = 0.0;
LABEL_37:
        v29[7] = v54;
        v23 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
        v12 = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
        v15 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
        v11 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
LABEL_38:
        if ( ++v24 >= *(_DWORD *)(a1 + 856) )
        {
          v10 = *(_DWORD *)(a1 + 856);
          break;
        }
      }
    }
  }
LABEL_10:
  result = 136LL * (v10 - 1);
  v16 = *(_QWORD *)(a1 + 832);
  v17 = *(float *)(result + v16 + 112);
  if ( v17 > *(float *)a2 )
    *(float *)a2 = v17;
  v18 = *(float *)(result + v16 + 116);
  if ( v18 > *(float *)(a2 + 4) )
    *(float *)(a2 + 4) = v18;
  v19 = *(float *)(result + v16 + 120);
  v20 = *(float *)(a2 + 8);
  if ( v20 > v19 )
  {
    *(float *)(a2 + 8) = v19;
    v20 = v19;
  }
  v21 = *(float *)(result + v16 + 124);
  v22 = *(float *)(a2 + 12);
  if ( v22 > v21 )
  {
    *(float *)(a2 + 12) = v21;
    v22 = v21;
    v20 = *(float *)(a2 + 8);
  }
  if ( v20 <= *(float *)a2 || v22 <= *(float *)(a2 + 4) )
  {
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)a2 = 0LL;
  }
  return result;
}
