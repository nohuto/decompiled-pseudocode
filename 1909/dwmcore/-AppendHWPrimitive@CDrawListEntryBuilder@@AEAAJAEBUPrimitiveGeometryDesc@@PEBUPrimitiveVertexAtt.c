/*
 * XREFs of ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800901F0
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18009145C (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x18000F4A4 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x180013F60 (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180017538 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x1800176E8 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18001C4D8 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180028D68 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800350E8 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800427F8 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18007BD70 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007D178 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x18007DE64 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x18008D034 (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x1800916A4 (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x1800917D0 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180092E10 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x1800ADE20 (-resize@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800B7AC0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1800BB424 (--$uninitialized_copy@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x180159330 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$move@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1801AD574 (--$move@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array_iterator.c)
 *     ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1801AD7DC (--$move_backward@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE258 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE2FC (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE3D4 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE4A4 (-clear_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expa.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AE600 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vlibe.c)
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x1801AE9E0 (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x1801B84D4 (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801B9D5C (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1801BA1A4 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@W4D2D1_EDGE_FLAGS@@PE.c)
 *     ?Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z @ 0x1801BA7E8 (-Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x180228C2C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::AppendHWPrimitive(
        CDrawListEntryBuilder *this,
        const struct PrimitiveGeometryDesc *a2,
        const struct PrimitiveVertexAttributesDesc *a3,
        const struct D2D1::Matrix3x2F *a4)
{
  char v4; // r15
  _BYTE *v6; // rcx
  bool v8; // zf
  __int64 v10; // rdx
  const struct D2D1::Matrix3x2F *v11; // rdi
  const struct CShape *v12; // r14
  unsigned int v13; // r12d
  _QWORD *v14; // rax
  char *v15; // r15
  float v16; // xmm1_4
  FLOAT v17; // xmm0_4
  int v18; // esi
  __int128 v19; // xmm0
  __int64 v20; // rax
  Mesh *v21; // rsi
  int RectangleMesh; // eax
  __int64 v23; // rcx
  unsigned int v24; // edi
  char v25; // r15
  bool v26; // r12
  bool v27; // r15
  signed int GeometryCount; // eax
  __int64 v29; // rcx
  __int64 *v30; // rdi
  __int64 v31; // r10
  __int64 *v32; // r9
  const char *v33; // r11
  __int64 v34; // rcx
  unsigned __int64 v35; // rsi
  __int64 v36; // rcx
  __int128 v37; // rax
  unsigned __int64 v38; // r8
  const char *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r8
  unsigned __int64 v42; // r10
  unsigned __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rsi
  _OWORD *v46; // rsi
  __int64 v47; // r11
  _OWORD *v48; // r10
  char *v49; // rcx
  unsigned __int64 v50; // rdi
  __int64 v51; // rsi
  __int64 v52; // r8
  unsigned __int64 v53; // rsi
  bool v54; // sf
  unsigned __int64 v55; // rcx
  __int64 v56; // rdi
  _OWORD *v57; // rsi
  __int64 v58; // rdi
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  signed int Geometry; // eax
  __int64 v62; // rcx
  float v63; // ecx
  FLOAT m11; // r12d
  __int64 v65; // r8
  __int64 v66; // r9
  unsigned __int64 v67; // rsi
  __int64 v68; // rdi
  unsigned int v69; // r12d
  __int64 v70; // r9
  unsigned __int64 v71; // rsi
  __int64 v72; // r8
  __int64 v73; // rdi
  _BYTE *v74; // rsi
  _BYTE *v75; // rsi
  _BYTE *v76; // rsi
  _BYTE *v77; // rcx
  _BYTE *v78; // rdx
  __int64 v79; // rcx
  __int64 v81; // xmm1_8
  unsigned __int64 v82; // rsi
  LPVOID v83; // rax
  __int64 v84; // r8
  __int64 v85; // rdx
  LPVOID v86; // rdi
  CDrawListEntryBuilder *v87; // rcx
  __int64 v88; // rsi
  unsigned __int64 v89; // rsi
  LPVOID v90; // rax
  __int64 v91; // r8
  __int64 v92; // rdx
  LPVOID v93; // rdi
  CDrawListEntryBuilder *v94; // rcx
  float v95; // xmm8_4
  __m128 m11_low; // xmm9
  float v97; // xmm10_4
  signed int v98; // eax
  __int64 v99; // rdx
  __int64 v100; // rcx
  CShape *v101; // rdi
  __m128 v102; // xmm6
  float v103; // xmm11_4
  float v104; // xmm9_4
  float v105; // xmm10_4
  signed int v106; // eax
  __int64 v107; // rcx
  int v108; // r9d
  __m128 v109; // xmm6
  __m128 v110; // xmm6
  __m128 v111; // xmm6
  float v112; // xmm2_4
  float v113; // xmm6_4
  signed int v114; // eax
  __int64 v115; // rcx
  __int128 v116; // xmm0
  __int64 v117; // xmm1_8
  __m128 v118; // xmm0
  __m128 v119; // xmm1
  __m128 v120; // xmm0
  __m128 v121; // xmm1
  __m128 v122; // xmm1
  __m128 v123; // xmm1
  signed int v124; // eax
  __int64 v125; // rcx
  LPVOID *v126; // rdi
  __int64 v127; // rdx
  signed int v128; // eax
  __int64 v129; // rcx
  float *v130; // r9
  unsigned int v131; // r9d
  __m256i *v132; // rcx
  LPVOID *v133; // rax
  CDrawListPolygonBuilder *v134; // rcx
  _DWORD *v135; // rdi
  char v136; // di
  __int64 v137; // r8
  __int64 v138; // rax
  __int64 v139; // rdx
  __int64 v140; // rcx
  __int64 v141; // rcx
  signed int PolygonMesh; // eax
  __int64 v143; // rcx
  __m256i *v144; // rcx
  bool v145; // sf
  bool v146; // sf
  bool v147; // sf
  bool v148; // sf
  int v149; // esi
  HANDLE ProcessHeap; // rax
  HANDLE v151; // rax
  HANDLE v152; // rax
  unsigned int v153; // [rsp+20h] [rbp-E0h]
  char v154; // [rsp+50h] [rbp-B0h]
  char v155[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v156[3]; // [rsp+54h] [rbp-ACh] BYREF
  D2D1_MATRIX_3X2_F v157; // [rsp+60h] [rbp-A0h] BYREF
  float v158[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v159[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v160; // [rsp+A0h] [rbp-60h]
  int v161; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v162; // [rsp+B8h] [rbp-48h]
  CShape *v163[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct D2D_MATRIX_3X2_F v164; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v165; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v166; // [rsp+100h] [rbp+0h]
  D2D1_MATRIX_3X2_F v167; // [rsp+110h] [rbp+10h] BYREF
  int v168; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v169; // [rsp+12Ch] [rbp+2Ch]
  unsigned int v170; // [rsp+130h] [rbp+30h]
  __int128 v171; // [rsp+140h] [rbp+40h] BYREF
  __m256i v172; // [rsp+150h] [rbp+50h]
  __int128 v173; // [rsp+170h] [rbp+70h]
  int v174; // [rsp+180h] [rbp+80h]
  D2D1_MATRIX_3X2_F v175; // [rsp+190h] [rbp+90h] BYREF
  __int128 v176; // [rsp+1B0h] [rbp+B0h] BYREF
  D2D1_MATRIX_3X2_F v177; // [rsp+1C0h] [rbp+C0h] BYREF
  void **v178; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v179; // [rsp+1E8h] [rbp+E8h]
  void *v180; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE *v181; // [rsp+1F8h] [rbp+F8h]
  int v182; // [rsp+200h] [rbp+100h]
  __int64 v183; // [rsp+204h] [rbp+104h]
  _BYTE Mem[16]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v185; // [rsp+220h] [rbp+120h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+230h] [rbp+130h] BYREF
  __int128 v187; // [rsp+250h] [rbp+150h] BYREF
  __m256i v188; // [rsp+260h] [rbp+160h] BYREF
  __m128 v189; // [rsp+280h] [rbp+180h]
  char v190; // [rsp+2A8h] [rbp+1A8h] BYREF
  LPVOID v191; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE *v192; // [rsp+2B8h] [rbp+1B8h]
  LPVOID *v193; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v194[64]; // [rsp+2C8h] [rbp+1C8h] BYREF
  LPVOID v195; // [rsp+308h] [rbp+208h] BYREF
  _BYTE *v196; // [rsp+310h] [rbp+210h]
  LPVOID *p_lpMem; // [rsp+318h] [rbp+218h]
  _BYTE v198[128]; // [rsp+320h] [rbp+220h] BYREF
  LPVOID lpMem; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE *v200; // [rsp+3A8h] [rbp+2A8h]
  char *v201; // [rsp+3B0h] [rbp+2B0h]
  _BYTE v202[128]; // [rsp+3B8h] [rbp+2B8h] BYREF
  char v203; // [rsp+438h] [rbp+338h] BYREF

  v4 = 0;
  v170 = *((_DWORD *)this + 544);
  *(_QWORD *)&v177.m11 = a4;
  v178 = &CRectanglesShape::`vftable';
  v6 = Mem;
  v154 = 0;
  v181 = Mem;
  LOBYTE(v159[1]) = 0;
  v8 = *((_DWORD *)this + 3) == 1;
  v191 = v194;
  v157.dx = 0.0;
  v192 = v194;
  v10 = 0LL;
  v159[0] = 0LL;
  v193 = &v195;
  v11 = a4;
  v179 = 0LL;
  v195 = v198;
  v12 = 0LL;
  v180 = Mem;
  v196 = v198;
  p_lpMem = &lpMem;
  lpMem = v202;
  v200 = v202;
  v201 = &v203;
  v162 = (unsigned __int64)&v191;
  v182 = 1;
  v183 = 1LL;
  v185 = 0LL;
  v155[0] = 0;
  if ( v8 )
  {
    v13 = 0;
    v156[0] = 0;
  }
  else
  {
    v8 = (*((_BYTE *)a2 + 24) & 4) == 0;
    v13 = *((_DWORD *)a2 + 4);
    v156[0] = v13;
    if ( !v8 && v13 )
      *((_BYTE *)this + 2297) = 1;
  }
  if ( a4 )
  {
    v81 = *((_QWORD *)a4 + 2);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)a4;
    *(_QWORD *)&matrix.m[2][0] = v81;
    if ( !D2D1IsMatrixInvertible(&matrix) )
      goto LABEL_64;
    v10 = v185;
    v6 = v180;
  }
  else
  {
    *(_OWORD *)&matrix.m11 = _xmm;
    *(_QWORD *)&matrix.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  }
  if ( !*((_BYTE *)this + 2296) || (v14 = (_QWORD *)*((_QWORD *)this + 2), !*v14) && !v14[2] )
  {
    v15 = (char *)a2 + 24;
LABEL_9:
    if ( (*v15 & 1) != 0 )
    {
      v12 = *(const struct CShape **)a2;
      CShapePtr::Release((CShapePtr *)v159);
      v154 = 0;
      v133 = (LPVOID *)*((_QWORD *)a2 + 1);
      v167 = matrix;
      if ( v133 )
        v162 = (unsigned __int64)v133;
    }
    else
    {
      HIDWORD(v183) = 0;
      if ( v6 != v181 )
      {
        operator delete(v6);
        v10 = v185;
        v180 = v181;
        LODWORD(v183) = v182;
      }
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v185 = 0LL;
      }
      *(_OWORD *)&v175.m11 = _xmm;
      DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        &v180,
        &v175,
        1LL);
      v16 = *((float *)a2 + 1);
      v17 = *((float *)a2 + 2) - *(float *)a2;
      v167.dx = *(FLOAT *)a2;
      v167.dy = v16;
      v12 = (const struct CShape *)&v178;
      *(_QWORD *)&v167.m[0][1] = 0LL;
      v167.m11 = v17;
      v167.m22 = *((float *)a2 + 3) - v16;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v175,
        (const struct D2D1::Matrix3x2F *)&v167,
        (const struct D2D1::Matrix3x2F *)&matrix);
      v167 = v175;
    }
    v18 = 2;
    v161 = 2;
    goto LABEL_16;
  }
  v15 = (char *)a2 + 24;
  if ( (*((_BYTE *)a2 + 24) & 1) != 0 )
  {
    v114 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)a2 + 32LL))(*(_QWORD *)a2, &v176, 0LL);
    v24 = v114;
    if ( v114 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v115, 0LL, 0, v114, 0x308u, 0LL);
      goto LABEL_131;
    }
    v11 = *(const struct D2D1::Matrix3x2F **)&v177.m11;
  }
  else
  {
    *(_OWORD *)&v177.m11 = *(_OWORD *)a2;
    v176 = *(_OWORD *)&v177.m11;
  }
  if ( CCpuClip::FullyContains(*((_QWORD *)this + 2), (__int64)&v176, (__int64)v11) )
  {
    v10 = v185;
    v6 = v180;
    goto LABEL_9;
  }
  v95 = *(float *)&FLOAT_1_0;
  v174 = 0;
  if ( v11 )
  {
    if ( (*v15 & 1) != 0 )
    {
      v116 = *(_OWORD *)&matrix.m11;
      v117 = *(_QWORD *)&matrix.m[2][0];
      m11_low = (__m128)(unsigned int)FLOAT_1_0;
      v167 = matrix;
      v97 = *(float *)&FLOAT_1_0;
    }
    else
    {
      D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
        (D2DMatrixHelper *)&matrix,
        &v164,
        (float *)&v161,
        &v167.m11);
      v117 = *(_QWORD *)&v167.m[2][0];
      v116 = *(_OWORD *)&v167.m11;
      m11_low = (__m128)LODWORD(v164.m11);
      v97 = *(float *)&v161;
    }
    *(_QWORD *)&v175.m[2][0] = v117;
    *(_OWORD *)&v175.m11 = v116;
    D2D1::Matrix3x2F::Invert(&v175);
    *(_OWORD *)&v188.m256i_u64[1] = 0LL;
    v118 = (__m128)(unsigned __int64)v187;
    v189.m128_u64[1] = 0x3F80000000000000LL;
    v118.m128_f32[0] = v175.m11;
    v188.m256i_i64[3] = 1065353216LL;
    v119 = *(__m128 *)v188.m256i_i8;
    v174 = 0;
    v120 = _mm_shuffle_ps(v118, v118, 225);
    v119.m128_f32[0] = v175.m21;
    v120.m128_f32[0] = v175.m12;
    v121 = _mm_shuffle_ps(v119, v119, 225);
    v121.m128_f32[0] = v175.m22;
    *(__m128 *)v188.m256i_i8 = _mm_shuffle_ps(v121, v121, 225);
    v172 = v188;
    v122 = v189;
    v187 = (__int128)_mm_shuffle_ps(v120, v120, 225);
    v122.m128_f32[0] = v175.dx;
    v171 = v187;
    v123 = _mm_shuffle_ps(v122, v122, 225);
    v123.m128_f32[0] = v175.dy;
    v189 = _mm_shuffle_ps(v123, v123, 225);
    v173 = (__int128)v189;
  }
  else
  {
    m11_low = (__m128)(unsigned int)FLOAT_1_0;
    v97 = *(float *)&FLOAT_1_0;
    *(_OWORD *)&v167.m11 = _xmm;
    LOWORD(v174) = 32085;
    v171 = _xmm;
    *(_QWORD *)&v167.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_OWORD *)v172.m256i_i8 = _xmm;
    *(_OWORD *)&v172.m256i_u64[2] = _xmm;
    v173 = _xmm;
  }
  v98 = CCpuClip::ResolveClip(*((CCpuClip **)this + 2), v163);
  v24 = v98;
  if ( v98 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v100, 0LL, 0, v98, 0x348u, 0LL);
    goto LABEL_131;
  }
  if ( (*v15 & 1) != 0 )
  {
    v124 = CShape::Combine(*(_QWORD *)a2, v99, (__int64)v163[0], (__int64)&v171, 1, &v177);
    v24 = v124;
    if ( v124 >= 0 )
    {
      CShapePtr::Release((CShapePtr *)v159);
      v12 = *(const struct CShape **)&v177.m11;
      v126 = &v191;
      v159[0] = *(_QWORD *)&v177.m11;
      v154 = 1;
      LOBYTE(v159[1]) = 1;
      if ( *((_QWORD *)a2 + 1) )
        v126 = (LPVOID *)*((_QWORD *)a2 + 1);
      v162 = (unsigned __int64)v126;
      goto LABEL_146;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v125, 0LL, 0, v124, 0x353u, 0LL);
LABEL_131:
    v4 = 0;
    goto LABEL_65;
  }
  v101 = v163[0];
  v102 = m11_low;
  v102.m128_f32[0] = m11_low.m128_f32[0] * *(float *)a2;
  v103 = v97 * *((float *)a2 + 1);
  v104 = m11_low.m128_f32[0] * *((float *)a2 + 2);
  v105 = v97 * *((float *)a2 + 3);
  *(_QWORD *)&v176 = __PAIR64__(LODWORD(v103), v102.m128_u32[0]);
  *((_QWORD *)&v176 + 1) = __PAIR64__(LODWORD(v105), LODWORD(v104));
  if ( !CShape::IsAxisAlignedRectangle(v163[0]) || !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)&v171) )
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v178, (const struct MilRectF *)&v176);
    v128 = CShape::Combine((__int64)&v178, v127, (__int64)v101, (__int64)&v171, 1, &v177);
    v24 = v128;
    if ( v128 >= 0 )
    {
      CShapePtr::Release((CShapePtr *)v159);
      v12 = *(const struct CShape **)&v177.m11;
      v159[0] = *(_QWORD *)&v177.m11;
      v154 = 1;
      LOBYTE(v159[1]) = 1;
      *(_OWORD *)&v177.m11 = v176;
      *(_OWORD *)&v175.m11 = v176;
      CEdgeFlagsMap::AddEdgeFlags(&v191, &v175, v13, &Matrix3x3::Identity);
      v162 = (unsigned __int64)&v191;
LABEL_146:
      v18 = 1;
      v161 = 1;
      v155[0] = 1;
      goto LABEL_113;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v129, 0LL, 0, v128, 0x38Eu, 0LL);
    goto LABEL_131;
  }
  v106 = (*(__int64 (__fastcall **)(CShape *, D2D1_MATRIX_3X2_F *, __int128 *))(*(_QWORD *)v101 + 32LL))(
           v101,
           &v177,
           &v171);
  v24 = v106;
  if ( v106 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v107, 0LL, 0, v106, 0x36Cu, 0LL);
    goto LABEL_131;
  }
  if ( *((_BYTE *)this + 28) )
    v108 = 50529027;
  else
    v108 = 0;
  v109 = _mm_shuffle_ps(v102, v102, 225);
  v109.m128_f32[0] = v103;
  v110 = _mm_shuffle_ps(v109, v109, 198);
  v110.m128_f32[0] = v104;
  v111 = _mm_shuffle_ps(v110, v110, 39);
  v111.m128_f32[0] = v105;
  *(__m128 *)v163 = _mm_shuffle_ps(v111, v111, 57);
  v165 = *(_OWORD *)v163;
  *(_OWORD *)&v175.m11 = *(_OWORD *)&v177.m11;
  if ( ClipRectAndEdgeFlags((float *)&v165, v13, &v175.m11, v108, v163, v156) )
  {
    v155[0] = 1;
    v176 = *(_OWORD *)v163;
  }
  CRectanglesShape::SetSingleRect((CRectanglesShape *)&v178, (const struct MilRectF *)&v176);
  CShapePtr::Release((CShapePtr *)v159);
  v13 = v156[0];
  v12 = (const struct CShape *)&v178;
  v159[0] = (__int64)&v178;
  v154 = 0;
  v18 = 0;
  LOBYTE(v159[1]) = 0;
  *(float *)&v161 = 0.0;
LABEL_113:
  if ( !CShapePtr::IsEmpty((CShapePtr *)v159) )
  {
    v112 = *((float *)this + 1);
    v113 = *(float *)&FLOAT_1_0;
    v156[0] = (int)FLOAT_1_0;
    LODWORD(v158[0]) = (_DWORD)FLOAT_1_0;
    if ( v112 < 1.0 || *((float *)this + 2) < 1.0 )
    {
      v175.m22 = *((FLOAT *)this + 2);
      v175.m11 = v112;
      *(_QWORD *)&v175.m[0][1] = 0LL;
      v175.dx = 0.0 - (float)(v112 * 0.0);
      v175.dy = 0.0 - (float)(v175.m22 * 0.0);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v177,
        (const struct D2D1::Matrix3x2F *)&v167,
        (const struct D2D1::Matrix3x2F *)&v175);
      v175 = v177;
      D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)&v175, (const struct D2D_MATRIX_3X2_F *)v156, v158, v130);
      v95 = *(float *)v156;
      v113 = v158[0];
    }
    RectangleMesh = (*(__int64 (__fastcall **)(const struct CShape *, D2D1_MATRIX_3X2_F *, _QWORD))(*(_QWORD *)v12 + 32LL))(
                      v12,
                      &v177,
                      0LL);
    v24 = RectangleMesh;
    if ( RectangleMesh < 0 )
    {
      v153 = 947;
      goto LABEL_151;
    }
    if ( (float)((float)(v177.m21 - v177.m11) * v95) <= 0.015625
      || (float)((float)(v177.m22 - v177.m12) * v113) <= 0.015625 )
    {
      CShapePtr::Release((CShapePtr *)v159);
      v12 = (const struct CShape *)v159[0];
      v154 = v159[1];
    }
  }
LABEL_16:
  if ( !v12 || (*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)v12 + 16LL))(v12) )
    goto LABEL_61;
  if ( a3 )
  {
    v19 = *(_OWORD *)a3;
    LOBYTE(v157.m[2][0]) = *((_BYTE *)a3 + 16);
  }
  else
  {
    v19 = _xmm;
  }
  v20 = *(_QWORD *)v12;
  *(_OWORD *)&v157.m11 = v19;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, int *))(v20 + 40))(v12, &v168) && v168 == 1 )
  {
    (*(void (__fastcall **)(const struct CShape *, D2D1_MATRIX_3X2_F *, __int64))(*(_QWORD *)v12 + 48LL))(
      v12,
      &v177,
      1LL);
    v21 = (CDrawListEntryBuilder *)((char *)this + 104);
    *(_OWORD *)v159 = *(_OWORD *)&v177.m11;
    *(_OWORD *)&v175.m11 = *(_OWORD *)&v177.m11;
    RectangleMesh = Mesh::CreateRectangleMesh(
                      (CDrawListEntryBuilder *)((char *)this + 104),
                      (const struct Mesh::ContentInfo *)&v157,
                      (const struct D2D_RECT_F *)&v175,
                      v13);
    v24 = RectangleMesh;
    if ( RectangleMesh >= 0 )
      goto LABEL_23;
    v153 = 1015;
  }
  else
  {
    v134 = (CDrawListPolygonBuilder *)*((_QWORD *)this + 23);
    if ( !v134 )
    {
      v135 = DefaultHeap::Alloc(0xB0uLL);
      if ( v135 )
      {
        v135[3] = 0;
        memset_0(v135 + 8, 0, 0x90uLL);
        *(_QWORD *)v135 = &CDrawListPolygonBuilder::`vftable'{for `CMILCOMBase'};
        *((_QWORD *)v135 + 2) = &CDrawListPolygonBuilder::`vftable'{for `ID2D1GeometrySink'};
        v135[2] = 0;
        *((_QWORD *)v135 + 3) = v135 + 12;
        *((_QWORD *)v135 + 4) = v135 + 12;
        *((_QWORD *)v135 + 5) = v135 + 44;
      }
      else
      {
        v135 = 0LL;
      }
      wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
        (char *)this + 184,
        v135);
      v134 = (CDrawListPolygonBuilder *)*((_QWORD *)this + 23);
      if ( !v134 )
      {
        v24 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x8007000E, 0x3FEu, 0LL);
        goto LABEL_158;
      }
    }
    RectangleMesh = CDrawListPolygonBuilder::Build(v134, v12);
    v24 = RectangleMesh;
    if ( RectangleMesh >= 0 )
    {
      v136 = v155[0];
      if ( *((_DWORD *)this + 3) == 1 || v155[0] && !*((_BYTE *)this + 28) )
        v137 = 0LL;
      else
        v137 = 3LL;
      *(_QWORD *)&v187 = &v188.m256i_i64[1];
      *((_QWORD *)&v187 + 1) = &v188.m256i_i64[1];
      v188.m256i_i64[0] = (__int64)&v190;
      v138 = *((_QWORD *)this + 23);
      v139 = *(_QWORD *)(v138 + 24);
      v140 = *(_QWORD *)(v138 + 32) - v139;
      *(_QWORD *)&v177.m[1][0] = v139;
      v141 = v140 >> 3;
      *(_QWORD *)&v177.m11 = (unsigned int)v141;
      if ( !v139 && (_DWORD)v141 )
      {
        ((void (__fastcall *)(__int64, _QWORD, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v141,
          0LL,
          v137);
        __debugbreak();
      }
      *(_OWORD *)&v175.m11 = *(_OWORD *)&v177.m11;
      CEdgeFlagsMap::ResolveEdgeFlags(v162, (unsigned int)&v175, v137, (unsigned int)&v187, (__int64)v155);
      if ( !v136 || (v8 = v155[0] == 0, v155[0] = 1, v8) )
        v155[0] = 0;
      v21 = (CDrawListEntryBuilder *)((char *)this + 104);
      PolygonMesh = Mesh::CreatePolygonMesh(
                      (CDrawListEntryBuilder *)((char *)this + 104),
                      (const struct Mesh::ContentInfo *)&v157,
                      *(const struct D2D_POINT_2F **)(*((_QWORD *)this + 23) + 24LL),
                      (const enum D2D1_EDGE_FLAGS *)v187,
                      (__int64)(*(_QWORD *)(*((_QWORD *)this + 23) + 32LL) - *(_QWORD *)(*((_QWORD *)this + 23) + 24LL)) >> 3);
      v24 = PolygonMesh;
      if ( PolygonMesh < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v143, 0LL, 0, PolygonMesh, 0x421u, 0LL);
        v132 = (__m256i *)v187;
        if ( (__int64)(*((_QWORD *)&v187 + 1) - v187) >> 2 )
        {
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
            &v187,
            0LL);
          v132 = (__m256i *)v187;
        }
        *(_QWORD *)&v187 = 0LL;
        if ( v132 == (__m256i *)&v188.m256i_u64[1] )
          v132 = 0LL;
        operator delete(v132);
        goto LABEL_158;
      }
      v144 = (__m256i *)v187;
      if ( (__int64)(*((_QWORD *)&v187 + 1) - v187) >> 2 )
      {
        detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
          &v187,
          0LL);
        v144 = (__m256i *)v187;
      }
      *(_QWORD *)&v187 = 0LL;
      if ( v144 == (__m256i *)&v188.m256i_u64[1] )
        v144 = 0LL;
      operator delete(v144);
LABEL_23:
      if ( !v24 )
      {
        v25 = *v15;
        v158[0] = 0.0;
        v156[0] = 0;
        v26 = (v25 & 4) != 0;
        v27 = (v25 & 2) != 0;
        GeometryCount = Mesh::GetGeometryCount(v21, v27, v26, (int *)v158, v156);
        v24 = GeometryCount;
        if ( GeometryCount < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, GeometryCount, 0x480u, 0LL);
LABEL_153:
          v131 = v24;
          v153 = 1063;
          goto LABEL_154;
        }
        if ( v156[0] > 0 )
        {
          v30 = (__int64 *)((char *)this + 192);
          v31 = *((_QWORD *)this + 24);
          v32 = (__int64 *)((char *)this + 1184);
          v33 = (const char *)*((_QWORD *)this + 25);
          v34 = (__int64)(*((_QWORD *)this + 149) - *((_QWORD *)this + 148)) >> 4;
          v169 = 8 * *(_DWORD *)this + 16;
          v35 = (__int64)&v33[-v31] >> 4;
          v163[0] = (CShape *)v34;
          v36 = *((_QWORD *)this + 274) - *((_QWORD *)this + 273);
          LODWORD(v164.m11) = v169 >> 4;
          *(_QWORD *)&v165 = v31;
          v162 = v35;
          *(_QWORD *)&v177.m11 = v36 >> 1;
          *((_QWORD *)&v37 + 1) = LODWORD(v158[0]) * (v169 >> 4);
          *(_QWORD *)&v176 = *((_QWORD *)&v37 + 1);
          v38 = *((_QWORD *)&v37 + 1) + v35;
          v159[0] = *((_QWORD *)&v37 + 1) + v35;
          *(_OWORD *)&v175.m11 = 0uLL;
          if ( *((_QWORD *)&v37 + 1) + v35 <= v35 )
          {
            detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
              v30,
              v159[0]);
            v32 = (__int64 *)((char *)this + 1184);
          }
          else
          {
            v39 = (const char *)*((_QWORD *)this + 26);
            if ( (unsigned __int64)((v39 - v33) >> 4) < *((_QWORD *)&v37 + 1) )
            {
              if ( v38 < v35 )
                std::_Xoverflow_error(v39);
              v82 = detail::liberal_expansion_policy::expand(
                      (detail::liberal_expansion_policy *)((__int64)&v39[-v31] >> 4),
                      (__int64)&v39[-v31] >> 4,
                      v38);
              v83 = operator new(saturated_mul(v82, 0x10uLL));
              v84 = *((_QWORD *)this + 25);
              v85 = *((_QWORD *)this + 24);
              *(_QWORD *)&v157.m11 = v83;
              v86 = v83;
              *(_OWORD *)&v157.m[1][0] = v162;
              v160 = 0LL;
              *(_OWORD *)v159 = *(_OWORD *)&v157.m11;
              std::uninitialized_copy<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                &v157,
                v85,
                v84,
                v159);
              v87 = (CDrawListEntryBuilder *)*((_QWORD *)this + 24);
              *((_QWORD *)this + 24) = v86;
              v30 = (__int64 *)((char *)this + 192);
              if ( v87 == (CDrawListEntryBuilder *)((char *)this + 224) )
                v87 = 0LL;
              operator delete(v87);
              v31 = *v30;
              v32 = (__int64 *)((char *)this + 1184);
              *((_QWORD *)&v37 + 1) = v176;
              v33 = (const char *)(*v30 + 16 * v162);
              v88 = *v30 + 16 * v82;
              *((_QWORD *)this + 25) = v33;
              *((_QWORD *)this + 26) = v88;
              v35 = v162;
              *(_QWORD *)&v165 = v31;
            }
            v40 = 0LL;
            *(_QWORD *)&v157.m[2][0] = 0LL;
            v41 = (__int64)&v33[-v31] >> 4;
            v160 = 0LL;
            *(_QWORD *)&v37 = v165 + 16 * v41;
            v42 = v41 - v35;
            *(_OWORD *)&v157.m11 = v37;
            *(_OWORD *)v159 = v37;
            if ( *((_QWORD *)&v37 + 1) && !(_QWORD)v37 )
              goto LABEL_233;
            v160 = *((_QWORD *)&v37 + 1);
            v43 = v41 - v35;
            if ( *((_QWORD *)&v37 + 1) < v42 )
              v43 = *((_QWORD *)&v37 + 1);
            *(_OWORD *)&v157.m11 = v37;
            v44 = 16 * v43;
            *(_QWORD *)&v37 = &v33[-v44];
            *(_QWORD *)&v157.m[2][0] = *((_QWORD *)&v37 + 1);
            if ( v33 != &v33[-v44] )
            {
              v40 = v159[0] + 16LL * *((_QWORD *)&v37 + 1);
              *(_QWORD *)&v164.m[2][0] = *(_QWORD *)&v157.m[2][0];
              v30 = (__int64 *)((char *)this + 192);
              do
              {
                v33 -= 16;
                if ( !*(_QWORD *)&v157.m11 )
                  goto LABEL_233;
                if ( !*(_QWORD *)&v164.m[2][0] )
                  goto LABEL_233;
                v40 -= 16LL;
                --*(_QWORD *)&v164.m[2][0];
                v35 = v162;
                if ( *(_QWORD *)&v164.m[2][0] >= *(_QWORD *)&v157.m[1][0] )
                  goto LABEL_233;
                *(_OWORD *)v40 = *(_OWORD *)v33;
              }
              while ( v33 != (const char *)v37 );
            }
            if ( v42 > *((_QWORD *)&v37 + 1) )
            {
              v40 = v165;
              *(_QWORD *)&v157.m11 = v165;
              *(_OWORD *)&v157.m[1][0] = (unsigned __int64)v41;
              v145 = v41 < 0;
              if ( v41 )
              {
                if ( !(_QWORD)v165 )
                  goto LABEL_233;
                v145 = v41 < 0;
              }
              if ( v145 && v41 )
                goto LABEL_233;
              *(_QWORD *)&v157.m[2][0] = v41;
              v45 = 16 * v35;
              *(_OWORD *)v159 = *(_OWORD *)&v157.m11;
              v160 = v41;
              std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                &v157,
                v165 + v45,
                v165 + 16 * (v41 - *((_QWORD *)&v37 + 1)),
                v159);
              *((_QWORD *)&v37 + 1) = v176;
              v32 = (__int64 *)((char *)this + 1184);
            }
            else
            {
              v45 = 16 * v35;
            }
            v46 = (_OWORD *)(v165 + v45);
            v30[1] += 16LL * *((_QWORD *)&v37 + 1);
            if ( *((_QWORD *)&v37 + 1) )
            {
              *v46 = *(_OWORD *)&v175.m11;
              qmemcpy(v46 + 1, v46, 8 * ((unsigned __int64)(16LL * *((_QWORD *)&v37 + 1) - 9) >> 3));
            }
          }
          v47 = *v32;
          v48 = (_OWORD *)v32[1];
          *(_OWORD *)&v175.m11 = 0uLL;
          v49 = (char *)v163[0] + (unsigned int)(LODWORD(v158[0]) * LODWORD(v164.m11));
          v50 = ((__int64)v48 - v47) >> 4;
          v159[0] = v47;
          *(_QWORD *)&v164.m[2][0] = v50;
          if ( (unsigned __int64)v49 <= v50 )
          {
            detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
              v32,
              v49);
          }
          else
          {
            v51 = v32[2];
            *((_QWORD *)&v37 + 1) = &v49[-v50];
            *(_QWORD *)&v176 = &v49[-v50];
            if ( (v51 - (__int64)v48) >> 4 < (unsigned __int64)&v49[-v50] )
            {
              if ( (unsigned __int64)v49 < v50 )
                std::_Xoverflow_error(v49);
              v89 = detail::liberal_expansion_policy::expand(
                      (detail::liberal_expansion_policy *)v49,
                      (v51 - v47) >> 4,
                      (unsigned __int64)v163[0] + (unsigned int)(LODWORD(v158[0]) * LODWORD(v164.m11)));
              v90 = operator new(saturated_mul(v89, 0x10uLL));
              v91 = *((_QWORD *)this + 149);
              v92 = *((_QWORD *)this + 148);
              *(_QWORD *)&v157.m11 = v90;
              v93 = v90;
              *(_OWORD *)&v157.m[1][0] = *(unsigned __int64 *)&v164.m[2][0];
              v160 = 0LL;
              *(_OWORD *)v159 = *(_OWORD *)&v157.m11;
              std::uninitialized_copy<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                &v157,
                v92,
                v91,
                v159);
              v94 = (CDrawListEntryBuilder *)*((_QWORD *)this + 148);
              *((_QWORD *)this + 148) = v93;
              if ( v94 == (CDrawListEntryBuilder *)((char *)this + 1216) )
                v94 = 0LL;
              operator delete(v94);
              v50 = *(_QWORD *)&v164.m[2][0];
              v32 = (__int64 *)((char *)this + 1184);
              v47 = *((_QWORD *)this + 148);
              *((_QWORD *)&v37 + 1) = v176;
              v48 = (_OWORD *)(v47 + 16LL * *(_QWORD *)&v164.m[2][0]);
              *((_QWORD *)this + 149) = v48;
              *((_QWORD *)this + 150) = v47 + 16 * v89;
              v159[0] = v47;
            }
            *(_OWORD *)&v157.m[1][0] = *((unsigned __int64 *)&v37 + 1);
            v52 = ((__int64)v48 - v47) >> 4;
            v166 = 0LL;
            v40 = v47 + 16 * v52;
            v53 = v52 - v50;
            *(_QWORD *)&v157.m11 = v40;
            v165 = *(_OWORD *)&v157.m11;
            v54 = v37 < 0;
            if ( *((_QWORD *)&v37 + 1) )
            {
              if ( !v40 )
                goto LABEL_233;
              v54 = v37 < 0;
            }
            if ( v54 && *((_QWORD *)&v37 + 1) )
              goto LABEL_233;
            v166 = *((_QWORD *)&v37 + 1);
            v55 = (((__int64)v48 - v47) >> 4) - v50;
            if ( *((_QWORD *)&v37 + 1) < v53 )
              v55 = *((_QWORD *)&v37 + 1);
            v40 = 16 * v55;
            *(_QWORD *)&v37 = (char *)v48 - v40;
            *(_QWORD *)&v157.m[2][0] = *((_QWORD *)&v37 + 1);
            if ( v48 != (_OWORD *)((char *)v48 - v40) )
            {
              v40 = v165 + 16LL * *((_QWORD *)&v37 + 1);
              *(_QWORD *)&v165 = *(_QWORD *)&v157.m[2][0];
              v50 = *(_QWORD *)&v164.m[2][0];
              do
              {
                --v48;
                if ( !*(_QWORD *)&v157.m11 )
                  goto LABEL_233;
                if ( !(_QWORD)v165 )
                  goto LABEL_233;
                v40 -= 16LL;
                *(_QWORD *)&v165 = v165 - 1;
                v32 = (__int64 *)((char *)this + 1184);
                if ( (unsigned __int64)v165 >= *(_QWORD *)&v157.m[1][0] )
                  goto LABEL_233;
                *(_OWORD *)v40 = *v48;
              }
              while ( v48 != (_OWORD *)v37 );
            }
            if ( v53 > *((_QWORD *)&v37 + 1) )
            {
              *(_QWORD *)&v157.m11 = v47;
              *(_OWORD *)&v157.m[1][0] = (unsigned __int64)v52;
              v146 = v52 < 0;
              if ( v52 )
              {
                if ( !v47 )
                  goto LABEL_233;
                v146 = v52 < 0;
              }
              if ( v146 && v52 )
                goto LABEL_233;
              *(_QWORD *)&v157.m[2][0] = v52;
              v56 = 16 * v50;
              v165 = *(_OWORD *)&v157.m11;
              v166 = v52;
              std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                &v157,
                v47 + v56,
                v47 + 16 * (v52 - *((_QWORD *)&v37 + 1)),
                &v165);
              *((_QWORD *)&v37 + 1) = v176;
              v32 = (__int64 *)((char *)this + 1184);
              v47 = v159[0];
            }
            else
            {
              v56 = 16 * v50;
            }
            v57 = (_OWORD *)(v47 + v56);
            v32[1] += 16LL * *((_QWORD *)&v37 + 1);
            if ( *((_QWORD *)&v37 + 1) )
            {
              *v57 = *(_OWORD *)&v175.m11;
              qmemcpy(v57 + 1, v57, 8 * ((unsigned __int64)(16LL * *((_QWORD *)&v37 + 1) - 9) >> 3));
            }
          }
          v58 = *(_QWORD *)&v177.m11;
          LOWORD(v158[1]) = 0;
          detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
            (char *)this + 2184,
            *(_QWORD *)&v177.m11 + v156[0],
            &v158[1]);
          v59 = v162;
          *(_QWORD *)&v176 = *((_QWORD *)this + 24) + 16 * v162;
          v159[0] = *((_QWORD *)this + 148) + 16 * (__int64)v163[0];
          v60 = *((_QWORD *)this + 273);
          *((_QWORD *)&v176 + 1) = __PAIR64__(LODWORD(v158[0]), v169);
          v159[1] = __PAIR64__(LODWORD(v158[0]), v169);
          Geometry = Mesh::GenerateGeometry(
                       (CDrawListEntryBuilder *)((char *)this + 104),
                       v27,
                       v26,
                       (__int64)&v176,
                       (__int64)v159,
                       v158,
                       *((_WORD *)this + 1088),
                       (unsigned __int16 *)(v60 + 2 * v58),
                       v156);
          v24 = Geometry;
          if ( Geometry >= 0 )
          {
            v63 = v158[0];
            *((_DWORD *)this + 544) += LODWORD(v158[0]);
            m11 = v164.m11;
            v65 = *((_QWORD *)this + 25);
            v66 = *((_QWORD *)this + 24);
            *(_OWORD *)&v175.m11 = 0uLL;
            v40 = v59 + (unsigned int)(LODWORD(v164.m11) * LODWORD(v63));
            v67 = (v65 - v66) >> 4;
            if ( v40 > v67 )
            {
              v159[0] = v65;
              detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::insert(
                (_DWORD)this + 192,
                (unsigned int)&v176,
                (unsigned int)v159,
                v40 - v67,
                (__int64)&v175);
              goto LABEL_55;
            }
            v68 = (v65 - 16 * v40 - v66) >> 4;
            *((_QWORD *)&v37 + 1) = v68 + v40;
            if ( v68 + v40 > v67 )
              std::_Xoverflow_error((const char *)v40);
            *(_QWORD *)&v157.m11 = v66;
            *(_OWORD *)&v157.m[1][0] = (unsigned __int64)((v65 - v66) >> 4);
            if ( *((_QWORD *)&v37 + 1) == v67 )
            {
LABEL_54:
              *((_QWORD *)this + 25) = v65 - 16 * v68;
LABEL_55:
              v69 = LODWORD(v158[0]) * LODWORD(m11);
              v40 = *((_QWORD *)this + 149);
              v70 = *((_QWORD *)this + 148);
              *(_OWORD *)&v175.m11 = 0uLL;
              v71 = (v40 - v70) >> 4;
              v72 = (__int64)v163[0] + v69;
              if ( v72 > v71 )
              {
                v159[0] = v40;
                detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::insert(
                  (_DWORD)this + 1184,
                  (unsigned int)&v176,
                  (unsigned int)v159,
                  v72 - v71,
                  (__int64)&v175);
                goto LABEL_59;
              }
              v73 = (v40 - 16 * v72 - v70) >> 4;
              *((_QWORD *)&v37 + 1) = v73 + v72;
              if ( v73 + v72 > v71 )
                std::_Xoverflow_error((const char *)v40);
              *(_QWORD *)&v157.m11 = v70;
              *(_OWORD *)&v157.m[1][0] = (unsigned __int64)((v40 - v70) >> 4);
              if ( *((_QWORD *)&v37 + 1) == v71 )
              {
LABEL_58:
                *((_QWORD *)this + 149) = v40 - 16 * v73;
LABEL_59:
                LOWORD(v158[1]) = 0;
                detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
                  (char *)this + 2184,
                  *(_QWORD *)&v177.m11 + v156[0],
                  &v158[1]);
                goto LABEL_60;
              }
              v148 = v72 < 0;
              if ( v72 )
              {
                if ( !v70 )
                  goto LABEL_233;
                v148 = v72 < 0;
              }
              if ( (!v148 || !v72) && (v72 <= 0 || v71 >= v72) )
              {
                *(_QWORD *)&v157.m[2][0] = (char *)v163[0] + v69;
                v175 = v157;
                std::move<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                  &v157,
                  v70 + 16LL * *((_QWORD *)&v37 + 1),
                  v70 + 16 * v71,
                  &v175);
                v40 = *((_QWORD *)this + 149);
                goto LABEL_58;
              }
              goto LABEL_233;
            }
            v147 = v40 < 0;
            if ( v40 )
            {
              if ( !v66 )
                goto LABEL_233;
              v147 = v40 < 0;
            }
            if ( (!v147 || !v40) && (v40 <= 0 || v67 >= v40) )
            {
              *(_QWORD *)&v157.m[2][0] = v40;
              *(_OWORD *)&v175.m11 = *(_OWORD *)&v157.m11;
              *(_QWORD *)&v175.m[2][0] = v40;
              std::move<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                &v157,
                v66 + 16LL * *((_QWORD *)&v37 + 1),
                v66 + 16 * v67,
                &v175);
              v65 = *((_QWORD *)this + 25);
              goto LABEL_54;
            }
LABEL_233:
            _o__invalid_parameter_noinfo_noreturn(v40, *((_QWORD *)&v37 + 1));
            JUMPOUT(0x180125A10LL);
          }
          MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, Geometry, 0x4AAu, 0LL);
          goto LABEL_153;
        }
      }
LABEL_60:
      CDrawListEntryBuilder::TransformHWGeometryAndComputeUV(
        this,
        a3,
        (const struct D2D1::Matrix3x2F *)&matrix,
        (const struct D2D1::Matrix3x2F *)&v167,
        v170);
      v18 = v161;
LABEL_61:
      ++*((_DWORD *)this + 568);
      if ( !v155[0] )
        goto LABEL_62;
      if ( **((_QWORD **)this + 2) )
        ++*((_DWORD *)this + 24);
      if ( !v18 )
      {
        ++dword_180339948;
        goto LABEL_63;
      }
      v149 = v18 - 1;
      if ( !v149 )
      {
        ++dword_18033994C;
        goto LABEL_63;
      }
      if ( v149 == 1 )
LABEL_62:
        ++dword_180339944;
LABEL_63:
      v4 = v154;
LABEL_64:
      v24 = 0;
      goto LABEL_65;
    }
    v153 = 1025;
  }
LABEL_151:
  v131 = RectangleMesh;
LABEL_154:
  MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v131, v153, 0LL);
LABEL_158:
  v4 = v154;
LABEL_65:
  v74 = lpMem;
  if ( (v200 - (_BYTE *)lpMem) >> 3 )
  {
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
    v74 = lpMem;
  }
  lpMem = 0LL;
  if ( v74 != v202 && v74 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v74);
  }
  v75 = v195;
  if ( (v196 - (_BYTE *)v195) >> 3 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      &v195,
      0LL);
    v75 = v195;
  }
  v195 = 0LL;
  if ( v75 != v198 && v75 )
  {
    v151 = GetProcessHeap();
    HeapFree(v151, 0, v75);
  }
  v76 = v191;
  if ( (v192 - (_BYTE *)v191) >> 2 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(&v191);
    v76 = v191;
  }
  v191 = 0LL;
  if ( v76 != v194 && v76 )
  {
    v152 = GetProcessHeap();
    HeapFree(v152, 0, v76);
  }
  v77 = v180;
  v78 = v181;
  v178 = &CRectanglesShape::`vftable';
  HIDWORD(v183) = 0;
  if ( v180 != v181 )
  {
    operator delete(v180);
    v78 = v181;
    v77 = v181;
    v180 = v181;
    LODWORD(v183) = v182;
  }
  if ( v185 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v185 + 16LL))(v185);
    v78 = v181;
    v77 = v180;
    v185 = 0LL;
  }
  if ( v77 != v78 )
  {
    operator delete(v77);
    v180 = 0LL;
  }
  v79 = v179;
  if ( v179 )
  {
    v179 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v79 + 16LL))(v79);
  }
  if ( v4 && v12 )
    (**(void (__fastcall ***)(const struct CShape *, __int64))v12)(v12, 1LL);
  return v24;
}
