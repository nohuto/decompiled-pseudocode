/*
 * XREFs of ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800B7870
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800B765C (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000DC78 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x18001070C (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180015B7C (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180015D2C (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x180018BA0 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18001B75C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800288C4 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800307F0 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18003082C (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x18003B8B8 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800580A0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x1800585B0 (-resize@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x18005B9D0 (--$uninitialized_copy@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x1800B8FDC (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800B9100 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800BA810 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800BC37C (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800C2D88 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ?clear_region@?$vector_facade@MV?$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EE968 (-clear_region@-$vector_facade@MV-$buffer_impl@M$05$00Vliberal_expansion_policy@detail@@@detail@@.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEA04 (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEAD8 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EEBAC (-clear_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expa.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EED94 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vlibe.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x1800EF5B8 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ?erase@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@0@Z @ 0x1801821E4 (-erase@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawLi.c)
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x18018223C (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x180185334 (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801869E0 (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x180186D48 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@W4D2D1_EDGE_FLAGS@@PE.c)
 *     ?Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z @ 0x1801873D4 (-Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendHWPrimitive(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D1::Matrix3x2F *a4)
{
  char v5; // r12
  bool v6; // zf
  const struct CShape *v9; // r15
  unsigned int v10; // r14d
  __int64 v11; // xmm1_8
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _BYTE *v14; // r12
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // edi
  float v18; // xmm7_4
  __m128 v19; // xmm8
  float v20; // xmm9_4
  __int128 v21; // xmm0
  __int64 v22; // xmm1_8
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  __m128 v26; // xmm1
  __m128 v27; // xmm1
  __m128 v28; // xmm1
  int v29; // eax
  __int64 v30; // rdx
  unsigned int v31; // ecx
  int v32; // eax
  unsigned int v33; // ecx
  _BYTE **v34; // r13
  CShape *v35; // rdi
  __m128 v36; // xmm6
  float v37; // xmm10_4
  float v38; // xmm8_4
  float v39; // xmm9_4
  int v40; // eax
  unsigned int v41; // ecx
  __m128 v42; // xmm6
  __m128 v43; // xmm6
  __m128 v44; // xmm6
  int v45; // r9d
  int v46; // esi
  __int64 v47; // rdx
  int v48; // eax
  unsigned int v49; // ecx
  float v50; // xmm2_4
  float v51; // xmm6_4
  float *v52; // r9
  int v53; // eax
  unsigned int v54; // ecx
  __m128 m11_low; // xmm10
  __m128 v56; // xmm8
  __m128 m22_low; // xmm6
  float v58; // xmm4_4
  float v59; // xmm9_4
  float v60; // xmm7_4
  __m128 v61; // xmm8
  __m128 v62; // xmm8
  __m128 v63; // xmm8
  __int128 v64; // xmm0
  __int64 v65; // rax
  Mesh *v66; // rsi
  int RectangleMesh; // eax
  unsigned int v68; // ecx
  CDrawListPolygonBuilder *v69; // rcx
  _DWORD *v70; // rax
  _DWORD *v71; // rdi
  int v72; // eax
  unsigned int v73; // ecx
  char v74; // r14
  int v75; // edi
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rcx
  int PolygonMesh; // eax
  unsigned int v81; // ecx
  __m256i *v82; // rcx
  bool v83; // al
  int GeometryCount; // eax
  unsigned int v85; // ecx
  _OWORD **v86; // r13
  unsigned __int64 v87; // r8
  _QWORD *v88; // r12
  _OWORD *v89; // r9
  __int64 v90; // rcx
  unsigned __int64 v91; // rdi
  __int64 v92; // rcx
  unsigned __int64 v93; // r14
  unsigned __int64 v94; // rdx
  unsigned __int64 v95; // rcx
  unsigned __int64 v96; // rsi
  SIZE_T v97; // r10
  SIZE_T v98; // rax
  _OWORD *v99; // rax
  _OWORD *v100; // r8
  _OWORD *v101; // rdx
  _OWORD *v102; // rdi
  _OWORD *v103; // rcx
  __int64 v104; // rsi
  __int64 v105; // rax
  _OWORD *v106; // rdx
  unsigned __int64 v107; // r10
  unsigned __int64 v108; // rdx
  _OWORD *v109; // rsi
  unsigned __int64 v110; // rdi
  bool v111; // sf
  _OWORD *v112; // rax
  __int128 v113; // xmm0
  _OWORD *v114; // rsi
  __int64 v115; // rdi
  _OWORD *v116; // r9
  __int64 v117; // r13
  unsigned __int64 v118; // r13
  unsigned __int64 v119; // r8
  __int64 v120; // r14
  unsigned __int64 v121; // rsi
  LPVOID v122; // rax
  _OWORD *v123; // r8
  _OWORD *v124; // rdx
  LPVOID v125; // rdi
  _OWORD *v126; // rcx
  __int64 v127; // rsi
  __int64 v128; // rax
  _OWORD *v129; // rdx
  unsigned __int64 v130; // r10
  bool v131; // sf
  __int64 v132; // rdx
  _OWORD *v133; // rsi
  unsigned __int64 v134; // rdi
  bool v135; // sf
  _OWORD *v136; // rax
  _OWORD *v137; // rcx
  __int128 v138; // xmm0
  _OWORD *v139; // r13
  unsigned __int64 v140; // rdi
  unsigned __int64 v141; // rsi
  __int64 v142; // rax
  int Geometry; // eax
  unsigned int v144; // ecx
  int v145; // edi
  char *v146; // rcx
  unsigned int v147; // r13d
  __int64 v148; // r8
  unsigned __int64 v149; // rdx
  unsigned __int64 v150; // rax
  __int64 v151; // r8
  unsigned int v152; // r13d
  char *v153; // rcx
  _OWORD *v154; // rdi
  char *v155; // rdx
  unsigned __int64 v156; // rax
  unsigned int v157; // ecx
  __m256i *v158; // rcx
  int v159; // esi
  _BYTE *v160; // r8
  _BYTE *v161; // r8
  _BYTE *v162; // r8
  __int64 v163; // rcx
  __int16 v165; // [rsp+30h] [rbp-D0h]
  char v166; // [rsp+50h] [rbp-B0h]
  char v167[3]; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE v168[28]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned __int64 v169; // [rsp+70h] [rbp-90h]
  int v170; // [rsp+80h] [rbp-80h] BYREF
  __m128 v171; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v172; // [rsp+98h] [rbp-68h] BYREF
  D2D1_MATRIX_3X2_F v173; // [rsp+A0h] [rbp-60h] BYREF
  CShape *v174[2]; // [rsp+B8h] [rbp-48h] BYREF
  int v175; // [rsp+C8h] [rbp-38h] BYREF
  unsigned int v176; // [rsp+CCh] [rbp-34h]
  unsigned int v177; // [rsp+D0h] [rbp-30h]
  __m128 v178; // [rsp+D8h] [rbp-28h] BYREF
  struct PrimitiveVertexAttributesDesc *v179; // [rsp+E8h] [rbp-18h]
  __int128 v180; // [rsp+F0h] [rbp-10h] BYREF
  __m256i v181; // [rsp+100h] [rbp+0h]
  __int128 v182; // [rsp+120h] [rbp+20h]
  int v183; // [rsp+130h] [rbp+30h]
  D2D1_MATRIX_3X2_F v184; // [rsp+140h] [rbp+40h] BYREF
  __int64 v185[2]; // [rsp+160h] [rbp+60h] BYREF
  D2D1_MATRIX_3X2_F v186; // [rsp+170h] [rbp+70h] BYREF
  D2D1_MATRIX_3X2_F matrix; // [rsp+190h] [rbp+90h] BYREF
  __int128 v188; // [rsp+1B0h] [rbp+B0h] BYREF
  __m256i v189; // [rsp+1C0h] [rbp+C0h] BYREF
  __m128 v190; // [rsp+1E0h] [rbp+E0h]
  char v191; // [rsp+208h] [rbp+108h] BYREF
  void **v192; // [rsp+210h] [rbp+110h] BYREF
  __int64 v193; // [rsp+218h] [rbp+118h]
  void *v194; // [rsp+220h] [rbp+120h] BYREF
  _BYTE *v195; // [rsp+228h] [rbp+128h]
  int v196; // [rsp+230h] [rbp+130h]
  __int64 v197; // [rsp+234h] [rbp+134h]
  _BYTE v198[16]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v199; // [rsp+250h] [rbp+150h]
  _BYTE *v200; // [rsp+260h] [rbp+160h] BYREF
  _BYTE *v201; // [rsp+268h] [rbp+168h]
  _BYTE **v202; // [rsp+270h] [rbp+170h]
  _BYTE v203[64]; // [rsp+278h] [rbp+178h] BYREF
  _BYTE *v204; // [rsp+2B8h] [rbp+1B8h] BYREF
  _BYTE *v205; // [rsp+2C0h] [rbp+1C0h]
  _BYTE **v206; // [rsp+2C8h] [rbp+1C8h]
  _BYTE v207[128]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE *v208; // [rsp+350h] [rbp+250h] BYREF
  _BYTE *v209; // [rsp+358h] [rbp+258h]
  char *v210; // [rsp+360h] [rbp+260h]
  _BYTE v211[128]; // [rsp+368h] [rbp+268h] BYREF
  char v212; // [rsp+3E8h] [rbp+2E8h] BYREF

  v177 = *((_DWORD *)this + 544);
  v179 = a3;
  v192 = &CRectanglesShape::`vftable';
  v5 = 0;
  v6 = *((_DWORD *)this + 3) == 1;
  v194 = v198;
  *(_OWORD *)&v168[12] = 0uLL;
  v195 = v198;
  v200 = v203;
  v9 = 0LL;
  LODWORD(v169) = 0;
  v201 = v203;
  v202 = &v204;
  v204 = v207;
  v205 = v207;
  v206 = &v208;
  v208 = v211;
  v209 = v211;
  v210 = &v212;
  v185[0] = 0LL;
  LOBYTE(v185[1]) = 0;
  v193 = 0LL;
  v196 = 1;
  v197 = 1LL;
  v199 = 0LL;
  v167[0] = 0;
  if ( v6 )
  {
    v10 = 0;
    *(_DWORD *)v168 = 0;
  }
  else
  {
    v6 = (*((_BYTE *)a2 + 24) & 4) == 0;
    v10 = *((_DWORD *)a2 + 4);
    *(_DWORD *)v168 = v10;
    if ( !v6 && v10 )
      *((_BYTE *)this + 2289) = 1;
  }
  if ( a4 )
  {
    v11 = *((_QWORD *)a4 + 2);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)a4;
    *(_QWORD *)&matrix.m[2][0] = v11;
    if ( !D2D1IsMatrixInvertible(&matrix) )
      goto LABEL_190;
  }
  else
  {
    *(_OWORD *)&matrix.m11 = _xmm;
    *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  if ( !*((_BYTE *)this + 2288) || (v13 = (_QWORD *)*((_QWORD *)this + 2), !*v13) && !v13[2] )
  {
    v14 = (char *)a2 + 24;
    goto LABEL_55;
  }
  v14 = (char *)a2 + 24;
  if ( (*((_BYTE *)a2 + 24) & 1) != 0 )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, D2D1_MATRIX_3X2_F *, _QWORD))(**(_QWORD **)a2 + 32LL))(
            *(_QWORD *)a2,
            &v184,
            0LL);
    v17 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2D4u);
      v5 = 0;
      goto LABEL_191;
    }
  }
  else
  {
    *(_OWORD *)&v184.m11 = *(_OWORD *)a2;
  }
  if ( CCpuClip::FullyContains(*((_QWORD *)this + 2), (__int64)&v184, (__int64)a4) )
  {
LABEL_55:
    if ( (*v14 & 1) != 0 )
    {
      v9 = *(const struct CShape **)a2;
      CShapePtr::Release((CShapePtr *)v185);
      v34 = (_BYTE **)*((_QWORD *)a2 + 1);
      v166 = 0;
      v173 = matrix;
      if ( v34 )
        goto LABEL_62;
    }
    else
    {
      HIDWORD(v197) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)&v194, 0x10u);
      if ( v199 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v199 + 16LL))(v199);
        v199 = 0LL;
      }
      *(_OWORD *)v185 = _xmm;
      DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        (__int64)&v194,
        v185,
        1u);
      m11_low = (__m128)LODWORD(matrix.m11);
      v9 = (const struct CShape *)&v192;
      v56 = (__m128)LODWORD(matrix.m11);
      m22_low = (__m128)LODWORD(matrix.m22);
      v58 = *((float *)a2 + 1);
      v59 = *((float *)a2 + 3) - v58;
      v60 = *((float *)a2 + 2) - *(float *)a2;
      v166 = 0;
      v56.m128_f32[0] = (float)(matrix.m11 * v60) + (float)(matrix.m21 * 0.0);
      v61 = _mm_shuffle_ps(v56, v56, 225);
      v61.m128_f32[0] = (float)(v60 * matrix.m12) + (float)(matrix.m22 * 0.0);
      v62 = _mm_shuffle_ps(v61, v61, 198);
      v62.m128_f32[0] = (float)(v59 * matrix.m21) + (float)(matrix.m11 * 0.0);
      m11_low.m128_f32[0] = (float)((float)(matrix.m11 * *(float *)a2) + (float)(matrix.m21 * v58)) + matrix.dx;
      v63 = _mm_shuffle_ps(v62, v62, 39);
      v63.m128_f32[0] = (float)(v59 * matrix.m22) + (float)(matrix.m12 * 0.0);
      m22_low.m128_f32[0] = (float)((float)(matrix.m22 * v58) + (float)(matrix.m12 * *(float *)a2)) + matrix.dy;
      *(__m128 *)&v173.m11 = _mm_shuffle_ps(v63, v63, 57);
      *(_QWORD *)&v173.m[2][0] = _mm_unpacklo_ps(m11_low, m22_low).m128_u64[0];
    }
    v34 = &v200;
LABEL_62:
    v46 = 2;
    v170 = 2;
    goto LABEL_63;
  }
  v18 = FLOAT_1_0;
  v183 = 0;
  if ( a4 )
  {
    if ( (*v14 & 1) != 0 )
    {
      v21 = *(_OWORD *)&matrix.m11;
      v22 = *(_QWORD *)&matrix.m[2][0];
      v19 = (__m128)LODWORD(FLOAT_1_0);
      v173 = matrix;
      v20 = FLOAT_1_0;
    }
    else
    {
      D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
        (D2DMatrixHelper *)&matrix,
        (const struct D2D_MATRIX_3X2_F *)&v172,
        (float *)&v170,
        &v173.m11);
      v22 = *(_QWORD *)&v173.m[2][0];
      v21 = *(_OWORD *)&v173.m11;
      v19 = (__m128)v172;
      v20 = *(float *)&v170;
    }
    *(_QWORD *)&v184.m[2][0] = v22;
    *(_OWORD *)&v184.m11 = v21;
    D2D1::Matrix3x2F::Invert(&v184);
    *(_OWORD *)&v189.m256i_u64[1] = 0LL;
    v23 = (__m128)(unsigned __int64)v188;
    v190.m128_u64[1] = 0x3F80000000000000LL;
    v23.m128_f32[0] = v184.m11;
    v189.m256i_i64[3] = 1065353216LL;
    v24 = *(__m128 *)v189.m256i_i8;
    v183 = 0;
    v25 = _mm_shuffle_ps(v23, v23, 225);
    v24.m128_f32[0] = v184.m21;
    v25.m128_f32[0] = v184.m12;
    v26 = _mm_shuffle_ps(v24, v24, 225);
    v26.m128_f32[0] = v184.m22;
    *(__m128 *)v189.m256i_i8 = _mm_shuffle_ps(v26, v26, 225);
    v181 = v189;
    v27 = v190;
    v188 = (__int128)_mm_shuffle_ps(v25, v25, 225);
    v27.m128_f32[0] = v184.dx;
    v180 = v188;
    v28 = _mm_shuffle_ps(v27, v27, 225);
    v28.m128_f32[0] = v184.dy;
    v190 = _mm_shuffle_ps(v28, v28, 225);
    v182 = (__int128)v190;
  }
  else
  {
    v19 = (__m128)LODWORD(FLOAT_1_0);
    v20 = FLOAT_1_0;
    *(_OWORD *)&v173.m11 = _xmm;
    LOWORD(v183) = 32085;
    v180 = _xmm;
    *(_QWORD *)&v173.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_OWORD *)v181.m256i_i8 = _xmm;
    *(_OWORD *)&v181.m256i_u64[2] = _xmm;
    v182 = _xmm;
  }
  v29 = CCpuClip::ResolveClip(*((CCpuClip **)this + 2), v174);
  v17 = v29;
  if ( v29 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, v29, 0x314u);
    goto LABEL_53;
  }
  if ( (*v14 & 1) != 0 )
  {
    v32 = CShape::Combine(*(CShape **)a2, v30, v174[0], (float *)&v180, 1, (struct CShape **)&v171);
    v17 = v32;
    if ( v32 >= 0 )
    {
      CShapePtr::Release((CShapePtr *)v185);
      v9 = (const struct CShape *)v171.m128_u64[0];
      v34 = &v200;
      v185[0] = v171.m128_u64[0];
      v166 = 1;
      LOBYTE(v185[1]) = 1;
      if ( *((_QWORD *)a2 + 1) )
        v34 = (_BYTE **)*((_QWORD *)a2 + 1);
      goto LABEL_40;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x31Fu);
    goto LABEL_53;
  }
  v35 = v174[0];
  v36 = v19;
  v36.m128_f32[0] = v19.m128_f32[0] * *(float *)a2;
  v37 = v20 * *((float *)a2 + 1);
  v38 = v19.m128_f32[0] * *((float *)a2 + 2);
  v39 = v20 * *((float *)a2 + 3);
  *(_QWORD *)&v184.m11 = __PAIR64__(LODWORD(v37), v36.m128_u32[0]);
  *(_QWORD *)&v184.m[1][0] = __PAIR64__(LODWORD(v39), LODWORD(v38));
  if ( !CShape::IsAxisAlignedRectangle(v174[0]) || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v180) )
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v192, (const struct MilRectF *)&v184);
    v48 = CShape::Combine((CShape *)&v192, v47, v35, (float *)&v180, 1, (struct CShape **)&v171);
    v17 = v48;
    if ( v48 >= 0 )
    {
      CShapePtr::Release((CShapePtr *)v185);
      v9 = (const struct CShape *)v171.m128_u64[0];
      v185[0] = v171.m128_u64[0];
      v166 = 1;
      LOBYTE(v185[1]) = 1;
      *(_OWORD *)&v186.m11 = *(_OWORD *)&v184.m11;
      CEdgeFlagsMap::AddEdgeFlags(&v200, &v184, v10, &Matrix3x3::Identity);
      v34 = &v200;
LABEL_40:
      v46 = 1;
      v170 = 1;
      v167[0] = 1;
      goto LABEL_41;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x35Au);
LABEL_53:
    v5 = 0;
    goto LABEL_191;
  }
  v40 = (*(__int64 (__fastcall **)(CShape *, D2D1_MATRIX_3X2_F *, __int128 *))(*(_QWORD *)v35 + 32LL))(
          v35,
          &v186,
          &v180);
  v17 = v40;
  if ( v40 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, v40, 0x338u);
    goto LABEL_53;
  }
  v42 = _mm_shuffle_ps(v36, v36, 225);
  v42.m128_f32[0] = v37;
  v43 = _mm_shuffle_ps(v42, v42, 198);
  v43.m128_f32[0] = v38;
  v44 = _mm_shuffle_ps(v43, v43, 39);
  v45 = *((_BYTE *)this + 28) != 0 ? 0x3030303 : 0;
  v44.m128_f32[0] = v39;
  v171 = _mm_shuffle_ps(v44, v44, 57);
  v178 = v171;
  *(_OWORD *)v174 = *(_OWORD *)&v186.m11;
  if ( ClipRectAndEdgeFlags((__int64)&v178, v10, (__int64)v174, v45, &v171, (int *)v168) )
  {
    v167[0] = 1;
    *(__m128 *)&v184.m11 = v171;
  }
  CRectanglesShape::SetSingleRect((CRectanglesShape *)&v192, (const struct MilRectF *)&v184);
  CShapePtr::Release((CShapePtr *)v185);
  v10 = *(_DWORD *)v168;
  v9 = (const struct CShape *)&v192;
  *(float *)&v170 = 0.0;
  v46 = 0;
  v166 = 0;
  LOBYTE(v185[1]) = 0;
  v34 = &v200;
  v185[0] = (__int64)&v192;
LABEL_41:
  if ( !CShapePtr::IsEmpty((CShapePtr *)v185) )
  {
    v50 = *((float *)this + 1);
    v51 = FLOAT_1_0;
    *(float *)v168 = FLOAT_1_0;
    *(float *)&v168[4] = FLOAT_1_0;
    if ( v50 < 1.0 || *((float *)this + 2) < 1.0 )
    {
      v184.m22 = *((FLOAT *)this + 2);
      v184.m11 = v50;
      *(_QWORD *)&v184.m[0][1] = 0LL;
      v184.dx = 0.0 - (float)(v50 * 0.0);
      v184.dy = 0.0 - (float)(v184.m22 * 0.0);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v186,
        (const struct D2D1::Matrix3x2F *)&v173,
        (const struct D2D1::Matrix3x2F *)&v184);
      v184 = v186;
      D2DMatrixHelper::GetScaleDimensions(
        (D2DMatrixHelper *)&v184,
        (const struct D2D_MATRIX_3X2_F *)v168,
        (float *)&v168[4],
        v52);
      v18 = *(float *)v168;
      v51 = *(float *)&v168[4];
    }
    v53 = (*(__int64 (__fastcall **)(const struct CShape *, D2D1_MATRIX_3X2_F *, _QWORD))(*(_QWORD *)v9 + 32LL))(
            v9,
            &v184,
            0LL);
    v17 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x37Fu);
LABEL_50:
      v5 = v166;
      goto LABEL_191;
    }
    if ( (float)((float)(v184.m21 - v184.m11) * v18) <= 0.015625
      || (float)((float)(v184.m22 - v184.m12) * v51) <= 0.015625 )
    {
      CShapePtr::Release((CShapePtr *)v185);
      v9 = (const struct CShape *)v185[0];
      v166 = v185[1];
    }
  }
LABEL_63:
  if ( !v9 || (*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)v9 + 16LL))(v9) )
    goto LABEL_182;
  if ( v179 )
  {
    v64 = *(_OWORD *)v179;
    LOBYTE(v169) = *((_BYTE *)v179 + 16);
  }
  else
  {
    v64 = _xmm;
  }
  v65 = *(_QWORD *)v9;
  *(_OWORD *)&v168[12] = v64;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, int *))(v65 + 40))(v9, &v175) && v175 == 1 )
  {
    (*(void (__fastcall **)(const struct CShape *, __int64 *, __int64))(*(_QWORD *)v9 + 48LL))(v9, v185, 1LL);
    v66 = (CDrawListEntryBuilder *)((char *)this + 104);
    *(_OWORD *)&v184.m11 = *(_OWORD *)v185;
    RectangleMesh = Mesh::CreateRectangleMesh(
                      (CDrawListEntryBuilder *)((char *)this + 104),
                      (const struct Mesh::ContentInfo *)&v168[12],
                      (const struct D2D_RECT_F *)&v184,
                      v10);
    v17 = RectangleMesh;
    if ( RectangleMesh < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, RectangleMesh, 0x3C3u);
      goto LABEL_50;
    }
LABEL_95:
    if ( !v17 )
    {
      v83 = (*v14 & 2) != 0;
      v168[8] = (*v14 & 4) != 0;
      v168[9] = v83;
      *(_DWORD *)&v168[4] = 0;
      *(_DWORD *)v168 = 0;
      GeometryCount = Mesh::GetGeometryCount(v66, v83, v168[8], (int *)&v168[4], (int *)v168);
      v17 = GeometryCount;
      if ( GeometryCount < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v85, 0LL, 0, GeometryCount, 0x44Cu);
        goto LABEL_175;
      }
      if ( *(int *)v168 > 0 )
      {
        v86 = (_OWORD **)((char *)this + 192);
        v87 = *((_QWORD *)this + 25);
        v88 = (_QWORD *)((char *)this + 1184);
        v89 = (_OWORD *)*((_QWORD *)this + 24);
        v90 = (__int64)(*((_QWORD *)this + 149) - *((_QWORD *)this + 148)) >> 4;
        v176 = 8 * *(_DWORD *)this + 16;
        v91 = (__int64)(v87 - (_QWORD)v89) >> 4;
        v174[0] = (CShape *)v90;
        v92 = *((_QWORD *)this + 274) - *((_QWORD *)this + 273);
        v172 = v176 >> 4;
        v178.m128_u64[0] = v91;
        v171.m128_u64[0] = v92 >> 1;
        v93 = *(_DWORD *)&v168[4] * (v176 >> 4);
        v94 = v93 + v91;
        v185[0] = 0LL;
        v185[1] = 0LL;
        if ( v93 + v91 <= v91 )
        {
          detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
            (char *)this + 192,
            v94);
        }
        else
        {
          v95 = *((_QWORD *)this + 26);
          if ( (__int64)(v95 - v87) >> 4 < v93 )
          {
            if ( v94 < v91 )
              std::_Xoverflow_error((const char *)v95);
            v96 = detail::liberal_expansion_policy::expand(
                    (detail::liberal_expansion_policy *)((__int64)(v95 - (_QWORD)v89) >> 4),
                    (__int64)(v95 - (_QWORD)v89) >> 4,
                    *(_DWORD *)&v168[4] * (v176 >> 4) + v91);
            v98 = 16 * v96;
            if ( !is_mul_ok(v96, 0x10uLL) )
              v98 = v97;
            v99 = operator new(v98);
            v100 = (_OWORD *)*((_QWORD *)this + 25);
            v101 = *v86;
            *(_QWORD *)&v168[12] = v99;
            v102 = v99;
            *(_QWORD *)&v168[20] = v178.m128_u64[0];
            v169 = 0LL;
            *(_QWORD *)&v186.m[2][0] = 0LL;
            *(_OWORD *)&v186.m11 = *(_OWORD *)&v168[12];
            std::uninitialized_copy<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
              (__int64)&v168[12],
              v101,
              v100,
              &v186);
            v103 = *v86;
            v6 = *((_QWORD *)this + 24) == (_QWORD)this + 224;
            *v86 = v102;
            if ( v6 )
              v103 = 0LL;
            WPF::ProcessHeapImpl::Free(v103);
            v89 = *v86;
            v91 = v178.m128_u64[0];
            v87 = (unsigned __int64)&(*v86)[v178.m128_u64[0]];
            v104 = (__int64)&(*v86)[v96];
            *((_QWORD *)this + 25) = v87;
            *((_QWORD *)this + 26) = v104;
          }
          *(_QWORD *)&v168[20] = v93;
          v169 = 0LL;
          v105 = (__int64)(v87 - (_QWORD)v89) >> 4;
          *(_QWORD *)&v186.m[2][0] = 0LL;
          v106 = &v89[v105];
          v107 = v105 - v91;
          *(_QWORD *)&v168[12] = v106;
          *(_QWORD *)&v184.m11 = v106;
          *(_OWORD *)&v186.m11 = *(_OWORD *)&v168[12];
          if ( v93 && !v106 )
            goto LABEL_124;
          *(_QWORD *)&v186.m[2][0] = v93;
          v108 = v93;
          if ( v93 >= v107 )
            v108 = ((__int64)(v87 - (_QWORD)v89) >> 4) - v91;
          v106 = (_OWORD *)(16 * v108);
          v95 = v87 - (_QWORD)v106;
          v169 = v93;
          if ( v87 != v87 - (_QWORD)v106 )
          {
            v106 = (_OWORD *)(v87 - 16);
            if ( !*(_QWORD *)&v186.m11 )
              goto LABEL_124;
            v87 = *(_QWORD *)&v168[20];
            v109 = (_OWORD *)(*(_QWORD *)&v186.m11 + 16 * v93);
            v110 = v169;
            while ( 1 )
            {
              if ( !v110 )
                goto LABEL_124;
              --v110;
              --v109;
              if ( v110 >= v87 )
                goto LABEL_124;
              *v109 = *v106;
              if ( v106 == (_OWORD *)v95 )
                break;
              --v106;
            }
            v91 = v178.m128_u64[0];
          }
          if ( v107 > v93 )
          {
            *(_QWORD *)&v168[12] = v89;
            *(_QWORD *)&v168[20] = v105;
            v169 = 0LL;
            *(_QWORD *)&v186.m[2][0] = 0LL;
            *(_OWORD *)&v186.m11 = *(_OWORD *)&v168[12];
            v111 = v105 < 0;
            if ( v105 )
            {
              if ( !v89 )
                goto LABEL_124;
              v111 = v105 < 0;
            }
            if ( v111 )
            {
              v95 = -v105;
              if ( v105 )
              {
LABEL_124:
                _o__invalid_parameter_noinfo_noreturn(v95, v106, v87, v89);
                __debugbreak();
              }
            }
            v112 = &v89[v105 - v93];
            v95 = (unsigned __int64)v112 + 16 * v93 - (_QWORD)v89 + *(_QWORD *)&v186.m11;
            while ( &v89[v91] != v112 )
            {
              v113 = *--v112;
              v95 -= 16LL;
              *(_OWORD *)v95 = v113;
            }
          }
          *((_QWORD *)this + 25) += 16 * v93;
          v114 = &v89[v91];
          if ( v93 )
          {
            *v114 = *(_OWORD *)v185;
            qmemcpy(v114 + 1, v114, 8 * ((16 * v93 - 9) >> 3));
            v95 = 0LL;
          }
        }
        v115 = *((_QWORD *)this + 149);
        v116 = (_OWORD *)*v88;
        v117 = v115 - *((_QWORD *)this + 148);
        v185[0] = 0LL;
        v118 = v117 >> 4;
        v119 = (unsigned __int64)v174[0] + *(_DWORD *)&v168[4] * v172;
        v185[1] = 0LL;
        if ( v119 <= v118 )
        {
          *(_QWORD *)&v186.m11 = v115;
          *(_QWORD *)&v184.m11 = &v116[v119];
          detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::erase(
            (char *)this + 1184,
            v185,
            &v184,
            &v186);
        }
        else
        {
          v120 = v119 - v118;
          if ( (*((_QWORD *)this + 150) - v115) >> 4 < v119 - v118 )
          {
            if ( v119 < v118 )
              std::_Xoverflow_error((const char *)v95);
            v121 = detail::liberal_expansion_policy::expand(
                     (detail::liberal_expansion_policy *)v95,
                     (__int64)(*((_QWORD *)this + 150) - (_QWORD)v116) >> 4,
                     v119);
            v122 = operator new(saturated_mul(v121, 0x10uLL));
            v123 = (_OWORD *)*((_QWORD *)this + 149);
            v124 = (_OWORD *)*v88;
            *(_QWORD *)&v168[12] = v122;
            v125 = v122;
            *(_QWORD *)&v168[20] = v118;
            v169 = 0LL;
            *(_QWORD *)&v186.m[2][0] = 0LL;
            *(_OWORD *)&v186.m11 = *(_OWORD *)&v168[12];
            std::uninitialized_copy<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
              (__int64)&v168[12],
              v124,
              v123,
              &v186);
            v126 = (_OWORD *)*v88;
            v6 = *((_QWORD *)this + 148) == (_QWORD)this + 1216;
            *v88 = v125;
            if ( v6 )
              v126 = 0LL;
            WPF::ProcessHeapImpl::Free(v126);
            v116 = (_OWORD *)*v88;
            v115 = *v88 + 16 * v118;
            v127 = *v88 + 16 * v121;
            *((_QWORD *)this + 149) = v115;
            *((_QWORD *)this + 150) = v127;
          }
          *(_QWORD *)&v168[20] = v120;
          v169 = 0LL;
          v128 = (v115 - (__int64)v116) >> 4;
          *(_QWORD *)&v186.m[2][0] = 0LL;
          v129 = &v116[v128];
          v130 = v128 - v118;
          *(_QWORD *)&v168[12] = v129;
          *(_QWORD *)&v184.m11 = v129;
          *(_OWORD *)&v186.m11 = *(_OWORD *)&v168[12];
          v131 = v120 < 0;
          if ( v120 )
          {
            if ( !v129 )
              goto LABEL_157;
            v131 = v120 < 0;
          }
          if ( v131 )
          {
            v95 = -v120;
            if ( v120 )
              goto LABEL_157;
          }
          *(_QWORD *)&v186.m[2][0] = v120;
          v132 = ((v115 - (__int64)v116) >> 4) - v118;
          if ( v120 < v130 )
            v132 = v120;
          v129 = (_OWORD *)(16 * v132);
          v95 = v115 - (_QWORD)v129;
          v169 = v120;
          if ( v115 != v115 - (_QWORD)v129 )
          {
            v129 = (_OWORD *)(v115 - 16);
            if ( *(_QWORD *)&v186.m11 )
            {
              v119 = *(_QWORD *)&v168[20];
              v133 = (_OWORD *)(*(_QWORD *)&v186.m11 + 16 * v120);
              v134 = v169;
              while ( v134 )
              {
                --v134;
                --v133;
                if ( v134 >= v119 )
                  break;
                *v133 = *v129;
                if ( v129 == (_OWORD *)v95 )
                  goto LABEL_151;
                --v129;
              }
            }
            goto LABEL_157;
          }
LABEL_151:
          if ( v130 > v120 )
          {
            *(_QWORD *)&v168[12] = v116;
            *(_QWORD *)&v168[20] = v128;
            v169 = 0LL;
            *(_QWORD *)&v186.m[2][0] = 0LL;
            *(_OWORD *)&v186.m11 = *(_OWORD *)&v168[12];
            v135 = v128 < 0;
            if ( v128 )
            {
              if ( !v116 )
                goto LABEL_157;
              v135 = v128 < 0;
            }
            if ( v135 )
            {
              v95 = -v128;
              if ( v128 )
              {
LABEL_157:
                _o__invalid_parameter_noinfo_noreturn(v95, v129, v119, v116);
                __debugbreak();
              }
            }
            v136 = &v116[v128 - v120];
            v137 = (_OWORD *)((char *)v136 + 16 * v120 - (_QWORD)v116 + *(_QWORD *)&v186.m11);
            while ( &v116[v118] != v136 )
            {
              v138 = *--v136;
              *--v137 = v138;
            }
          }
          v139 = &v116[v118];
          *((_QWORD *)this + 149) += 16 * v120;
          if ( v120 )
          {
            *v139 = *(_OWORD *)v185;
            qmemcpy(v139 + 1, v139, 8 * ((unsigned __int64)(16 * v120 - 9) >> 3));
          }
        }
        v140 = v171.m128_u64[0];
        *(_WORD *)&v168[10] = 0;
        detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
          (_QWORD *)this + 273,
          v171.m128_u64[0] + *(int *)v168,
          (unsigned __int16 *)&v168[10]);
        v141 = v178.m128_u64[0];
        *(_QWORD *)&v184.m11 = *((_QWORD *)this + 24) + 16 * v178.m128_u64[0];
        v185[0] = *v88 + 16 * (__int64)v174[0];
        v142 = *((_QWORD *)this + 273);
        *(_QWORD *)&v184.m[1][0] = __PAIR64__(*(unsigned int *)&v168[4], v176);
        v165 = *((_WORD *)this + 1088);
        v185[1] = __PAIR64__(*(unsigned int *)&v168[4], v176);
        Geometry = Mesh::GenerateGeometry(
                     (CDrawListEntryBuilder *)((char *)this + 104),
                     v168[9],
                     v168[8],
                     (__int64 *)&v184,
                     (__int64)v185,
                     (float *)&v168[4],
                     v165,
                     (unsigned __int16 *)(v142 + 2 * v140),
                     (int *)v168);
        v17 = Geometry;
        if ( Geometry >= 0 )
        {
          v145 = *(_DWORD *)&v168[4];
          v146 = (char *)this + 192;
          *((_DWORD *)this + 544) += *(_DWORD *)&v168[4];
          v147 = v172;
          v148 = *((_QWORD *)this + 25);
          *(_OWORD *)&v186.m11 = 0uLL;
          v149 = v141 + v145 * v172;
          v150 = (v148 - *((_QWORD *)this + 24)) >> 4;
          if ( v149 <= v150 )
          {
            detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
              v146,
              v149);
          }
          else
          {
            *(_QWORD *)&v184.m11 = v148;
            detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::insert(
              (_DWORD)v146,
              (unsigned int)v185,
              (unsigned int)&v184,
              v149 - v150,
              (__int64)&v186);
          }
          v151 = *((_QWORD *)this + 149);
          v152 = v145 * v147;
          v153 = (char *)this + 1184;
          v154 = (_OWORD *)*v88;
          *(_OWORD *)&v186.m11 = 0uLL;
          v155 = (char *)v174[0] + v152;
          v156 = (v151 - (__int64)v154) >> 4;
          if ( (unsigned __int64)v155 <= v156 )
          {
            detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
              v153,
              v155);
          }
          else
          {
            *(_QWORD *)&v184.m11 = v151;
            detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::insert(
              (_DWORD)v153,
              (unsigned int)v185,
              (unsigned int)&v184,
              (_DWORD)v155 - v156,
              (__int64)&v186);
          }
          *(_WORD *)&v168[10] = 0;
          detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
            (_QWORD *)this + 273,
            v171.m128_u64[0] + *(int *)v168,
            (unsigned __int16 *)&v168[10]);
          goto LABEL_172;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v144, 0LL, 0, Geometry, 0x476u);
LABEL_175:
        MilInstrumentationCheckHR_MaybeFailFast(v157, 0LL, 0, v17, 0x3F3u);
        v5 = v166;
        goto LABEL_191;
      }
    }
LABEL_172:
    CDrawListEntryBuilder::TransformHWGeometryAndComputeUV(
      this,
      v179,
      (const struct D2D1::Matrix3x2F *)&matrix,
      (const struct D2D1::Matrix3x2F *)&v173,
      v177);
    v46 = v170;
LABEL_182:
    ++*((_DWORD *)this + 568);
    if ( !v167[0] )
      goto LABEL_188;
    if ( **((_QWORD **)this + 2) )
      ++*((_DWORD *)this + 24);
    if ( !v46 )
    {
      ++dword_180308178;
      goto LABEL_189;
    }
    v159 = v46 - 1;
    if ( !v159 )
    {
      ++dword_18030817C;
      goto LABEL_189;
    }
    if ( v159 == 1 )
LABEL_188:
      ++dword_180308174;
LABEL_189:
    v5 = v166;
LABEL_190:
    v17 = 0;
    goto LABEL_191;
  }
  v69 = (CDrawListPolygonBuilder *)*((_QWORD *)this + 23);
  if ( !v69 )
  {
    v70 = HeapAlloc(WPF::g_processHeap, 0, 0xB0uLL);
    v71 = v70;
    if ( v70 )
    {
      memset_0(v70, 0, 0xB0uLL);
      v71[2] = 0;
      *(_QWORD *)v71 = &CDrawListPolygonBuilder::`vftable'{for `CMILCOMBase'};
      *((_QWORD *)v71 + 2) = &CDrawListPolygonBuilder::`vftable'{for `ID2D1GeometrySink'};
      *((_QWORD *)v71 + 3) = v71 + 12;
      *((_QWORD *)v71 + 4) = v71 + 12;
      *((_QWORD *)v71 + 5) = v71 + 44;
    }
    else
    {
      v71 = 0LL;
    }
    wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
      (char *)this + 184,
      v71);
    v69 = (CDrawListPolygonBuilder *)*((_QWORD *)this + 23);
    if ( !v69 )
    {
      v17 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024882, 0x3CAu);
      goto LABEL_50;
    }
  }
  v72 = CDrawListPolygonBuilder::Build(v69, v9);
  v17 = v72;
  if ( v72 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v73, 0LL, 0, v72, 0x3CDu);
    goto LABEL_50;
  }
  v74 = v167[0];
  if ( *((_DWORD *)this + 3) == 1 || v167[0] && !*((_BYTE *)this + 28) )
    v75 = 0;
  else
    v75 = 3;
  *(_QWORD *)&v188 = &v189.m256i_i64[1];
  *((_QWORD *)&v188 + 1) = &v189.m256i_i64[1];
  v189.m256i_i64[0] = (__int64)&v191;
  v76 = *((_QWORD *)this + 23);
  v77 = *(_QWORD *)(v76 + 24);
  v78 = *(_QWORD *)(v76 + 32) - v77;
  v185[1] = v77;
  v79 = v78 >> 3;
  v185[0] = (unsigned int)v79;
  if ( !v77 && (_DWORD)v79 )
  {
    gsl::details::terminate((gsl::details *)v79);
    __debugbreak();
  }
  CEdgeFlagsMap::ResolveEdgeFlags((_DWORD)v34, (unsigned int)v185, v75, (unsigned int)&v188, (__int64)v167);
  if ( !v74 || (v6 = v167[0] == 0, v167[0] = 1, v6) )
    v167[0] = 0;
  v66 = (CDrawListEntryBuilder *)((char *)this + 104);
  PolygonMesh = Mesh::CreatePolygonMesh(
                  (CDrawListEntryBuilder *)((char *)this + 104),
                  (const struct Mesh::ContentInfo *)&v168[12],
                  *(const struct D2D_POINT_2F **)(*((_QWORD *)this + 23) + 24LL),
                  (const enum D2D1_EDGE_FLAGS *)v188,
                  (__int64)(*(_QWORD *)(*((_QWORD *)this + 23) + 32LL) - *(_QWORD *)(*((_QWORD *)this + 23) + 24LL)) >> 3);
  v17 = PolygonMesh;
  if ( PolygonMesh >= 0 )
  {
    v82 = (__m256i *)v188;
    if ( (__int64)(*((_QWORD *)&v188 + 1) - v188) >> 2 )
    {
      detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
        &v188,
        0LL);
      v82 = (__m256i *)v188;
    }
    *(_QWORD *)&v188 = 0LL;
    if ( v82 == (__m256i *)&v189.m256i_u64[1] )
      v82 = 0LL;
    WPF::ProcessHeapImpl::Free(v82);
    goto LABEL_95;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v81, 0LL, 0, PolygonMesh, 0x3EDu);
  v158 = (__m256i *)v188;
  if ( (__int64)(*((_QWORD *)&v188 + 1) - v188) >> 2 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
      &v188,
      0LL);
    v158 = (__m256i *)v188;
  }
  *(_QWORD *)&v188 = 0LL;
  if ( v158 == (__m256i *)&v189.m256i_u64[1] )
    v158 = 0LL;
  WPF::ProcessHeapImpl::Free(v158);
  v5 = v166;
LABEL_191:
  v160 = v208;
  if ( (v209 - v208) >> 3 )
  {
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::clear_region(
      &v208,
      v12,
      (v209 - v208) >> 3);
    v160 = v208;
  }
  v208 = 0LL;
  if ( v160 == v211 )
    v160 = 0LL;
  if ( v160 )
    HeapFree(WPF::g_processHeap, 0, v160);
  v161 = v204;
  if ( (v205 - v204) >> 3 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      &v204,
      0LL,
      (v205 - v204) >> 3);
    v161 = v204;
  }
  v204 = 0LL;
  if ( v161 == v207 )
    v161 = 0LL;
  if ( v161 )
    HeapFree(WPF::g_processHeap, 0, v161);
  v162 = v200;
  if ( (v201 - v200) >> 2 )
  {
    detail::vector_facade<float,detail::buffer_impl<float,6,1,detail::liberal_expansion_policy>>::clear_region(
      &v200,
      v12,
      (v201 - v200) >> 2);
    v162 = v200;
  }
  v200 = 0LL;
  if ( v162 == v203 )
    v162 = 0LL;
  if ( v162 )
    HeapFree(WPF::g_processHeap, 0, v162);
  HIDWORD(v197) = 0;
  v192 = &CRectanglesShape::`vftable';
  DynArrayImpl<0>::ShrinkToSize((__int64)&v194, 0x10u);
  if ( v199 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v199 + 16LL))(v199);
    v199 = 0LL;
  }
  if ( v194 != v195 )
  {
    WPF::ProcessHeapImpl::Free(v194);
    v194 = 0LL;
  }
  v163 = v193;
  if ( v193 )
  {
    v193 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v163 + 16LL))(v163);
  }
  if ( v5 && v9 )
    (**(void (__fastcall ***)(const struct CShape *, __int64))v9)(v9, 1LL);
  return v17;
}
