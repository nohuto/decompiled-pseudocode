/*
 * XREFs of ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000EE68
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x18000EDE0 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000F2A4 (-RenderLayer@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilRe.c)
 *     ?GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingContext@@PEAVCMILMatrix@@PEAUD2D_SIZE_F@@@Z @ 0x18000F4B4 (-GetEffectiveLayerSizeAndTransform@CTreeEffectLayer@@IEAAXMMMMAEBUD2D_POINT_2F@@PEAVCDrawingCont.c)
 *     ?GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ @ 0x18001028C (-GetFlatteningToLocalSpace@CLayerVisual@@QEBA_NXZ.c)
 *     ?GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ @ 0x1800102E0 (-GetAutomaticBoundsExpansion@CLayerVisual@@QEBA_NXZ.c)
 *     ?IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z @ 0x1800115C4 (-IsSurfaceSizeValid@CDrawingContext@@AEBA_NII@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18002AF70 (-GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Push@?$CWatermarkStack@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180036B2C (-Push@-$CWatermarkStack@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rect_ea_180036B2C.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@@@Z @ 0x18017BD8C (-RenderMask@CTreeEffectLayer@@IEAAJAEBUD2D_SIZE_F@@PEAVCDrawingContext@@PEAVIRenderTargetBitmap@.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x18017BED0 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 *     ?GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x18019451C (-GetMaskForLayerVisualNoRef@CDropShadow@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 *     ?CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV3@2@Z @ 0x1801A45F8 (-CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds@CLayerVisual@@QEAAXAEBVCMILMatr.c)
 *     ?GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x1801A4954 (-GetUpdatedDropShadowBounds@CLayerVisual@@QEBAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 */

