/*
 * XREFs of ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18007A5A0
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x180079F5C (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18007A200 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801B0EB4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x1802062AC (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ @ 0x1800216A8 (-InternalRelease@-$ComPtr@UID3D11Device5@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180026628 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x18003BB3C (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 *     ?CeilingSat@CFloatFPU@@SAHM@Z @ 0x180055EF8 (-CeilingSat@CFloatFPU@@SAHM@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800583E0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18005C830 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180071D5C (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUID2D1Geometry@@PEBUD2D_MATRIX_3X2_F@@M_NI@Z @ 0x180072BF8 (-PushD2DLayer@CDrawingContext@@QEAAJPEBVCVisual@@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?first@?$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ @ 0x18009AD10 (-first@-$pointer_buffer_impl@PEAVCDrawListEntry@@@detail@@QEBAPEAPEAVCDrawListEntry@@XZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18024BE38 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18024BEE0 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CDrawListCache::Render(__int64 a1, CDrawingContext *a2, float *a3, float a4)
{
  __m128 v4; // xmm2
  bool v5; // cc
  __int64 v6; // rax
  unsigned int v7; // r14d
  float *v8; // r12
  bool v11; // zf
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r8
  __int64 v15; // rsi
  int v16; // eax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // r15
  __int64 *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int128 *v24; // r12
  __int64 v25; // rcx
  int v26; // edx
  float v27; // xmm6_4
  float v28; // xmm8_4
  float v29; // xmm9_4
  float v30; // xmm7_4
  struct ID2D1Geometry *v31; // rax
  int v32; // eax
  unsigned int v33; // ecx
  int v35; // eax
  unsigned int v36; // ecx
  float v37; // xmm4_4
  float v38; // xmm3_4
  int v39; // eax
  int v40; // ecx
  __m128 v41; // rt1
  __int128 v42; // xmm2
  __int128 v43; // xmm0
  __int128 v44; // xmm2
  __int128 v45; // xmm0
  int v46; // eax
  unsigned int v47; // ecx
  int D2DGeometry; // eax
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // ecx
  char v52; // [rsp+40h] [rbp-C0h]
  CMILMatrix *v53; // [rsp+48h] [rbp-B8h]
  float v54; // [rsp+48h] [rbp-B8h]
  float v55; // [rsp+48h] [rbp-B8h]
  __int128 v56; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v57; // [rsp+60h] [rbp-A0h] BYREF
  struct ID2D1Geometry *v58; // [rsp+68h] [rbp-98h] BYREF
  struct ID2D1Geometry *v59; // [rsp+70h] [rbp-90h]
  __int64 v60; // [rsp+78h] [rbp-88h]
  float *v61; // [rsp+80h] [rbp-80h]
  _OWORD v62[4]; // [rsp+90h] [rbp-70h] BYREF
  int v63; // [rsp+D0h] [rbp-30h]
  __int128 v64; // [rsp+E0h] [rbp-20h] BYREF
  float v65[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v66; // [rsp+100h] [rbp+0h] BYREF
  struct D2D_RECT_F v67; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v68[16]; // [rsp+120h] [rbp+20h] BYREF
  void *retaddr; // [rsp+1F8h] [rbp+F8h]

  v5 = *(float *)(a1 + 48) <= *(float *)(a1 + 40);
  v6 = *((_QWORD *)a2 + 48);
  v7 = 0;
  v52 = 0;
  v8 = a3;
  v61 = a3;
  v60 = v6;
  v59 = 0LL;
  v58 = 0LL;
  if ( v5 || *(float *)(a1 + 52) <= *(float *)(a1 + 44) || a4 <= 0.0 )
    return v7;
  v11 = (*(_BYTE *)(a1 + 92) & 0x20) == 0;
  v63 = 0;
  if ( v11 )
  {
    v35 = CDrawingContext::ApplyRenderStateInternal(a2, 0);
    v7 = v35;
    if ( v35 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v35, 0xC9u, 0LL);
      return v7;
    }
  }
  else
  {
    v12 = CDrawingContext::ApplyRenderStateInternal(a2, 1);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0xC5u, 0LL);
      return v7;
    }
  }
  v15 = *(_QWORD *)(a1 + 32);
  v16 = v15 & 3;
  if ( (v15 & 3) != 0 )
  {
    if ( v16 == 1 )
    {
      v17 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
      goto LABEL_33;
    }
    if ( v16 == 2 )
    {
      v17 = 0LL;
      goto LABEL_33;
    }
    if ( v16 != 3 )
      ModuleFailFastForHRESULT(2147549183LL, retaddr, v14);
  }
  v17 = a1 + 32;
  if ( (v15 & 3) == 0 )
  {
LABEL_8:
    v18 = a1 + 32;
    goto LABEL_9;
  }
LABEL_33:
  if ( v16 == 1 )
  {
    v18 = v15 & 0xFFFFFFFFFFFFFFFCuLL;
  }
  else
  {
    if ( v16 != 2 )
      goto LABEL_8;
    v18 = 0LL;
  }
LABEL_9:
  if ( v16 )
  {
    if ( v16 == 1 )
    {
      v19 = *(_QWORD *)(detail::pointer_buffer_impl<CDrawListEntry *>::first(a1 + 32) - 16);
    }
    else
    {
      if ( (unsigned int)(v16 - 2) > 1 )
        ModuleFailFastForHRESULT(2147549183LL, retaddr, v14);
      v19 = 0LL;
    }
  }
  else
  {
    v19 = 1LL;
  }
  v20 = v18 + 8 * v19;
  while ( v17 != v20 )
  {
    v21 = *(__int64 **)v17;
    if ( (*(_DWORD *)(*(_QWORD *)v17 + 132LL) & 0x400) != 0
      && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(v8) )
    {
      v37 = (float)((float)(*((float *)v21 + 13) * v8[4]) + (float)(*((float *)v21 + 12) * *v8)) + v8[12];
      v38 = (float)((float)(*((float *)v21 + 13) * v8[5]) + (float)(*((float *)v21 + 12) * v8[1])) + v8[13];
      if ( COERCE_UNSIGNED_INT(fabs(v37)) > 0x497FFFF0 )
      {
        v4.m128_f32[0] = (float)(int)v37 - v37;
        v4 = _mm_cmple_ss(v4, (__m128)LODWORD(FLOAT_N0_5));
        v39 = (int)v37 - v4.m128_i32[0];
      }
      else
      {
        v54 = v37 + 6291456.25;
        v39 = (int)(LODWORD(v54) << 10) >> 11;
      }
      if ( COERCE_UNSIGNED_INT(fabs((float)((float)(*((float *)v21 + 13) * v8[5]) + (float)(*((float *)v21 + 12) * v8[1])) + v8[13])) > 0x497FFFF0 )
      {
        v4.m128_f32[0] = (float)(int)v38 - v38;
        v41.m128_f32[0] = FLOAT_N0_5;
        v40 = (int)v38 - _mm_cmple_ss(v4, v41).m128_u32[0];
      }
      else
      {
        v55 = v38 + 6291456.25;
        v40 = (int)(LODWORD(v55) << 10) >> 11;
      }
      v42 = *((_OWORD *)v8 + 1);
      v43 = *(_OWORD *)v8;
      v63 = *((_DWORD *)v8 + 16);
      v62[1] = v42;
      v44 = *((_OWORD *)v8 + 3);
      v62[0] = v43;
      v45 = *((_OWORD *)v8 + 2);
      v62[3] = v44;
      v4 = (__m128)COERCE_UNSIGNED_INT((float)v40);
      v62[2] = v45;
      CMILMatrix::Translate((CMILMatrix *)v62, (float)v39 - v37, v4.m128_f32[0] - v38, 0.0);
      v53 = (CMILMatrix *)v62;
    }
    else
    {
      v53 = (CMILMatrix *)v8;
    }
    v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v60 + 160LL))(v60);
    v23 = *v21;
    *(_QWORD *)&v56 = v22;
    v24 = (__int128 *)(*(__int64 (__fastcall **)(__int64 *, _BYTE *))(v23 + 56))(v21, v68);
    v25 = 0LL;
    v26 = *(_DWORD *)(v56 + 392);
    if ( v26 )
      v25 = *(_QWORD *)(*(_QWORD *)(v56 + 368) + 8LL * (unsigned int)(v26 - 1));
    v11 = *(_DWORD *)(v25 + 76) == 1;
    v56 = *(_OWORD *)(v25 + 60);
    if ( v11 )
    {
      v30 = (float)(int)CFloatFPU::CeilingSat(*(float *)&v56 - 0.5);
      v29 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v56 + 1) - 0.5);
      v28 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v56 + 2) - 0.5);
      v27 = (float)(int)CFloatFPU::CeilingSat(*((float *)&v56 + 3) - 0.5);
    }
    else
    {
      v27 = *((float *)&v56 + 3);
      v28 = *((float *)&v56 + 2);
      v29 = *((float *)&v56 + 1);
      v30 = *(float *)&v56;
    }
    v64 = *v24;
    CMILMatrix::Transform2DBoundsHelper<0>(v53, (__int64)&v64, v65);
    if ( v28 > v65[0] && v27 > v65[1] && v65[2] > v30 && v65[3] > v29 )
    {
      v31 = (struct ID2D1Geometry *)v21[17];
      if ( v59 != v31 )
      {
        v59 = (struct ID2D1Geometry *)v21[17];
        if ( v52 )
        {
          v46 = CDrawingContext::PopLayer(a2);
          v7 = v46;
          if ( v46 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v46, 0xE6u, 0LL);
            break;
          }
          v52 = 0;
          ReleaseInterface<ID2D1Geometry>((__int64 *)&v58);
          v31 = (struct ID2D1Geometry *)v21[17];
          v59 = v31;
        }
        if ( v31 )
        {
          CComplexShape::CComplexShape((CComplexShape *)&v56, v31);
          D2DGeometry = CComplexShape::GetD2DGeometry((CComplexShape *)&v56, v53, &v58);
          v7 = D2DGeometry;
          if ( D2DGeometry < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, D2DGeometry, 0xF6u, 0LL);
LABEL_70:
            Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v57);
            if ( *((_QWORD *)&v56 + 1) )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v56 + 1) + 16LL))(*((_QWORD *)&v56 + 1));
            break;
          }
          v66 = *(_OWORD *)(a1 + 40);
          CMILMatrix::Transform2DBoundsHelper<0>(v53, (__int64)&v66, &v67.left);
          v50 = CDrawingContext::PushD2DLayer(a2, 0LL, &v67, v58, 0LL, 1.0, 0, 0);
          v7 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0xFCu, 0LL);
            goto LABEL_70;
          }
          v52 = 1;
          Microsoft::WRL::ComPtr<ID3D11Device5>::InternalRelease(&v57);
          if ( *((_QWORD *)&v56 + 1) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v56 + 1) + 16LL))(*((_QWORD *)&v56 + 1));
        }
      }
      v32 = (*(__int64 (__fastcall **)(__int64 *, CDrawingContext *, CMILMatrix *))(*v21 + 64))(v21, a2, v53);
      v7 = v32;
      if ( v32 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x101u, 0LL);
        break;
      }
    }
    v8 = v61;
    v17 += 8LL;
  }
  if ( v52 )
    CDrawingContext::PopLayer(a2);
  if ( v58 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v58 + 16LL))(v58);
  return v7;
}
