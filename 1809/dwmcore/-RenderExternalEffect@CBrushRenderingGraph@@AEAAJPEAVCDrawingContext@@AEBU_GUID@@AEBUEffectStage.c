/*
 * XREFs of ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1800AA850
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x18000C9DC (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x18005A028 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x180067A58 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?GetD2DBitmap@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@PEAPEAUID2D1Bitmap1@@@Z @ 0x180067E74 (-GetD2DBitmap@CDrawListBitmap@@QEBAJPEAVCDrawingContext@@PEAPEAUID2D1Bitmap1@@@Z.c)
 *     ?Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800699C8 (-Draw@CCustomBlur@@QEAAJPEAVCDrawingContext@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLAT.c)
 *     ?Reset@CCustomBlur@@QEAAXXZ @ 0x18006A034 (-Reset@CCustomBlur@@QEAAXXZ.c)
 *     ?IsOpaque@CDrawListBitmap@@QEBA_NXZ @ 0x18006AAA0 (-IsOpaque@CDrawListBitmap@@QEBA_NXZ.c)
 *     ?DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z @ 0x1800AAEA4 (-DetermineOutputScale@CCustomBlur@@SAMMMW4D2D1_GAUSSIANBLUR_OPTIMIZATION@@@Z.c)
 *     ?BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBLUR_OPTIMIZATION@@AEBUD2D_VECTOR_2F@@PEAU6@@Z @ 0x1800ADB08 (-BuildEffect@CCustomBlur@@QEAAJPEAUID2D1Image@@AEBUD2D_RECT_F@@AEBUD2D_SIZE_F@@W4D2D1_GAUSSIANBL.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800AEBA8 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B1E90 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Get2DScaleDimensions@Matrix3x3@@QEBA?AUD2D_VECTOR_2F@@XZ @ 0x1800DC7A8 (-Get2DScaleDimensions@Matrix3x3@@QEBA-AUD2D_VECTOR_2F@@XZ.c)
 *     ?Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z @ 0x1800E57AC (-Create@CCustomBlur@@SAJPEAUID2D1DeviceContext@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801D4B18 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
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
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  struct IImageSource *v13; // rbx
  int D2DBitmap; // eax
  unsigned int v15; // ecx
  int v16; // edi
  unsigned int *v17; // rdx
  float v18; // xmm11_4
  float v19; // xmm12_4
  __m128 v20; // xmm13
  __m128 v21; // xmm14
  __int64 v22; // rax
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
  bool v34; // di
  int v35; // eax
  unsigned int v36; // ecx
  char IsOpaque; // al
  struct IRenderTarget *v38; // rbx
  __int64 v39; // rdx
  int v40; // eax
  unsigned int v41; // ecx
  const struct D2D_RECT_F *v42; // r13
  __int64 v43; // rax
  CCustomBlur **v44; // r15
  CCustomBlur *v45; // r15
  float v46; // xmm0_4
  FLOAT v47; // xmm2_4
  float v48; // xmm1_4
  __int128 v49; // xmm1
  const struct D2D_POINT_2F *v50; // r9
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  unsigned int v55; // ecx
  int v56; // eax
  unsigned int v57; // ecx
  int v59; // eax
  __int64 v60; // rax
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  float *v63; // rax
  __int64 v64; // rax
  __m128 v65; // xmm2
  __m128 v66; // xmm3
  int v67; // r9d
  unsigned int v68; // [rsp+28h] [rbp-E0h]
  char v69; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v70; // [rsp+50h] [rbp-B8h] BYREF
  D2D1_GAUSSIANBLUR_OPTIMIZATION v71[2]; // [rsp+58h] [rbp-B0h] BYREF
  struct IRenderTarget *v72; // [rsp+60h] [rbp-A8h] BYREF
  struct IImageSource *v73; // [rsp+68h] [rbp-A0h] BYREF
  struct ID2D1Bitmap1 *v74; // [rsp+70h] [rbp-98h] BYREF
  struct ID2D1Bitmap1 *v75[2]; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v76; // [rsp+88h] [rbp-80h]
  char *v77; // [rsp+90h] [rbp-78h]
  int v78; // [rsp+98h] [rbp-70h]
  struct D2D_SIZE_F v79[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v80; // [rsp+B0h] [rbp-58h]
  float v81; // [rsp+C0h] [rbp-48h]
  float v82; // [rsp+C4h] [rbp-44h]
  __int128 v83; // [rsp+D0h] [rbp-38h]
  CCustomBlur *v84; // [rsp+E8h] [rbp-20h]
  struct D2D_SIZE_F v85; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v86; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v87; // [rsp+108h] [rbp+0h]
  int v88; // [rsp+118h] [rbp+10h]
  _BYTE v89[8]; // [rsp+120h] [rbp+18h] BYREF
  _OWORD v90[3]; // [rsp+128h] [rbp+20h] BYREF
  __int128 v91; // [rsp+158h] [rbp+50h]
  int v92; // [rsp+168h] [rbp+60h]
  float v93[10]; // [rsp+178h] [rbp+70h] BYREF
  struct D2D_VECTOR_2F v94[2]; // [rsp+1A0h] [rbp+98h] BYREF
  unsigned __int64 v95; // [rsp+1B0h] [rbp+A8h]
  struct D2D_RECT_F v96; // [rsp+1B8h] [rbp+B0h] BYREF

  v6 = (char *)a4 + 8;
  v7 = a6;
  v79[0] = (struct D2D_SIZE_F)a6;
  *((_QWORD *)&v80 + 1) = 0LL;
  v10 = *((_OWORD *)a5 + 1);
  v11 = *(_OWORD *)a5;
  v84 = 0LL;
  v76 = v10;
  v77 = (char *)a4 + 8;
  v13 = 0LL;
  v92 = 0;
  *(_OWORD *)v75 = v11;
  v74 = 0LL;
  v72 = 0LL;
  v73 = 0LL;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v74);
  D2DBitmap = CDrawListBitmap::GetD2DBitmap((CDrawListBitmap *)v6, a2, &v74);
  v16 = D2DBitmap;
  if ( D2DBitmap < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, &dword_18029B7A8, 1u, D2DBitmap, 0x1FAu);
    goto LABEL_30;
  }
  v17 = *(unsigned int **)(*(_QWORD *)(*((_QWORD *)this + 18) + 8LL * *(unsigned int *)a4) + 16LL);
  (*(void (__fastcall **)(_QWORD, _QWORD, D2D1_GAUSSIANBLUR_OPTIMIZATION *, D2D1_GAUSSIANBLUR_OPTIMIZATION *, _BYTE *))(**(_QWORD **)v17 + 48LL))(
    *(_QWORD *)v17,
    v17[4],
    v71,
    &v71[1],
    v89);
  (*(void (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)v6 + 1) + 40LL))(*((_QWORD *)v6 + 1), &v70);
  v94[0].y = 0.0;
  v94[1].x = 0.0;
  v18 = (float)(int)v70;
  v20 = 0LL;
  v21 = 0LL;
  v19 = (float)SHIDWORD(v70);
  v94[0].x = (float)(int)v70;
  v94[1].y = (float)SHIDWORD(v70);
  v20.m128_f32[0] = 0.0 - (float)((float)(int)v70 * 0.0);
  v21.m128_f32[0] = 0.0 - (float)((float)SHIDWORD(v70) * 0.0);
  *(float *)&v95 = v20.m128_f32[0];
  *((float *)&v95 + 1) = v21.m128_f32[0];
  v22 = Matrix3x3::operator*(v6 + 48, v93, v94);
  v23 = *(_OWORD *)v22;
  v24 = *(_OWORD *)(v22 + 16);
  LODWORD(v22) = *(_DWORD *)(v22 + 32);
  v86 = v23;
  v88 = v22;
  v87 = v24;
  v25 = (float *)Matrix3x3::Get2DScaleDimensions((Matrix3x3 *)&v86);
  v26 = v25[1] * *(float *)v71;
  v85.width = *v25 * *(float *)v71;
  v85.height = v26;
  v27 = CCustomBlur::DetermineOutputScale(v18, v85.width, v71[1]);
  v76 = __PAIR64__(COERCE_UNSIGNED_INT(CCustomBlur::DetermineOutputScale(v19, v26, v28)), LODWORD(v27));
  if ( v6[44] && v6[101] )
  {
    CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
      (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v75,
      (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)v79);
    v30 = *(float *)&v80;
    v31 = *((float *)&v80 + 1);
    v32 = *((float *)&v80 + 3);
    v33 = *((float *)&v80 + 2);
    v70 = v76;
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
    *(float *)&v70 = *((float *)&v80 + 2) / v81;
    *((float *)&v70 + 1) = *((float *)&v80 + 3) / v82;
  }
  v34 = CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(this, *((_DWORD *)this + 42) - 1, *(_DWORD *)a4) == 0;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v72);
  LODWORD(v94[1].x) = 32;
  v94[0] = (struct D2D_VECTOR_2F)"DWM External Effect intermediate";
  v35 = CDrawingContext::PushOffScreenRenderingLayer(
          (struct IRenderTarget **)a2,
          (const struct CResourceTag *)v94,
          &v79[1],
          v34,
          &v72);
  v16 = v35;
  if ( v35 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v36, &dword_18029B7A8, 1u, v35, 0x235u);
    v7 = (CDrawListBitmap *)v79[0];
    goto LABEL_30;
  }
  IsOpaque = CDrawListBitmap::IsOpaque((CDrawListBitmap *)v6);
  v38 = v72;
  v39 = 3LL;
  if ( !IsOpaque )
    v39 = 1LL;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v72 + 128LL))(v72, v39);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v73);
  v40 = CRenderTargetImageSource::Create(v38, 1, &v73);
  v7 = (CDrawListBitmap *)v79[0];
  v16 = v40;
  v13 = v73;
  if ( v40 < 0 )
  {
    v68 = 584;
    goto LABEL_46;
  }
  v42 = (const struct D2D_RECT_F *)(v6 + 84);
  v69 = 1;
  if ( v6[101] )
  {
    v69 = 0;
  }
  else
  {
    v94[0].y = 0.0;
    v94[1].x = 0.0;
    v94[0].x = v18;
    v94[1].y = v19;
    v95 = _mm_unpacklo_ps(v20, v21).m128_u64[0];
    v60 = Matrix3x3::operator*(v6 + 48, v93, v94);
    v61 = *(_OWORD *)v60;
    v62 = *(_OWORD *)(v60 + 16);
    LODWORD(v60) = *(_DWORD *)(v60 + 32);
    v86 = v61;
    v88 = v60;
    v87 = v62;
    if ( !Matrix3x3::TryInvert((const struct Matrix3x3 *)&v86, (struct Matrix3x3 *)&v86) )
    {
      v40 = -2003304441;
      v68 = 607;
      v16 = -2003304441;
      goto LABEL_46;
    }
  }
  v43 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 48) + 160LL))(*((_QWORD *)a2 + 48));
  v16 = 0;
  v44 = (CCustomBlur **)(v43 + 344);
  if ( *(_QWORD *)(v43 + 344)
    || (v59 = CCustomBlur::Create(*(struct ID2D1DeviceContext **)(v43 + 232), (struct CCustomBlur **)(v43 + 344)),
        v16 = v59,
        v59 >= 0) )
  {
    v45 = *v44;
    v84 = v45;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v59, 0x762u);
    v45 = v84;
  }
  if ( v16 >= 0 )
  {
    v40 = CCustomBlur::BuildEffect(v45, v74, v42, &v85, v71[1], (const struct D2D_VECTOR_2F *)&v70, v94);
    v16 = v40;
    if ( v40 < 0 )
    {
      v68 = 619;
    }
    else
    {
      v46 = (float)(v42->right - v42->left) * v30;
      v47 = (float)(v42->top * *((float *)&v70 + 1)) + v94[0].y;
      v96.left = (float)(v42->left * *(float *)&v70) + v94[0].x;
      v48 = v42->bottom - v42->top;
      v96.top = v47;
      v96.right = v46 + v96.left;
      v96.bottom = (float)(v48 * v31) + v47;
      if ( v69 )
      {
        v94[0].y = 0.0;
        v94[1].x = 0.0;
        *(struct ID2D1Bitmap1 **)((char *)v75 + 4) = 0LL;
        HIDWORD(v75[1]) = 0;
        HIDWORD(v76) = 0;
        v78 = 1065353216;
        v94[0].x = v33;
        v94[1].y = v32;
        *(float *)v75 = 1.0 / *(float *)&v70;
        *(float *)&v76 = 1.0 / *((float *)&v70 + 1);
        *(float *)&v95 = 0.0 - (float)(v33 * 0.0);
        *((float *)&v95 + 1) = 0.0 - (float)(v32 * 0.0);
        *((float *)&v77 + 1) = 0.0 - (float)((float)(1.0 / *((float *)&v70 + 1)) * 0.0);
        *(float *)&v77 = 0.0 - (float)((float)(1.0 / *(float *)&v70) * 0.0);
        v63 = Matrix3x3::operator*((float *)v75, v93, (float *)&v86);
        v64 = Matrix3x3::operator*(v63, v75, v94);
        v79[1].width = 0.0;
        v65 = *(__m128 *)v64;
        v92 = 0;
        v66 = *(__m128 *)(v64 + 16);
        LODWORD(v64) = *(_DWORD *)(v64 + 32);
        LODWORD(v79[0].width) = v65.m128_i32[0];
        LODWORD(v79[0].height) = _mm_shuffle_ps(v65, v65, 85).m128_u32[0];
        HIDWORD(v80) = _mm_shuffle_ps(v66, v66, 85).m128_u32[0];
        LODWORD(v83) = _mm_shuffle_ps(v66, v66, 170).m128_u32[0];
        LODWORD(v79[1].height) = _mm_shuffle_ps(v65, v65, 170).m128_u32[0];
        *(_QWORD *)((char *)&v80 + 4) = v66.m128_u32[0];
        v88 = v64;
        HIDWORD(v83) = v64;
        v90[0] = *(_OWORD *)&v79[0].width;
        *(_QWORD *)((char *)&v83 + 4) = _mm_shuffle_ps(v66, v66, 255).m128_u32[0];
        LODWORD(v80) = _mm_shuffle_ps(v65, v65, 255).m128_u32[0];
        v49 = v80;
        v91 = v83;
      }
      else
      {
        v49 = _xmm;
        v90[0] = _xmm;
        v91 = _xmm;
        LOWORD(v92) = 32085;
      }
      v90[2] = _xmm;
      v90[1] = v49;
      v40 = CDrawingContext::PushTransformInternal(a2, 0LL, (const struct CMILMatrix *)v90, 0, 1);
      v16 = v40;
      if ( v40 >= 0 )
      {
        v16 = CCustomBlur::Draw(v45, a2, &v96, v50);
        v51 = *((_DWORD *)a2 + 112);
        if ( v51 )
          *((_DWORD *)a2 + 112) = v51 - 1;
        v52 = *((_DWORD *)a2 + 120);
        if ( v52 )
          *((_DWORD *)a2 + 120) = v52 - 1;
        v53 = *((_DWORD *)a2 + 128);
        if ( v53 )
          *((_DWORD *)a2 + 128) = v53 - 1;
        *((_BYTE *)a2 + 6344) = 1;
        if ( v16 >= 0 )
        {
          v54 = CDrawingContext::PopLayer(a2);
          v16 = v54;
          if ( v54 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v55, &dword_18029B7A8, 1u, v54, 0x299u);
          }
          else
          {
            v56 = CDrawListBitmap::FromImageSource(v7, v13, a2, 0);
            v16 = v56;
            if ( v56 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v57, &dword_18029B7A8, 1u, v56, 0x29Bu);
          }
          goto LABEL_28;
        }
        v68 = 661;
        goto LABEL_42;
      }
      v68 = 650;
    }
LABEL_46:
    v67 = v40;
    goto LABEL_47;
  }
  v68 = 612;
LABEL_42:
  v67 = v16;
LABEL_47:
  MilInstrumentationCheckHR_MaybeFailFast(v41, &dword_18029B7A8, 1u, v67, v68);
  CDrawingContext::PopLayer(a2);
  v45 = v84;
LABEL_28:
  if ( v45 )
    CCustomBlur::Reset(v45);
LABEL_30:
  if ( v16 == -2003304441 )
    v16 = CDrawListBitmap::FromImageSource(v7, v13, a2, 0);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v73);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v72);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v74);
  return (unsigned int)v16;
}
