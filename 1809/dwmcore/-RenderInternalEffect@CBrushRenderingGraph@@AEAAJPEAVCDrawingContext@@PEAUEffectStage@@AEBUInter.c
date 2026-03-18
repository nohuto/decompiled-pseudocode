/*
 * XREFs of ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1801D4D6C
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F9F0 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800268FC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x18002777C (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18002E720 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x18002EACC (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z @ 0x18004DED0 (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_NPEAPEAV1@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180064348 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x18006726C (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x180067A58 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x180072064 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x1800AE108 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800AEBA8 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B1E90 (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x1800B35C0 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1801D4B18 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderInternalEffect(
        CBrushRenderingGraph *this,
        struct IRenderTarget **a2,
        struct EffectStage *a3,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a4,
        struct EffectInput *a5)
{
  struct EffectInput *v5; // r14
  __int128 v9; // xmm0
  __m128 v10; // xmm1
  float v11; // xmm3_4
  int v12; // eax
  __int64 v13; // rcx
  CMILRefCountBase *v14; // rdi
  unsigned int v15; // ebx
  unsigned int v16; // edx
  unsigned int v17; // ebx
  CBrushRenderingGraph *v18; // rcx
  char *v19; // rax
  bool v20; // bl
  int v21; // eax
  __int64 v22; // rcx
  struct IRenderTarget *v23; // rbx
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  int updated; // eax
  __int64 v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  CDrawingContext *v32; // rcx
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  int v37; // ecx
  struct IImageSource *v39; // [rsp+48h] [rbp-C0h] BYREF
  struct IRenderTarget *v40; // [rsp+50h] [rbp-B8h] BYREF
  struct EffectInput *v41; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_SIZE_F v42; // [rsp+60h] [rbp-A8h] BYREF
  float v43; // [rsp+68h] [rbp-A0h]
  float v44; // [rsp+6Ch] [rbp-9Ch]
  float v45; // [rsp+70h] [rbp-98h]
  float v46; // [rsp+74h] [rbp-94h]
  float v47[10]; // [rsp+80h] [rbp-88h] BYREF
  struct D2D_SIZE_F v48[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-50h]
  char *v50; // [rsp+C0h] [rbp-48h]
  __int128 v51; // [rsp+C8h] [rbp-40h]
  __int128 v52; // [rsp+D8h] [rbp-30h]
  __int128 v53; // [rsp+F8h] [rbp-10h]
  __int128 v54; // [rsp+118h] [rbp+10h] BYREF
  __int128 v55; // [rsp+128h] [rbp+20h]
  __int128 v56; // [rsp+138h] [rbp+30h]
  __int128 v57; // [rsp+148h] [rbp+40h]
  int v58; // [rsp+158h] [rbp+50h]
  CMILRefCountBase *width_low; // [rsp+168h] [rbp+60h] BYREF
  int v60; // [rsp+170h] [rbp+68h]
  FLOAT height; // [rsp+174h] [rbp+6Ch]
  float v62; // [rsp+178h] [rbp+70h]
  float v63; // [rsp+17Ch] [rbp+74h]

  v5 = a5;
  v54 = _xmm;
  v9 = *((_OWORD *)a4 + 1);
  v40 = 0LL;
  v55 = _xmm;
  v10 = *(__m128 *)a4;
  v39 = 0LL;
  v50 = (char *)*((_QWORD *)&v9 + 1);
  LOWORD(v58) = 32085;
  *(_OWORD *)((char *)a5 + 84) = _xmm;
  width_low = 0LL;
  v49 = 0x3F8000003F800000LL;
  v41 = a5;
  v42.width = 1.0;
  v42.height = 1.0;
  *(_QWORD *)((char *)a5 + 52) = 0LL;
  *((_DWORD *)a5 + 15) = 0;
  *((_DWORD *)a5 + 17) = 0;
  *((_DWORD *)a5 + 20) = 1065353216;
  *(__m128 *)&v48[0].width = v10;
  v57 = _xmm;
  v11 = 1.0 / _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v56 = _xmm;
  v45 = 1.0 / v10.m128_f32[0];
  v46 = v11;
  *((float *)a5 + 12) = 1.0 / v10.m128_f32[0];
  *((float *)a5 + 16) = v11;
  *((float *)a5 + 18) = 0.0 - (float)((float)(1.0 / v10.m128_f32[0]) * 0.0);
  *((float *)a5 + 19) = 0.0 - (float)(v11 * 0.0);
  v12 = CDrawListCache::Create(&width_low);
  v14 = width_low;
  v15 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x176u);
    goto LABEL_28;
  }
  v16 = *((_DWORD *)a3 + 1);
  v17 = 0;
  if ( v16 )
  {
    do
    {
      v18 = (CBrushRenderingGraph *)(104LL * v17);
      v19 = (char *)a3 + (_QWORD)v18 + 8;
      v50 = v19;
      if ( v19[44] && v19[101] && v16 == 1 )
      {
        CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v48,
          (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v41);
        v60 = 0;
        width_low = (CMILRefCountBase *)LODWORD(v42.width);
        height = v42.height;
        v62 = 0.0 - (float)(v42.width * 0.0);
        v63 = 0.0 - (float)(v42.height * 0.0);
        Matrix3x3::operator*((float *)a5 + 12, v47, (float *)&width_low);
        v58 = 0;
        *(float *)&v51 = v47[0];
        *((float *)&v51 + 3) = v47[2];
        *(_QWORD *)((char *)&v52 + 4) = LODWORD(v47[4]);
        *(_QWORD *)((char *)&v51 + 4) = LODWORD(v47[1]);
        *(float *)&v53 = v47[6];
        *(float *)&v52 = v47[3];
        *((float *)&v53 + 3) = v47[8];
        *((float *)&v52 + 3) = v47[5];
        *(_QWORD *)((char *)&v53 + 4) = LODWORD(v47[7]);
        v54 = v51;
        v55 = v52;
        v57 = v53;
        v56 = _xmm;
      }
      else
      {
        CBrushRenderingGraph::ConfigureIntermediateFromInput(
          v18,
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v48,
          (struct D2D_VECTOR_2F *)&v41);
        CMILMatrix::SetScale((CMILMatrix *)&v54, v43, v44, 1.0, 0.0, 0.0, 0.0);
      }
      v16 = *((_DWORD *)a3 + 1);
      ++v17;
    }
    while ( v17 < v16 );
    v5 = v41;
  }
  v20 = CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(this, *((_DWORD *)this + 42) - 1, *(_DWORD *)a3) == 0;
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v40);
  v60 = 32;
  width_low = (CMILRefCountBase *)"DWM Internal Effect intermediate";
  v21 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&width_low, &v42, v20, &v40);
  v15 = v21;
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x19Cu);
    goto LABEL_28;
  }
  v23 = v40;
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v40 + 128LL))(v40, 1LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v39);
  v24 = CRenderTargetImageSource::Create(v23, 1, &v39);
  v15 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x1A3u);
    goto LABEL_25;
  }
  v26 = CDrawingContext::PushTransformInternal((CDrawingContext *)a2, 0LL, (const struct CMILMatrix *)&v54, 0, 1);
  v15 = v26;
  if ( v26 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, v26, 0x1A5u);
    goto LABEL_25;
  }
  updated = CBrushRenderingGraph::UpdateDrawListCache(this, (struct CDrawingContext *)a2, v48, 0LL, a3, v14);
  v15 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, updated, 0x1ADu);
    goto LABEL_22;
  }
  v30 = CDrawListCache::Render((__int64)v14, (CDrawingContext *)a2, (CMILMatrix *)&v54, 1.0);
  v15 = v30;
  if ( v30 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v30, 0x1B3u);
LABEL_22:
    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
LABEL_25:
    CDrawingContext::PopLayer((CDrawingContext *)a2);
    goto LABEL_28;
  }
  CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  v33 = CDrawingContext::PopLayer(v32);
  v15 = v33;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x1BAu);
  }
  else
  {
    v35 = CDrawListBitmap::FromImageSource((struct IImageSource **)v5, v39, (const struct CDrawingContext *)a2, 0);
    v15 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0x1BCu);
    }
    else
    {
      *((_DWORD *)v5 + 10) |= *((_DWORD *)v14 + 22) & 4;
      v37 = *((_DWORD *)v5 + 10) | *((_DWORD *)v14 + 22) & 2;
      *((_DWORD *)v5 + 10) = v37;
      *((_DWORD *)v5 + 10) = v37 | *((_DWORD *)v14 + 22) & 0x100;
    }
  }
LABEL_28:
  if ( v14 )
    CMILRefCountBase::Release(v14);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v39);
  Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)&v40);
  return v15;
}
