/*
 * XREFs of ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690
 * Callers:
 *     ?GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B404C (-GenerateDrawListWorker@CBrushDrawListGenerator@@CAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800B40E0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 * Callees:
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x18000C9DC (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x18000D0E4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV?$span@PEBVCDrawListBrush@@$0?0@gsl@@AEBUD2D_RECT_F@@PEAW4D2D1_EDGE_FLAGS@@@Z @ 0x18000DD60 (-ProcessBrushClampEdges_Rectangle@CBrushDrawListGenerator@@CAXV-$span@PEBVCDrawListBrush@@$0-0@g.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800307F0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180047930 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800580A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z @ 0x18005A028 (-TryInvert@Matrix3x3@@SA_NAEBV1@PEAV1@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800677FC (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800B6E30 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B765C (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800C1EF4 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?clear_region@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE898 (-clear_region@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail.c)
 *     ?clear_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE968 (-clear_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEA04 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEAD8 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEBAC (-clear_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expa.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ??1CEdgeFlagsMap@@QEAA@XZ @ 0x1801819D4 (--1CEdgeFlagsMap@@QEAA@XZ.c)
 *     ?InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180181CB8 (-InsertWARP@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z @ 0x1801825D8 (-ComputeLocalToSourceTransform@CSurfaceDrawListBrush@@QEBAJPEAVMatrix3x3@@@Z.c)
 *     ?ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V?$span@PEBVCDrawListBrush@@$0?0@gsl@@KAEBVMatrix3x3@@PEAVCEdgeFlagsMap@@@Z @ 0x180183640 (-ProcessBrushClampEdges_Polygon@CBrushDrawListGenerator@@CAXW4D2D1_ANTIALIAS_MODE@@V-$span@PEBVC.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18021D7E0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawListPrimitive(
        CBrushDrawListGenerator *this,
        struct CBrushDrawListGenerator::GenerateDrawListParameters *a2)
{
  __int64 v2; // rax
  bool v5; // si
  unsigned int v6; // edx
  unsigned int i; // edi
  __int64 v8; // r15
  __int64 v9; // rbx
  unsigned int v10; // xmm0_4
  int v11; // xmm1_4
  bool v12; // cf
  char v13; // al
  int v14; // r8d
  int v15; // eax
  __int64 *v16; // rcx
  int v17; // r8d
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // edi
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rdi
  __int128 v25; // xmm1
  __int64 v26; // rcx
  _QWORD *v27; // rax
  bool v28; // al
  __int64 v29; // rcx
  __int64 v30; // r12
  gsl::details *v31; // rcx
  int v32; // edi
  CShape *v33; // r13
  CShape *v34; // rax
  signed int v35; // r15d
  __int64 v36; // rsi
  __int64 v37; // rbx
  int v38; // xmm6_4
  int v39; // xmm7_4
  int v40; // xmm8_4
  int v41; // xmm9_4
  __int64 v42; // rdx
  struct CShape *v43; // r9
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm1_4
  __m128 v49; // xmm0
  __m128 v50; // xmm1
  __m128 v51; // xmm0
  __m128 v52; // xmm0
  __m128 v53; // xmm1
  __m128 v54; // xmm0
  __m128 v55; // xmm1
  __m128 v56; // xmm0
  __m128 v57; // xmm0
  float v58; // xmm1_4
  float v59; // xmm3_4
  float v60; // xmm4_4
  float v61; // xmm2_4
  float v62; // xmm5_4
  float v63; // xmm6_4
  __m128 v64; // xmm0
  __m128 v65; // xmm1
  __m128 v66; // xmm0
  __m128 v67; // xmm1
  __m128 v68; // xmm1
  __m128 v69; // xmm1
  CShape *v70; // rbx
  __int64 v71; // rcx
  CShape *v72; // rdx
  int v73; // eax
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // eax
  struct CShape *v77; // rdx
  CShape *v78; // rcx
  CShape *v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rcx
  __int64 v82; // rcx
  bool v83; // di
  __int64 v84; // rcx
  char v85; // r15
  char v86; // r9
  unsigned int j; // r12d
  __int64 v88; // rsi
  unsigned int *v89; // rbx
  int v90; // eax
  unsigned int v91; // ecx
  __m128 v92; // xmm1
  float v93; // xmm6_4
  float v94; // xmm5_4
  __m128 v95; // xmm4
  float v96; // xmm14_4
  float v97; // xmm15_4
  float v98; // xmm11_4
  float v99; // xmm8_4
  float v100; // xmm12_4
  float v101; // xmm9_4
  float v102; // xmm7_4
  float v103; // xmm10_4
  float v104; // xmm0_4
  float v105; // xmm2_4
  float v106; // xmm1_4
  float v107; // xmm3_4
  float v108; // xmm6_4
  float v109; // xmm2_4
  float v110; // xmm6_4
  float v111; // xmm3_4
  __m128 v112; // xmm4
  __m128 v113; // xmm6
  float v114; // xmm13_4
  float v115; // xmm2_4
  float v116; // xmm3_4
  __m128 v117; // xmm1
  __m128 v118; // xmm1
  float v119; // xmm0_4
  __m128 v120; // xmm1
  __m128 v121; // xmm1
  __m128 v122; // xmm1
  __m128 v123; // xmm1
  float v124; // eax
  int v125; // eax
  float *v126; // rax
  __int8 v127; // bl
  __int64 (__fastcall **v128)(_QWORD, __int64); // rax
  __int64 v129; // rdx
  int v130; // eax
  unsigned int v131; // ecx
  __int32 v132; // eax
  __int64 v133; // rax
  __int64 v134; // rax
  int v135; // r8d
  int v136; // ecx
  char v137; // cl
  float *v138; // rax
  float v139; // xmm1_4
  float v140; // xmm0_4
  CDrawListEntryBuilder *v141; // rcx
  int inserted; // eax
  int v143; // eax
  _BYTE *v144; // r8
  _BYTE *v145; // r8
  _BYTE *v146; // r8
  bool v148; // [rsp+38h] [rbp-D0h]
  int v149; // [rsp+3Ch] [rbp-CCh]
  float v150; // [rsp+3Ch] [rbp-CCh]
  CShape *v151; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v152; // [rsp+48h] [rbp-C0h] BYREF
  struct CShape *v153; // [rsp+50h] [rbp-B8h] BYREF
  __m256i v154; // [rsp+58h] [rbp-B0h] BYREF
  float v155[8]; // [rsp+78h] [rbp-90h] BYREF
  float v156; // [rsp+98h] [rbp-70h]
  int v157; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v158; // [rsp+A8h] [rbp-60h]
  __int128 v159; // [rsp+B8h] [rbp-50h]
  struct CShape **v160; // [rsp+C8h] [rbp-40h]
  struct CShape *v161; // [rsp+D0h] [rbp-38h] BYREF
  char v162; // [rsp+D8h] [rbp-30h]
  __m128 v163; // [rsp+E8h] [rbp-20h]
  CShape **v164; // [rsp+F8h] [rbp-10h]
  struct CShape *v165; // [rsp+100h] [rbp-8h] BYREF
  char v166; // [rsp+108h] [rbp+0h]
  float v167[10]; // [rsp+110h] [rbp+8h] BYREF
  CBrushDrawListGenerator *v168; // [rsp+138h] [rbp+30h]
  __m128 v169; // [rsp+148h] [rbp+40h] BYREF
  __m128 v170; // [rsp+158h] [rbp+50h]
  __m256i v171; // [rsp+168h] [rbp+60h]
  __m128 v172; // [rsp+188h] [rbp+80h]
  __m128 v173; // [rsp+19Ch] [rbp+94h]
  __m128 v174; // [rsp+1ACh] [rbp+A4h]
  __m128 v175; // [rsp+1CCh] [rbp+C4h]
  __m128 v176; // [rsp+1E8h] [rbp+E0h] BYREF
  __m256i v177; // [rsp+1F8h] [rbp+F0h]
  __m128 v178; // [rsp+218h] [rbp+110h]
  int v179; // [rsp+228h] [rbp+120h]
  __int128 v180; // [rsp+238h] [rbp+130h]
  __int128 v181; // [rsp+248h] [rbp+140h]
  __int128 v182; // [rsp+258h] [rbp+150h]
  __int128 v183; // [rsp+278h] [rbp+170h] BYREF
  __int128 v184; // [rsp+288h] [rbp+180h] BYREF
  __m256i v185; // [rsp+298h] [rbp+190h] BYREF
  float v186[12]; // [rsp+2B8h] [rbp+1B0h] BYREF
  void **v187; // [rsp+2E8h] [rbp+1E0h] BYREF
  __int64 v188; // [rsp+2F0h] [rbp+1E8h]
  void *v189; // [rsp+2F8h] [rbp+1F0h] BYREF
  _BYTE *v190; // [rsp+300h] [rbp+1F8h]
  int v191; // [rsp+308h] [rbp+200h]
  __int64 v192; // [rsp+30Ch] [rbp+204h]
  _BYTE v193[16]; // [rsp+318h] [rbp+210h] BYREF
  __int64 v194; // [rsp+328h] [rbp+220h]
  float v195[3]; // [rsp+338h] [rbp+230h] BYREF
  float v196; // [rsp+344h] [rbp+23Ch]
  __int128 v197; // [rsp+348h] [rbp+240h] BYREF
  _DWORD v198[4]; // [rsp+358h] [rbp+250h] BYREF
  __int128 v199; // [rsp+368h] [rbp+260h] BYREF
  __int64 v200; // [rsp+378h] [rbp+270h]
  __int64 v201; // [rsp+380h] [rbp+278h]
  __int128 v202; // [rsp+388h] [rbp+280h]
  __int128 v203; // [rsp+398h] [rbp+290h] BYREF
  _BYTE *v204; // [rsp+3A8h] [rbp+2A0h] BYREF
  _BYTE *v205; // [rsp+3B0h] [rbp+2A8h]
  _BYTE **v206; // [rsp+3B8h] [rbp+2B0h]
  _BYTE v207[64]; // [rsp+3C0h] [rbp+2B8h] BYREF
  _BYTE *v208; // [rsp+400h] [rbp+2F8h] BYREF
  _BYTE *v209; // [rsp+408h] [rbp+300h]
  _BYTE **v210; // [rsp+410h] [rbp+308h]
  _BYTE v211[128]; // [rsp+418h] [rbp+310h] BYREF
  _BYTE *v212; // [rsp+498h] [rbp+390h] BYREF
  _BYTE *v213; // [rsp+4A0h] [rbp+398h]
  char *v214; // [rsp+4A8h] [rbp+3A0h]
  _BYTE v215[128]; // [rsp+4B0h] [rbp+3A8h] BYREF
  char v216; // [rsp+530h] [rbp+428h] BYREF
  _QWORD v217[4]; // [rsp+538h] [rbp+430h] BYREF
  _DWORD v218[52]; // [rsp+558h] [rbp+450h] BYREF

  v2 = *((_QWORD *)a2 + 13);
  v168 = this;
  if ( !*(_QWORD *)(v2 + 32) )
  {
    v5 = (*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 14) + 8LL))(*((_QWORD *)a2 + 14)) == 1
      && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 8) - 1.0)) & _xmm) < 0.0000011920929;
    v6 = *((_DWORD *)a2 + 25);
    for ( i = 0; i < v6; v217[v8] = v9 )
    {
      v8 = i;
      v9 = *((_QWORD *)a2 + i + 7);
      if ( v9 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)a2 + i + 7), 2LL) )
        {
          v5 = v5
            && (*(_BYTE *)(v9 + 72)
             || (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 56) + 104LL))(*(_QWORD *)(v9 + 56)));
        }
        else if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL) )
        {
          v9 = 0LL;
        }
      }
      v6 = *((_DWORD *)a2 + 25);
      ++i;
    }
    v10 = *((_DWORD *)a2 + 50);
    v11 = *((_DWORD *)a2 + 51);
    v158 = 0uLL;
    HIDWORD(v158) = *((_DWORD *)a2 + 49);
    v159 = (unsigned __int64)a2 + 8;
    BYTE12(v159) = *((_BYTE *)a2 + 210);
    v12 = *((_BYTE *)a2 + 211) != 0;
    v13 = *((_BYTE *)a2 + 208);
    DWORD2(v158) = v11;
    *(_QWORD *)&v158 = __PAIR64__(v10, v6);
    v14 = *((_DWORD *)this + 4) | (v13 != 0 ? 0x20 : 0) | (v12 ? 0x40 : 0);
    if ( *((_BYTE *)a2 + 209) || (v15 = 1, !v5) )
      v15 = 0;
    v16 = (__int64 *)*((_QWORD *)a2 + 14);
    v17 = v15 | v14;
    v163.m128_u64[0] = v6;
    v163.m128_u64[1] = (unsigned __int64)v217;
    v152 = 0LL;
    v18 = *v16;
    DWORD2(v159) = v17;
    v169 = v163;
    v19 = (*(__int64 (__fastcall **)(__int64 *, __m128 *, __int64 *))(v18 + 24))(v16, &v169, &v152);
    v21 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x229u);
      Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease(&v152);
      return (unsigned int)v21;
    }
    v22 = *((_QWORD *)a2 + 13);
    v23 = 2;
    v24 = v152;
    v25 = v159;
    *(_OWORD *)v22 = v158;
    *(_OWORD *)(v22 + 16) = v25;
    if ( *(_DWORD *)v22 > 2u )
      v23 = 4;
    *(_DWORD *)v22 = v23;
    v26 = *(_QWORD *)(v22 + 32);
    if ( v26 != v24 )
    {
      if ( v24 )
      {
        (**(void (__fastcall ***)(__int64))v24)(v24);
        v26 = *(_QWORD *)(v22 + 32);
      }
      *(_QWORD *)(v22 + 32) = v24;
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 8LL))(v26);
    }
    *(_DWORD *)(v22 + 2276) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v24 + 32LL))(v24);
    v27 = *(_QWORD **)(v22 + 16);
    *(_BYTE *)(v22 + 2289) = 0;
    if ( !*v27 && !v27[2] || *(_DWORD *)(v22 + 12) == 1 )
      *(_BYTE *)(v22 + 28) = 0;
    v28 = ((*(_BYTE *)(v22 + 24) & 0x20) != 0 || !*v27) && CCommonRegistryData::m_fEnableCpuClipping != 0;
    *(_BYTE *)(v22 + 2288) = v28;
    if ( (__int64)(*(_QWORD *)(v22 + 200) - *(_QWORD *)(v22 + 192)) >> 4 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v22 + 192,
        0LL);
    if ( (__int64)(*(_QWORD *)(v22 + 1192) - *(_QWORD *)(v22 + 1184)) >> 4 )
      detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
        v22 + 1184,
        0LL);
    if ( (__int64)(*(_QWORD *)(v22 + 2192) - *(_QWORD *)(v22 + 2184)) >> 1 )
      detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::clear_region(
        v22 + 2184,
        0LL);
    *(_DWORD *)(v22 + 2176) = 0;
    *(_DWORD *)(v22 + 2272) = 0;
    v29 = v152;
    if ( v152 )
    {
      v152 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
    }
  }
  v30 = *((unsigned int *)a2 + 24);
  v31 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56);
  if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL && MEMORY[0x28] )
  {
LABEL_174:
    gsl::details::terminate(v31);
    __debugbreak();
  }
  v32 = *((_DWORD *)a2 + 30);
  v33 = 0LL;
  v149 = v32;
  v34 = 0LL;
  v151 = 0LL;
  v35 = 0;
  if ( !v30 )
  {
LABEL_85:
    v33 = v34;
    v21 = 0;
    goto LABEL_86;
  }
  v36 = 0LL;
  while ( 1 )
  {
    if ( v36 < 0 || v36 >= v30 )
    {
      gsl::details::terminate(v31);
      __debugbreak();
    }
    _mm_lfence();
    v37 = *((_QWORD *)v31 + v36);
    if ( !v37 || !*(_BYTE *)(v37 + 52) )
      goto LABEL_83;
    v187 = &CRectanglesShape::`vftable';
    v188 = 0LL;
    v189 = v193;
    v192 = 1LL;
    v194 = 0LL;
    v190 = v193;
    v191 = 1;
    v38 = *(_DWORD *)(v37 + 32);
    v39 = *(_DWORD *)(v37 + 36);
    v40 = *(_DWORD *)(v37 + 40);
    v41 = *(_DWORD *)(v37 + 44);
    DynArrayImpl<0>::ShrinkToSize((__int64)&v189, 0x10u);
    if ( v194 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v194 + 16LL))(v194);
      v194 = 0LL;
    }
    v198[0] = v38;
    v198[1] = v39;
    v198[2] = v40;
    v198[3] = v41;
    DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
      (__int64)&v189,
      v198,
      1u);
    v43 = 0LL;
    v12 = _bittest(&v32, v35);
    v179 = 0;
    if ( v12 )
    {
      v44 = *(float *)(v37 + 12);
      v167[0] = *(float *)(v37 + 8);
      v45 = *(float *)(v37 + 16);
      v167[1] = v44;
      v46 = *(float *)(v37 + 20);
      v167[3] = v45;
      v47 = *(float *)(v37 + 24);
      v167[4] = v46;
      v48 = *(float *)(v37 + 28);
      v167[6] = v47;
      v167[7] = v48;
      v167[2] = 0.0;
      v167[5] = 0.0;
      v167[8] = 1.0;
      Matrix3x3::operator*(v167, v155, (float *)a2 + 31);
      v173.m128_i32[2] = (int)v43;
      v49 = v173;
      v174.m128_i32[2] = (int)v43;
      v175.m128_i32[2] = (int)v43;
      v49.m128_f32[0] = v155[0];
      *(_OWORD *)&v177.m256i_u64[2] = _xmm;
      v50 = v174;
      v51 = _mm_shuffle_ps(v49, v49, 225);
      v51.m128_f32[0] = v155[1];
      v50.m128_f32[0] = v155[3];
      v52 = _mm_shuffle_ps(v51, v51, 135);
      v52.m128_f32[0] = v155[2];
      v53 = _mm_shuffle_ps(v50, v50, 225);
      v53.m128_f32[0] = v155[4];
      v173 = _mm_shuffle_ps(v52, v52, 57);
      v176 = v173;
      v54 = v175;
      v55 = _mm_shuffle_ps(v53, v53, 135);
      v54.m128_f32[0] = v155[6];
      v55.m128_f32[0] = v155[5];
      v56 = _mm_shuffle_ps(v54, v54, 225);
      v56.m128_f32[0] = v155[7];
      v57 = _mm_shuffle_ps(v56, v56, 135);
      v57.m128_f32[0] = v156;
      *(__m128 *)v177.m256i_i8 = _mm_shuffle_ps(v55, v55, 57);
      v175 = _mm_shuffle_ps(v57, v57, 57);
      v178 = v175;
      v174 = *(__m128 *)v177.m256i_i8;
    }
    else
    {
      v58 = *(float *)(v37 + 8);
      v59 = *(float *)(v37 + 16);
      v60 = *(float *)(v37 + 20);
      v61 = *(float *)(v37 + 12);
      v62 = *(float *)(v37 + 24);
      v63 = *(float *)(v37 + 28);
      *(_OWORD *)&v171.m256i_u64[1] = 0LL;
      v64 = (__m128)v170.m128_u64[0];
      v172.m128_u64[1] = 0x3F80000000000000LL;
      v64.m128_f32[0] = v58;
      v171.m256i_i64[3] = 1065353216LL;
      v65 = *(__m128 *)v171.m256i_i8;
      v66 = _mm_shuffle_ps(v64, v64, 225);
      v65.m128_f32[0] = v59;
      v66.m128_f32[0] = v61;
      v67 = _mm_shuffle_ps(v65, v65, 225);
      v67.m128_f32[0] = v60;
      *(__m128 *)v171.m256i_i8 = _mm_shuffle_ps(v67, v67, 225);
      v177 = v171;
      v68 = v172;
      v170 = _mm_shuffle_ps(v66, v66, 225);
      v68.m128_f32[0] = v62;
      v176 = v170;
      v69 = _mm_shuffle_ps(v68, v68, 225);
      v69.m128_f32[0] = v63;
      v172 = _mm_shuffle_ps(v69, v69, 225);
      v178 = v172;
    }
    v70 = v151;
    v179 = (int)v43;
    if ( !v151 )
    {
      v165 = v43;
      v164 = &v151;
      v166 = 1;
      v21 = CShape::CopyShape((CShape *)&v187, (const struct CMILMatrix *)&v176, &v165);
      if ( v166 )
      {
        v71 = (__int64)v164;
        v72 = *v164;
        *v164 = v165;
        if ( v72 )
          std::default_delete<CShape>::operator()(v71, (__int64 (__fastcall ***)(_QWORD, __int64))v72);
      }
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v71, 0LL, 0, v21, 0x60u);
        goto LABEL_93;
      }
      goto LABEL_76;
    }
    v153 = v43;
    v160 = &v153;
    v161 = v43;
    v162 = 1;
    v73 = CShape::TryOptimizedCombinePaths(v151, v42, (CShape *)&v187, v176.m128_f32, 1, &v161);
    v21 = v73;
    if ( v73 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v73, 0x18Bu);
    }
    else if ( !v161 )
    {
      v76 = CShape::D2DCombine(v70, v74, &v187, &v176, 1, &v161);
      v21 = v76;
      if ( v76 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v76, 0x19Au);
    }
    if ( v162 )
    {
      v75 = (__int64)v160;
      v77 = *v160;
      *v160 = v161;
      if ( v77 )
        std::default_delete<CShape>::operator()(v75, (__int64 (__fastcall ***)(_QWORD, __int64))v77);
    }
    if ( v21 < 0 )
      break;
    v78 = v151;
    v79 = v153;
    v153 = 0LL;
    v151 = v79;
    if ( v78 )
    {
      (**(void (__fastcall ***)(CShape *, __int64))v78)(v78, 1LL);
      if ( v153 )
        std::default_delete<CShape>::operator()(v80, (__int64 (__fastcall ***)(_QWORD, __int64))v153);
    }
LABEL_76:
    HIDWORD(v192) = 0;
    v187 = &CRectanglesShape::`vftable';
    DynArrayImpl<0>::ShrinkToSize((__int64)&v189, 0x10u);
    if ( v194 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v194 + 16LL))(v194);
      v194 = 0LL;
    }
    if ( v189 != v190 )
    {
      WPF::ProcessHeapImpl::Free(v189);
      v189 = 0LL;
    }
    v81 = v188;
    if ( v188 )
    {
      v188 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v81 + 16LL))(v81);
    }
    v32 = v149;
    v31 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56);
LABEL_83:
    ++v35;
    ++v36;
    if ( v35 >= v30 )
    {
      v34 = v151;
      goto LABEL_85;
    }
  }
  MilInstrumentationCheckHR_MaybeFailFast(v75, 0LL, 0, v21, 0x6Bu);
  if ( v153 )
    std::default_delete<CShape>::operator()(v84, (__int64 (__fastcall ***)(_QWORD, __int64))v153);
LABEL_93:
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)&v187);
  if ( v151 )
    std::default_delete<CShape>::operator()((__int64)v31, (__int64 (__fastcall ***)(_QWORD, __int64))v151);
LABEL_86:
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v31, 0LL, 0, v21, 0x23Au);
    if ( !v33 )
      return (unsigned int)v21;
LABEL_172:
    std::default_delete<CShape>::operator()(v82, (__int64 (__fastcall ***)(_QWORD, __int64))v33);
    return (unsigned int)v21;
  }
  if ( (*(unsigned __int8 (__fastcall **)(CShape *))(*(_QWORD *)v33 + 16LL))(v33) )
    goto LABEL_172;
  v83 = *((_BYTE *)a2 + 209) && CShape::IsAxisAlignedRectangle(v33);
  v148 = v83;
  v85 = 1;
  memset_0(v218, 0, sizeof(v218));
  v86 = 0;
  for ( j = 0; j < *((_DWORD *)a2 + 24); ++j )
  {
    v88 = *((_QWORD *)a2 + j + 7);
    if ( v88 )
    {
      if ( v85 && *((_DWORD *)a2 + 49) != 1 && *(_BYTE *)(v88 + 52) && *(_DWORD *)(v88 + 48) != 50529027 )
        v85 = v86;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v88 + 8LL))(*((_QWORD *)a2 + j + 7), 2LL) )
      {
        v89 = &v218[13 * j];
        if ( v83 )
        {
          v90 = CSurfaceDrawListBrush::ComputeLocalToSourceTransform(
                  (CSurfaceDrawListBrush *)v88,
                  (struct Matrix3x3 *)v89);
          v21 = v90;
          if ( v90 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v91, 0LL, 0, v90, 0x266u);
            goto LABEL_172;
          }
          v83 = v148;
          v86 = 0;
        }
        else
        {
          *v89 = *(_DWORD *)(v88 + 8);
          v89[1] = *(_DWORD *)(v88 + 12);
          v89[2] = 0;
          v89[3] = *(_DWORD *)(v88 + 16);
          v89[4] = *(_DWORD *)(v88 + 20);
          v89[5] = 0;
          v89[6] = *(_DWORD *)(v88 + 24);
          v89[7] = *(_DWORD *)(v88 + 28);
          v89[8] = 1065353216;
          if ( Matrix3x3::TryInvert((const struct Matrix3x3 *)v89, (struct Matrix3x3 *)v89) )
          {
            v93 = *(float *)v89;
            v94 = *(float *)(v88 + 84);
            v95 = (__m128)*v89;
            v96 = *(float *)(v88 + 96);
            v97 = *(float *)(v88 + 108);
            v98 = *(float *)(v88 + 100);
            v99 = *(float *)(v88 + 88);
            v100 = *(float *)(v88 + 112);
            v101 = *(float *)(v88 + 104);
            v102 = *(float *)(v88 + 92);
            v103 = *(float *)(v88 + 116);
            v104 = *((float *)v89 + 1) * v98;
            v105 = *((float *)v89 + 1) * v101;
            v95.m128_f32[0] = (float)((float)(v95.m128_f32[0] * v94) + (float)(*((float *)v89 + 1) * v96))
                            + (float)(*((float *)v89 + 2) * v97);
            v106 = *((float *)v89 + 2) * v100;
            v107 = *((float *)v89 + 2) * v103;
            v169 = v95;
            v95.m128_f32[0] = v93;
            v108 = (float)(v93 * v102) + v105;
            v109 = *((float *)v89 + 4);
            v110 = v108 + v107;
            v111 = *((float *)v89 + 5);
            *(float *)&v152 = v110;
            v150 = (float)((float)(v95.m128_f32[0] * v99) + v104) + v106;
            v112 = (__m128)v89[3];
            v113 = v112;
            v113.m128_f32[0] = (float)(v112.m128_f32[0] * v99) + (float)(v109 * v98);
            v114 = (float)((float)(*((float *)v89 + 3) * v94) + (float)(v109 * v96)) + (float)(v111 * v97);
            v112.m128_f32[0] = (float)(v112.m128_f32[0] * v102) + (float)(v109 * v101);
            v115 = *((float *)v89 + 7);
            v113.m128_f32[0] = v113.m128_f32[0] + (float)(v111 * v100);
            v112.m128_f32[0] = v112.m128_f32[0] + (float)(v111 * v103);
            v116 = *((float *)v89 + 8);
            v163 = v113;
            LODWORD(v151) = v112.m128_i32[0];
            v112.m128_i32[0] = v89[6];
            v117 = _mm_shuffle_ps(v169, v169, 225);
            v117.m128_f32[0] = v150;
            v118 = _mm_shuffle_ps(v117, v117, 198);
            v118.m128_f32[0] = *(float *)&v152;
            v119 = *(float *)&v151;
            v120 = _mm_shuffle_ps(v118, v118, 39);
            v120.m128_f32[0] = v114;
            *(__m128 *)v89 = _mm_shuffle_ps(v120, v120, 57);
            v121 = _mm_shuffle_ps(v163, v163, 225);
            v121.m128_f32[0] = v119;
            v122 = _mm_shuffle_ps(v121, v121, 198);
            v122.m128_f32[0] = (float)((float)(v112.m128_f32[0] * v94) + (float)(v115 * v96)) + (float)(v116 * v97);
            v123 = _mm_shuffle_ps(v122, v122, 39);
            v123.m128_f32[0] = (float)((float)(v112.m128_f32[0] * v99) + (float)(v115 * v98)) + (float)(v116 * v100);
            v92 = _mm_shuffle_ps(v123, v123, 57);
            v156 = (float)((float)(v112.m128_f32[0] * v102) + (float)(v115 * v101)) + (float)(v116 * v103);
          }
          else
          {
            v92 = (__m128)_xmm;
            v156 = 1.0;
            *(_OWORD *)v89 = _xmm;
          }
          v124 = v156;
          *((__m128 *)v89 + 1) = v92;
          *((float *)v89 + 8) = v124;
        }
        v125 = *((_DWORD *)a2 + 30);
        if ( _bittest(&v125, j) )
        {
          v126 = Matrix3x3::operator*((float *)a2 + 40, v186, (float *)v89);
          *(_OWORD *)v89 = *(_OWORD *)v126;
          *((_OWORD *)v89 + 1) = *((_OWORD *)v126 + 1);
          v89[8] = *((_DWORD *)v126 + 8);
        }
        if ( *(_BYTE *)(v88 + 136) )
          *(_OWORD *)(v89 + 9) = _xmm;
        else
          *(_OWORD *)(v89 + 9) = *(_OWORD *)(v88 + 120);
      }
      else
      {
        v86 = 0;
      }
    }
  }
  v154.m256i_i64[3] = 0LL;
  v127 = 6;
  memset(&v154, 0, 24);
  v204 = v207;
  v205 = v207;
  v206 = &v208;
  v208 = v211;
  v209 = v211;
  v210 = &v212;
  v212 = v215;
  v213 = v215;
  v214 = &v216;
  v128 = *(__int64 (__fastcall ***)(_QWORD, __int64))v33;
  v154.m256i_i8[24] = 6;
  if ( !(unsigned __int8)((__int64 (__fastcall **)(CShape *, __int64))v128)[5](v33, (__int64)&v157) || v157 != 1 )
  {
    v154.m256i_i64[0] = (__int64)v33;
    v127 = 7;
    v154.m256i_i8[24] = 7;
    if ( v85 && (!*((_BYTE *)a2 + 208) || !*((_QWORD *)a2 + 1) && !*((_QWORD *)a2 + 3)) )
      goto LABEL_137;
    v134 = *((unsigned int *)a2 + 24);
    v31 = (struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56);
    *(_QWORD *)&v181 = v134;
    *((_QWORD *)&v181 + 1) = (char *)a2 + 56;
    if ( a2 != (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL || !v134 )
    {
      v135 = *((_DWORD *)a2 + 30);
      v136 = *((_DWORD *)a2 + 49);
      v184 = v181;
      CBrushDrawListGenerator::ProcessBrushClampEdges_Polygon(
        v136,
        (unsigned int)&v184,
        v135,
        (_DWORD)a2 + 124,
        (__int64)&v204);
      v154.m256i_i64[1] = (__int64)&v204;
      goto LABEL_137;
    }
    goto LABEL_174;
  }
  v130 = (*(__int64 (__fastcall **)(CShape *, __int128 *, _QWORD))(*(_QWORD *)v33 + 32LL))(v33, &v197, 0LL);
  v21 = v130;
  if ( v130 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v131, 0LL, 0, v130, 0x288u);
    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v204);
    goto LABEL_172;
  }
  *(_OWORD *)v154.m256i_i8 = v197;
  if ( v85 )
  {
    v132 = 50529027;
    if ( *((_DWORD *)a2 + 49) == 1 )
      v132 = 0;
    v154.m256i_i32[4] = v132;
  }
  else
  {
    v133 = *((unsigned int *)a2 + 24);
    *(_QWORD *)&v180 = v133;
    *((_QWORD *)&v180 + 1) = (char *)a2 + 56;
    if ( a2 == (struct CBrushDrawListGenerator::GenerateDrawListParameters *)-56LL && v133 )
    {
      gsl::details::terminate((struct CBrushDrawListGenerator::GenerateDrawListParameters *)((char *)a2 + 56));
      JUMPOUT(0x1800B58E1LL);
    }
    v183 = v180;
    CBrushDrawListGenerator::ProcessBrushClampEdges_Rectangle(
      (gsl::details *)&v183,
      (const struct D2D_MATRIX_3X2_F *)&v154,
      (const struct D2D_MATRIX_3X2_F *)&v154.m256i_u64[2]);
    v127 = v154.m256i_i8[24];
  }
LABEL_137:
  v199 = 0uLL;
  v200 = 0LL;
  v201 = 0LL;
  *(_QWORD *)&v182 = *((unsigned int *)a2 + 25);
  *((_QWORD *)&v182 + 1) = v218;
  v137 = *((_BYTE *)v168 + 76);
  v202 = v182;
  if ( v137 )
  {
    v138 = (float *)&v203;
    v203 = *(_OWORD *)((char *)v168 + 20);
  }
  else
  {
    v196 = *((float *)v168 + 8);
    v139 = v196 * *((float *)v168 + 6);
    v140 = v196 * *((float *)v168 + 7);
    v138 = v195;
    v195[0] = v196 * *((float *)v168 + 5);
    v195[1] = v139;
    v195[2] = v140;
  }
  LOBYTE(v200) = v137;
  v21 = 0;
  v141 = (CDrawListEntryBuilder *)*((_QWORD *)a2 + 13);
  v199 = *(_OWORD *)v138;
  if ( ((v127 & 1) != 0
     || *(float *)&v154.m256i_i32[2] > *(float *)v154.m256i_i32
     && *(float *)&v154.m256i_i32[3] > *(float *)&v154.m256i_i32[1])
    && ((v127 & 2) != 0 || (v127 & 4) != 0) )
  {
    if ( v148 )
    {
      inserted = CDrawListEntryBuilder::InsertWARP(
                   v141,
                   (const struct PrimitiveGeometryDesc *)&v154,
                   (const struct PrimitiveVertexAttributesDesc *)&v199,
                   0LL);
      v21 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v141, 0LL, 0, inserted, 0x62u);
    }
    else
    {
      v185 = v154;
      v143 = CDrawListEntryBuilder::InsertHW(v141, &v185, &v199, 0LL);
      v21 = v143;
      if ( v143 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v141, 0LL, 0, v143, 0x66u);
    }
  }
  if ( v21 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v141, 0LL, 0, v21, 0x2BCu);
    CEdgeFlagsMap::~CEdgeFlagsMap((CEdgeFlagsMap *)&v204);
    goto LABEL_172;
  }
  v144 = v212;
  if ( (v213 - v212) >> 3 )
  {
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::clear_region(
      &v212,
      v129,
      (v213 - v212) >> 3);
    v144 = v212;
  }
  v212 = 0LL;
  if ( v144 == v215 )
    v144 = 0LL;
  if ( v144 )
    HeapFree(WPF::g_processHeap, 0, v144);
  v145 = v208;
  if ( (v209 - v208) >> 3 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      &v208,
      0LL,
      (v209 - v208) >> 3);
    v145 = v208;
  }
  v208 = 0LL;
  if ( v145 == v211 )
    v145 = 0LL;
  if ( v145 )
    HeapFree(WPF::g_processHeap, 0, v145);
  v146 = v204;
  if ( (v205 - v204) >> 2 )
  {
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear_region(
      &v204,
      v129,
      (v205 - v204) >> 2);
    v146 = v204;
  }
  v204 = 0LL;
  if ( v146 == v207 )
    v146 = 0LL;
  if ( v146 )
    HeapFree(WPF::g_processHeap, 0, v146);
  (**(void (__fastcall ***)(CShape *, __int64))v33)(v33, 1LL);
  return (unsigned int)v21;
}
