/*
 * XREFs of ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180182BCC
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800AE83C (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180015B7C (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18001B75C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180026D0C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180026DE0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18002777C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x180028E60 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x180028EF0 (-GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z.c)
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180040650 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18005AB70 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18005C5B4 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800647E8 (-Top@CMatrixStack@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180073D1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMM@Z @ 0x18008E53C (-Translate@CMILMatrix@@QEAAXMM@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800AEDD0 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800B35C0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800B40E0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DB270 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAPEAVCShape@@@Z @ 0x1801827E8 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@KAEBVMatrix.c)
 *     memcpy_s_0 @ 0x1801837AC (memcpy_s_0.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CBrushDrawListGenerator::GenerateIntermediateSurfaceBrush(
        CDrawingContext **this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CSurfaceDrawListBrush **a3,
        double a4)
{
  CMatrixStack *v6; // rcx
  __int64 v8; // rbx
  rsize_t v9; // rdx
  __int64 v10; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  int v12; // edx
  __int64 v13; // rcx
  int v14; // esi
  __int64 (__fastcall ***v15)(_QWORD, __int64); // rax
  int v16; // eax
  __int64 v17; // rcx
  struct CMILMatrix *v18; // rdx
  FLOAT left_low; // xmm6_4
  FLOAT top_low; // xmm7_4
  FLOAT right_low; // xmm8_4
  FLOAT bottom_low; // xmm9_4
  struct CVisual *CurrentVisual; // rax
  int v24; // xmm1_4
  float left; // xmm0_4
  float top; // xmm2_4
  float bottom; // xmm1_4
  CDrawingContext *v28; // rcx
  int CpuClip; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  float width; // xmm0_4
  float height; // xmm2_4
  float v37; // xmm1_4
  __int64 v38; // rcx
  float *v39; // r9
  bool v40; // zf
  float m11; // xmm2_4
  float dx; // xmm4_4
  CDrawingContext *v43; // rcx
  __m128 v44; // xmm0
  __m128 v45; // xmm1
  float v46; // xmm8_4
  float v47; // xmm6_4
  int v48; // eax
  float v49; // xmm8_4
  float v50; // xmm6_4
  struct IRenderTarget **v51; // rcx
  int v52; // eax
  __int64 v53; // rcx
  struct IRenderTarget *v54; // rdi
  int v55; // eax
  __int64 v56; // rcx
  int DrawList; // eax
  __int64 v58; // rcx
  int v59; // eax
  __int64 v60; // rcx
  CMILRefCountBase *v61; // rbx
  int v62; // eax
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rcx
  int v66; // eax
  __int64 v67; // rcx
  const struct CDrawingContext *v68; // r8
  int v69; // eax
  __int64 v70; // rcx
  struct D2D_RECT_F v71; // xmm0
  CSurfaceDrawListBrush *v72; // rcx
  struct D2D_MATRIX_3X2_F *v73; // r9
  __int64 v74; // r11
  __int64 v75; // xmm1_8
  CMILRefCountBase *v76; // rcx
  __int128 v78; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_MATRIX_3X2_F v79; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v80; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v81; // [rsp+70h] [rbp-98h] BYREF
  char v82; // [rsp+78h] [rbp-90h]
  char v83; // [rsp+80h] [rbp-88h]
  struct IImageSource *v84[2]; // [rsp+88h] [rbp-80h] BYREF
  _OWORD v85[4]; // [rsp+98h] [rbp-70h] BYREF
  __int16 v86; // [rsp+D8h] [rbp-30h]
  _OWORD v87[4]; // [rsp+E8h] [rbp-20h] BYREF
  int v88; // [rsp+128h] [rbp+20h]
  struct D2D_RECT_F v89; // [rsp+138h] [rbp+30h] BYREF
  struct D2D_SIZE_F v90[2]; // [rsp+148h] [rbp+40h] BYREF
  struct D2D_RECT_F v91; // [rsp+158h] [rbp+50h] BYREF
  __int64 v92; // [rsp+168h] [rbp+60h]
  struct D2D_RECT_F v93; // [rsp+178h] [rbp+70h] BYREF
  int v94; // [rsp+188h] [rbp+80h]
  int v95; // [rsp+18Ch] [rbp+84h]
  struct CDrawListEntry **v96[288]; // [rsp+198h] [rbp+90h] BYREF
  _OWORD Destination[4]; // [rsp+A98h] [rbp+990h] BYREF
  int v98; // [rsp+AD8h] [rbp+9D0h]

  v6 = (CDrawingContext *)((char *)*this + 480);
  v89 = (struct D2D_RECT_F)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v84[0] = 0LL;
  v88 = 0;
  CMatrixStack::Top(v6, (struct CMILMatrix *)v87);
  (*(void (__fastcall **)(_QWORD, struct D2D_RECT_F *))(**((_QWORD **)*this + 44) + 56LL))(
    *((_QWORD *)*this + 44),
    &v91);
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
    Destination[0] = v87[0];
    Destination[1] = v87[1];
    Destination[2] = v87[2];
    Destination[3] = v87[3];
    v98 = v88;
    if ( CMILMatrix::Invert((CMILMatrix *)Destination, v10, v11) )
    {
      left_low = (float)SLODWORD(v91.left);
      top_low = (float)SLODWORD(v91.top);
      right_low = (float)SLODWORD(v91.right);
      bottom_low = (float)SLODWORD(v91.bottom);
      CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)*this + 8));
      v93.left = left_low;
      v24 = *((_DWORD *)CurrentVisual + 39);
      v95 = *((_DWORD *)CurrentVisual + 40);
      v94 = v24;
      v93.top = top_low;
      v93.right = right_low;
      v93.bottom = bottom_low;
      CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)Destination, (__int64)&v93, (__m128 *)&v93);
      left = v89.left;
      if ( v93.left > v89.left )
      {
        v89.left = v93.left;
        left = v93.left;
      }
      top = v89.top;
      if ( v93.top > v89.top )
      {
        v89.top = v93.top;
        top = v93.top;
      }
      *(_OWORD *)&a4 = LODWORD(v89.right);
      if ( v89.right > v93.right )
      {
        v89.right = v93.right;
        *(_OWORD *)&a4 = LODWORD(v93.right);
      }
      bottom = v89.bottom;
      if ( v89.bottom > v93.bottom )
      {
        v89.bottom = v93.bottom;
        bottom = v93.bottom;
      }
      if ( *(float *)&a4 <= left || bottom <= top )
      {
        v89.bottom = 0.0;
        v89.right = 0.0;
        v89.top = 0.0;
        v89.left = 0.0;
      }
    }
    v28 = *this;
    v81 = 0LL;
    v80 = 0LL;
    v82 = 0;
    v83 = 0;
    CpuClip = CDrawingContext::GetCpuClip(v28, v18, (struct CCpuClip *)&v80);
    v14 = CpuClip;
    if ( CpuClip < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, CpuClip, 0x31Bu);
    }
    else
    {
      if ( !(_QWORD)v80 && !v81 )
        goto LABEL_39;
      v31 = CCpuClip::ResolveClip((CCpuClip *)&v80, (const struct CShape **)&v78);
      v14 = v31;
      if ( v31 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x320u);
      }
      else
      {
        v33 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_SIZE_F *, _QWORD))(*(_QWORD *)v78 + 32LL))(v78, v90, 0LL);
        v14 = v33;
        if ( v33 >= 0 )
        {
          width = v89.left;
          if ( v90[0].width > v89.left )
          {
            v89.left = v90[0].width;
            width = v90[0].width;
          }
          height = v89.top;
          if ( v90[0].height > v89.top )
          {
            v89.top = v90[0].height;
            height = v90[0].height;
          }
          *(_OWORD *)&a4 = LODWORD(v89.right);
          if ( v89.right > v90[1].width )
          {
            v89.right = v90[1].width;
            *(_OWORD *)&a4 = LODWORD(v90[1].width);
          }
          v37 = v89.bottom;
          if ( v89.bottom > v90[1].height )
          {
            v89.bottom = v90[1].height;
            v37 = v90[1].height;
          }
          if ( *(float *)&a4 <= width || v37 <= height )
          {
            v89.bottom = 0.0;
            v89.right = 0.0;
            v89.top = 0.0;
            v89.left = 0.0;
          }
LABEL_39:
          CShapePtr::Release((CShapePtr *)&v81);
          if ( IsEmpty(&v89) )
          {
            *a3 = 0LL;
            goto LABEL_92;
          }
          CMILMatrix::Get2DScaleDimensions((CMILMatrix *)v87, (float *)v90, (float *)&v78);
          v40 = *((_DWORD *)this + 18) == 1;
          v79.m11 = FLOAT_1_0;
          m11 = FLOAT_1_0;
          v79.dx = FLOAT_1_0;
          dx = FLOAT_1_0;
          if ( v40 )
          {
            v43 = this[5];
            if ( v43 )
            {
              D2DMatrixHelper::GetScaleDimensions((CDrawingContext *)((char *)v43 + 8), &v79, &v79.dx, v39);
              m11 = v79.m11;
              dx = v79.dx;
            }
          }
          v44 = (__m128)LODWORD(FLOAT_1_0);
          v45.m128_f32[0] = (float)(v90[0].width / fmaxf(1.0, m11 * v90[0].width)) * (float)(v89.right - v89.left);
          v44.m128_f32[0] = (float)(int)v45.m128_f32[0];
          v46 = (float)(int)((int)v45.m128_f32[0] - _mm_cmplt_ss(v44, v45).m128_u32[0]);
          v90[0].width = v46;
          v45.m128_f32[0] = (float)(*(float *)&v78 / fmaxf(1.0, dx * *(float *)&v78)) * (float)(v89.bottom - v89.top);
          *(float *)&a4 = (float)(int)v45.m128_f32[0];
          LODWORD(v78) = _mm_cmplt_ss(*(__m128 *)&a4, v45).m128_u32[0];
          v47 = (float)((int)v45.m128_f32[0] - v78);
          v48 = LODWORD(v91.right) - LODWORD(v91.left);
          v90[0].height = v47;
          if ( v46 > (float)(LODWORD(v91.right) - LODWORD(v91.left)) )
          {
            v90[0].width = (float)v48;
            v46 = (float)v48;
          }
          if ( v47 > (float)(LODWORD(v91.bottom) - LODWORD(v91.top)) )
          {
            v90[0].height = (float)(LODWORD(v91.bottom) - LODWORD(v91.top));
            v47 = v90[0].height;
          }
          *(_QWORD *)&v78 = 0LL;
          v49 = v46 / (float)(v89.right - v89.left);
          v50 = v47 / (float)(v89.bottom - v89.top);
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v78);
          v51 = (struct IRenderTarget **)*this;
          *(_QWORD *)&v93.left = "DWM Drawlist Brush intermediate";
          LODWORD(v93.right) = 31;
          v52 = CDrawingContext::PushOffScreenRenderingLayer(
                  v51,
                  (const struct CResourceTag *)&v93,
                  v90,
                  1,
                  (struct IRenderTargetBitmap **)&v78);
          v14 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v52, 0x367u);
            goto LABEL_76;
          }
          v54 = (struct IRenderTarget *)v78;
          (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v78 + 128LL))(v78, 1LL);
          v85[1] = _xmm;
          v85[2] = _xmm;
          v85[0] = _xmm;
          v85[3] = _xmm;
          v86 = 32085;
          CMILMatrix::Translate(
            (CMILMatrix *)v85,
            COERCE_FLOAT(LODWORD(v89.left) ^ _xmm),
            COERCE_FLOAT(LODWORD(v89.top) ^ _xmm));
          CMILMatrix::Scale((CMILMatrix *)v85, v49, v50, 1.0);
          v55 = CDrawingContext::PushTransformInternal(*this, 0LL, (const struct CMILMatrix *)v85, 0, 1);
          v14 = v55;
          if ( v55 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x370u);
            Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v78);
            goto LABEL_86;
          }
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v96);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)this,
                       a2,
                       (struct CDrawListEntryBuilder *)v96);
          v14 = DrawList;
          if ( DrawList < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, DrawList, 0x374u);
            goto LABEL_84;
          }
          v90[0] = 0LL;
          v59 = CDrawListCache::Create((struct CDrawListCache **)v90);
          v14 = v59;
          if ( v59 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x377u);
            v76 = (CMILRefCountBase *)v90[0];
            if ( !*(_QWORD *)v90 )
              goto LABEL_84;
          }
          else
          {
            v61 = (CMILRefCountBase *)v90[0];
            CDrawListCache::Update(*(CDrawListCache **)v90, *this, v96);
            v62 = CDrawListCache::Render((__int64)v61, *this, (CMILMatrix *)v85, 1.0);
            v14 = v62;
            if ( v62 >= 0 )
            {
              CDrawingContext::PopTransformInternal(*this, 1);
              v64 = CDrawingContext::PopLayer(*this);
              v14 = v64;
              if ( v64 < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v65, 0LL, 0, v64, 0x385u);
              }
              else
              {
                Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v84);
                v66 = CRenderTargetImageSource::Create(v54, 1, v84);
                v14 = v66;
                if ( v66 >= 0 )
                {
                  if ( v61 )
                    CMILRefCountBase::Release(v61);
                  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v96);
                  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v78);
                  v68 = *this;
                  *(_QWORD *)&v78 = 0LL;
                  v80 = 0LL;
                  LOBYTE(v81) = 0;
                  v69 = CDrawListBitmap::FromImageSource((struct IImageSource **)&v80, v84[0], v68, 0);
                  v14 = v69;
                  if ( v69 < 0 )
                  {
                    MilInstrumentationCheckHR_MaybeFailFast(v70, 0LL, 0, v69, 0x39Au);
                  }
                  else
                  {
                    (*(void (__fastcall **)(_QWORD, struct D2D_SIZE_F *))(**((_QWORD **)&v80 + 1) + 40LL))(
                      *((_QWORD *)&v80 + 1),
                      v90);
                    v91.left = 0.0;
                    v91.top = 0.0;
                    LOBYTE(v92) = 1;
                    LOWORD(v79.m11) = SamplerMode::k_ClampClampLinear;
                    BYTE2(v79._11) = 1;
                    v91.right = (float)SLODWORD(v90[0].width);
                    v91.bottom = (float)SLODWORD(v90[0].height);
                    v71 = v91;
                    *(_QWORD *)&v91.left = &v78;
                    *(_QWORD *)&v91.right = 0LL;
                    v93 = v71;
                    v14 = CSurfaceDrawListBrush::CreateWithContentRect(
                            (__int64 *)&v80,
                            (__int16 *)&v79,
                            &v93.left,
                            (__int64 *)&v91.right);
                    if ( (_BYTE)v92 )
                    {
                      v72 = **(CSurfaceDrawListBrush ***)&v91.left;
                      **(_QWORD **)&v91.left = *(_QWORD *)&v91.right;
                      if ( v72 )
                        CSurfaceDrawListBrush::`vector deleting destructor'(v72, 1);
                    }
                    if ( v14 < 0 )
                    {
                      MilInstrumentationCheckHR_MaybeFailFast((__int64)v72, 0LL, 0, v14, 0x3A1u);
                    }
                    else
                    {
                      v91 = v89;
                      v93 = v89;
                      D2DMatrixHelper::ComputeRectangleTransform((const struct D2D_RECT_F *)(v78 + 32), &v93, &v91, v73);
                      v74 = v78;
                      v75 = v92;
                      *(struct D2D_RECT_F *)(v78 + 8) = v91;
                      *(_QWORD *)(v74 + 24) = v75;
                      *a3 = (struct CSurfaceDrawListBrush *)v78;
                      *(_QWORD *)&v78 = 0LL;
                    }
                  }
                  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v80 + 1);
                  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v80);
                  if ( (_QWORD)v78 )
                    CSurfaceDrawListBrush::`vector deleting destructor'((CSurfaceDrawListBrush *)v78, 1);
                  goto LABEL_92;
                }
                MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x389u);
              }
              if ( v61 )
                CMILRefCountBase::Release(v61);
              CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v96);
LABEL_76:
              Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v78);
              goto LABEL_92;
            }
            MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v62, 0x37Eu);
            if ( !v61 )
              goto LABEL_84;
            v76 = v61;
          }
          CMILRefCountBase::Release(v76);
LABEL_84:
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v96);
          Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v78);
          CDrawingContext::PopTransformInternal(*this, 1);
LABEL_86:
          CDrawingContext::PopLayer(*this);
          goto LABEL_92;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x323u);
      }
    }
    CShapePtr::Release((CShapePtr *)&v81);
    goto LABEL_92;
  }
  v12 = *((_DWORD *)a2 + 4);
  v90[0] = (struct D2D_SIZE_F)(unsigned int)v8;
  *(_QWORD *)&v78 = 0LL;
  v90[1] = (struct D2D_SIZE_F)Destination;
  v93 = *(struct D2D_RECT_F *)&v90[0].width;
  *(_QWORD *)&v80 = &v78;
  *((_QWORD *)&v80 + 1) = 0LL;
  LOBYTE(v81) = 1;
  v14 = CBrushDrawListGenerator::ComputeBrushClamp((__int64 *)&v93, v12, (float *)a2 + 5, (__int64 *)&v80 + 1);
  if ( (_BYTE)v81 )
  {
    v13 = *((_QWORD *)&v80 + 1);
    v15 = *(__int64 (__fastcall ****)(_QWORD, __int64))v80;
    *(_QWORD *)v80 = *((_QWORD *)&v80 + 1);
    if ( v15 )
      std::default_delete<CShape>::operator()(v13, v15);
  }
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v14, 0x2F9u);
  }
  else
  {
    v16 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_RECT_F *, _QWORD))(*(_QWORD *)v78 + 32LL))(v78, &v89, 0LL);
    v14 = v16;
    if ( v16 >= 0 )
    {
      v10 = v78;
      if ( (_QWORD)v78 )
        std::default_delete<CShape>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v78);
      goto LABEL_11;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x2FBu);
  }
  if ( (_QWORD)v78 )
    std::default_delete<CShape>::operator()(v38, (__int64 (__fastcall ***)(_QWORD, __int64))v78);
LABEL_92:
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)v84);
  return (unsigned int)v14;
}
