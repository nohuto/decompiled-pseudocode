/*
 * XREFs of ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x180204BBC
 * Callers:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x18001FA48 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x1800378D8 (-ConfigureIntermediateFromBackdropInput@CBrushRenderingGraph@@CAXAEBUIntermediateConfigurationIn.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180037AFC (--DMatrix3x3@@QEBA-AV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18003E488 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x180050E78 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x180050F4C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIRenderTargetBitmap@@@Z @ 0x180051B48 (-PushOffScreenRenderingLayer@CDrawingContext@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_F@@_NPEAPEAVIR.c)
 *     ?FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z @ 0x180057610 (-FromImageSource@CDrawListBitmap@@QEAAJPEAVIImageSource@@PEBVCDrawingContext@@_N@Z.c)
 *     ?Release@CDirtyRegion@@UEAAKXZ @ 0x180066710 (-Release@CDirtyRegion@@UEAAKXZ.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180066860 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z @ 0x18007E0B0 (-PushTransformInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBVCMILMatrix@@_N2@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180096510 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z @ 0x1800BEF5C (-Create@CRenderTargetImageSource@@KAJPEAVIRenderTarget@@_N_KPEAPEAV1@@Z.c)
 *     ?PopTransformInternal@CDrawingContext@@IEAAX_N@Z @ 0x1800C2114 (-PopTransformInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?SetScale@CMILMatrix@@QEAAXMMMMMM@Z @ 0x1800CF3D4 (-SetScale@CMILMatrix@@QEAAXMMMMMM@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1@PEAUIntermediateConfigurationOutputs@1@@Z @ 0x180204978 (-ConfigureIntermediateFromInput@CBrushRenderingGraph@@AEBAXAEBUIntermediateConfigurationInputs@1.c)
 */

