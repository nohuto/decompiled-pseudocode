/*
 * XREFs of ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801B0EB4
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180073D6C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180018C68 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003BB3C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18003E014 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x180047F78 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x18004E7B0 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18004EBCC (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180051ED4 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180052140 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x1800600B0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x18006EEDC (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x18006F7D4 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18006FC34 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x180071500 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x180072034 (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180076050 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x180077400 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180079BAC (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007A5A0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180091838 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800BA950 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800BF720 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C24A4 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4B8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800EAB88 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1801B0AA8 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     memcpy_s_0 @ 0x1801B1AF8 (memcpy_s_0.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18022A33C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
        const struct CVisualTree ***this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CSurfaceDrawListBrush **a3,
        double a4)
{
  CMatrixStack *v6; // rcx
  __int64 v8; // rbx
  rsize_t v9; // rdx
  struct CShape *v10; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  int v12; // edx
  __int64 v13; // rcx
  signed int v14; // ebx
  __int64 (__fastcall ***v15)(_QWORD, __int64); // rax
  signed int v16; // eax
  __int64 v17; // rcx
  struct CMILMatrix *v18; // rdx
  const struct CVisualTree **v19; // rbx
  unsigned int v20; // xmm6_4
  unsigned int v21; // xmm7_4
  unsigned int v22; // xmm8_4
  unsigned int v23; // xmm9_4
  struct CVisual *CurrentVisual; // rax
  __int64 Bounds; // rax
  int v26; // xmm1_4
  float left; // xmm0_4
  float top; // xmm2_4
  float bottom; // xmm1_4
  const struct CVisualTree **v30; // rcx
  signed int CpuClip; // eax
  __int64 v32; // rcx
  signed int v33; // eax
  __int64 v34; // rcx
  signed int v35; // eax
  __int64 v36; // rcx
  float width; // xmm0_4
  float height; // xmm2_4
  float v39; // xmm1_4
  __int64 v40; // rcx
  float *v41; // r9
  float m11; // xmm2_4
  float dx; // xmm4_4
  const struct CVisualTree **v44; // rcx
  __m128 v45; // xmm0
  __m128 v46; // xmm1
  float v47; // xmm8_4
  float v48; // xmm6_4
  int v49; // eax
  struct IRenderTarget **v50; // rbx
  float v51; // xmm8_4
  float v52; // xmm6_4
  signed int v53; // eax
  __int64 v54; // rcx
  signed int v55; // eax
  __int64 v56; // rcx
  signed int DrawList; // eax
  __int64 v58; // rcx
  signed int v59; // eax
  __int64 v60; // rcx
  signed int v61; // eax
  __int64 v62; // rcx
  signed int v63; // eax
  __int64 v64; // rcx
  signed int v65; // eax
  __int64 v66; // rcx
  CDirtyRegion *v67; // rcx
  const struct CDrawingContext *v68; // r8
  signed int v69; // eax
  __int64 v70; // rcx
  CSurfaceDrawListBrush *v71; // rcx
  struct D2D_MATRIX_3X2_F *v72; // r9
  CSurfaceDrawListBrush *v73; // r11
  __int64 v74; // xmm1_8
  CDirtyRegion *v75; // rcx
  CDirtyRegion *v76; // rcx
  CSurfaceDrawListBrush *v78; // [rsp+38h] [rbp-D0h] BYREF
  CDirtyRegion *v79; // [rsp+40h] [rbp-C8h] BYREF
  struct D2D_MATRIX_3X2_F v80; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v81; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v82; // [rsp+70h] [rbp-98h] BYREF
  char v83; // [rsp+78h] [rbp-90h]
  char v84; // [rsp+80h] [rbp-88h]
  struct CRenderTargetImageSource *v85[2]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v86[4]; // [rsp+98h] [rbp-70h] BYREF
  __int16 v87; // [rsp+D8h] [rbp-30h]
  _OWORD v88[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v89; // [rsp+128h] [rbp+20h]
  struct D2D_RECT_F v90; // [rsp+138h] [rbp+30h] BYREF
  struct CShape *v91[2]; // [rsp+148h] [rbp+40h] BYREF
  int v92; // [rsp+158h] [rbp+50h]
  int v93; // [rsp+15Ch] [rbp+54h]
  struct D2D_RECT_F v94; // [rsp+160h] [rbp+58h] BYREF
  struct D2D_SIZE_F v95[2]; // [rsp+178h] [rbp+70h] BYREF
  struct CDrawListEntry **v96[288]; // [rsp+188h] [rbp+80h] BYREF
  _OWORD Destination[4]; // [rsp+A88h] [rbp+980h] BYREF
  int v98; // [rsp+AC8h] [rbp+9C0h]

  v6 = (CMatrixStack *)(*this + 60);
  v90 = (struct D2D_RECT_F)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v85[0] = 0LL;
  v89 = 0;
  CMatrixStack::Top(v6, (struct CMILMatrix *)v88);
  (*(void (__fastcall **)(const struct CVisualTree *, struct D2D_RECT_F *))(*(_QWORD *)(*this)[44] + 56LL))(
    (*this)[44],
    &v94);
  v8 = *((unsigned int *)this + 18);
  memcpy_s_0(Destination, v9, this + 5, 8 * v8);
  if ( *(_QWORD *)a2 )
  {
    *((_QWORD *)Destination + v8) = *(_QWORD *)a2;
    LODWORD(v8) = v8 + 1;
  }
  if ( !(_DWORD)v8 )
  {
LABEL_11:
    Destination[0] = v88[0];
    Destination[1] = v88[1];
    Destination[2] = v88[2];
    Destination[3] = v88[3];
    v98 = v89;
    if ( CMILMatrix::Invert((CMILMatrix *)Destination, (__int64)v10, v11) )
    {
      v19 = *this;
      *(float *)&v20 = (float)SLODWORD(v94.left);
      *(float *)&v21 = (float)SLODWORD(v94.top);
      *(float *)&v22 = (float)SLODWORD(v94.right);
      *(float *)&v23 = (float)SLODWORD(v94.bottom);
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)(*this + 1));
      Bounds = CVisual::GetBounds((__int64)CurrentVisual, (__int64)v19[757]);
      v91[0] = (struct CShape *)__PAIR64__(v21, v20);
      v26 = *(_DWORD *)(Bounds + 16);
      v93 = *(_DWORD *)(Bounds + 20);
      v92 = v26;
      v91[1] = (struct CShape *)__PAIR64__(v23, v22);
      CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)Destination, (__int64)v91, (__m128 *)v91);
      left = v90.left;
      if ( *(float *)v91 > v90.left )
      {
        v90.left = *(FLOAT *)v91;
        left = *(float *)v91;
      }
      top = v90.top;
      if ( *((float *)v91 + 1) > v90.top )
      {
        v90.top = *((FLOAT *)v91 + 1);
        top = *((float *)v91 + 1);
      }
      *(_OWORD *)&a4 = LODWORD(v90.right);
      if ( v90.right > *(float *)&v91[1] )
      {
        v90.right = *(FLOAT *)&v91[1];
        *(_OWORD *)&a4 = LODWORD(v91[1]);
      }
      bottom = v90.bottom;
      if ( v90.bottom > *((float *)&v91[1] + 1) )
      {
        v90.bottom = *((FLOAT *)&v91[1] + 1);
        bottom = *((float *)&v91[1] + 1);
      }
      if ( *(float *)&a4 <= left || bottom <= top )
      {
        v90.bottom = 0.0;
        v90.right = 0.0;
        v90.top = 0.0;
        v90.left = 0.0;
      }
    }
    v30 = *this;
    v82 = 0LL;
    v81 = 0LL;
    v83 = 0;
    v84 = 0;
    CpuClip = CDrawingContext::GetCpuClip(v30, v18, (struct CCpuClip *)&v81);
    v14 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, CpuClip, 0x32Au, 0LL);
    }
    else
    {
      if ( !*(_QWORD *)&v81.left && !v82 )
        goto LABEL_39;
      v33 = CCpuClip::ResolveClip((CCpuClip *)&v81, v91);
      v14 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x32Fu, 0LL);
      }
      else
      {
        v35 = (*(__int64 (__fastcall **)(struct CShape *, struct D2D_SIZE_F *, _QWORD))(*(_QWORD *)v91[0] + 32LL))(
                v91[0],
                v95,
                0LL);
        v14 = v35;
        if ( v35 >= 0 )
        {
          width = v90.left;
          if ( v95[0].width > v90.left )
          {
            v90.left = v95[0].width;
            width = v95[0].width;
          }
          height = v90.top;
          if ( v95[0].height > v90.top )
          {
            v90.top = v95[0].height;
            height = v95[0].height;
          }
          *(_OWORD *)&a4 = LODWORD(v90.right);
          if ( v90.right > v95[1].width )
          {
            v90.right = v95[1].width;
            *(_OWORD *)&a4 = LODWORD(v95[1].width);
          }
          v39 = v90.bottom;
          if ( v90.bottom > v95[1].height )
          {
            v90.bottom = v95[1].height;
            v39 = v95[1].height;
          }
          if ( *(float *)&a4 <= width || v39 <= height )
          {
            v90.bottom = 0.0;
            v90.right = 0.0;
            v90.top = 0.0;
            v90.left = 0.0;
          }
LABEL_39:
          CShapePtr::Release((CShapePtr *)&v82);
          if ( IsEmpty(&v90) )
          {
            *a3 = 0LL;
            goto LABEL_91;
          }
          CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v88, (float *)v95, (float *)v91);
          m11 = *(float *)&FLOAT_1_0;
          LODWORD(v80.m11) = (_DWORD)FLOAT_1_0;
          dx = *(float *)&FLOAT_1_0;
          LODWORD(v80.dx) = (_DWORD)FLOAT_1_0;
          if ( *((_DWORD *)this + 18) == 1 )
          {
            v44 = this[5];
            if ( v44 )
            {
              D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)(v44 + 1), &v80, &v80.dx, v41);
              m11 = v80.m11;
              dx = v80.dx;
            }
          }
          v45 = (__m128)(unsigned int)FLOAT_1_0;
          v46.m128_f32[0] = (float)(v95[0].width / fmaxf(1.0, m11 * v95[0].width)) * (float)(v90.right - v90.left);
          v45.m128_f32[0] = (float)(int)v46.m128_f32[0];
          v47 = (float)(int)((int)v46.m128_f32[0] - _mm_cmplt_ss(v45, v46).m128_u32[0]);
          v95[0].width = v47;
          v46.m128_f32[0] = (float)(*(float *)v91 / fmaxf(1.0, dx * *(float *)v91)) * (float)(v90.bottom - v90.top);
          *(float *)&a4 = (float)(int)v46.m128_f32[0];
          LODWORD(v91[0]) = _mm_cmplt_ss(*(__m128 *)&a4, v46).m128_u32[0];
          v48 = (float)((int)v46.m128_f32[0] - LODWORD(v91[0]));
          v49 = LODWORD(v94.right) - LODWORD(v94.left);
          v95[0].height = v48;
          if ( v47 > (float)(LODWORD(v94.right) - LODWORD(v94.left)) )
          {
            v95[0].width = (float)v49;
            v47 = (float)v49;
          }
          if ( v48 > (float)(LODWORD(v94.bottom) - LODWORD(v94.top)) )
          {
            v95[0].height = (float)(LODWORD(v94.bottom) - LODWORD(v94.top));
            v48 = v95[0].height;
          }
          v50 = *this;
          v51 = v47 / (float)(v90.right - v90.left);
          v78 = 0LL;
          v52 = v48 / (float)(v90.bottom - v90.top);
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v78);
          LODWORD(v91[1]) = 31;
          v91[0] = (struct CShape *)"DWM Drawlist Brush intermediate";
          v53 = CDrawingContext::PushOffScreenRenderingLayer(v50, (const struct CResourceTag *)v91, v95, 1, &v78);
          v14 = v53;
          if ( v53 >= 0 )
          {
            (*(void (__fastcall **)(CSurfaceDrawListBrush *, __int64))(*(_QWORD *)v78 + 128LL))(v78, 1LL);
            v86[1] = _xmm;
            v86[2] = _xmm;
            v86[0] = _xmm;
            v86[3] = _xmm;
            v87 = 32085;
            CMILMatrix::Translate(
              (CMILMatrix *)v86,
              COERCE_FLOAT(LODWORD(v90.left) ^ _xmm),
              COERCE_FLOAT(LODWORD(v90.top) ^ _xmm));
            CMILMatrix::Scale((CMILMatrix *)v86, v51, v52, 1.0);
            v55 = CDrawingContext::PushTransformInternal(
                    (CDrawingContext *)*this,
                    0LL,
                    (const struct CMILMatrix *)v86,
                    0,
                    1);
            v14 = v55;
            if ( v55 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x37Fu, 0LL);
              Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v78);
            }
            else
            {
              CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v96);
              DrawList = CBrushDrawListGenerator::GenerateDrawList(
                           (CBrushDrawListGenerator *)this,
                           a2,
                           (struct CDrawListEntryBuilder *)v96);
              v14 = DrawList;
              if ( DrawList < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, DrawList, 0x383u, 0LL);
              }
              else
              {
                v79 = 0LL;
                v59 = CDrawListCache::Create(&v79);
                v14 = v59;
                if ( v59 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x386u, 0LL);
                }
                else
                {
                  CDrawListCache::Update(v79, (struct CDrawingContext *)*this, v96);
                  v61 = CDrawListCache::Render((__int64)v79, (CDrawingContext *)*this, (float *)v86, 1.0);
                  v14 = v61;
                  if ( v61 >= 0 )
                  {
                    CDrawingContext::PopTransformInternal((CDrawingContext *)*this, 1);
                    v63 = CDrawingContext::PopLayer((CDrawingContext *)*this);
                    v14 = v63;
                    if ( v63 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast(v64, 0LL, 0, v63, 0x394u, 0LL);
                    }
                    else
                    {
                      Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v85);
                      v65 = CRenderTargetImageSource::Create(v78, 1, 0LL, v85);
                      v14 = v65;
                      if ( v65 >= 0 )
                      {
                        v67 = v79;
                        if ( v79 )
                        {
                          v79 = 0LL;
                          CDirtyRegion::Release(v67);
                        }
                        CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v96);
                        Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v78);
                        v68 = (const struct CDrawingContext *)*this;
                        v78 = 0LL;
                        *(_OWORD *)v91 = 0LL;
                        LOBYTE(v92) = 0;
                        v69 = CDrawListBitmap::FromImageSource(v91, v85[0], v68, 0);
                        v14 = v69;
                        if ( v69 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x3A9u, 0LL);
                        }
                        else
                        {
                          (*(void (__fastcall **)(struct CShape *, CDirtyRegion **))(*(_QWORD *)v91[1] + 40LL))(
                            v91[1],
                            &v79);
                          v94.left = 0.0;
                          v94.top = 0.0;
                          *(_QWORD *)&v81.right = 0LL;
                          LOBYTE(v82) = 1;
                          *(_QWORD *)&v81.left = &v78;
                          LOWORD(v80.m11) = SamplerMode::k_ClampClampLinear;
                          v94.right = (float)(int)v79;
                          v94.bottom = (float)SHIDWORD(v79);
                          BYTE2(v80._11) = 1;
                          v14 = CSurfaceDrawListBrush::CreateWithContentRect(
                                  (__int64)v91,
                                  (__int16 *)&v80,
                                  &v94.left,
                                  (__int64 *)&v81.right);
                          if ( (_BYTE)v82 )
                          {
                            v71 = **(CSurfaceDrawListBrush ***)&v81.left;
                            **(_QWORD **)&v81.left = *(_QWORD *)&v81.right;
                            if ( v71 )
                              CSurfaceDrawListBrush::`vector deleting destructor'(v71, 1);
                          }
                          if ( v14 < 0 )
                          {
                            MilInstrumentationCheckHR_MaybeFailFast((__int64)v71, 0LL, 0, v14, 0x3B0u, 0LL);
                          }
                          else
                          {
                            v94 = v90;
                            D2DMatrixHelper::ComputeRectangleTransform(
                              (const struct D2D_RECT_F *)v78 + 2,
                              &v94,
                              &v81,
                              v72);
                            v73 = v78;
                            v74 = v82;
                            *(struct D2D_RECT_F *)((char *)v78 + 8) = v81;
                            *((_QWORD *)v73 + 3) = v74;
                            *a3 = v78;
                            v78 = 0LL;
                          }
                        }
                        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v91[1]);
                        Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)v91);
                        if ( v78 )
                          CSurfaceDrawListBrush::`vector deleting destructor'(v78, 1);
                        goto LABEL_91;
                      }
                      MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0x398u, 0LL);
                    }
                    v75 = v79;
                    if ( v79 )
                    {
                      v79 = 0LL;
                      CDirtyRegion::Release(v75);
                    }
                    CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v96);
LABEL_76:
                    Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v78);
                    goto LABEL_91;
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x38Du, 0LL);
                }
                v76 = v79;
                if ( v79 )
                {
                  v79 = 0LL;
                  CDirtyRegion::Release(v76);
                }
              }
              CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v96);
              Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v78);
              CDrawingContext::PopTransformInternal((CDrawingContext *)*this, 1);
            }
            CDrawingContext::PopLayer((CDrawingContext *)*this);
            goto LABEL_91;
          }
          MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x376u, 0LL);
          goto LABEL_76;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x332u, 0LL);
      }
    }
    CShapePtr::Release((CShapePtr *)&v82);
    goto LABEL_91;
  }
  v12 = *((_DWORD *)a2 + 4);
  *(_QWORD *)&v81.left = v91;
  v95[0] = (struct D2D_SIZE_F)(unsigned int)v8;
  v91[0] = 0LL;
  v95[1] = (struct D2D_SIZE_F)Destination;
  *(_QWORD *)&v81.right = 0LL;
  LOBYTE(v82) = 1;
  v14 = CBrushDrawListGenerator::ComputeBrushClamp((__int64 *)v95, v12, (float *)a2 + 5, (__int64 *)&v81.right);
  if ( (_BYTE)v82 )
  {
    v13 = *(_QWORD *)&v81.right;
    v15 = **(__int64 (__fastcall *****)(_QWORD, __int64))&v81.left;
    **(_QWORD **)&v81.left = *(_QWORD *)&v81.right;
    if ( v15 )
      std::default_delete<CShape>::operator()(v13, v15);
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, 0x309u, 0LL);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(struct CShape *, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v91[0] + 32LL))(
            v91[0],
            &v90,
            0LL);
    v14 = v16;
    if ( v16 >= 0 )
    {
      v10 = v91[0];
      if ( v91[0] )
        std::default_delete<CShape>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v91[0]);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x30Bu, 0LL);
  }
  if ( v91[0] )
    std::default_delete<CShape>::operator()(v40, (__int64 (__fastcall ***)(_QWORD, __int64))v91[0]);
LABEL_91:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v85);
  return (unsigned int)v14;
}
