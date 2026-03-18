/*
 * XREFs of ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F1060
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18004E9C0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18004EA28 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180052C34 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180075FA8 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180076050 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180076874 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x180078AB8 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800915B4 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x180091838 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801F1A04 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801F2CA4 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 */

__int64 __fastcall CProjectedShadow::GenerateDrawList(
        CProjectedShadow *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  __int64 v4; // rax
  __int64 v8; // rbx
  CGeometryOnlyDrawListBrush *v9; // rcx
  signed int CasterShadowInputBrush; // edi
  int v11; // xmm1_4
  int v12; // xmm0_4
  const struct CDrawListBrush *v13; // rax
  CBrushRenderingGraph *v14; // rcx
  const struct CDrawListBrush *v15; // rbx
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, __int64); // rdx
  CProjectedShadowReceiver *v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, __int64); // rdx
  float v23; // xmm1_4
  float v24; // xmm1_4
  int v25; // xmm1_4
  float v26; // xmm6_4
  __m128 v27; // xmm3
  __m128 v28; // xmm2
  int v29; // xmm0_4
  __m128 v30; // xmm1
  __m128 v31; // xmm3
  float v32; // xmm2_4
  __int64 v33; // xmm1_8
  __int64 v34; // rdx
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  int v37; // eax
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  signed int DrawList; // eax
  __int64 v42; // rcx
  const struct CDrawListBrush *v44[3]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v45[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v46; // [rsp+68h] [rbp-A0h]
  _OWORD v47[2]; // [rsp+6Ch] [rbp-9Ch]
  int v48; // [rsp+8Ch] [rbp-7Ch]
  __int128 v49; // [rsp+90h] [rbp-78h]
  __int128 v50; // [rsp+A0h] [rbp-68h]
  int v51; // [rsp+B0h] [rbp-58h]
  char v52; // [rsp+B4h] [rbp-54h]
  char v53; // [rsp+B5h] [rbp-53h]
  char v54; // [rsp+B6h] [rbp-52h]
  __int128 v55; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v56; // [rsp+C8h] [rbp-40h]
  _BYTE v57[24]; // [rsp+D0h] [rbp-38h] BYREF
  struct CDrawingContext *v58; // [rsp+E8h] [rbp-20h] BYREF
  int v59; // [rsp+F0h] [rbp-18h]
  int v60; // [rsp+F4h] [rbp-14h]
  int v61; // [rsp+F8h] [rbp-10h]
  __int128 v62; // [rsp+FCh] [rbp-Ch]
  __int64 v63; // [rsp+110h] [rbp+8h]
  __int64 v64; // [rsp+118h] [rbp+10h]
  __int64 v65; // [rsp+120h] [rbp+18h]
  __int64 v66; // [rsp+128h] [rbp+20h]
  int v67; // [rsp+130h] [rbp+28h]
  char v68; // [rsp+134h] [rbp+2Ch]
  struct CDrawListEntry **v69[288]; // [rsp+138h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 9);
  v57[16] = 1;
  *(_QWORD *)&v57[8] = 0LL;
  v8 = *(_QWORD *)(v4 + 56);
  *(_QWORD *)v57 = v44;
  v44[0] = 0LL;
  CasterShadowInputBrush = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v57[8]);
  if ( v57[16] )
  {
    v9 = **(CGeometryOnlyDrawListBrush ***)v57;
    **(_QWORD **)v57 = *(_QWORD *)&v57[8];
    if ( v9 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v9, 1);
  }
  if ( CasterShadowInputBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, CasterShadowInputBrush, 0x1A9u, 0LL);
    if ( v44[0] )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v44[0], 1);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 132);
    v12 = *(_DWORD *)(v8 + 136);
    v13 = v44[0];
    v44[1] = 0LL;
    LODWORD(v44[2]) = v11;
    *((_BYTE *)v44[0] + 52) = 1;
    *((_DWORD *)v13 + 12) = 50529027;
    HIDWORD(v44[2]) = v12;
    *((_OWORD *)v13 + 2) = *(_OWORD *)&v44[1];
    v14 = (CBrushRenderingGraph *)*((_QWORD *)this + 37);
    v15 = v44[0];
    if ( v14 )
    {
      v16 = CBrushRenderingGraph::RenderSubgraphs(
              v14,
              a2,
              (struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 9) + 56LL) + 132LL),
              v44[0],
              a4);
      CasterShadowInputBrush = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1BFu, 0LL);
    }
    else
    {
      v45[1] = 0LL;
      *(_QWORD *)v57 = &v44[1];
      v46 = 0;
      v52 = 1;
      v54 = 0;
      v45[0] = v44[0];
      v44[1] = 0LL;
      *(_QWORD *)&v57[8] = 0LL;
      v57[16] = 1;
      CasterShadowInputBrush = CProjectedShadow::GetCasterShadowInputBrush(this, a2, (struct CDrawListBrush **)&v57[8]);
      if ( v57[16] )
      {
        v18 = *(_QWORD *)v57;
        v19 = **(__int64 (__fastcall *****)(_QWORD, __int64))v57;
        **(_QWORD **)v57 = *(_QWORD *)&v57[8];
        if ( v19 )
          std::default_delete<CShape>::operator()(v18, v19);
      }
      if ( CasterShadowInputBrush < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, CasterShadowInputBrush, 0x1C8u, 0LL);
      }
      else
      {
        v20 = (CProjectedShadowReceiver *)*((_QWORD *)this + 9);
        *(_QWORD *)v57 = v44;
        v44[0] = 0LL;
        *(_QWORD *)&v57[8] = 0LL;
        v57[16] = 1;
        CasterShadowInputBrush = CProjectedShadowReceiver::GetReceiverMaskInputBrush(
                                   v20,
                                   a2,
                                   (struct CDrawListBrush **)&v57[8]);
        if ( v57[16] )
        {
          v21 = *(_QWORD *)v57;
          v22 = **(__int64 (__fastcall *****)(_QWORD, __int64))v57;
          **(_QWORD **)v57 = *(_QWORD *)&v57[8];
          if ( v22 )
            std::default_delete<CShape>::operator()(v21, v22);
        }
        if ( CasterShadowInputBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, CasterShadowInputBrush, 0x1CCu, 0LL);
        }
        else
        {
          v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 43)) & _xmm);
          if ( v23 >= 0.000081380211
            || (v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 46)) & _xmm), v24 >= 0.000081380211) )
          {
            v35 = *(_OWORD *)((char *)this + 164);
            v36 = *(_OWORD *)((char *)this + 180);
            v48 = *((_DWORD *)this + 49);
            v37 = *((_DWORD *)this + 58);
            v47[0] = v35;
            v46 = 1;
            v38 = *(_OWORD *)((char *)this + 200);
            v51 = v37;
            v47[1] = v36;
            v39 = *(_OWORD *)((char *)this + 216);
            v49 = v38;
            v50 = v39;
          }
          else
          {
            v25 = *((_DWORD *)this + 44);
            v26 = *((float *)this + 41);
            v27 = (__m128)*((unsigned int *)this + 49);
            v28 = (__m128)*((unsigned int *)this + 48);
            *(_DWORD *)&v57[4] = *((_DWORD *)this + 42);
            v29 = *((_DWORD *)this + 45);
            *(_DWORD *)&v57[8] = v25;
            v30 = (__m128)*((unsigned int *)this + 47);
            *(_DWORD *)&v57[12] = v29;
            *(float *)v57 = v26;
            v31 = _mm_shuffle_ps(v27, v27, 0);
            *(_QWORD *)&v57[16] = _mm_unpacklo_ps(v30, v28).m128_u64[0];
            v30.m128_f32[0] = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v31.m128_f32[0]) & _xmm);
            if ( v30.m128_f32[0] >= 0.000081380211 )
            {
              v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v31.m128_f32[0] - 1.0)) & _xmm);
              if ( v32 >= 0.000081380211 )
              {
                *(float *)v57 = v26 / v31.m128_f32[0];
                *(__m128 *)&v57[4] = _mm_div_ps(*(__m128 *)&v57[4], v31);
                *(float *)&v57[20] = *(float *)&v57[20] / v31.m128_f32[0];
              }
            }
            D2D1::Matrix3x2F::SetProduct(
              (D2D1::Matrix3x2F *)&v55,
              (const struct CDrawListBrush *)((char *)v44[1] + 8),
              (const struct D2D1::Matrix3x2F *)v57);
            v33 = v56;
            *(_OWORD *)v34 = v55;
            *(_QWORD *)(v34 + 16) = v33;
          }
          v40 = *((_OWORD *)this + 17);
          v59 = 0;
          v60 = 0;
          v58 = a2;
          v62 = v40;
          v61 = 0;
          v63 = 0LL;
          v64 = 0LL;
          v65 = 0LL;
          v66 = 0LL;
          v67 = 0;
          v68 = 0;
          CBrushDrawListGenerator::AttachInput((__int64)&v58, 0, &v44[1]);
          CBrushDrawListGenerator::AttachInput((__int64)&v58, 1u, v44);
          v53 = 1;
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v69);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)&v58,
                       (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v45,
                       (struct CDrawListEntryBuilder *)v69);
          CasterShadowInputBrush = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, DrawList, 0x1F5u, 0LL);
          else
            CDrawListCache::Update(a4, a2, v69);
          CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v69);
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v58);
        }
        if ( v44[0] )
          std::default_delete<CShape>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v44[0]);
      }
      if ( v44[1] )
        std::default_delete<CShape>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v44[1]);
    }
    if ( v15 )
      std::default_delete<CShape>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v15);
  }
  return (unsigned int)CasterShadowInputBrush;
}