__int64 __fastcall CBrushRenderingGraph::RenderInternalEffect(
        CBrushRenderingGraph *this,
        struct IRenderTarget **a2,
        struct EffectStage *a3,
        const struct CBrushRenderingGraph::IntermediateConfigurationInputs *a4,
        struct EffectInput *a5)
{
  struct EffectInput *v5; // rsi
  __int128 v9; // xmm0
  __m128 v10; // xmm1
  float v11; // xmm2_4
  signed int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned int v16; // ebx
  CBrushRenderingGraph *v17; // rcx
  char *v18; // rax
  bool v19; // bl
  signed int v20; // eax
  __int64 v21; // rcx
  signed int v22; // eax
  __int64 v23; // rcx
  signed int v24; // eax
  __int64 v25; // rcx
  signed int updated; // eax
  __int64 v27; // rcx
  signed int v28; // eax
  __int64 v29; // rcx
  CDrawingContext *v30; // rcx
  signed int v31; // eax
  __int64 v32; // rcx
  signed int v33; // eax
  __int64 v34; // rcx
  int v35; // edx
  CDirtyRegion *v36; // rcx
  CDirtyRegion *v38; // [rsp+48h] [rbp-C0h] BYREF
  struct IRenderTarget *v39; // [rsp+50h] [rbp-B8h] BYREF
  struct IImageSource *v40; // [rsp+58h] [rbp-B0h] BYREF
  struct EffectInput *v41; // [rsp+60h] [rbp-A8h] BYREF
  struct D2D_SIZE_F v42; // [rsp+68h] [rbp-A0h] BYREF
  float v43; // [rsp+70h] [rbp-98h]
  float v44; // [rsp+74h] [rbp-94h]
  float v45; // [rsp+78h] [rbp-90h]
  float v46; // [rsp+7Ch] [rbp-8Ch]
  __int64 v47; // [rsp+88h] [rbp-80h] BYREF
  int v48; // [rsp+90h] [rbp-78h]
  __int64 v49; // [rsp+94h] [rbp-74h]
  int v50; // [rsp+9Ch] [rbp-6Ch]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  int v52; // [rsp+A8h] [rbp-60h]
  struct D2D_SIZE_F v53[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int128 v54; // [rsp+C0h] [rbp-48h]
  __int128 v55; // [rsp+D0h] [rbp-38h]
  __int128 v56; // [rsp+E0h] [rbp-28h]
  __int128 v57; // [rsp+100h] [rbp-8h]
  __int128 v58; // [rsp+118h] [rbp+10h] BYREF
  __int128 v59; // [rsp+128h] [rbp+20h]
  __int128 v60; // [rsp+138h] [rbp+30h]
  __int128 v61; // [rsp+148h] [rbp+40h]
  int v62; // [rsp+158h] [rbp+50h]
  const char *width_low; // [rsp+168h] [rbp+60h] BYREF
  int v64; // [rsp+170h] [rbp+68h]
  FLOAT height; // [rsp+174h] [rbp+6Ch]
  float v66; // [rsp+178h] [rbp+70h]
  float v67; // [rsp+17Ch] [rbp+74h]

  v5 = a5;
  v58 = _xmm;
  v9 = *((_OWORD *)a4 + 1);
  v39 = 0LL;
  v60 = _xmm;
  v54 = v9;
  v40 = 0LL;
  v61 = _xmm;
  v59 = _xmm;
  v10 = *(__m128 *)a4;
  LOWORD(v62) = 32085;
  *(_OWORD *)((char *)a5 + 84) = _xmm;
  v38 = 0LL;
  v11 = 1.0 / v10.m128_f32[0];
  *(_QWORD *)&v54 = 0x3F8000003F800000LL;
  v41 = a5;
  v42.width = 1.0;
  v42.height = 1.0;
  *(_QWORD *)((char *)a5 + 52) = 0LL;
  *((_DWORD *)a5 + 15) = 0;
  *((_DWORD *)a5 + 17) = 0;
  *((_DWORD *)a5 + 20) = 1065353216;
  *(__m128 *)&v53[0].width = v10;
  v10.m128_f32[0] = _mm_shuffle_ps(v10, v10, 85).m128_f32[0];
  v45 = v11;
  *((float *)a5 + 12) = v11;
  v46 = 1.0 / v10.m128_f32[0];
  *((float *)a5 + 16) = 1.0 / v10.m128_f32[0];
  *((float *)a5 + 18) = 0.0 - (float)(v11 * 0.0);
  *((float *)a5 + 19) = 0.0 - (float)((float)(1.0 / v10.m128_f32[0]) * 0.0);
  v12 = CDrawListCache::Create(&v38);
  v14 = v12;
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x17Du, 0LL);
    goto LABEL_28;
  }
  v15 = *((_DWORD *)a3 + 1);
  v16 = 0;
  if ( v15 )
  {
    do
    {
      v17 = (CBrushRenderingGraph *)(104LL * v16);
      v18 = (char *)a3 + (_QWORD)v17 + 8;
      *((_QWORD *)&v54 + 1) = v18;
      if ( v18[44] && v18[101] && v15 == 1 )
      {
        CBrushRenderingGraph::ConfigureIntermediateFromBackdropInput(
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v53,
          (struct CBrushRenderingGraph::IntermediateConfigurationOutputs *)&v41);
        v64 = 0;
        width_low = (const char *)LODWORD(v42.width);
        height = v42.height;
        v66 = 0.0 - (float)(v42.width * 0.0);
        v67 = 0.0 - (float)(v42.height * 0.0);
        Matrix3x3::operator*((float *)a5 + 12, (float *)&v47, (float *)&width_low);
        DWORD2(v56) = 0;
        DWORD2(v55) = 0;
        DWORD2(v57) = 0;
        *(_QWORD *)&v55 = v47;
        HIDWORD(v55) = v48;
        *(_QWORD *)&v56 = v49;
        *(_QWORD *)&v57 = v51;
        HIDWORD(v56) = v50;
        HIDWORD(v57) = v52;
        v62 = 0;
        v59 = v56;
        v58 = v55;
        v61 = v57;
        v60 = _xmm;
      }
      else
      {
        CBrushRenderingGraph::ConfigureIntermediateFromInput(
          v17,
          (const struct CBrushRenderingGraph::IntermediateConfigurationInputs *)v53,
          (struct D2D_VECTOR_2F *)&v41);
        CMILMatrix::SetScale((CMILMatrix *)&v58, v43, v44, 1.0, 0.0, 0.0, 0.0);
      }
      v15 = *((_DWORD *)a3 + 1);
      ++v16;
    }
    while ( v16 < v15 );
    v5 = v41;
  }
  v19 = CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(this, *((_DWORD *)this + 42) - 1, *(_DWORD *)a3) == 0;
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v39);
  v64 = 32;
  width_low = "DWM Internal Effect intermediate";
  v20 = CDrawingContext::PushOffScreenRenderingLayer(a2, (const struct CResourceTag *)&width_low, &v42, v19, &v39);
  v14 = v20;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x1A3u, 0LL);
    goto LABEL_28;
  }
  (*(void (__fastcall **)(struct IRenderTarget *, __int64))(*(_QWORD *)v39 + 128LL))(v39, 1LL);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v40);
  v22 = CRenderTargetImageSource::Create(v39, 1, 0LL, &v40);
  v14 = v22;
  if ( v22 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0x1AAu, 0LL);
    goto LABEL_25;
  }
  v24 = CDrawingContext::PushTransformInternal((CDrawingContext *)a2, 0LL, (const struct CMILMatrix *)&v58, 0LL, 1);
  v14 = v24;
  if ( v24 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x1ACu, 0LL);
    goto LABEL_25;
  }
  updated = CBrushRenderingGraph::UpdateDrawListCache(this, (struct CDrawingContext *)a2, v53, 0LL, a3, v38);
  v14 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v27, 0LL, 0, updated, 0x1B4u, 0LL);
    goto LABEL_22;
  }
  v28 = CDrawListCache::Render((__int64)v38, (CDrawingContext *)a2, (__int64)&v58, 1.0);
  v14 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x1BAu, 0LL);
LABEL_22:
    CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
LABEL_25:
    CDrawingContext::PopLayer((CDrawingContext *)a2);
    goto LABEL_28;
  }
  CDrawingContext::PopTransformInternal((CDrawingContext *)a2, 1);
  v31 = CDrawingContext::PopLayer(v30);
  v14 = v31;
  if ( v31 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0x1C1u, 0LL);
  }
  else
  {
    v33 = CDrawListBitmap::FromImageSource((struct IImageSource **)v5, v40, (const struct CDrawingContext *)a2, 0);
    v14 = v33;
    if ( v33 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x1C3u, 0LL);
    }
    else
    {
      *((_DWORD *)v5 + 10) |= *((_DWORD *)v38 + 22) & 4;
      v35 = *((_DWORD *)v5 + 10) | *((_DWORD *)v38 + 22) & 2;
      *((_DWORD *)v5 + 10) = v35;
      *((_DWORD *)v5 + 10) = v35 | *((_DWORD *)v38 + 22) & 0x100;
    }
  }
LABEL_28:
  v36 = v38;
  if ( v38 )
  {
    v38 = 0LL;
    CDirtyRegion::Release(v36);
  }
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v40);
  Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease((__int64 *)&v39);
  return v14;
}