__int64 __fastcall CTreeEffectLayer::Draw(CTreeEffectLayer *this, struct CDrawingContext *a2, __int64 a3, float a4)
{
  int v4; // r15d
  CLayerVisual *v7; // rcx
  CDropShadow *v8; // rax
  float v9; // xmm9_4
  float v10; // xmm6_4
  float v11; // xmm7_4
  float v12; // xmm8_4
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // esi
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __m128i v27; // xmm8
  __m128i v28; // xmm9
  float v29; // xmm8_4
  float v30; // xmm9_4
  struct CSpriteVisualContent *MaskForLayerVisualNoRef; // r12
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  float x; // xmm0_4
  float y; // xmm1_4
  int v38; // eax
  unsigned int v39; // ecx
  int v40; // eax
  unsigned int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  CVisual *v44; // rcx
  __int64 (__fastcall *v45)(struct CSpriteVisualContent *, _QWORD, struct D2D_SIZE_F *, const char **); // rax
  int v46; // eax
  unsigned int v47; // ecx
  float v48; // xmm6_4
  float v49; // xmm7_4
  CLayerVisual *v50; // rcx
  int v51; // eax
  unsigned int v52; // ecx
  __int64 v53; // rax
  __int64 (__fastcall *v54)(struct CSpriteVisualContent *, struct CDrawingContext *, struct D2D_POINT_2F *, int *, __int128 *); // rax
  int v55; // eax
  unsigned int v56; // ecx
  __m128i v57; // xmm4
  FLOAT v58; // xmm5_4
  float v59; // xmm2_4
  float v60; // xmm1_4
  int v61; // eax
  unsigned int v62; // ecx
  CDrawingContext *v63; // rcx
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  int v68; // eax
  const struct D2D_POINT_2F *v69; // rdx
  unsigned int v70; // ecx
  const struct D2D_SIZE_F *v71; // r8
  struct IRenderTargetBitmap *v72; // rbx
  int v73; // eax
  unsigned int v74; // ecx
  float height; // xmm9_4
  float width; // xmm6_4
  float v77; // xmm7_4
  CLayerVisual *v78; // rcx
  float v79; // xmm8_4
  int v80; // eax
  unsigned int v81; // ecx
  float v82; // xmm0_4
  float v83; // xmm0_4
  float v84; // xmm0_4
  float v85; // xmm0_4
  float v86; // xmm2_4
  float v87; // xmm1_4
  bool AutomaticBoundsExpansion; // al
  struct D2D_POINT_2F *v89; // rdx
  int v90; // eax
  unsigned int v91; // ecx
  int v92; // eax
  unsigned int v93; // ecx
  int v94; // eax
  unsigned int v95; // ecx
  float v96; // [rsp+28h] [rbp-E0h]
  int v97; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_POINT_2F v98; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_POINT_2F v99; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_SIZE_F v100[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v101; // [rsp+88h] [rbp-80h]
  __int128 v102; // [rsp+98h] [rbp-70h]
  __int128 v103; // [rsp+A8h] [rbp-60h]
  int v104; // [rsp+B8h] [rbp-50h]
  __int128 v105; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v106; // [rsp+D8h] [rbp-30h]
  __int128 v107; // [rsp+E8h] [rbp-20h]
  __int128 v108; // [rsp+F8h] [rbp-10h]
  __int16 v109; // [rsp+108h] [rbp+0h]
  _OWORD v110[4]; // [rsp+118h] [rbp+10h] BYREF
  int v111; // [rsp+158h] [rbp+50h]
  struct IRenderTargetBitmap *v112; // [rsp+168h] [rbp+60h] BYREF
  float v113; // [rsp+170h] [rbp+68h]
  float v114; // [rsp+174h] [rbp+6Ch]
  struct D2D_SIZE_F v115; // [rsp+178h] [rbp+70h] BYREF
  float v116; // [rsp+180h] [rbp+78h]
  float v117; // [rsp+184h] [rbp+7Ch]
  const char *v118; // [rsp+188h] [rbp+80h] BYREF
  __int64 v119; // [rsp+190h] [rbp+88h]
  __int128 v120; // [rsp+198h] [rbp+90h] BYREF
  __int64 v121[2]; // [rsp+1A8h] [rbp+A0h] BYREF

  v4 = 0;
  v104 = 0;
  v7 = (CLayerVisual *)*((_QWORD *)this + 31);
  if ( !v7 || (v8 = (CDropShadow *)*((_QWORD *)v7 + 70), (v100[0] = (struct D2D_SIZE_F)v8) == 0LL) )
  {
    v9 = *((float *)this + 56);
    v11 = v9 + *((float *)this + 58);
    LODWORD(v112) = *((_DWORD *)this + 55);
    v10 = *(float *)&v112;
    v12 = *(float *)&v112 + *((float *)this + 57);
    *((float *)&v112 + 1) = v9;
    v114 = v11;
    v113 = v12;
    if ( CLayerVisual::GetFlatteningToLocalSpace(v7) )
    {
      CMILMatrix::Transform2DBoundsHelper<1>((char *)this + 120, &v112, &v112);
      v11 = v114;
      v12 = v113;
      v9 = *((float *)&v112 + 1);
      v10 = *(float *)&v112;
    }
    v13 = *((float *)this + 64);
    if ( v13 > v10 )
    {
      LODWORD(v112) = *((_DWORD *)this + 64);
      v10 = v13;
    }
    v14 = *((float *)this + 65);
    if ( v14 > v9 )
    {
      HIDWORD(v112) = *((_DWORD *)this + 65);
      v9 = v14;
    }
    v15 = *((float *)this + 66);
    if ( v12 > v15 )
    {
      v113 = *((float *)this + 66);
      v12 = v15;
    }
    v16 = *((float *)this + 67);
    if ( v11 > v16 )
    {
      v114 = *((float *)this + 67);
      v11 = v16;
    }
    if ( v12 <= v10 || v11 <= v9 )
    {
      v114 = 0.0;
      v113 = 0.0;
      v112 = 0LL;
    }
    v17 = *((float *)this + 69);
    v18 = *((float *)this + 68);
    v19 = *((float *)this + 48);
    v20 = *((float *)this + 47);
    v111 = 0;
    v98.x = 0.0;
    v98.y = 0.0;
    CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
      this,
      v20,
      v19,
      v18,
      v17,
      &v98,
      a2,
      (struct CMILMatrix *)v110,
      v100);
    v21 = CTreeEffectLayer::RenderLayer(this, a2, (struct CMILMatrix *)v110, (__int64)v100);
    v23 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x25Eu);
LABEL_17:
    if ( !v4 )
      return v23;
    goto LABEL_46;
  }
  v25 = _mm_cvtsi32_si128(*((_DWORD *)this + 6));
  v26 = _mm_cvtsi32_si128(*((_DWORD *)this + 7));
  v27 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
  v28 = _mm_cvtsi32_si128(*((_DWORD *)this + 5));
  v112 = 0LL;
  LODWORD(v98.x) = _mm_cvtepi32_ps(v25).m128_u32[0];
  v25.m128i_i32[0] = *((_DWORD *)this + 55);
  LODWORD(v98.y) = _mm_cvtepi32_ps(v26).m128_u32[0];
  v26.m128i_i32[0] = *((_DWORD *)this + 56);
  *(_QWORD *)&v120 = __PAIR64__(v26.m128i_u32[0], v25.m128i_u32[0]);
  LODWORD(v29) = _mm_cvtepi32_ps(v27).m128_u32[0];
  *((_QWORD *)&v120 + 1) = __PAIR64__(
                             *(float *)v26.m128i_i32 + *((float *)this + 58),
                             *(float *)v25.m128i_i32 + *((float *)this + 57));
  LODWORD(v30) = _mm_cvtepi32_ps(v28).m128_u32[0];
  MaskForLayerVisualNoRef = CDropShadow::GetMaskForLayerVisualNoRef(v8);
  if ( MaskForLayerVisualNoRef )
  {
    if ( CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 31)) )
    {
      a4 = *(float *)&_xmm;
      v105 = _xmm;
      v109 = 32085;
      v106 = _xmm;
      v107 = _xmm;
      v108 = _xmm;
    }
    else
    {
      v32 = *(_OWORD *)((char *)this + 120);
      v33 = *(_OWORD *)((char *)this + 136);
      v111 = *((_DWORD *)this + 46);
      v110[0] = v32;
      v34 = *(_OWORD *)((char *)this + 152);
      v110[1] = v33;
      v35 = *(_OWORD *)((char *)this + 168);
      v110[2] = v34;
      v110[3] = v35;
    }
    CLayerVisual::CalcInversedWorldShadowOffsetBoundsFromVisibleWorldOutputBounds(*((_QWORD *)this + 31), (__int64)v121);
    v29 = *(float *)&v118;
    v30 = *((float *)&v118 + 1);
    x = *(float *)&v119 - *(float *)&v118;
    y = *((float *)&v119 + 1) - *((float *)&v118 + 1);
    v98.x = *(float *)&v119 - *(float *)&v118;
    v98.y = *((float *)&v119 + 1) - *((float *)&v118 + 1);
  }
  else
  {
    y = v98.y;
    x = v98.x;
  }
  if ( CDrawingContext::IsSurfaceSizeValid(a2, (int)x, (int)y) )
  {
    LODWORD(v119) = 35;
    v118 = "DWM Tree Effect Shadow intermediate";
    if ( (int)CDrawingContext::PushOffScreenRenderingLayer(
                a2,
                (const struct CResourceTag *)&v118,
                (const struct D2D_SIZE_F *)&v98,
                1,
                &v112) >= 0 )
      goto LABEL_34;
    v119 = *((_QWORD *)this + 31);
    LODWORD(v118) = 6;
    v38 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
            (char *)a2 + 448,
            &v118);
    v23 = v38;
    if ( v38 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x181u);
