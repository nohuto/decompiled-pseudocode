/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800690F0
 * Callers:
 *     _lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::operator() @ 0x1800737A4 (_lambda_67f2f78c20657d8fe4bb762e6db5dd1d_--operator().c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000FF04 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x180010E0C (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18001113C (-Is2DAxisAlignedPreserving@D2DMatrixHelper@@YA_NAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800529BC (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800677D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180085E5C (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800880B4 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD330 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800AEEF0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x1800B9560 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x1800BA038 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C57A0 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801AF2B8 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801AF5D8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFA4C (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFB18 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFBBC (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFC94 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFD64 (-clear_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expa.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z @ 0x1801B08D0 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAXPEAVMatrix3x3@@@Z.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x1801B196C (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18024B674 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // r14
  CBrushDrawListGenerator *v5; // r13
  bool v6; // di
  unsigned int v7; // r8d
  __int64 v8; // r15
  __int64 (__fastcall ***v9)(_QWORD, __int64); // rbx
  unsigned int v10; // xmm0_4
  __int32 v11; // xmm1_4
  bool v12; // cf
  char v13; // al
  int v14; // edx
  BOOL v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // edi
  __int64 v20; // rbx
  int v21; // eax
  CBrushDrawListGenerator *v22; // rdi
  __int128 v23; // xmm1
  CBrushDrawListGenerator *v24; // rcx
  _QWORD *v25; // rax
  bool v26; // al
  __int64 v27; // r8
  __int64 v28; // r8
  unsigned __int64 v29; // r13
  char *v30; // rax
  CShape *v31; // rbx
  int v32; // r12d
  signed int v33; // r15d
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 (__fastcall ***v36)(_QWORD, __int64); // r9
  float v37; // xmm1_4
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm2_4
  float v41; // xmm5_4
  float v42; // xmm6_4
  __m128 v43; // xmm0
  __m128 v44; // xmm1
  __m128 v45; // xmm0
  __m128 v46; // xmm1
  __m128 v47; // xmm1
  __m128 v48; // xmm1
  CBrushDrawListGenerator *v49; // r12
  __int64 v50; // rcx
  __int64 (__fastcall ***v51)(_QWORD, __int64); // rdx
  _BYTE *v52; // rcx
  _BYTE *v53; // rdx
  __int64 v54; // rcx
  bool v55; // r12
  char v56; // r15
  unsigned __int64 *v57; // r13
  unsigned int i; // edi
  __int64 v59; // rbx
  _DWORD *v60; // r14
  int v61; // eax
  int v62; // eax
  const struct D2D_MATRIX_3X2_F *v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rax
  int v66; // eax
  int v67; // eax
  __int128 v68; // xmm0
  char v69; // bl
  __int64 v70; // rax
  __int64 v71; // rdx
  int v72; // eax
  unsigned int v73; // ecx
  char v74; // al
  unsigned int v75; // xmm1_4
  unsigned int v76; // xmm0_4
  CDrawListEntryBuilder *v77; // rcx
  int v78; // eax
  _BYTE *v79; // rbx
  _BYTE *v80; // rbx
  _BYTE *v81; // rbx
  __int64 v82; // r8
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 (__fastcall ***v87)(_QWORD, __int64); // rdx
  CBrushDrawListGenerator *v88; // rcx
  CBrushDrawListGenerator *v89; // rax
  __int64 v90; // rcx
  __int64 (__fastcall ***v91)(_QWORD, __int64); // rax
  unsigned int v92; // xmm1_4
  __int32 v93; // xmm0_4
  unsigned int v94; // xmm1_4
  unsigned int v95; // xmm0_4
  __m128 v96; // xmm0
  __m128 v97; // xmm1
  __m128 v98; // xmm0
  __m128 v99; // xmm0
  __m128 v100; // xmm1
  __m128 v101; // xmm0
  __m128 v102; // xmm1
  __m128 v103; // xmm0
  __m128 v104; // xmm0
  int v105; // eax
  __int64 v106; // rcx
  __int64 v107; // rax
  __m128 v108; // xmm3
  __m128 v109; // xmm2
  CShape *v110; // rdx
  __int64 v111; // rax
  int inserted; // eax
  HANDLE ProcessHeap; // rax
  HANDLE v114; // rax
  HANDLE v115; // rax
  CShape *v116; // [rsp+38h] [rbp-D0h]
  CBrushDrawListGenerator *v117; // [rsp+40h] [rbp-C8h] BYREF
  int v118; // [rsp+48h] [rbp-C0h] BYREF
  __m128 v119; // [rsp+50h] [rbp-B8h] BYREF
  struct CShape *v120[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v121; // [rsp+70h] [rbp-98h]
  __m128 v122; // [rsp+80h] [rbp-88h]
  __m128 v123; // [rsp+98h] [rbp-70h] BYREF
  __m256i v124; // [rsp+A8h] [rbp-60h]
  __m128 v125; // [rsp+C8h] [rbp-40h]
  unsigned __int64 v126; // [rsp+E0h] [rbp-28h] BYREF
  CBrushDrawListGenerator *v127; // [rsp+E8h] [rbp-20h]
  __m128 v128; // [rsp+F8h] [rbp-10h] BYREF
  __m256i v129; // [rsp+108h] [rbp+0h]
  __m128 v130; // [rsp+128h] [rbp+20h]
  int v131; // [rsp+138h] [rbp+30h]
  __int128 v132; // [rsp+148h] [rbp+40h] BYREF
  char v133; // [rsp+158h] [rbp+50h]
  __int64 v134; // [rsp+159h] [rbp+51h]
  int v135; // [rsp+161h] [rbp+59h]
  __int16 v136; // [rsp+165h] [rbp+5Dh]
  char v137; // [rsp+167h] [rbp+5Fh]
  unsigned __int64 *v138; // [rsp+168h] [rbp+60h]
  __int128 v139; // [rsp+170h] [rbp+68h]
  _OWORD v140[2]; // [rsp+188h] [rbp+80h] BYREF
  void **v141; // [rsp+1A8h] [rbp+A0h] BYREF
  unsigned int v142[2]; // [rsp+1B0h] [rbp+A8h]
  void *v143; // [rsp+1B8h] [rbp+B0h] BYREF
  _BYTE *v144; // [rsp+1C0h] [rbp+B8h]
  int v145; // [rsp+1C8h] [rbp+C0h]
  __int64 v146; // [rsp+1CCh] [rbp+C4h]
  _BYTE v147[16]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v148; // [rsp+1E8h] [rbp+E0h]
  LPVOID v149; // [rsp+1F8h] [rbp+F0h] BYREF
  _BYTE *v150; // [rsp+200h] [rbp+F8h]
  LPVOID *v151; // [rsp+208h] [rbp+100h]
  _BYTE v152[64]; // [rsp+210h] [rbp+108h] BYREF
  LPVOID v153; // [rsp+250h] [rbp+148h] BYREF
  _BYTE *v154; // [rsp+258h] [rbp+150h]
  LPVOID *p_lpMem; // [rsp+260h] [rbp+158h]
  _BYTE v156[128]; // [rsp+268h] [rbp+160h] BYREF
  LPVOID lpMem; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE *v158; // [rsp+2F0h] [rbp+1E8h]
  char *v159; // [rsp+2F8h] [rbp+1F0h]
  _BYTE v160[128]; // [rsp+300h] [rbp+1F8h] BYREF
  char v161; // [rsp+380h] [rbp+278h] BYREF
  __int64 v162[4]; // [rsp+388h] [rbp+280h] BYREF
  _DWORD v163[52]; // [rsp+3A8h] [rbp+2A0h] BYREF

  v2 = *((_QWORD *)a2 + 13);
  v3 = 0LL;
  v127 = this;
  v5 = this;
  if ( !*(_QWORD *)(v2 + 32) )
  {
    v6 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 14) + 8LL))(*((_QWORD *)a2 + 14)) == 1
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)v5 + 8) - 1.0)) & _xmm) < 0.0000011920929;
    v7 = *((_DWORD *)a2 + 25);
    if ( v7 )
    {
      do
      {
        v8 = (unsigned int)v3;
        v9 = (__int64 (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + (unsigned int)v3 + 7);
        if ( v9 )
        {
          if ( (unsigned __int8)(*v9)[1](*((_QWORD *)a2 + (unsigned int)v3 + 7), 2LL) )
          {
            v6 = v6
              && (*((_BYTE *)v9 + 72)
               || (*((unsigned __int8 (__fastcall **)(__int64 (__fastcall **)(_QWORD, __int64)))*v9[7] + 13))(v9[7]));
          }
          else if ( !(unsigned __int8)(*v9)[1](v9, 1LL) )
          {
            v9 = 0LL;
          }
        }
        v7 = *((_DWORD *)a2 + 25);
        LODWORD(v3) = v3 + 1;
        v162[v8] = (__int64)v9;
      }
      while ( (unsigned int)v3 < v7 );
    }
    v3 = 0LL;
    v10 = *((_DWORD *)a2 + 50);
    v11 = *((_DWORD *)a2 + 51);
    v119.m128_i32[3] = *((_DWORD *)a2 + 49);
    v120[0] = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 8);
    BYTE4(v120[1]) = *((_BYTE *)a2 + 210);
    v12 = *((_BYTE *)a2 + 211) != 0;
    v13 = *((_BYTE *)a2 + 208);
    v119.m128_i32[2] = v11;
    *(_WORD *)((char *)&v120[1] + 5) = 0;
    HIBYTE(v120[1]) = 0;
    v119.m128_u64[0] = __PAIR64__(v10, v7);
    v14 = *((_DWORD *)v5 + 4) | (v13 != 0 ? 0x20 : 0) | (v12 ? 0x40 : 0);
    v15 = !*((_BYTE *)a2 + 209) && v6;
    v16 = *((_QWORD *)a2 + 14);
    LODWORD(v120[1]) = v15 | v14;
    *(_QWORD *)&v140[0] = v7;
    *((_QWORD *)&v140[0] + 1) = v162;
    v117 = 0LL;
    v17 = (*(__int64 (__fastcall **)(__int64, _OWORD *, CBrushDrawListGenerator **))(*(_QWORD *)v16 + 24LL))(
            v16,
            v140,
            &v117);
    v19 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x229u, 0LL);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v117);
      return (unsigned int)v19;
    }
    v20 = *((_QWORD *)a2 + 13);
    v21 = 2;
    v22 = v117;
    v23 = *(_OWORD *)v120;
    *(__m128 *)v20 = v119;
    *(_OWORD *)(v20 + 16) = v23;
    if ( *(_DWORD *)v20 > 2u )
      v21 = 4;
    *(_DWORD *)v20 = v21;
    v24 = *(CBrushDrawListGenerator **)(v20 + 32);
    if ( v24 != v22 )
    {
      if ( v22 )
      {
        (**(void (__fastcall ***)(CBrushDrawListGenerator *))v22)(v22);
        v24 = *(CBrushDrawListGenerator **)(v20 + 32);
      }
      *(_QWORD *)(v20 + 32) = v22;
      if ( v24 )
        (*(void (__fastcall **)(CBrushDrawListGenerator *))(*(_QWORD *)v24 + 8LL))(v24);
    }
    *(_DWORD *)(v20 + 2276) = (*(__int64 (__fastcall **)(CBrushDrawListGenerator *))(*(_QWORD *)v22 + 32LL))(v22);
    v25 = *(_QWORD **)(v20 + 16);
    *(_WORD *)(v20 + 2297) = 0;
    if ( !*v25 && !v25[2] || *(_DWORD *)(v20 + 12) == 1 )
      *(_BYTE *)(v20 + 28) = 0;
    v26 = ((*(_BYTE *)(v20 + 24) & 0x20) != 0 || !*v25) && CCommonRegistryData::m_fEnableCpuClipping;
    *(_BYTE *)(v20 + 2296) = v26;
    v27 = (__int64)(*(_QWORD *)(v20 + 200) - *(_QWORD *)(v20 + 192)) >> 4;
    if ( v27 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v20 + 192,
        0LL,
        v27);
    v28 = (__int64)(*(_QWORD *)(v20 + 1192) - *(_QWORD *)(v20 + 1184)) >> 4;
    if ( v28 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v20 + 1184,
        0LL,
        v28);
    if ( (__int64)(*(_QWORD *)(v20 + 2192) - *(_QWORD *)(v20 + 2184)) >> 1 )
      detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
        v20 + 2184,
        0LL);
    *(_DWORD *)(v20 + 2176) = 0;
    *(_DWORD *)(v20 + 2272) = 0;
    this = v117;
    if ( v117 )
    {
      v117 = 0LL;
      (*(void (__fastcall **)(CBrushDrawListGenerator *))(*(_QWORD *)this + 8LL))(this);
    }
  }
  v29 = *((unsigned int *)a2 + 24);
  v30 = (char *)a2 + 56;
  v31 = 0LL;
  if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL && MEMORY[0x28] )
  {
LABEL_168:
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  v32 = *((_DWORD *)a2 + 30);
  v33 = 0;
  v118 = v32;
  v117 = 0LL;
  if ( !v29 )
  {
LABEL_59:
    v31 = v117;
    v19 = 0;
    goto LABEL_60;
  }
  while ( 1 )
  {
    if ( v3 >= v29 )
    {
      ((void (__fastcall *)(CBrushDrawListGenerator *, void **))`gsl::details::get_terminate_handler'::`2'::handler)(
        this,
        &CRectanglesShape::`vftable');
      __debugbreak();
    }
    v34 = *(_QWORD *)&v30[8 * v3];
    if ( v34 )
    {
      if ( *(_BYTE *)(v34 + 52) )
        break;
    }
LABEL_58:
    ++v33;
    ++v3;
    if ( v33 >= (__int64)v29 )
      goto LABEL_59;
    v30 = (char *)a2 + 56;
  }
  v141 = &CRectanglesShape::`vftable';
  *(_QWORD *)v142 = 0LL;
  v143 = v147;
  v148 = 0LL;
  v144 = v147;
  v145 = 1;
  v146 = 1LL;
  v140[0] = *(_OWORD *)(v34 + 32);
  DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(&v143, v140, 1LL);
  v36 = 0LL;
  v12 = _bittest(&v32, v33);
  v131 = 0;
  if ( v12 )
  {
    v92 = *(_DWORD *)(v34 + 12);
    v119.m128_i32[0] = *(_DWORD *)(v34 + 8);
    v93 = *(_DWORD *)(v34 + 16);
    *(unsigned __int64 *)((char *)v119.m128_u64 + 4) = v92;
    v94 = *(_DWORD *)(v34 + 20);
    v119.m128_i32[3] = v93;
    v95 = *(_DWORD *)(v34 + 24);
    v120[0] = (struct CShape *)v94;
    v120[1] = (struct CShape *)__PAIR64__(*(_DWORD *)(v34 + 28), v95);
    v121 = 1065353216;
    Matrix3x3::operator*(&v119, &v123, (char *)a2 + 124);
    v119.m128_i32[2] = (int)v36;
    v96 = v119;
    LODWORD(v120[1]) = (_DWORD)v36;
    v122.m128_i32[2] = (int)v36;
    v96.m128_f32[0] = v123.m128_f32[0];
    *(_OWORD *)&v129.m256i_u64[2] = _xmm;
    v97 = *(__m128 *)v120;
    v98 = _mm_shuffle_ps(v96, v96, 225);
    v98.m128_f32[0] = v123.m128_f32[1];
    v97.m128_f32[0] = v123.m128_f32[3];
    v99 = _mm_shuffle_ps(v98, v98, 135);
    v99.m128_f32[0] = v123.m128_f32[2];
    v100 = _mm_shuffle_ps(v97, v97, 225);
    v100.m128_f32[0] = *(float *)v124.m256i_i32;
    v119 = _mm_shuffle_ps(v99, v99, 57);
    v128 = v119;
    v101 = v122;
    v102 = _mm_shuffle_ps(v100, v100, 135);
    v101.m128_f32[0] = *(float *)&v124.m256i_i32[2];
    v102.m128_f32[0] = *(float *)&v124.m256i_i32[1];
    v103 = _mm_shuffle_ps(v101, v101, 225);
    v103.m128_f32[0] = *(float *)&v124.m256i_i32[3];
    v104 = _mm_shuffle_ps(v103, v103, 135);
    v104.m128_f32[0] = *(float *)&v124.m256i_i32[4];
    *(__m128 *)v129.m256i_i8 = _mm_shuffle_ps(v102, v102, 57);
    v122 = _mm_shuffle_ps(v104, v104, 57);
    v130 = v122;
    *(_OWORD *)v120 = *(_OWORD *)v129.m256i_i8;
  }
  else
  {
    v37 = *(float *)(v34 + 8);
    v38 = *(float *)(v34 + 16);
    v39 = *(float *)(v34 + 20);
    v40 = *(float *)(v34 + 12);
    v41 = *(float *)(v34 + 24);
    v42 = *(float *)(v34 + 28);
    *(_OWORD *)&v124.m256i_u64[1] = 0LL;
    v43 = (__m128)v123.m128_u64[0];
    v125.m128_u64[1] = 0x3F80000000000000LL;
    v43.m128_f32[0] = v37;
    v124.m256i_i64[3] = 1065353216LL;
    v44 = *(__m128 *)v124.m256i_i8;
    v45 = _mm_shuffle_ps(v43, v43, 225);
    v44.m128_f32[0] = v38;
    v45.m128_f32[0] = v40;
    v46 = _mm_shuffle_ps(v44, v44, 225);
    v46.m128_f32[0] = v39;
    *(__m128 *)v124.m256i_i8 = _mm_shuffle_ps(v46, v46, 225);
    v129 = v124;
    v47 = v125;
    v123 = _mm_shuffle_ps(v45, v45, 225);
    v47.m128_f32[0] = v41;
    v128 = v123;
    v48 = _mm_shuffle_ps(v47, v47, 225);
    v48.m128_f32[0] = v42;
    v125 = _mm_shuffle_ps(v48, v48, 225);
    v130 = v125;
  }
  v49 = v117;
  v131 = (int)v36;
  v119.m128_u64[1] = (unsigned __int64)v36;
  LOBYTE(v120[0]) = 1;
  if ( !v117 )
  {
    v119.m128_u64[0] = (unsigned __int64)&v117;
    v19 = CShape::CopyShape((CShape *)&v141, (const struct CMILMatrix *)&v128, (struct CShape **)&v119.m128_u64[1]);
    if ( LOBYTE(v120[0]) )
    {
      v50 = v119.m128_u64[0];
      v51 = *(__int64 (__fastcall ****)(_QWORD, __int64))v119.m128_u64[0];
      *(_QWORD *)v119.m128_u64[0] = v119.m128_u64[1];
      if ( v51 )
        std::default_delete<CShape>::operator()(v50, v51);
    }
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v19, 0x60u, 0LL);
      goto LABEL_147;
    }
    goto LABEL_49;
  }
  v162[0] = (__int64)v36;
  v119.m128_u64[0] = (unsigned __int64)v162;
  v84 = CShape::TryOptimizedCombinePaths(v117, v35, &v141, &v128, 1, &v119.m128_u16[4]);
  v19 = v84;
  if ( v84 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, v84, 0x188u, 0LL);
  }
  else if ( !v119.m128_u64[1] )
  {
    v105 = CShape::D2DCombine(v49, v85, &v141, &v128, 1, &v119.m128_u16[4]);
    v19 = v105;
    if ( v105 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, v105, 0x197u, 0LL);
  }
  if ( LOBYTE(v120[0]) )
  {
    v86 = v119.m128_u64[0];
    v87 = *(__int64 (__fastcall ****)(_QWORD, __int64))v119.m128_u64[0];
    *(_QWORD *)v119.m128_u64[0] = v119.m128_u64[1];
    if ( v87 )
      std::default_delete<CShape>::operator()(v86, v87);
  }
  if ( v19 >= 0 )
  {
    v88 = v117;
    v89 = (CBrushDrawListGenerator *)v162[0];
    v162[0] = 0LL;
    v117 = v89;
    if ( v88 )
    {
      (**(void (__fastcall ***)(CBrushDrawListGenerator *, __int64))v88)(v88, 1LL);
      if ( v162[0] )
        std::default_delete<CShape>::operator()(v90, (__int64 (__fastcall ***)(_QWORD, __int64))v162[0]);
    }
LABEL_49:
    v52 = v143;
    v53 = v144;
    v141 = &CRectanglesShape::`vftable';
    HIDWORD(v146) = 0;
    if ( v143 != v144 )
    {
      operator delete(v143);
      v53 = v144;
      v52 = v144;
      v143 = v144;
      LODWORD(v146) = v145;
    }
    if ( v148 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v148 + 16LL))(v148);
      v53 = v144;
      v52 = v143;
      v148 = 0LL;
    }
    if ( v52 != v53 )
    {
      operator delete(v52);
      v143 = 0LL;
    }
    this = *(CBrushDrawListGenerator **)v142;
    if ( *(_QWORD *)v142 )
    {
      *(_QWORD *)v142 = 0LL;
      (*(void (__fastcall **)(CBrushDrawListGenerator *))(*(_QWORD *)this + 16LL))(this);
    }
    v32 = v118;
    goto LABEL_58;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v86, 0LL, 0, v19, 0x6Bu, 0LL);
  if ( v162[0] )
    std::default_delete<CShape>::operator()(v106, (__int64 (__fastcall ***)(_QWORD, __int64))v162[0]);
LABEL_147:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v141);
  if ( v117 )
    std::default_delete<CShape>::operator()((__int64)this, (__int64 (__fastcall ***)(_QWORD, __int64))v117);
LABEL_60:
  v116 = v31;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v19, 0x23Du, 0LL);
    v110 = v31;
    if ( !v31 )
      return (unsigned int)v19;
    goto LABEL_183;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v31 + 16LL))(v31) )
    goto LABEL_160;
  v55 = *((_BYTE *)a2 + 209) && CShape::IsAxisAlignedRectangle(v31);
  v56 = 1;
  v57 = 0LL;
  memset_0(v163, 0, sizeof(v163));
  for ( i = 0; i < *((_DWORD *)a2 + 24); ++i )
  {
    v59 = *((_QWORD *)a2 + i + 7);
    if ( v59 )
    {
      if ( v56 && *((_DWORD *)a2 + 49) != 1 && *(_BYTE *)(v59 + 52) && *(_DWORD *)(v59 + 48) != 50529027 )
        v56 = 0;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v59 + 8LL))(*((_QWORD *)a2 + i + 7), 2LL) )
      {
        v60 = &v163[13 * i];
        if ( v55 )
        {
          CSurfaceDrawListBrush::ComputeLocalToSourceTransform((CSurfaceDrawListBrush *)v59, (struct Matrix3x3 *)v60);
        }
        else
        {
          *v60 = *(_DWORD *)(v59 + 8);
          v61 = *(_DWORD *)(v59 + 12);
          v60[2] = 0;
          v60[1] = v61;
          v60[3] = *(_DWORD *)(v59 + 16);
          v62 = *(_DWORD *)(v59 + 20);
          v60[5] = 0;
          v60[4] = v62;
          v60[6] = *(_DWORD *)(v59 + 24);
          v60[7] = *(_DWORD *)(v59 + 28);
          v60[8] = 1065353216;
          if ( Matrix3x3::TryInvert((const struct Matrix3x3 *)v60, (struct Matrix3x3 *)v60) )
          {
            v65 = Matrix3x3::operator*(v64, &v123, v59 + 84);
            *(_OWORD *)v60 = *(_OWORD *)v65;
            *((_OWORD *)v60 + 1) = *(_OWORD *)(v65 + 16);
            v66 = *(_DWORD *)(v65 + 32);
          }
          else
          {
            *(_OWORD *)v60 = _xmm;
            v124.m256i_i32[4] = 1065353216;
            v66 = 1065353216;
            *((_OWORD *)v60 + 1) = _xmm;
          }
          v60[8] = v66;
        }
        v67 = *((_DWORD *)a2 + 30);
        if ( _bittest(&v67, i) )
        {
          v107 = Matrix3x3::operator*((char *)a2 + 160, &v123, v60);
          *(_OWORD *)v60 = *(_OWORD *)v107;
          *((_OWORD *)v60 + 1) = *(_OWORD *)(v107 + 16);
          v60[8] = *(_DWORD *)(v107 + 32);
        }
        else if ( !v57
               && *(_BYTE *)(v59 + 145)
               && D2DMatrixHelper::Is2DAxisAlignedPreserving((D2DMatrixHelper *)(v59 + 8), v63) )
        {
          v57 = &v126;
          v108 = (__m128)*(unsigned int *)(v59 + 136);
          v109 = (__m128)*(unsigned int *)(v59 + 140);
          v109.m128_f32[0] = (float)((float)(v109.m128_f32[0] * *(float *)(v59 + 16))
                                   + (float)(*(float *)(v59 + 136) * *(float *)(v59 + 8)))
                           + *(float *)(v59 + 24);
          v108.m128_f32[0] = (float)((float)(v108.m128_f32[0] * *(float *)(v59 + 12))
                                   + (float)(*(float *)(v59 + 140) * *(float *)(v59 + 20)))
                           + *(float *)(v59 + 28);
          v126 = _mm_unpacklo_ps(v109, v108).m128_u64[0];
        }
        if ( *(_BYTE *)(v59 + 144) )
          v68 = _xmm;
        else
          v68 = *(_OWORD *)(v59 + 120);
        *(_OWORD *)(v60 + 9) = v68;
      }
    }
  }
  memset_0(&v119, 0, 0x20uLL);
  v149 = v152;
  v69 = 6;
  v150 = v152;
  v151 = &v153;
  v153 = v156;
  v154 = v156;
  p_lpMem = &lpMem;
  lpMem = v160;
  v158 = v160;
  v159 = &v161;
  v70 = *(_QWORD *)v116;
  LOBYTE(v120[1]) = 6;
  if ( !(*(unsigned __int8 (__fastcall **)(CShape *, int *))(v70 + 40))(v116, &v118) || v118 != 1 )
  {
    v69 = 7;
    LOBYTE(v120[1]) = 7;
    v119.m128_u64[0] = (unsigned __int64)v116;
    if ( v56 && (!*((_BYTE *)a2 + 208) || !*((_QWORD *)a2 + 1) && !*((_QWORD *)a2 + 3)) )
      goto LABEL_86;
    v111 = *((unsigned int *)a2 + 24);
    *(_QWORD *)&v140[0] = v111;
    *((_QWORD *)&v140[0] + 1) = (char *)a2 + 56;
    if ( a2 != (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL || !v111 )
    {
      CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        *((_DWORD *)a2 + 49),
        (unsigned int)v140,
        *((_DWORD *)a2 + 30),
        (_DWORD)a2 + 124,
        (__int64)&v149);
      v119.m128_u64[1] = (unsigned __int64)&v149;
      goto LABEL_86;
    }
    goto LABEL_168;
  }
  v72 = (*(__int64 (__fastcall **)(CShape *, _OWORD *, _QWORD))(*(_QWORD *)v116 + 32LL))(v116, v140, 0LL);
  v19 = v72;
  if ( v72 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0x297u, 0LL);
    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v149);
LABEL_160:
    v110 = v116;
    if ( !v116 )
      return (unsigned int)v19;
LABEL_183:
    std::default_delete<CShape>::operator()(v54, (__int64 (__fastcall ***)(_QWORD, __int64))v110);
    return (unsigned int)v19;
  }
  v119 = (__m128)v140[0];
  if ( v56 )
  {
    if ( *((_DWORD *)a2 + 49) == 1 )
      LODWORD(v120[0]) = 0;
    else
      LODWORD(v120[0]) = 50529027;
  }
  else
  {
    v91 = (__int64 (__fastcall ***)(_QWORD, __int64))*((unsigned int *)a2 + 24);
    v162[0] = (__int64)v91;
    v162[1] = (__int64)a2 + 56;
    if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL && v91 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(v162, (const struct D2D_MATRIX_3X2_F *)&v119, v120);
    v69 = (char)v120[1];
  }
LABEL_86:
  *(_QWORD *)&v140[0] = *((unsigned int *)a2 + 25);
  *((_QWORD *)&v140[0] + 1) = v163;
  v74 = *((_BYTE *)v127 + 76);
  v134 = 0LL;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v139 = v140[0];
  if ( v74 )
  {
    v140[0] = *(_OWORD *)((char *)v127 + 20);
  }
  else
  {
    HIDWORD(v140[0]) = *((_DWORD *)v127 + 8);
    *(float *)&v75 = *((float *)v140 + 3) * *((float *)v127 + 6);
    *(float *)&v76 = *((float *)v140 + 3) * *((float *)v127 + 7);
    *(float *)v140 = *((float *)v140 + 3) * *((float *)v127 + 5);
    *(_QWORD *)((char *)v140 + 4) = __PAIR64__(v76, v75);
  }
  v133 = v74;
  v138 = v57;
  v19 = 0;
  v77 = (CDrawListEntryBuilder *)*((_QWORD *)a2 + 13);
  v132 = v140[0];
  if ( ((v69 & 1) != 0 || v119.m128_f32[2] > v119.m128_f32[0] && v119.m128_f32[3] > v119.m128_f32[1])
    && ((v69 & 2) != 0 || (v69 & 4) != 0) )
  {
    if ( v55 )
    {
      inserted = CDrawListEntryBuilder::InsertWARP(
                   v77,
                   (const struct PrimitiveGeometryDesc *)&v119,
                   (const struct PrimitiveVertexAttributesDesc *)&v132,
                   0LL);
      v19 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v77, 0LL, 0, inserted, 0x7Bu, 0LL);
    }
    else
    {
      v140[0] = v119;
      v140[1] = *(_OWORD *)v120;
      v78 = CDrawListEntryBuilder::InsertHW((__int64)v77, (__int64)v140, (__int64)&v132, 0LL);
      v19 = v78;
      if ( v78 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v77, 0LL, 0, v78, 0x7Fu, 0LL);
    }
  }
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v77, 0LL, 0, v19, 0x2CCu, 0LL);
    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v149);
    v110 = v116;
    if ( !v116 )
      return (unsigned int)v19;
    goto LABEL_183;
  }
  v79 = lpMem;
  if ( (v158 - (_BYTE *)lpMem) >> 3 )
  {
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
    v79 = lpMem;
  }
  lpMem = 0LL;
  if ( v79 != v160 && v79 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v79);
  }
  v80 = v153;
  if ( (v154 - (_BYTE *)v153) >> 3 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      &v153,
      0LL);
    v80 = v153;
  }
  v153 = 0LL;
  if ( v80 != v156 && v80 )
  {
    v114 = GetProcessHeap();
    HeapFree(v114, 0, v80);
  }
  v81 = v149;
  v82 = (v150 - (_BYTE *)v149) >> 2;
  if ( v82 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(
      &v149,
      v71,
      v82);
    v81 = v149;
  }
  v149 = 0LL;
  if ( v81 != v152 && v81 )
  {
    v115 = GetProcessHeap();
    HeapFree(v115, 0, v81);
  }
  if ( v116 )
    (**(void (__fastcall ***)(CShape *, __int64))v116)(v116, 1LL);
  return (unsigned int)v19;
}
