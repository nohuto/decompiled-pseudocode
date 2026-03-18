/*
 * XREFs of ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18005042C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D76C (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800378D8 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180037AFC (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x18005021C (-GetD2DBitmap@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@PEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x1800502C4 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x180050984 (-DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z.c)
 *     ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x180050A00 (-BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBL.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x180050E78 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?Reset@CCustomBlur@@QEAAXXZ @ 0x180050EFC (-Reset@CCustomBlur@@QEAAXXZ.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180051070 (-Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLAT.c)
 *     ?GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z @ 0x1800510C8 (-GetCustomBlurEffectNoRef@CDrawingContext@@QEAAJPEAPEAVCCustomBlur@@@Z.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x180051138 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180051B48 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180057610 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800954E4 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800BB84C (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x1800BEF5C (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180204978 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderExternalEffect(
        CBrushRenderingGraph *this,
        struct CDrawingContext *a2,
        const struct _GUID *a3,
        const struct EffectStage *a4,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a5,
        struct EffectInput *a6)
{
  char *v6; // r15
  CDrawListBitmap *v7; // r12
  CCustomBlur *v9; // r14
  __int128 v10; // xmm1
  __int128 v12; // xmm0
  int D2DBitmap; // eax
  unsigned int v15; // ecx
  int v16; // ebx
  unsigned int *v17; // rdx
  float x_low; // xmm11_4
  float y_low; // xmm12_4
  __m128 v20; // xmm13
  __m128 v21; // xmm14
  float *v22; // rax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  float *v25; // rax
  FLOAT v26; // xmm7_4
  float v27; // xmm6_4
  enum D2D1_GAUSSIANBLUR_OPTIMIZATION v28; // r8d
  CBrushRenderingGraph *v29; // rcx
  float v30; // xmm6_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  float v33; // xmm9_4
  bool v34; // bl
  int v35; // eax
  unsigned int v36; // ecx
  bool IsOpaque; // al
  __int64 v38; // rdx
  int v39; // eax
  unsigned int v40; // ecx
  const struct D2D_RECT_F *v41; // r13
  char v42; // r15
  int CustomBlurEffectNoRef; // eax
  unsigned int v44; // ecx
  int v45; // eax
  unsigned int v46; // ecx
  float v47; // xmm0_4
  FLOAT v48; // xmm2_4
  float v49; // xmm1_4
  int v50; // eax
  unsigned int v51; // ecx
  const struct D2D_POINT_2F *v52; // r9
  CDrawingContext *v53; // rcx
  int v54; // eax
  unsigned int v55; // ecx
  int v56; // eax
  unsigned int v57; // ecx
  float *v59; // rax
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  unsigned int v62; // ecx
  float *v63; // rax
  float *v64; // rax
  __m128 v65; // xmm2
  __m128 v66; // xmm3
  enum D2D1_INTERPOLATION_MODE v67; // [rsp+28h] [rbp-E0h]
  enum D2D1_COMPOSITE_MODE v68; // [rsp+30h] [rbp-D8h]
  struct D2D_VECTOR_2F v69; // [rsp+50h] [rbp-B8h] BYREF
  struct IRenderTarget *v70; // [rsp+58h] [rbp-B0h] BYREF
  D2D1_GAUSSIANBLUR_OPTIMIZATION v71[2]; // [rsp+60h] [rbp-A8h] BYREF
  struct IImageSource *v72; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Bitmap1 *v73; // [rsp+70h] [rbp-98h] BYREF
  float *v74; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_VECTOR_2F v75[2]; // [rsp+80h] [rbp-88h] BYREF
  struct D2D_VECTOR_2F v76; // [rsp+90h] [rbp-78h]
  char *v77; // [rsp+98h] [rbp-70h]
  int v78; // [rsp+A0h] [rbp-68h]
  struct D2D_SIZE_F v79[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v80; // [rsp+B8h] [rbp-50h]
  float v81; // [rsp+C8h] [rbp-40h]
  float v82; // [rsp+CCh] [rbp-3Ch]
  __int128 v83; // [rsp+D8h] [rbp-30h]
  CCustomBlur *v84; // [rsp+F0h] [rbp-18h] BYREF
  struct D2D_SIZE_F v85; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v86; // [rsp+100h] [rbp-8h] BYREF
  __int128 v87; // [rsp+110h] [rbp+8h]
  int v88; // [rsp+120h] [rbp+18h]
  _BYTE v89[16]; // [rsp+128h] [rbp+20h] BYREF
  __int128 v90; // [rsp+138h] [rbp+30h] BYREF
  __int128 v91; // [rsp+148h] [rbp+40h]
  __int128 v92; // [rsp+158h] [rbp+50h]
  __int128 v93; // [rsp+168h] [rbp+60h]
  int v94; // [rsp+178h] [rbp+70h]
  float v95[10]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v96[12]; // [rsp+1B0h] [rbp+A8h] BYREF
  float v97; // [rsp+1BCh] [rbp+B4h]
  unsigned __int64 v98; // [rsp+1C0h] [rbp+B8h]
  struct D2D_RECT_F v99; // [rsp+1C8h] [rbp+C0h] BYREF

  v6 = (char *)a4 + 8;
  v7 = a6;
  v79[0] = (struct D2D_SIZE_F)a6;
  *((_QWORD *)&v80 + 1) = 0LL;
  v9 = 0LL;
  v10 = *((_OWORD *)a5 + 1);
  v12 = *(_OWORD *)a5;
  v84 = 0LL;
  v94 = 0;
  v73 = 0LL;
  v70 = 0LL;
  v72 = 0LL;
  v76 = (struct D2D_VECTOR_2F)v10;
  v77 = (char *)a4 + 8;
  *(_OWORD *)&v75[0].x = v12;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v73);
  D2DBitmap = CDrawListBitmap::GetD2DBitmap((CDrawListBitmap *)v6, a2, &v73);
  v16 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, (const int *const)"\a", 1u, D2DBitmap, 0x201u, 0LL);
    goto LABEL_22;
  }
  v17 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)a4) + 8LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, D2D1_GAUSSIANBLUR_OPTIMIZATION *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, _BYTE *))(**(_QWORD **)v17 + 48LL))(
    *(_QWORD *)v17,
    v17[4],
    v71,
    &v71[1],
    v89);
  (*(void (__fastcall **)(_QWORD, struct D2D_VECTOR_2F *))(**((_QWORD **)v6 + 1) + 40LL))(*((_QWORD *)v6 + 1), &v69);
  *(_QWORD *)&v96[4] = 0LL;
  v20 = 0LL;
  x_low = (float)SLODWORD(v69.x);
  v21 = 0LL;
  y_low = (float)SLODWORD(v69.y);
  v74 = (float *)(v6 + 48);
  *(float *)v96 = (float)SLODWORD(v69.x);
  v97 = (float)SLODWORD(v69.y);
  v20.m128_f32[0] = 0.0 - (float)((float)SLODWORD(v69.x) * 0.0);
  v21.m128_f32[0] = 0.0 - (float)((float)SLODWORD(v69.y) * 0.0);
  *(float *)&v98 = v20.m128_f32[0];
  *((float *)&v98 + 1) = v21.m128_f32[0];
  v22 = Matrix3x3::operator*((float *)v6 + 12, v95, (float *)v96);
  v23 = *(_OWORD *)v22;
  v24 = *((_OWORD *)v22 + 1);
  *(float *)&v22 = v22[8];
  v86 = v23;
  v88 = (int)v22;
  v87 = v24;
  v25 = (float *)Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)&v86, (struct D2D_VECTOR_2F)&v85);
  v26 = v25[1] * *(float *)v71;
  v85.width = *v25 * *(float *)v71;
  v85.height = v26;
  v27 = CCustomBlur::DetermineOutputScale(x_low, v85.width, v71[1]);
  v76 = (struct D2D_VECTOR_2F)__PAIR64__(
                                COERCE_UNSIGNED_INT(CCustomBlur::DetermineOutputScale(y_low, v26, v28)),
                                LODWORD(v27));
  if ( v6[44] && v6[101] )
  {
    CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v75,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v79);
    v30 = *(float *)&v80;
    v31 = *((float *)&v80 + 1);
    v32 = *((float *)&v80 + 3);
    v33 = *((float *)&v80 + 2);
    v69 = v76;
  }
  else
  {
    CBrushRenderingGraph::ConfigureIntermediateFromInput(
      v29,
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v75,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v79);
    v33 = *((float *)&v80 + 2);
    v32 = *((float *)&v80 + 3);
    v30 = *(float *)&v80 / v81;
    v31 = *((float *)&v80 + 1) / v82;
    v69.x = *((float *)&v80 + 2) / v81;
    v69.y = *((float *)&v80 + 3) / v82;
  }
  v34 = !CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(this, *((_DWORD *)this + 42) - 1, *(_DWORD *)a4);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v70);
  *(_DWORD *)&v96[8] = 32;
  *(_QWORD *)v96 = "DWM External Effect intermediate";
  v35 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)v96, &v79[1], v34, &v70);
  v16 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, (const int *const)"\a", 1u, v35, 0x23Cu, 0LL);
    v7 = (CDrawListBitmap *)v79[0];
    goto LABEL_22;
  }
  IsOpaque = CDrawListBitmap::IsOpaque((CDrawListBitmap *)v6);
  v38 = 3LL;
  if ( !IsOpaque )
    v38 = 1LL;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v70 + 128LL))(v70, v38);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v72);
  v39 = CRenderTargetImageSource::Create(v70, 1, 0LL, &v72);
  v7 = (CDrawListBitmap *)v79[0];
  v16 = v39;
  if ( v39 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v40, (const int *const)"\a", 1u, v39, 0x24Fu, 0LL);
    goto LABEL_36;
  }
  v41 = (const struct D2D_RECT_F *)(v6 + 84);
  if ( v6[101] )
  {
    v42 = 0;
  }
  else
  {
    *(_DWORD *)&v96[8] = 0;
    *(_QWORD *)v96 = LODWORD(x_low);
    v97 = y_low;
    v98 = _mm_unpacklo_ps(v20, v21).m128_u64[0];
    v59 = Matrix3x3::operator*(v74, v95, (float *)v96);
    v60 = *(_OWORD *)v59;
    v61 = *((_OWORD *)v59 + 1);
    *(float *)&v59 = v59[8];
    v86 = v60;
    v88 = (int)v59;
    v87 = v61;
    if ( !Matrix3x3::TryInvert((const struct Matrix3x3 *)&v86, (struct Matrix3x3 *)&v86) )
    {
      v16 = -2003304441;
      MilInstrumentationCheckHR_MaybeFailFast(v62, (const int *const)"\a", 1u, -2003304441, 0x266u, 0LL);
      goto LABEL_36;
    }
    v42 = 1;
  }
  CustomBlurEffectNoRef = CDrawingContext::GetCustomBlurEffectNoRef(a2, &v84);
  v16 = CustomBlurEffectNoRef;
  if ( CustomBlurEffectNoRef < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v44, (const int *const)"\a", 1u, CustomBlurEffectNoRef, 0x26Bu, 0LL);
    v9 = v84;
  }
  else
  {
    v9 = v84;
    v45 = CCustomBlur::BuildEffect(v84, v73, v41, &v85, v71[1], &v69, (struct D2D_VECTOR_2F *)&v74);
    v16 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v46, (const int *const)"\a", 1u, v45, 0x272u, 0LL);
    }
    else
    {
      v47 = v41->right - v41->left;
      v48 = (float)(v41->top * v69.y) + *((float *)&v74 + 1);
      v99.left = (float)(v41->left * v69.x) + *(float *)&v74;
      v99.top = v48;
      v49 = v41->bottom - v41->top;
      v99.right = (float)(v47 * v30) + v99.left;
      v99.bottom = (float)(v49 * v31) + v48;
      if ( v42 )
      {
        *(_QWORD *)&v75[0].y = 0LL;
        v75[1].y = 0.0;
        v76.y = 0.0;
        v78 = 1065353216;
        v75[0].x = 1.0 / v69.x;
        v76.x = 1.0 / v69.y;
        *(float *)&v77 = 0.0 - (float)((float)(1.0 / v69.x) * 0.0);
        *((float *)&v77 + 1) = 0.0 - (float)((float)(1.0 / v69.y) * 0.0);
        v63 = (float *)Matrix3x3::operator*(v75, v95, &v86);
        *(_DWORD *)&v96[8] = 0;
        *(_QWORD *)v96 = LODWORD(v33);
        v97 = v32;
        *(float *)&v98 = 0.0 - (float)(v33 * 0.0);
        *((float *)&v98 + 1) = 0.0 - (float)(v32 * 0.0);
        v64 = Matrix3x3::operator*(v63, (float *)v75, (float *)v96);
        v79[1].width = 0.0;
        v65 = *(__m128 *)v64;
        v94 = 0;
        v66 = *(__m128 *)(v64 + 4);
        *(float *)&v64 = v64[8];
        LODWORD(v79[0].width) = v65.m128_i32[0];
        LODWORD(v79[0].height) = _mm_shuffle_ps(v65, v65, 85).m128_u32[0];
        HIDWORD(v80) = _mm_shuffle_ps(v66, v66, 85).m128_u32[0];
        LODWORD(v83) = _mm_shuffle_ps(v66, v66, 170).m128_u32[0];
        *(_QWORD *)((char *)&v80 + 4) = v66.m128_u32[0];
        v88 = (int)v64;
        HIDWORD(v83) = (_DWORD)v64;
        LODWORD(v80) = _mm_shuffle_ps(v65, v65, 255).m128_u32[0];
        v91 = v80;
        LODWORD(v79[1].height) = _mm_shuffle_ps(v65, v65, 170).m128_u32[0];
        *(_QWORD *)((char *)&v83 + 4) = _mm_shuffle_ps(v66, v66, 255).m128_u32[0];
        v90 = *(_OWORD *)&v79[0].width;
        v93 = v83;
      }
      else
      {
        v90 = _xmm;
        v91 = _xmm;
        v93 = _xmm;
        LOWORD(v94) = 32085;
      }
      v92 = _xmm;
      v50 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)&v90, 0, 1);
      v16 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v51, (const int *const)"\a", 1u, v50, 0x291u, 0LL);
      }
      else
      {
        v16 = CCustomBlur::Draw(v9, a2, &v99, v52, v67, v68);
        CDrawingContext::PopTransformInternal(a2, 1);
        if ( v16 >= 0 )
        {
          v54 = CDrawingContext::PopLayer(v53);
          v16 = v54;
          if ( v54 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v55, (const int *const)"\a", 1u, v54, 0x2A0u, 0LL);
          }
          else
          {
            v56 = CDrawListBitmap::FromImageSource(v7, v72, a2, 0);
            v16 = v56;
            if ( v56 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v57, (const int *const)"\a", 1u, v56, 0x2A2u, 0LL);
          }
          goto LABEL_20;
        }
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v53, (const int *const)"\a", 1u, v16, 0x29Cu, 0LL);
      }
    }
  }
LABEL_36:
  CDrawingContext::PopLayer(a2);
LABEL_20:
  if ( v9 )
    CCustomBlur::Reset(v9);
LABEL_22:
  if ( v16 == -2003304441 )
    v16 = CDrawListBitmap::FromImageSource(v7, v72, a2, 0);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v72);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v70);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v73);
  return (unsigned int)v16;
}
