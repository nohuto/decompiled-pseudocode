/*
 * XREFs of ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C97D0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180026D0C (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180026DE0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18005C51C (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18005C55C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800B3CBC (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800B40E0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x1800CB2C0 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801AEE84 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CA404 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GetFinalColor@CProjectedShadow@@AEBA?AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z @ 0x1801CA7E0 (-GetFinalColor@CProjectedShadow@@AEBA-AU_D3DCOLORVALUE@@PEAVCDrawingContext@@@Z.c)
 *     ?ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositionLight@@PEAVCMILMatrix@@@Z @ 0x1801CC0A4 (-ProjectOntoAndLocalize@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAVCVisual@@1PEAVCCompositi.c)
 *     ?TryGetCutoutBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1801CC204 (-TryGetCutoutBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListB.c)
 */

__int64 __fastcall CProjectedShadow::GenerateDrawList(
        CBrushRenderingGraph **this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v8; // rcx
  int CutoutBrush; // ebx
  __int64 (__fastcall ***v10)(_QWORD, __int64); // rax
  struct CDrawListBrush *v11; // rax
  CBrushRenderingGraph *v12; // rax
  __int64 (__fastcall ***v13)(_QWORD, __int64); // rdx
  CBrushRenderingGraph *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, __int64); // rdx
  CProjectedShadowReceiver *v19; // rcx
  __int64 v20; // rcx
  __int64 (__fastcall ***v21)(_QWORD, __int64); // rdx
  int v22; // eax
  __m128 v23; // xmm3
  float v24; // xmm1_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm2_4
  __int64 v28; // xmm1_8
  __int64 v29; // rdx
  CBrushRenderingGraph *v30; // rax
  __int128 v31; // xmm0
  int DrawList; // eax
  __int64 v33; // rcx
  int v34; // r9d
  unsigned int v36; // [rsp+28h] [rbp-E0h]
  unsigned int v37; // [rsp+28h] [rbp-E0h]
  __int64 (__fastcall ***v38)(_QWORD, __int64); // [rsp+38h] [rbp-D0h] BYREF
  __int64 (__fastcall ***v39)(_QWORD, __int64); // [rsp+40h] [rbp-C8h] BYREF
  struct CDrawListBrush *v40; // [rsp+48h] [rbp-C0h] BYREF
  __m256i v41; // [rsp+58h] [rbp-B0h] BYREF
  int v42; // [rsp+78h] [rbp-90h]
  unsigned int v43; // [rsp+88h] [rbp-80h]
  unsigned int v44; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v45; // [rsp+94h] [rbp-74h]
  _QWORD v46[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v47; // [rsp+B8h] [rbp-50h]
  __int64 v48; // [rsp+BCh] [rbp-4Ch]
  __int64 v49; // [rsp+C4h] [rbp-44h]
  __int32 v50; // [rsp+CCh] [rbp-3Ch]
  __int32 v51; // [rsp+D0h] [rbp-38h]
  unsigned int v52; // [rsp+D4h] [rbp-34h]
  unsigned int v53; // [rsp+D8h] [rbp-30h]
  __int32 v54; // [rsp+DCh] [rbp-2Ch]
  __m256i v55; // [rsp+E0h] [rbp-28h]
  int v56; // [rsp+100h] [rbp-8h]
  __int16 v57; // [rsp+104h] [rbp-4h]
  char v58; // [rsp+106h] [rbp-2h]
  __int64 v59; // [rsp+108h] [rbp+0h] BYREF
  __int32 v60; // [rsp+114h] [rbp+Ch]
  __int64 v61; // [rsp+118h] [rbp+10h]
  unsigned int v62; // [rsp+124h] [rbp+1Ch]
  unsigned int v63; // [rsp+138h] [rbp+30h]
  __int32 v64; // [rsp+13Ch] [rbp+34h]
  int v65; // [rsp+144h] [rbp+3Ch]
  _BYTE v66[24]; // [rsp+158h] [rbp+50h] BYREF
  struct CDrawingContext *v67; // [rsp+178h] [rbp+70h] BYREF
  int v68; // [rsp+180h] [rbp+78h]
  int v69; // [rsp+184h] [rbp+7Ch]
  int v70; // [rsp+188h] [rbp+80h]
  __int128 v71; // [rsp+18Ch] [rbp+84h]
  __int64 v72; // [rsp+1A0h] [rbp+98h]
  __int64 v73; // [rsp+1A8h] [rbp+A0h]
  __int64 v74; // [rsp+1B0h] [rbp+A8h]
  __int64 v75; // [rsp+1B8h] [rbp+B0h]
  int v76; // [rsp+1C0h] [rbp+B8h]
  char v77; // [rsp+1C4h] [rbp+BCh]
  struct CDrawListEntry **v78[288]; // [rsp+1C8h] [rbp+C0h] BYREF

  v66[16] = 1;
  v40 = 0LL;
  *(_QWORD *)v66 = &v40;
  *(_QWORD *)&v66[8] = 0LL;
  CutoutBrush = CProjectedShadow::TryGetCutoutBrush((CProjectedShadow *)this, a2, a3, (struct CDrawListBrush **)&v66[8]);
  if ( v66[16] )
  {
    v8 = *(_QWORD *)&v66[8];
    v10 = **(__int64 (__fastcall *****)(_QWORD, __int64))v66;
    **(_QWORD **)v66 = *(_QWORD *)&v66[8];
    if ( v10 )
      std::default_delete<CShape>::operator()(v8, v10);
  }
  if ( CutoutBrush < 0 )
  {
    v36 = 307;
    goto LABEL_47;
  }
  v11 = v40;
  if ( !v40 )
  {
    *(_QWORD *)&v66[8] = 0LL;
    *(_QWORD *)v66 = &v40;
    v12 = *this;
    v66[16] = 1;
    CutoutBrush = (*((__int64 (__fastcall **)(CBrushRenderingGraph **, struct CDrawingContext *, struct D2D_SIZE_F *, _BYTE *))v12
                   + 40))(
                    this,
                    a2,
                    a3,
                    &v66[8]);
    if ( v66[16] )
    {
      v8 = *(_QWORD *)v66;
      v13 = **(__int64 (__fastcall *****)(_QWORD, __int64))v66;
      **(_QWORD **)v66 = *(_QWORD *)&v66[8];
      if ( v13 )
        std::default_delete<CShape>::operator()(v8, v13);
    }
    if ( CutoutBrush < 0 )
    {
      v36 = 314;
LABEL_47:
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, CutoutBrush, v36);
      goto LABEL_48;
    }
    v11 = v40;
  }
  v14 = this[8];
  if ( v14 )
  {
    v15 = CBrushRenderingGraph::RenderSubgraphs(v14, a2, a3, v11, a4);
    CutoutBrush = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x14Au);
    goto LABEL_48;
  }
  v46[0] = v11;
  v46[1] = 0LL;
  *(_QWORD *)v66 = &v38;
  v47 = 0;
  v57 = 1;
  v58 = 0;
  v38 = 0LL;
  *(_QWORD *)&v66[8] = 0LL;
  v66[16] = 1;
  CutoutBrush = CProjectedShadow::GetCasterShadowInputBrush(
                  (CProjectedShadow *)this,
                  a2,
                  (struct CDrawListBrush **)&v66[8]);
  if ( v66[16] )
  {
    v17 = *(_QWORD *)v66;
    v18 = **(__int64 (__fastcall *****)(_QWORD, __int64))v66;
    **(_QWORD **)v66 = *(_QWORD *)&v66[8];
    if ( v18 )
      std::default_delete<CShape>::operator()(v17, v18);
  }
  if ( CutoutBrush >= 0 )
  {
    v19 = this[10];
    *(_QWORD *)v66 = &v39;
    v39 = 0LL;
    *(_QWORD *)&v66[8] = 0LL;
    v66[16] = 1;
    CutoutBrush = CProjectedShadowReceiver::GetReceiverMaskInputBrush(
                    v19,
                    (struct IRenderTarget **)a2,
                    (struct CDrawListBrush **)&v66[8]);
    if ( v66[16] )
    {
      v20 = *(_QWORD *)v66;
      v21 = **(__int64 (__fastcall *****)(_QWORD, __int64))v66;
      **(_QWORD **)v66 = *(_QWORD *)&v66[8];
      if ( v21 )
        std::default_delete<CShape>::operator()(v20, v21);
    }
    if ( CutoutBrush < 0 )
    {
      v37 = 343;
      v34 = CutoutBrush;
    }
    else
    {
      v22 = CProjectedShadow::ProjectOntoAndLocalize(
              (CProjectedShadow *)this,
              a2,
              *((struct CVisual **)this[9] + 7),
              *((struct CVisual **)this[10] + 7),
              *((struct CCompositionLight **)this[11] + 11),
              (struct CMILMatrix *)&v41);
      CutoutBrush = v22;
      if ( v22 < 0 )
      {
        v37 = 353;
      }
      else
      {
        v49 = *(__int64 *)((char *)&v41.m256i_i64[1] + 4);
        v23 = _mm_shuffle_ps((__m128)v45, (__m128)v45, 0);
        v48 = v41.m256i_i64[0];
        v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v41.m256i_i32[3]) & _xmm);
        v50 = v41.m256i_i32[5];
        v51 = v41.m256i_i32[7];
        v52 = v43;
        v53 = v44;
        v54 = v23.m128_i32[0];
        if ( v24 < 0.000081380211 )
        {
          v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v41.m256i_i32[7]) & _xmm);
          if ( v25 < 0.000081380211 )
          {
            *(_QWORD *)v66 = v41.m256i_i64[0];
            *(_QWORD *)&v66[16] = _mm_unpacklo_ps((__m128)v43, (__m128)v44).m128_u64[0];
            *(_QWORD *)&v66[8] = v41.m256i_i64[2];
            v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v23.m128_f32[0]) & _xmm);
            if ( v26 >= 0.000081380211 )
            {
              v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v23.m128_f32[0] - 1.0)) & _xmm);
              if ( v27 >= 0.000081380211 )
              {
                *(float *)v66 = *(float *)v41.m256i_i32 / v23.m128_f32[0];
                *(__m128 *)&v66[4] = _mm_div_ps(*(__m128 *)&v66[4], v23);
                *(float *)&v66[20] = *(float *)&v66[20] / v23.m128_f32[0];
              }
            }
            D2D1::Matrix3x2F::SetProduct(
              (D2D1::Matrix3x2F *)&v41,
              (const struct D2D1::Matrix3x2F *)(v38 + 1),
              (const struct D2D1::Matrix3x2F *)v66);
            v28 = v41.m256i_i64[2];
            *(_OWORD *)v29 = *(_OWORD *)v41.m256i_i8;
            *(_QWORD *)(v29 + 16) = v28;
            goto LABEL_32;
          }
        }
        v30 = this[11];
        v47 = 1;
        v22 = CProjectedShadow::ProjectOntoAndLocalize(
                (CProjectedShadow *)this,
                a2,
                *((struct CVisual **)this[10] + 7),
                *((struct CVisual **)this[9] + 7),
                *((struct CCompositionLight **)v30 + 11),
                (struct CMILMatrix *)&v59);
        CutoutBrush = v22;
        if ( v22 >= 0 )
        {
          v41.m256i_i64[0] = v59;
          v41.m256i_i32[2] = v60;
          *(__int64 *)((char *)&v41.m256i_i64[1] + 4) = v61;
          *(__int64 *)((char *)&v41.m256i_i64[2] + 4) = __PAIR64__(v63, v62);
          v42 = v65;
          v41.m256i_i32[7] = v64;
          v56 = v65;
          v55 = v41;
LABEL_32:
          v68 = 0;
          v69 = 0;
          v71 = _xmm;
          v67 = a2;
          v70 = 0;
          v72 = 0LL;
          v73 = 0LL;
          v74 = 0LL;
          v75 = 0LL;
          v76 = 0;
          v77 = 0;
          v31 = *(_OWORD *)&CProjectedShadow::GetFinalColor((CProjectedShadow *)this, (struct _D3DCOLORVALUE *)v66, a2)->r;
          v77 = 0;
          v71 = v31;
          CBrushDrawListGenerator::AttachInput((__int64)&v67, 0, &v38);
          CBrushDrawListGenerator::AttachInput((__int64)&v67, 1u, &v39);
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v78);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)&v67,
                       (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v46,
                       (struct CDrawListEntryBuilder *)v78);
          CutoutBrush = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, DrawList, 0x19Cu);
          else
            CDrawListCache::Update(a4, a2, v78);
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v78);
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v67);
LABEL_41:
          if ( v39 )
            std::default_delete<CShape>::operator()(v16, v39);
          goto LABEL_44;
        }
        v37 = 393;
      }
      v34 = v22;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v34, v37);
    goto LABEL_41;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, CutoutBrush, 0x153u);
LABEL_44:
  if ( v38 )
    std::default_delete<CShape>::operator()(v16, v38);
LABEL_48:
  if ( v40 )
    std::default_delete<CShape>::operator()(v16, (__int64 (__fastcall ***)(_QWORD, __int64))v40);
  return (unsigned int)CutoutBrush;
}
