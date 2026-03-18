/*
 * XREFs of ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801EF8F0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180034D0C (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18003C358 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18003C400 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18003C54C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18003E798 (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800573D0 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsCloseRealOne@@YA_NMM@Z @ 0x180064938 (-IsCloseRealOne@@YA_NMM@Z.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F024 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18006F2A8 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180097560 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?IsCloseRealZero@@YA_NMM@Z @ 0x1800A301C (-IsCloseRealZero@@YA_NMM@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x1800C0A10 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801F0274 (-GetCasterShadowInputBrush@CProjectedShadow@@AEBAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z.c)
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x1801F1514 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
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
  CGeometryOnlyDrawListBrush *v13; // rax
  CBrushRenderingGraph *v14; // rcx
  CGeometryOnlyDrawListBrush *v15; // rbx
  signed int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 (__fastcall ***v19)(_QWORD, __int64); // rdx
  CProjectedShadowReceiver *v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, __int64); // rdx
  float v23; // xmm4_4
  int v24; // xmm5_4
  int v25; // xmm1_4
  __m128 v26; // xmm3
  __m128 v27; // xmm2
  __m128 v28; // xmm3
  float v29; // xmm1_4
  __m128 v30; // xmm3
  float v31; // xmm5_4
  __int64 v32; // xmm1_8
  __int64 v33; // rdx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int v36; // eax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  signed int DrawList; // eax
  __int64 v41; // rcx
  CGeometryOnlyDrawListBrush *v43; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v44; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v45[2]; // [rsp+50h] [rbp-B0h] BYREF
  int v46; // [rsp+60h] [rbp-A0h]
  __int128 v47; // [rsp+64h] [rbp-9Ch]
  __int128 v48; // [rsp+74h] [rbp-8Ch]
  int v49; // [rsp+84h] [rbp-7Ch]
  __int128 v50; // [rsp+88h] [rbp-78h]
  __int128 v51; // [rsp+98h] [rbp-68h]
  int v52; // [rsp+A8h] [rbp-58h]
  char v53; // [rsp+ACh] [rbp-54h]
  char v54; // [rsp+ADh] [rbp-53h]
  char v55; // [rsp+AEh] [rbp-52h]
  __int128 v56; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v57; // [rsp+C0h] [rbp-40h]
  _BYTE v58[24]; // [rsp+C8h] [rbp-38h] BYREF
  struct CDrawingContext *v59; // [rsp+E0h] [rbp-20h] BYREF
  int v60; // [rsp+E8h] [rbp-18h]
  int v61; // [rsp+ECh] [rbp-14h]
  int v62; // [rsp+F0h] [rbp-10h]
  __int128 v63; // [rsp+F4h] [rbp-Ch]
  char v64[32]; // [rsp+108h] [rbp+8h] BYREF
  int v65; // [rsp+128h] [rbp+28h]
  char v66; // [rsp+12Ch] [rbp+2Ch]
  struct CDrawListEntry **v67[288]; // [rsp+130h] [rbp+30h] BYREF

  v4 = *((_QWORD *)this + 9);
  v58[16] = 1;
  *(_QWORD *)&v58[8] = 0LL;
  v8 = *(_QWORD *)(v4 + 56);
  *(_QWORD *)v58 = &v43;
  v43 = 0LL;
  CasterShadowInputBrush = CGeometryOnlyDrawListBrush::Create((struct CGeometryOnlyDrawListBrush **)&v58[8]);
  if ( v58[16] )
  {
    v9 = **(CGeometryOnlyDrawListBrush ***)v58;
    **(_QWORD **)v58 = *(_QWORD *)&v58[8];
    if ( v9 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v9, 1);
  }
  if ( CasterShadowInputBrush < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v9, 0LL, 0, CasterShadowInputBrush, 0x1A9u, 0LL);
    if ( v43 )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v43, 1);
  }
  else
  {
    v11 = *(_DWORD *)(v8 + 132);
    v12 = *(_DWORD *)(v8 + 136);
    v13 = v43;
    *(_QWORD *)&v44 = 0LL;
    DWORD2(v44) = v11;
    *((_BYTE *)v43 + 52) = 1;
    *((_DWORD *)v13 + 12) = 50529027;
    HIDWORD(v44) = v12;
    *((_OWORD *)v13 + 2) = v44;
    v14 = (CBrushRenderingGraph *)*((_QWORD *)this + 37);
    v15 = v43;
    if ( v14 )
    {
      v16 = CBrushRenderingGraph::RenderSubgraphs(
              v14,
              a2,
              (struct D2D_SIZE_F *)(*(_QWORD *)(*((_QWORD *)this + 9) + 56LL) + 132LL),
              v43,
              a4);
      CasterShadowInputBrush = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1BFu, 0LL);
    }
    else
    {
      v45[1] = 0LL;
      *(_QWORD *)v58 = &v44;
      v46 = 0;
      v53 = 1;
      v55 = 0;
      v45[0] = v43;
      *(_QWORD *)&v44 = 0LL;
      *(_QWORD *)&v58[8] = 0LL;
      v58[16] = 1;
      CasterShadowInputBrush = CProjectedShadow::GetCasterShadowInputBrush(this, a2, (struct CDrawListBrush **)&v58[8]);
      if ( v58[16] )
      {
        v18 = *(_QWORD *)v58;
        v19 = **(__int64 (__fastcall *****)(_QWORD, __int64))v58;
        **(_QWORD **)v58 = *(_QWORD *)&v58[8];
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
        *(_QWORD *)v58 = &v43;
        v43 = 0LL;
        *(_QWORD *)&v58[8] = 0LL;
        v58[16] = 1;
        CasterShadowInputBrush = CProjectedShadowReceiver::GetReceiverMaskInputBrush(
                                   v20,
                                   a2,
                                   (struct CDrawListBrush **)&v58[8]);
        if ( v58[16] )
        {
          v21 = *(_QWORD *)v58;
          v22 = **(__int64 (__fastcall *****)(_QWORD, __int64))v58;
          **(_QWORD **)v58 = *(_QWORD *)&v58[8];
          if ( v22 )
            std::default_delete<CShape>::operator()(v21, v22);
        }
        if ( CasterShadowInputBrush < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, CasterShadowInputBrush, 0x1CCu, 0LL);
        }
        else
        {
          if ( IsCloseRealZero(*((float *)this + 43), 0.000081380211)
            && IsCloseRealZero(*((float *)this + 46), 0.000081380211) )
          {
            v24 = *((_DWORD *)this + 41);
            v25 = *((_DWORD *)this + 44);
            v26 = (__m128)*((unsigned int *)this + 48);
            v27 = (__m128)*((unsigned int *)this + 47);
            *(_DWORD *)&v58[4] = *((_DWORD *)this + 42);
            *(_DWORD *)&v58[12] = *((_DWORD *)this + 45);
            v27.m128_u64[0] = _mm_unpacklo_ps(v27, v26).m128_u64[0];
            v28 = (__m128)*((unsigned int *)this + 49);
            *(_DWORD *)&v58[8] = v25;
            v29 = v23;
            *(_DWORD *)v58 = v24;
            v30 = _mm_shuffle_ps(v28, v28, 0);
            *(_QWORD *)&v58[16] = v27.m128_u64[0];
            if ( !IsCloseRealZero(v30.m128_f32[0], v23) && !IsCloseRealOne(v30.m128_f32[0], v29) )
            {
              *(float *)v58 = v31 / v30.m128_f32[0];
              *(__m128 *)&v58[4] = _mm_div_ps(*(__m128 *)&v58[4], v30);
              *(float *)&v58[20] = *(float *)&v58[20] / v30.m128_f32[0];
            }
            D2D1::Matrix3x2F::SetProduct(
              (D2D1::Matrix3x2F *)&v56,
              (const struct D2D1::Matrix3x2F *)(v44 + 8),
              (const struct D2D1::Matrix3x2F *)v58);
            v32 = v57;
            *(_OWORD *)v33 = v56;
            *(_QWORD *)(v33 + 16) = v32;
          }
          else
          {
            v34 = *(_OWORD *)((char *)this + 164);
            v35 = *(_OWORD *)((char *)this + 180);
            v49 = *((_DWORD *)this + 49);
            v36 = *((_DWORD *)this + 58);
            v47 = v34;
            v46 = 1;
            v37 = *(_OWORD *)((char *)this + 200);
            v52 = v36;
            v48 = v35;
            v38 = *(_OWORD *)((char *)this + 216);
            v50 = v37;
            v51 = v38;
          }
          v60 = 0;
          v61 = 0;
          v59 = a2;
          v62 = 0;
          v63 = _xmm;
          `vector constructor iterator'(
            v64,
            8LL,
            4LL,
            (void (__fastcall *)(char *))wil::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>::com_ptr_t<ID3D12Resource,wil::err_returncode_policy>);
          v39 = *((_OWORD *)this + 17);
          v65 = 0;
          v66 = 0;
          v63 = v39;
          CBrushDrawListGenerator::AttachInput((__int64)&v59, 0, &v44);
          CBrushDrawListGenerator::AttachInput((__int64)&v59, 1u, &v43);
          v54 = 1;
          CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v67);
          DrawList = CBrushDrawListGenerator::GenerateDrawList(
                       (CBrushDrawListGenerator *)&v59,
                       (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v45,
                       (struct CDrawListEntryBuilder *)v67);
          CasterShadowInputBrush = DrawList;
          if ( DrawList < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, DrawList, 0x1F5u, 0LL);
          else
            CDrawListCache::Update(a4, a2, v67);
          CDrawListEntryBuilder::~CDrawListEntryBuilder((Mesh::MeshGraph **)v67);
          CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v59);
        }
        if ( v43 )
          std::default_delete<CShape>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v43);
      }
      if ( (_QWORD)v44 )
        std::default_delete<CShape>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v44);
    }
    if ( v15 )
      std::default_delete<CShape>::operator()(v17, (__int64 (__fastcall ***)(_QWORD, __int64))v15);
  }
  return (unsigned int)CasterShadowInputBrush;
}
