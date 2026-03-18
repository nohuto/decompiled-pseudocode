/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094470
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x180095680 (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180097560 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000ED24 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x18000F614 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18000F930 (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180042950 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D4E0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18007DE64 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18008EE90 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18009145C (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800954E4 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800B7AC0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800BB84C (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C52D0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x18015D404 (-terminate@details@gsl@@YAXXZ.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801AD9F8 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801ADD18 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE18C (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE258 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE2FC (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE3D4 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE4A4 (-clear_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expa.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1801AF010 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801B00A4 (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180249F64 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v2; // rax
  CBrushDrawListGenerator *v4; // r13
  bool v5; // r14
  __int64 v6; // rdx
  char v7; // r15
  unsigned int i; // edi
  __int64 v9; // r12
  __int64 v10; // rbx
  unsigned int v11; // xmm0_4
  __int32 v12; // xmm1_4
  bool v13; // cf
  char v14; // al
  int v15; // r8d
  int v16; // eax
  __int64 v17; // rcx
  signed int v18; // eax
  __int64 v19; // rcx
  signed int v20; // edi
  __int64 v21; // rbx
  int v22; // eax
  CBrushDrawListGenerator *v23; // rdi
  __int128 v24; // xmm1
  CBrushDrawListGenerator *v25; // rcx
  _QWORD *v26; // rax
  bool v27; // al
  unsigned __int64 v28; // r13
  char *v29; // rax
  CShape *v30; // rbx
  int v31; // r14d
  signed int v32; // r12d
  unsigned __int64 v33; // r15
  __int64 v34; // rdi
  __int64 v35; // rdx
  CBrushDrawListGenerator *v36; // r9
  unsigned int v37; // xmm1_4
  __int32 v38; // xmm0_4
  unsigned int v39; // xmm1_4
  unsigned int v40; // xmm0_4
  __m128 v41; // xmm0
  __m128 v42; // xmm1
  __m128 v43; // xmm0
  __m128 v44; // xmm0
  __m128 v45; // xmm1
  __m128 v46; // xmm0
  __m128 v47; // xmm1
  __m128 v48; // xmm0
  __m128 v49; // xmm0
  float v50; // xmm1_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm2_4
  float v54; // xmm5_4
  float v55; // xmm6_4
  __m128 v56; // xmm0
  __m128 v57; // xmm1
  __m128 v58; // xmm0
  __m128 v59; // xmm1
  __m128 v60; // xmm1
  __m128 v61; // xmm1
  CBrushDrawListGenerator *v62; // r14
  __int64 v63; // rcx
  __int64 (__fastcall ***v64)(_QWORD, __int64); // rdx
  signed int v65; // eax
  __int64 v66; // rdx
  __int64 v67; // rcx
  signed int v68; // eax
  __int64 (__fastcall ***v69)(_QWORD, __int64); // rdx
  CBrushDrawListGenerator *v70; // rcx
  CBrushDrawListGenerator *v71; // rax
  __int64 v72; // rcx
  _BYTE *v73; // rcx
  _BYTE *v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // rcx
  __int64 v77; // rcx
  char v78; // r14
  unsigned __int64 *v79; // r12
  char v80; // r9
  __int32 v81; // r13d
  unsigned int j; // r15d
  __int64 v83; // rbx
  _DWORD *v84; // rdi
  const struct D2D_MATRIX_3X2_F *v85; // rdx
  __int64 v86; // rcx
  int v87; // eax
  __int64 v88; // rax
  int v89; // eax
  __int64 v90; // rax
  __m128 v91; // xmm3
  __m128 v92; // xmm2
  __int8 v93; // bl
  __int64 v94; // rax
  signed int v95; // eax
  __int64 v96; // rcx
  CBrushDrawListGenerator *v97; // rax
  __int64 v98; // rax
  char v99; // cl
  unsigned int v100; // xmm1_4
  unsigned int v101; // xmm0_4
  CDrawListEntryBuilder *v102; // rcx
  signed int inserted; // eax
  signed int v104; // eax
  _BYTE *v105; // rbx
  HANDLE ProcessHeap; // rax
  _BYTE *v107; // rbx
  HANDLE v108; // rax
  _BYTE *v109; // rbx
  HANDLE v110; // rax
  char v112; // [rsp+38h] [rbp-D0h]
  CShape *v113; // [rsp+40h] [rbp-C8h]
  CBrushDrawListGenerator *v114; // [rsp+48h] [rbp-C0h] BYREF
  __m128 v115; // [rsp+50h] [rbp-B8h] BYREF
  __m256i v116; // [rsp+60h] [rbp-A8h] BYREF
  __m128 v117; // [rsp+80h] [rbp-88h]
  int v118; // [rsp+98h] [rbp-70h] BYREF
  unsigned __int64 v119; // [rsp+A0h] [rbp-68h] BYREF
  CBrushDrawListGenerator *v120; // [rsp+A8h] [rbp-60h]
  __m128 v121; // [rsp+B8h] [rbp-50h] BYREF
  __m256i v122; // [rsp+C8h] [rbp-40h]
  __m128 v123; // [rsp+E8h] [rbp-20h]
  int v124; // [rsp+F8h] [rbp-10h]
  __int128 v125; // [rsp+108h] [rbp+0h] BYREF
  char v126; // [rsp+118h] [rbp+10h]
  __int64 v127; // [rsp+119h] [rbp+11h]
  int v128; // [rsp+121h] [rbp+19h]
  __int16 v129; // [rsp+125h] [rbp+1Dh]
  char v130; // [rsp+127h] [rbp+1Fh]
  unsigned __int64 *v131; // [rsp+128h] [rbp+20h]
  __int128 v132; // [rsp+130h] [rbp+28h]
  _OWORD v133[2]; // [rsp+148h] [rbp+40h] BYREF
  void **v134; // [rsp+168h] [rbp+60h] BYREF
  __int64 v135; // [rsp+170h] [rbp+68h]
  void *lpMem; // [rsp+178h] [rbp+70h] BYREF
  _BYTE *v137; // [rsp+180h] [rbp+78h]
  int v138; // [rsp+188h] [rbp+80h]
  __int64 v139; // [rsp+18Ch] [rbp+84h]
  _BYTE v140[16]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v141; // [rsp+1A8h] [rbp+A0h]
  _BYTE *v142; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE *v143; // [rsp+1C0h] [rbp+B8h]
  _BYTE **v144; // [rsp+1C8h] [rbp+C0h]
  _BYTE v145[64]; // [rsp+1D0h] [rbp+C8h] BYREF
  _BYTE *v146; // [rsp+210h] [rbp+108h] BYREF
  _BYTE *v147; // [rsp+218h] [rbp+110h]
  _BYTE **v148; // [rsp+220h] [rbp+118h]
  _BYTE v149[128]; // [rsp+228h] [rbp+120h] BYREF
  _BYTE *v150; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE *v151; // [rsp+2B0h] [rbp+1A8h]
  char *v152; // [rsp+2B8h] [rbp+1B0h]
  _BYTE v153[128]; // [rsp+2C0h] [rbp+1B8h] BYREF
  char v154; // [rsp+340h] [rbp+238h] BYREF
  CBrushDrawListGenerator *v155; // [rsp+348h] [rbp+240h] BYREF
  char *v156; // [rsp+350h] [rbp+248h]
  float v157; // [rsp+358h] [rbp+250h]
  float v158; // [rsp+35Ch] [rbp+254h]
  float v159; // [rsp+360h] [rbp+258h]
  float v160; // [rsp+364h] [rbp+25Ch]
  float v161; // [rsp+368h] [rbp+260h]
  _DWORD v162[52]; // [rsp+378h] [rbp+270h] BYREF

  v2 = *((_QWORD *)a2 + 13);
  v120 = this;
  v4 = this;
  if ( !*(_QWORD *)(v2 + 32) )
  {
    v5 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 14) + 8LL))(*((_QWORD *)a2 + 14)) == 1
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v4 + 8) - 1.0)) & _xmm) < 0.0000011920929;
    v6 = *((unsigned int *)a2 + 25);
    v7 = 0;
    for ( i = 0; i < (unsigned int)v6; *(&v155 + v9) = (CBrushDrawListGenerator *)v10 )
    {
      v9 = i;
      v10 = *((_QWORD *)a2 + i + 7);
      if ( v10 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)a2 + i + 7), 2LL) )
        {
          v5 = v5
            && (*(_BYTE *)(v10 + 72)
             || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 56) + 104LL))(*(_QWORD *)(v10 + 56)));
          if ( v7 || *(_BYTE *)(v10 + 145) )
            v7 = 1;
        }
        else if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1LL) )
        {
          v10 = 0LL;
        }
      }
      v6 = *((unsigned int *)a2 + 25);
      ++i;
    }
    v11 = *((_DWORD *)a2 + 50);
    v12 = *((_DWORD *)a2 + 51);
    v115.m128_i32[3] = *((_DWORD *)a2 + 49);
    v116.m256i_i64[0] = (__int64)a2 + 8;
    v116.m256i_i8[12] = *((_BYTE *)a2 + 210);
    v13 = *((_BYTE *)a2 + 211) != 0;
    v14 = *((_BYTE *)a2 + 208);
    v115.m128_i32[2] = v12;
    *(__int16 *)((char *)&v116.m256i_i16[6] + 1) = 0;
    v116.m256i_i8[15] = 0;
    v115.m128_u64[0] = __PAIR64__(v11, v6);
    v15 = *((_DWORD *)v4 + 4) | (v7 != 0 ? 0x80 : 0) | (v14 != 0 ? 0x20 : 0) | (v13 ? 0x40 : 0);
    if ( *((_BYTE *)a2 + 209) || (v16 = 1, !v5) )
      v16 = 0;
    v17 = *((_QWORD *)a2 + 14);
    *(_QWORD *)&v133[0] = v6;
    v116.m256i_i32[2] = v15 | v16;
    *((_QWORD *)&v133[0] + 1) = &v155;
    v114 = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64, _OWORD *, CBrushDrawListGenerator **))(*(_QWORD *)v17 + 24LL))(
            v17,
            v133,
            &v114);
    v20 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x22Du, 0LL);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v114);
      return (unsigned int)v20;
    }
    v21 = *((_QWORD *)a2 + 13);
    v22 = 2;
    v23 = v114;
    v24 = *(_OWORD *)v116.m256i_i8;
    *(__m128 *)v21 = v115;
    *(_OWORD *)(v21 + 16) = v24;
    if ( *(_DWORD *)v21 > 2u )
      v22 = 4;
    *(_DWORD *)v21 = v22;
    v25 = *(CBrushDrawListGenerator **)(v21 + 32);
    if ( v25 != v23 )
    {
      if ( v23 )
      {
        (**(void (__fastcall ***)(CBrushDrawListGenerator *))v23)(v23);
        v25 = *(CBrushDrawListGenerator **)(v21 + 32);
      }
      *(_QWORD *)(v21 + 32) = v23;
      if ( v25 )
        (*(void (__fastcall **)(CBrushDrawListGenerator *))(*(_QWORD *)v25 + 8LL))(v25);
    }
    *(_DWORD *)(v21 + 2276) = (*(__int64 (__fastcall **)(CBrushDrawListGenerator *))(*(_QWORD *)v23 + 32LL))(v23);
    v26 = *(_QWORD **)(v21 + 16);
    *(_WORD *)(v21 + 2297) = 0;
    if ( !*v26 && !v26[2] || *(_DWORD *)(v21 + 12) == 1 )
      *(_BYTE *)(v21 + 28) = 0;
    v27 = ((*(_BYTE *)(v21 + 24) & 0x20) != 0 || !*v26) && CCommonRegistryData::m_fEnableCpuClipping != 0;
    *(_BYTE *)(v21 + 2296) = v27;
    if ( (__int64)(*(_QWORD *)(v21 + 200) - *(_QWORD *)(v21 + 192)) >> 4 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v21 + 192,
        0LL);
    if ( (__int64)(*(_QWORD *)(v21 + 1192) - *(_QWORD *)(v21 + 1184)) >> 4 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v21 + 1184,
        0LL);
    if ( (__int64)(*(_QWORD *)(v21 + 2192) - *(_QWORD *)(v21 + 2184)) >> 1 )
      detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
        v21 + 2184,
        0LL);
    *(_DWORD *)(v21 + 2176) = 0;
    *(_DWORD *)(v21 + 2272) = 0;
    this = v114;
    if ( v114 )
    {
      v114 = 0LL;
      (*(void (__fastcall **)(CBrushDrawListGenerator *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  v28 = *((unsigned int *)a2 + 24);
  v29 = (char *)a2 + 56;
  v30 = 0LL;
  if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL && MEMORY[0x28] )
  {
LABEL_181:
    gsl::details::terminate(this);
    __debugbreak();
  }
  v31 = *((_DWORD *)a2 + 30);
  v32 = 0;
  v118 = v31;
  v114 = 0LL;
  if ( !v28 )
  {
LABEL_93:
    v30 = v114;
    v20 = 0;
    goto LABEL_94;
  }
  v33 = 0LL;
  this = (CBrushDrawListGenerator *)&CRectanglesShape::`vftable';
  while ( 1 )
  {
    if ( v33 >= v28 )
    {
      gsl::details::terminate((gsl::details *)&CRectanglesShape::`vftable');
      __debugbreak();
    }
    v34 = *(_QWORD *)&v29[8 * v33];
    if ( v34 )
    {
      if ( *(_BYTE *)(v34 + 52) )
        break;
    }
LABEL_85:
    ++v32;
    ++v33;
    if ( v32 >= (__int64)v28 )
      goto LABEL_93;
    v29 = (char *)a2 + 56;
  }
  v135 = 0LL;
  lpMem = v140;
  v134 = &CRectanglesShape::`vftable';
  v141 = 0LL;
  v137 = v140;
  v138 = 1;
  v139 = 1LL;
  v133[0] = *(_OWORD *)(v34 + 32);
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(&lpMem, v133, 1LL);
  v36 = 0LL;
  v13 = _bittest(&v31, v32);
  v124 = 0;
  if ( v13 )
  {
    v37 = *(_DWORD *)(v34 + 12);
    v115.m128_i32[0] = *(_DWORD *)(v34 + 8);
    v38 = *(_DWORD *)(v34 + 16);
    *(unsigned __int64 *)((char *)v115.m128_u64 + 4) = v37;
    v39 = *(_DWORD *)(v34 + 20);
    v115.m128_i32[3] = v38;
    v40 = *(_DWORD *)(v34 + 24);
    v116.m256i_i64[0] = v39;
    v116.m256i_i64[1] = __PAIR64__(*(_DWORD *)(v34 + 28), v40);
    v116.m256i_i32[4] = 1065353216;
    Matrix3x3::operator*(&v115, &v155, (char *)a2 + 124);
    v115.m128_i32[2] = (int)v36;
    v41 = v115;
    v116.m256i_i32[2] = (int)v36;
    v117.m128_i32[2] = (int)v36;
    v41.m128_f32[0] = *(float *)&v155;
    *(_OWORD *)&v122.m256i_u64[2] = _xmm;
    v42 = *(__m128 *)v116.m256i_i8;
    v43 = _mm_shuffle_ps(v41, v41, 225);
    v43.m128_f32[0] = *((float *)&v155 + 1);
    v42.m128_f32[0] = *((float *)&v156 + 1);
    v44 = _mm_shuffle_ps(v43, v43, 135);
    v44.m128_f32[0] = *(float *)&v156;
    v45 = _mm_shuffle_ps(v42, v42, 225);
    v45.m128_f32[0] = v157;
    v115 = _mm_shuffle_ps(v44, v44, 57);
    v121 = v115;
    v46 = v117;
    v47 = _mm_shuffle_ps(v45, v45, 135);
    v46.m128_f32[0] = v159;
    v47.m128_f32[0] = v158;
    v48 = _mm_shuffle_ps(v46, v46, 225);
    v48.m128_f32[0] = v160;
    v49 = _mm_shuffle_ps(v48, v48, 135);
    v49.m128_f32[0] = v161;
    *(__m128 *)v122.m256i_i8 = _mm_shuffle_ps(v47, v47, 57);
    v117 = _mm_shuffle_ps(v49, v49, 57);
    v123 = v117;
    *(_OWORD *)v116.m256i_i8 = *(_OWORD *)v122.m256i_i8;
  }
  else
  {
    v50 = *(float *)(v34 + 8);
    v51 = *(float *)(v34 + 16);
    v52 = *(float *)(v34 + 20);
    v53 = *(float *)(v34 + 12);
    v54 = *(float *)(v34 + 24);
    v55 = *(float *)(v34 + 28);
    *(_OWORD *)&v116.m256i_u64[1] = 0LL;
    v56 = (__m128)v115.m128_u64[0];
    v117.m128_u64[1] = 0x3F80000000000000LL;
    v56.m128_f32[0] = v50;
    v116.m256i_i64[3] = 1065353216LL;
    v57 = *(__m128 *)v116.m256i_i8;
    v58 = _mm_shuffle_ps(v56, v56, 225);
    v57.m128_f32[0] = v51;
    v58.m128_f32[0] = v53;
    v59 = _mm_shuffle_ps(v57, v57, 225);
    v59.m128_f32[0] = v52;
    *(__m128 *)v116.m256i_i8 = _mm_shuffle_ps(v59, v59, 225);
    v122 = v116;
    v60 = v117;
    v115 = _mm_shuffle_ps(v58, v58, 225);
    v60.m128_f32[0] = v54;
    v121 = v115;
    v61 = _mm_shuffle_ps(v60, v60, 225);
    v61.m128_f32[0] = v55;
    v117 = _mm_shuffle_ps(v61, v61, 225);
    v123 = v117;
  }
  v62 = v114;
  v124 = (int)v36;
  v115.m128_u64[1] = (unsigned __int64)v36;
  v116.m256i_i8[0] = 1;
  if ( !v114 )
  {
    v115.m128_u64[0] = (unsigned __int64)&v114;
    v20 = CShape::CopyShape((CShape *)&v134, (const struct CMILMatrix *)&v121, (struct CShape **)&v115.m128_u64[1]);
    if ( v116.m256i_i8[0] )
    {
      v63 = v115.m128_u64[0];
      v64 = *(__int64 (__fastcall ****)(_QWORD, __int64))v115.m128_u64[0];
      *(_QWORD *)v115.m128_u64[0] = v115.m128_u64[1];
      if ( v64 )
        std::default_delete<CShape>::operator()(v63, v64);
    }
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v63, 0LL, 0, v20, 0x60u, 0LL);
      CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v134);
      goto LABEL_91;
    }
    goto LABEL_76;
  }
  v155 = v36;
  v115.m128_u64[0] = (unsigned __int64)&v155;
  v65 = CShape::TryOptimizedCombinePaths(
          v114,
          v35,
          (CShape *)&v134,
          (__int64)&v121,
          1,
          (struct CShape **)&v115.m128_u64[1]);
  v20 = v65;
  if ( v65 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v65, 0x188u, 0LL);
  }
  else if ( !v115.m128_u64[1] )
  {
    v68 = CShape::D2DCombine(v62, v66, &v134, &v121, 1, &v115.m128_u16[4]);
    v20 = v68;
    if ( v68 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v68, 0x197u, 0LL);
  }
  if ( v116.m256i_i8[0] )
  {
    v67 = v115.m128_u64[0];
    v69 = *(__int64 (__fastcall ****)(_QWORD, __int64))v115.m128_u64[0];
    *(_QWORD *)v115.m128_u64[0] = v115.m128_u64[1];
    if ( v69 )
      std::default_delete<CShape>::operator()(v67, v69);
  }
  if ( v20 >= 0 )
  {
    v70 = v114;
    v71 = v155;
    v155 = 0LL;
    v114 = v71;
    if ( v70 )
    {
      (**(void (__fastcall ***)(CBrushDrawListGenerator *, __int64))v70)(v70, 1LL);
      if ( v155 )
        std::default_delete<CShape>::operator()(v72, (__int64 (__fastcall ***)(_QWORD, __int64))v155);
    }
LABEL_76:
    v73 = lpMem;
    v74 = v137;
    v134 = &CRectanglesShape::`vftable';
    HIDWORD(v139) = 0;
    if ( lpMem != v137 )
    {
      operator delete(lpMem);
      v74 = v137;
      v73 = v137;
      lpMem = v137;
      LODWORD(v139) = v138;
    }
    if ( v141 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v141 + 16LL))(v141);
      v74 = v137;
      v73 = lpMem;
      v141 = 0LL;
    }
    if ( v73 != v74 )
    {
      operator delete(v73);
      lpMem = 0LL;
    }
    v75 = v135;
    if ( v135 )
    {
      v135 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v75 + 16LL))(v75);
    }
    v31 = v118;
    this = (CBrushDrawListGenerator *)&CRectanglesShape::`vftable';
    goto LABEL_85;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v20, 0x6Bu, 0LL);
  if ( v155 )
    std::default_delete<CShape>::operator()(v76, (__int64 (__fastcall ***)(_QWORD, __int64))v155);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v134);
LABEL_91:
  if ( v114 )
    std::default_delete<CShape>::operator()((__int64)this, (__int64 (__fastcall ***)(_QWORD, __int64))v114);
LABEL_94:
  v113 = v30;
  if ( v20 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, v20, 0x241u, 0LL);
    goto LABEL_178;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v30 + 16LL))(v30) )
    goto LABEL_178;
  if ( !*((_BYTE *)a2 + 209) || (v112 = 1, !CShape::IsAxisAlignedRectangle(v30)) )
    v112 = 0;
  v78 = 1;
  v79 = 0LL;
  memset_0(v162, 0, sizeof(v162));
  v80 = 0;
  v81 = 50529027;
  for ( j = 0; j < *((_DWORD *)a2 + 24); ++j )
  {
    v83 = *((_QWORD *)a2 + j + 7);
    if ( v83 )
    {
      if ( v78 && *((_DWORD *)a2 + 49) != 1 && *(_BYTE *)(v83 + 52) && *(_DWORD *)(v83 + 48) != 50529027 )
        v78 = v80;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v83 + 8LL))(*((_QWORD *)a2 + j + 7), 2LL) )
      {
        v84 = &v162[13 * j];
        if ( v112 )
        {
          CSurfaceDrawListBrush::ComputeLocalToSourceTransform((CSurfaceDrawListBrush *)v83, (struct Matrix3x3 *)v84);
          v80 = 0;
        }
        else
        {
          *v84 = *(_DWORD *)(v83 + 8);
          v84[1] = *(_DWORD *)(v83 + 12);
          v84[2] = 0;
          v84[3] = *(_DWORD *)(v83 + 16);
          v84[4] = *(_DWORD *)(v83 + 20);
          v84[5] = 0;
          v84[6] = *(_DWORD *)(v83 + 24);
          v84[7] = *(_DWORD *)(v83 + 28);
          v84[8] = 1065353216;
          if ( Matrix3x3::TryInvert((const struct Matrix3x3 *)v84, (struct Matrix3x3 *)v84) )
          {
            v88 = Matrix3x3::operator*(v86, &v115, v83 + 84);
            *(_OWORD *)v84 = *(_OWORD *)v88;
            *((_OWORD *)v84 + 1) = *(_OWORD *)(v88 + 16);
            v87 = *(_DWORD *)(v88 + 32);
          }
          else
          {
            *(_OWORD *)v84 = _xmm;
            v116.m256i_i32[4] = 1065353216;
            v87 = 1065353216;
            *((_OWORD *)v84 + 1) = _xmm;
          }
          v84[8] = v87;
        }
        v89 = *((_DWORD *)a2 + 30);
        if ( _bittest(&v89, j) )
        {
          v90 = Matrix3x3::operator*((char *)a2 + 160, &v115, v84);
          *(_OWORD *)v84 = *(_OWORD *)v90;
          *((_OWORD *)v84 + 1) = *(_OWORD *)(v90 + 16);
          v84[8] = *(_DWORD *)(v90 + 32);
        }
        else if ( !v79
               && *(_BYTE *)(v83 + 146)
               && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v83 + 8), v85) )
        {
          v79 = &v119;
          v91 = (__m128)*(unsigned int *)(v83 + 136);
          v92 = (__m128)*(unsigned int *)(v83 + 140);
          v92.m128_f32[0] = (float)((float)(v92.m128_f32[0] * *(float *)(v83 + 16))
                                  + (float)(*(float *)(v83 + 136) * *(float *)(v83 + 8)))
                          + *(float *)(v83 + 24);
          v91.m128_f32[0] = (float)((float)(v91.m128_f32[0] * *(float *)(v83 + 12))
                                  + (float)(*(float *)(v83 + 140) * *(float *)(v83 + 20)))
                          + *(float *)(v83 + 28);
          v119 = _mm_unpacklo_ps(v92, v91).m128_u64[0];
        }
        if ( *(_BYTE *)(v83 + 144) )
          *(_OWORD *)(v84 + 9) = _xmm;
        else
          *(_OWORD *)(v84 + 9) = *(_OWORD *)(v83 + 120);
      }
      else
      {
        v80 = 0;
      }
    }
  }
  v93 = 6;
  v115 = 0uLL;
  *(_OWORD *)v116.m256i_i8 = 0uLL;
  v142 = v145;
  v143 = v145;
  v144 = &v146;
  v146 = v149;
  v147 = v149;
  v148 = &v150;
  v150 = v153;
  v151 = v153;
  v152 = &v154;
  v94 = *(_QWORD *)v113;
  v116.m256i_i8[8] = 6;
  if ( !(*(unsigned __int8 (__fastcall **)(CShape *, int *))(v94 + 40))(v113, &v118) || v118 != 1 )
  {
    v93 = 7;
    v116.m256i_i8[8] = 7;
    v115.m128_u64[0] = (unsigned __int64)v113;
    if ( v78 && (!*((_BYTE *)a2 + 208) || !*((_QWORD *)a2 + 1) && !*((_QWORD *)a2 + 3)) )
      goto LABEL_142;
    v98 = *((unsigned int *)a2 + 24);
    this = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56);
    *(_QWORD *)&v133[0] = v98;
    *((_QWORD *)&v133[0] + 1) = (char *)a2 + 56;
    if ( a2 != (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL || !v98 )
    {
      CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        *((_DWORD *)a2 + 49),
        (unsigned int)v133,
        *((_DWORD *)a2 + 30),
        (_DWORD)a2 + 124,
        (__int64)&v142);
      v115.m128_u64[1] = (unsigned __int64)&v142;
      goto LABEL_142;
    }
    goto LABEL_181;
  }
  v95 = (*(__int64 (__fastcall **)(CShape *, _OWORD *, _QWORD))(*(_QWORD *)v113 + 32LL))(v113, v133, 0LL);
  v20 = v95;
  if ( v95 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v96, 0LL, 0, v95, 0x29Bu, 0LL);
    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v142);
  }
  else
  {
    v115 = (__m128)v133[0];
    if ( v78 )
    {
      if ( *((_DWORD *)a2 + 49) == 1 )
        v81 = 0;
      v116.m256i_i32[0] = v81;
    }
    else
    {
      v97 = (CBrushDrawListGenerator *)*((unsigned int *)a2 + 24);
      v155 = v97;
      v156 = (char *)a2 + 56;
      if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL && v97 )
      {
        gsl::details::terminate((struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56));
        JUMPOUT(0x1800954DALL);
      }
      CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(
        (__int64 *)&v155,
        (const struct D2D_MATRIX_3X2_F *)&v115,
        &v116);
      v93 = v116.m256i_i8[8];
    }
LABEL_142:
    *(_QWORD *)&v133[0] = *((unsigned int *)a2 + 25);
    *((_QWORD *)&v133[0] + 1) = v162;
    v127 = 0LL;
    v128 = 0;
    v99 = *((_BYTE *)v120 + 76);
    v129 = 0;
    v130 = 0;
    v132 = v133[0];
    if ( v99 )
    {
      v133[0] = *(_OWORD *)((char *)v120 + 20);
    }
    else
    {
      HIDWORD(v133[0]) = *((_DWORD *)v120 + 8);
      *(float *)&v100 = *((float *)v133 + 3) * *((float *)v120 + 6);
      *(float *)&v101 = *((float *)v133 + 3) * *((float *)v120 + 7);
      *(float *)v133 = *((float *)v133 + 3) * *((float *)v120 + 5);
      *(_QWORD *)((char *)v133 + 4) = __PAIR64__(v101, v100);
    }
    v126 = v99;
    v102 = (CDrawListEntryBuilder *)*((_QWORD *)a2 + 13);
    v20 = 0;
    v131 = v79;
    v125 = v133[0];
    if ( ((v93 & 1) != 0 || v115.m128_f32[2] > v115.m128_f32[0] && v115.m128_f32[3] > v115.m128_f32[1])
      && ((v93 & 2) != 0 || (v93 & 4) != 0) )
    {
      if ( v112 )
      {
        inserted = CDrawListEntryBuilder::InsertWARP(
                     v102,
                     (const struct PrimitiveGeometryDesc *)&v115,
                     (const struct PrimitiveVertexAttributesDesc *)&v125,
                     0LL);
        v20 = inserted;
        if ( inserted < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v102, 0LL, 0, inserted, 0x7Bu, 0LL);
      }
      else
      {
        v133[0] = v115;
        v133[1] = *(_OWORD *)v116.m256i_i8;
        v104 = CDrawListEntryBuilder::InsertHW((__int64)v102, (__int64)v133, (__int64)&v125, 0LL);
        v20 = v104;
        if ( v104 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast((__int64)v102, 0LL, 0, v104, 0x7Fu, 0LL);
      }
    }
    if ( v20 >= 0 )
    {
      v105 = v150;
      if ( (v151 - v150) >> 3 )
      {
        detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::clear_region(&v150);
        v105 = v150;
      }
      v150 = 0LL;
      if ( v105 == v153 )
        v105 = 0LL;
      if ( v105 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v105);
      }
      v107 = v146;
      if ( (v147 - v146) >> 3 )
      {
        detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
          &v146,
          0LL);
        v107 = v146;
      }
      v146 = 0LL;
      if ( v107 == v149 )
        v107 = 0LL;
      if ( v107 )
      {
        v108 = GetProcessHeap();
        HeapFree(v108, 0, v107);
      }
      v109 = v142;
      if ( (v143 - v142) >> 2 )
      {
        detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v142);
        v109 = v142;
      }
      v142 = 0LL;
      if ( v109 == v145 )
        v109 = 0LL;
      if ( v109 )
      {
        v110 = GetProcessHeap();
        HeapFree(v110, 0, v109);
      }
      if ( v113 )
        (**(void (__fastcall ***)(CShape *, __int64))v113)(v113, 1LL);
      return (unsigned int)v20;
    }
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v102, 0LL, 0, v20, 0x2D0u, 0LL);
    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v142);
  }
LABEL_178:
  if ( v113 )
    std::default_delete<CShape>::operator()(v77, (__int64 (__fastcall ***)(_QWORD, __int64))v113);
  return (unsigned int)v20;
}