LABEL_31:
      Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v112);
      return v23;
    }
  }
  else
  {
    v119 = *((_QWORD *)this + 31);
    LODWORD(v118) = 6;
    v40 = CWatermarkStack<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,64,2,10>::Push(
            (char *)a2 + 448,
            &v118);
    v23 = v40;
    if ( v40 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x189u);
      goto LABEL_31;
    }
  }
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v112);
LABEL_34:
  v42 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&CMILMatrix::Identity, 0, 1);
  v23 = v42;
  if ( v42 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x18Fu);
    goto LABEL_31;
  }
  v44 = (CVisual *)*((_QWORD *)this + 31);
  v4 = 1;
  if ( MaskForLayerVisualNoRef )
  {
    if ( CVisual::GetEffectiveSize(v44, (float *)&v115, (float *)&v99) )
    {
      v45 = *(__int64 (__fastcall **)(struct CSpriteVisualContent *, _QWORD, struct D2D_SIZE_F *, const char **))(*(_QWORD *)MaskForLayerVisualNoRef + 168LL);
      v115.height = v99.x;
      v46 = v45(MaskForLayerVisualNoRef, 0LL, &v115, &v118);
      v23 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0x19Cu);
        goto LABEL_45;
      }
      v48 = *(float *)&v118;
      v49 = *((float *)&v118 + 1);
      v50 = (CLayerVisual *)*((_QWORD *)this + 31);
      v121[0] = (__int64)v118;
      v121[1] = v119;
      v99.x = *(float *)&v119 - *(float *)&v118;
      v99.y = *((float *)&v119 + 1) - *((float *)&v118 + 1);
      if ( !CLayerVisual::GetFlatteningToLocalSpace(v50) )
      {
        CMILMatrix::Transform2DBoundsHelper<1>((char *)this + 120, &v118, v121);
        v49 = *((float *)v121 + 1);
        v48 = *(float *)v121;
      }
      a4 = *(float *)&_xmm;
      v105 = _xmm;
      v106 = _xmm;
      v107 = _xmm;
      v108 = _xmm;
      v109 = 32085;
      CMILMatrix::Translate((CMILMatrix *)&v105, v48 - v29, v49 - v30);
      v51 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v105, 0, 1);
      v23 = v51;
      if ( v51 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v51, 0x1ADu);
        goto LABEL_45;
      }
      v53 = *(_QWORD *)MaskForLayerVisualNoRef;
      LOBYTE(v97) = 0;
      v54 = *(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, struct D2D_POINT_2F *, int *, __int128 *))(v53 + 160);
      v4 = 2;
      v120 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      v55 = v54(MaskForLayerVisualNoRef, a2, &v99, &v97, &v120);
      v23 = v55;
      if ( v55 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x1B5u);
        goto LABEL_45;
      }
      CDrawingContext::PopTransformInternal(a2, 1);
    }
  }
  else
  {
    CLayerVisual::GetUpdatedDropShadowBounds(v44, &v120, &v118);
    v57 = _mm_cvtsi32_si128(*((_DWORD *)this + 4));
    v58 = (float)*((int *)this + 5);
    v109 = 32085;
    v99.y = v58;
    v99.x = _mm_cvtepi32_ps(v57).m128_f32[0];
    *((float *)&v120 + 1) = *((float *)&v118 + 1) + COERCE_FLOAT(LODWORD(v58) ^ _xmm);
    *(float *)&v120 = *(float *)&v118 + COERCE_FLOAT(LODWORD(v99.x) ^ _xmm);
    v107 = _xmm;
    v59 = *((float *)this + 48);
    *((float *)&v120 + 3) = *((float *)&v119 + 1) + COERCE_FLOAT(LODWORD(v58) ^ _xmm);
    v106 = _xmm;
    v60 = *((float *)this + 47);
    *((float *)&v120 + 2) = *(float *)&v119 + COERCE_FLOAT(LODWORD(v99.x) ^ _xmm);
    v108 = _xmm;
    a4 = FLOAT_1_0;
    v105 = _xmm;
    CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
      this,
      v60 - v99.x,
      v59 - v58,
      1.0,
      1.0,
      &v99,
      a2,
      (struct CMILMatrix *)&v105,
      &v115);
    v61 = CTreeEffectLayer::RenderLayer(this, a2, (struct CMILMatrix *)&v105, (__int64)&v115);
    v23 = v61;
    if ( v61 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x1D6u);
      goto LABEL_45;
    }
  }
  CDrawingContext::PopTransformInternal(a2, 1);
  CDrawingContext::PopLayer(v63);
  if ( CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 31)) )
  {
    v64 = *(_OWORD *)((char *)this + 120);
    v65 = *(_OWORD *)((char *)this + 136);
    v104 = *((_DWORD *)this + 46);
    *(_OWORD *)&v100[1].width = v64;
    v66 = *(_OWORD *)((char *)this + 152);
    v101 = v65;
    v67 = *(_OWORD *)((char *)this + 168);
    v102 = v66;
    v103 = v67;
  }
  else
  {
    a4 = *(float *)&_xmm;
    *(_OWORD *)&v100[1].width = _xmm;
    v101 = _xmm;
    v102 = _xmm;
    v103 = _xmm;
    LOWORD(v104) = 32085;
  }
  v68 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v100[1], 0, 1);
  v23 = v68;
  if ( v68 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v68, 0x1EAu);
    goto LABEL_31;
  }
  v72 = v112;
  v4 = 1;
  v73 = CTreeEffectLayer::RenderShadow(this, v69, v71, a4, v96, a2, *(struct CDropShadow **)v100, v112);
  v23 = v73;
  if ( v73 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x1F5u);
  }
  else
  {
    *(_OWORD *)&v100[1].width = _xmm;
    v101 = _xmm;
    v102 = _xmm;
    v103 = _xmm;
    LOWORD(v104) = 32085;
    if ( MaskForLayerVisualNoRef )
    {
      height = *((float *)this + 56);
      width = *((float *)this + 55);
      v77 = height + *((float *)this + 58);
      v78 = (CLayerVisual *)*((_QWORD *)this + 31);
      v79 = width + *((float *)this + 57);
      v115.width = width;
      v115.height = height;
      v117 = v77;
      v116 = v79;
      if ( !CLayerVisual::GetFlatteningToLocalSpace(v78) )
      {
LABEL_60:
        v82 = *((float *)this + 64);
        if ( v82 > width )
        {
          v115.width = *((FLOAT *)this + 64);
          width = v82;
        }
        v83 = *((float *)this + 65);
        if ( v83 > height )
        {
          v115.height = *((FLOAT *)this + 65);
          height = v83;
        }
        v84 = *((float *)this + 66);
        if ( v79 > v84 )
        {
          v116 = *((float *)this + 66);
          v79 = v84;
        }
        v85 = *((float *)this + 67);
        if ( v77 > v85 )
        {
          v117 = *((float *)this + 67);
          v77 = v85;
        }
        if ( v79 <= width || v77 <= height )
        {
          v117 = 0.0;
          v116 = 0.0;
          v115.height = 0.0;
          v115.width = 0.0;
        }
        v86 = *((float *)this + 48);
        v87 = *((float *)this + 47);
        v99.x = 0.0;
        v99.y = 0.0;
        CTreeEffectLayer::GetEffectiveLayerSizeAndTransform(
          this,
          v87,
          v86,
          1.0,
          1.0,
          &v99,
          a2,
          (struct CMILMatrix *)&v100[1],
          v100);
        AutomaticBoundsExpansion = CLayerVisual::GetAutomaticBoundsExpansion(*((CLayerVisual **)this + 31));
        v89 = &v98;
        if ( !AutomaticBoundsExpansion )
          v89 = (struct D2D_POINT_2F *)v100;
        v90 = CTreeEffectLayer::RenderLayer(this, a2, (struct CMILMatrix *)&v100[1], (__int64)v89);
        v23 = v90;
        if ( v90 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0, v90, 0x226u);
        goto LABEL_77;
      }
      CMILMatrix::Transform2DBoundsHelper<1>((char *)this + 120, &v115, &v115);
      CMILMatrix::Translate((CMILMatrix *)&v100[1], (float)*((int *)this + 4), (float)*((int *)this + 5));
      CMILMatrix::Multiply((CMILMatrix *)&v100[1], (CTreeEffectLayer *)((char *)this + 120));
      v80 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v100[1], 0, 1);
      v23 = v80;
      if ( v80 >= 0 )
      {
        v77 = v117;
        v4 = 2;
        v79 = v116;
        height = v115.height;
        width = v115.width;
        goto LABEL_60;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, v80, 0x210u);
    }
    else
    {
      CMILMatrix::Translate((CMILMatrix *)&v100[1], (float)*((int *)this + 4), (float)*((int *)this + 5));
      if ( CLayerVisual::GetFlatteningToLocalSpace(*((CLayerVisual **)this + 31)) )
        CMILMatrix::Multiply((CMILMatrix *)&v100[1], (CTreeEffectLayer *)((char *)this + 120));
      v92 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v100[1], 0, 1);
      v23 = v92;
      if ( v92 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v93, 0LL, 0, v92, 0x237u);
      }
      else
      {
        v4 = 2;
        v94 = CTreeEffectLayer::RenderMask(this, (const struct D2D_SIZE_F *)&v98, a2, v72);
        v23 = v94;
        if ( v94 >= 0 )
        {
          CDrawingContext::PopTransformInternal(a2, 1);
          v4 = 1;
LABEL_77:
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v112);
          goto LABEL_17;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, v94, 0x239u);
      }
    }
  }
LABEL_45:
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease(&v112);
  do
  {
LABEL_46:
    CDrawingContext::PopTransformInternal(a2, 1);
    --v4;
  }
  while ( v4 > 0 );
  return v23;
}
