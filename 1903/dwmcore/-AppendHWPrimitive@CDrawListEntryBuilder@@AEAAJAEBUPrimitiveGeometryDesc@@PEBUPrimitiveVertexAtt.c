/*
 * XREFs of ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBVMatrix3x2F@D2D1@@@Z @ 0x1800681F0
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800529BC (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     ?DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z @ 0x180010D24 (-DecomposeMatrixIntoScaleAndRemaining@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1PEAU2@@Z.c)
 *     ?ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z @ 0x180011C74 (-ClipRectAndEdgeFlags@@YA_NAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@01PEAU1@PEAW42@@Z.c)
 *     ?ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z @ 0x180018C68 (-ResolveClip@CCpuClip@@QEAAJPEAPEBVCShape@@@Z.c)
 *     ?Invert@Matrix3x2F@D2D1@@QEAA_NXZ @ 0x180018E18 (-Invert@Matrix3x2F@D2D1@@QEAA_NXZ.c)
 *     ?IsEmpty@CShapePtr@@QEBA_NXZ @ 0x18001E328 (-IsEmpty@CShapePtr@@QEBA_NXZ.c)
 *     ?TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@AEBVMatrix3x2F@D2D1@@1I@Z @ 0x18002BE80 (-TransformHWGeometryAndComputeUV@CDrawListEntryBuilder@@AEAAXPEBUPrimitiveVertexAttributesDesc@@.c)
 *     ?resize@?$vector_facade@GV?$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBG@Z @ 0x18002D080 (-resize@-$vector_facade@GV-$buffer_impl@G$0BO@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180052C34 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180057590 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?GenerateGeometry@Mesh@@QEAAJ_N0AEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHGPEAG3@Z @ 0x18005C5AC (-GenerateGeometry@Mesh@@QEAAJ_N0AEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@UVerte.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?FullyContains@CCpuClip@@QEBA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180087F84 (-FullyContains@CCpuClip@@QEBA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUni.c)
 *     ?IsAxisAlignedRectangle@CShape@@QEBA_NXZ @ 0x1800880B4 (-IsAxisAlignedRectangle@CShape@@QEBA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD2BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0A@@@QEAAJPEFBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800AEEF0 (-AddMultipleAndSet@-$DynArray@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z @ 0x1800B5624 (-SetSingleRect@CRectanglesShape@@QEAAXAEBUMilRectF@@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1800B87F4 (--$uninitialized_copy@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_.c)
 *     ?GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z @ 0x1800BAF6C (-GetGeometryCount@Mesh@@QEAAJ_N0PEAH1@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??4?$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAUIDisplayDevice@Core@Display@Devices@Windows@@@Z @ 0x18015AA10 (--4-$com_ptr_t@UIDisplayDevice@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@Q.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$move@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1801AEE34 (--$move@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array_iterator.c)
 *     ??$move_backward@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@stdext@@V?$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@0@0V12@@Z @ 0x1801AF09C (--$move_backward@V-$move_iterator@PEAUAlign16Chunk@CDrawListEntryBuilder@@@std@@V-$checked_array.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFB18 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$07$00Vlibera.c)
 *     ?clear_region@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFBBC (-clear_region@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@.c)
 *     ?clear_region@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFC94 (-clear_region@-$vector_facade@UD2D_POINT_2F@@V-$buffer_impl@UD2D_POINT_2F@@$0BA@$00Vliberal_expa.c)
 *     ?clear_region@?$vector_facade@UD2D_VECTOR_2F@@V?$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFD64 (-clear_region@-$vector_facade@UD2D_VECTOR_2F@@V-$buffer_impl@UD2D_VECTOR_2F@@$07$00Vliberal_expa.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AFEC0 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vlibe.c)
 *     ?insert@?$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V?$buffer_impl@UAlign16Chunk@CDrawListEntryBuilder@@$0DM@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UAlign16Chunk@CDrawListEntryBuilder@@@2@V?$basic_iterator@$$CBUAlign16Chunk@CDrawListEntryBuilder@@@2@_KAEBUAlign16Chunk@CDrawListEntryBuilder@@@Z @ 0x1801B02A0 (-insert@-$vector_facade@UAlign16Chunk@CDrawListEntryBuilder@@V-$buffer_impl@UAlign16Chunk@CDrawL.c)
 *     ?CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z @ 0x1801B9D74 (-CreatePolygonMesh@Mesh@@QEAAJAEBUContentInfo@1@PEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@H@Z.c)
 *     ?AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z @ 0x1801BB4FC (-AddEdgeFlags@CEdgeFlagsMap@@QEAAXAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBVMatrix3x3@@@Z.c)
 *     ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$span@$$CBUD2D_POINT_2F@@$0?0@gsl@@W4D2D1_EDGE_FLAGS@@PEAV?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@PEA_N@Z @ 0x1801BB944 (-ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV-$span@$$CBUD2D_POINT_2F@@$0-0@gsl@@W4D2D1_EDGE_FLAGS@@PE.c)
 *     ?Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z @ 0x1801BBF88 (-Build@CDrawListPolygonBuilder@@QEAAJPEBVCShape@@@Z.c)
 *     ?GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z @ 0x18022A33C (-GetScaleDimensions@D2DMatrixHelper@@YAXAEBUD2D_MATRIX_3X2_F@@PEAM1@Z.c)
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
  __int64 v18; // rdx
  int v19; // esi
  __int128 v20; // xmm0
  __int64 v21; // rax
  Mesh *v22; // rsi
  int RectangleMesh; // eax
  unsigned int v24; // ecx
  unsigned int v25; // edi
  char v26; // r15
  bool v27; // r12
  bool v28; // r15
  int GeometryCount; // eax
  unsigned int v30; // ecx
  __int64 *v31; // rdi
  __int64 v32; // r10
  __int64 *v33; // r9
  const char *v34; // r11
  __int64 v35; // rcx
  unsigned __int64 v36; // rsi
  __int64 v37; // rcx
  __int128 v38; // rax
  unsigned __int64 v39; // r8
  const char *v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // r8
  unsigned __int64 v43; // r10
  unsigned __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rsi
  _OWORD *v47; // rsi
  __int64 v48; // r11
  _OWORD *v49; // r10
  char *v50; // rcx
  unsigned __int64 v51; // rdi
  __int64 v52; // rsi
  unsigned __int64 v53; // rsi
  bool v54; // sf
  unsigned __int64 v55; // rcx
  __int64 v56; // rdi
  _OWORD *v57; // rsi
  __int64 v58; // rdi
  unsigned __int64 v59; // rsi
  __int64 v60; // rax
  int Geometry; // eax
  unsigned int v62; // ecx
  float v63; // ecx
  FLOAT m11; // r12d
  unsigned __int64 v65; // rsi
  __int64 v66; // rdi
  unsigned int v67; // r12d
  unsigned __int64 v68; // rsi
  __int64 v69; // rdi
  _BYTE *v70; // rsi
  _BYTE *v71; // rsi
  _BYTE *v72; // rsi
  __int64 v73; // r8
  _BYTE *v74; // rcx
  _BYTE *v75; // rdx
  __int64 v76; // rcx
  __int64 v78; // xmm1_8
  unsigned __int64 v79; // rsi
  void *v80; // rax
  __int64 v81; // r8
  __int64 v82; // rdx
  void *v83; // rdi
  CDrawListEntryBuilder *v84; // rcx
  __int64 v85; // rsi
  unsigned __int64 v86; // rsi
  void *v87; // rax
  __int64 v88; // r8
  __int64 v89; // rdx
  void *v90; // rdi
  CDrawListEntryBuilder *v91; // rcx
  float v92; // xmm8_4
  __m128 m11_low; // xmm9
  float v94; // xmm10_4
  int v95; // eax
  __int64 v96; // rdx
  unsigned int v97; // ecx
  CShape *v98; // rdi
  __m128 v99; // xmm6
  float v100; // xmm11_4
  float v101; // xmm9_4
  float v102; // xmm10_4
  int v103; // eax
  unsigned int v104; // ecx
  int v105; // r9d
  __m128 v106; // xmm6
  __m128 v107; // xmm6
  __m128 v108; // xmm6
  float v109; // xmm2_4
  float v110; // xmm6_4
  int v111; // eax
  unsigned int v112; // ecx
  __int128 v113; // xmm0
  __int64 v114; // xmm1_8
  __m128 v115; // xmm0
  __m128 v116; // xmm1
  __m128 v117; // xmm0
  __m128 v118; // xmm1
  __m128 v119; // xmm1
  __m128 v120; // xmm1
  int v121; // eax
  unsigned int v122; // ecx
  LPVOID *v123; // rdi
  __int64 v124; // rdx
  int v125; // eax
  unsigned int v126; // ecx
  float *v127; // r9
  int v128; // r9d
  __m256i *v129; // rcx
  LPVOID *v130; // rax
  CDrawListPolygonBuilder *v131; // rcx
  _DWORD *v132; // rdi
  char v133; // di
  __int64 v134; // r8
  __int64 v135; // rax
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rcx
  int PolygonMesh; // eax
  unsigned int v140; // ecx
  __m256i *v141; // rcx
  bool v142; // sf
  bool v143; // sf
  bool v144; // sf
  bool v145; // sf
  int v146; // esi
  HANDLE ProcessHeap; // rax
  HANDLE v148; // rax
  HANDLE v149; // rax
  unsigned int v150; // [rsp+20h] [rbp-E0h]
  char v151; // [rsp+50h] [rbp-B0h]
  char v152[3]; // [rsp+51h] [rbp-AFh] BYREF
  int v153[3]; // [rsp+54h] [rbp-ACh] BYREF
  D2D1_MATRIX_3X2_F v154; // [rsp+60h] [rbp-A0h] BYREF
  float v155[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v156[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v157; // [rsp+A0h] [rbp-60h]
  int v158; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v159; // [rsp+B8h] [rbp-48h]
  CShape *v160[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct D2D_MATRIX_3X2_F v161; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v162; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v163; // [rsp+100h] [rbp+0h]
  D2D1_MATRIX_3X2_F v164; // [rsp+110h] [rbp+10h] BYREF
  int v165; // [rsp+128h] [rbp+28h] BYREF
  unsigned int v166; // [rsp+12Ch] [rbp+2Ch]
  unsigned int v167; // [rsp+130h] [rbp+30h]
  __int128 v168; // [rsp+140h] [rbp+40h] BYREF
  __m256i v169; // [rsp+150h] [rbp+50h]
  __int128 v170; // [rsp+170h] [rbp+70h]
  int v171; // [rsp+180h] [rbp+80h]
  D2D1_MATRIX_3X2_F v172; // [rsp+190h] [rbp+90h] BYREF
  __int128 v173; // [rsp+1B0h] [rbp+B0h] BYREF
  D2D1_MATRIX_3X2_F v174; // [rsp+1C0h] [rbp+C0h] BYREF
  void **v175; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v176; // [rsp+1E8h] [rbp+E8h]
  void *v177; // [rsp+1F0h] [rbp+F0h] BYREF
  _BYTE *v178; // [rsp+1F8h] [rbp+F8h]
  int v179; // [rsp+200h] [rbp+100h]
  __int64 v180; // [rsp+204h] [rbp+104h]
  _BYTE Mem[16]; // [rsp+210h] [rbp+110h] BYREF
  __int64 v182; // [rsp+220h] [rbp+120h]
  D2D1_MATRIX_3X2_F matrix; // [rsp+230h] [rbp+130h] BYREF
  __int128 v184; // [rsp+250h] [rbp+150h] BYREF
  __m256i v185; // [rsp+260h] [rbp+160h] BYREF
  __m128 v186; // [rsp+280h] [rbp+180h]
  char v187; // [rsp+2A8h] [rbp+1A8h] BYREF
  LPVOID v188; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE *v189; // [rsp+2B8h] [rbp+1B8h]
  LPVOID *v190; // [rsp+2C0h] [rbp+1C0h]
  _BYTE v191[64]; // [rsp+2C8h] [rbp+1C8h] BYREF
  LPVOID v192; // [rsp+308h] [rbp+208h] BYREF
  _BYTE *v193; // [rsp+310h] [rbp+210h]
  LPVOID *p_lpMem; // [rsp+318h] [rbp+218h]
  _BYTE v195[128]; // [rsp+320h] [rbp+220h] BYREF
  LPVOID lpMem; // [rsp+3A0h] [rbp+2A0h] BYREF
  _BYTE *v197; // [rsp+3A8h] [rbp+2A8h]
  char *v198; // [rsp+3B0h] [rbp+2B0h]
  _BYTE v199[128]; // [rsp+3B8h] [rbp+2B8h] BYREF
  char v200; // [rsp+438h] [rbp+338h] BYREF

  v4 = 0;
  v167 = *((_DWORD *)this + 544);
  *(_QWORD *)&v174.m11 = a4;
  v175 = &CRectanglesShape::`vftable';
  v6 = Mem;
  v151 = 0;
  v178 = Mem;
  LOBYTE(v156[1]) = 0;
  v8 = *((_DWORD *)this + 3) == 1;
  v188 = v191;
  v154.dx = 0.0;
  v189 = v191;
  v10 = 0LL;
  v156[0] = 0LL;
  v190 = &v192;
  v11 = a4;
  v176 = 0LL;
  v192 = v195;
  v12 = 0LL;
  v177 = Mem;
  v193 = v195;
  p_lpMem = &lpMem;
  lpMem = v199;
  v197 = v199;
  v198 = &v200;
  v159 = (unsigned __int64)&v188;
  v179 = 1;
  v180 = 1LL;
  v182 = 0LL;
  v152[0] = 0;
  if ( v8 )
  {
    v13 = 0;
    v153[0] = 0;
  }
  else
  {
    v8 = (*((_BYTE *)a2 + 24) & 4) == 0;
    v13 = *((_DWORD *)a2 + 4);
    v153[0] = v13;
    if ( !v8 && v13 )
      *((_BYTE *)this + 2297) = 1;
  }
  if ( a4 )
  {
    v78 = *((_QWORD *)a4 + 2);
    *(_OWORD *)&matrix.m11 = *(_OWORD *)a4;
    *(_QWORD *)&matrix.m[2][0] = v78;
    if ( !D2D1IsMatrixInvertible(&matrix) )
      goto LABEL_64;
    v10 = v182;
    v6 = v177;
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
      CShapePtr::Release((CShapePtr *)v156);
      v151 = 0;
      v130 = (LPVOID *)*((_QWORD *)a2 + 1);
      v164 = matrix;
      if ( v130 )
        v159 = (unsigned __int64)v130;
    }
    else
    {
      HIDWORD(v180) = 0;
      if ( v6 != v178 )
      {
        operator delete(v6);
        v10 = v182;
        v177 = v178;
        LODWORD(v180) = v179;
      }
      if ( v10 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        v182 = 0LL;
      }
      *(_OWORD *)&v172.m11 = _xmm;
      DynArray<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>,0>::AddMultipleAndSet(
        &v177,
        &v172,
        1LL);
      v16 = *((float *)a2 + 1);
      v17 = *((float *)a2 + 2) - *(float *)a2;
      v164.dx = *(FLOAT *)a2;
      v164.dy = v16;
      v12 = (const struct CShape *)&v175;
      *(_QWORD *)&v164.m[0][1] = 0LL;
      v164.m11 = v17;
      v164.m22 = *((float *)a2 + 3) - v16;
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v172,
        (const struct D2D1::Matrix3x2F *)&v164,
        (const struct D2D1::Matrix3x2F *)&matrix);
      v164 = v172;
    }
    v19 = 2;
    v158 = 2;
    goto LABEL_16;
  }
  v15 = (char *)a2 + 24;
  if ( (*((_BYTE *)a2 + 24) & 1) != 0 )
  {
    v111 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD))(**(_QWORD **)a2 + 32LL))(*(_QWORD *)a2, &v173, 0LL);
    v25 = v111;
    if ( v111 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, v111, 0x308u, 0LL);
      goto LABEL_131;
    }
    v11 = *(const struct D2D1::Matrix3x2F **)&v174.m11;
  }
  else
  {
    *(_OWORD *)&v174.m11 = *(_OWORD *)a2;
    v173 = *(_OWORD *)&v174.m11;
  }
  if ( (unsigned __int8)CCpuClip::FullyContains(*((_QWORD *)this + 2), &v173, v11, a4) )
  {
    v10 = v182;
    v6 = v177;
    goto LABEL_9;
  }
  v92 = *(float *)&FLOAT_1_0;
  v171 = 0;
  if ( v11 )
  {
    if ( (*v15 & 1) != 0 )
    {
      v113 = *(_OWORD *)&matrix.m11;
      v114 = *(_QWORD *)&matrix.m[2][0];
      m11_low = (__m128)(unsigned int)FLOAT_1_0;
      v164 = matrix;
      v94 = *(float *)&FLOAT_1_0;
    }
    else
    {
      D2DMatrixHelper::DecomposeMatrixIntoScaleAndRemaining(
        (D2DMatrixHelper *)&matrix,
        &v161,
        (float *)&v158,
        &v164.m11);
      v114 = *(_QWORD *)&v164.m[2][0];
      v113 = *(_OWORD *)&v164.m11;
      m11_low = (__m128)LODWORD(v161.m11);
      v94 = *(float *)&v158;
    }
    *(_QWORD *)&v172.m[2][0] = v114;
    *(_OWORD *)&v172.m11 = v113;
    D2D1::Matrix3x2F::Invert(&v172);
    *(_OWORD *)&v185.m256i_u64[1] = 0LL;
    v115 = (__m128)(unsigned __int64)v184;
    v186.m128_u64[1] = 0x3F80000000000000LL;
    v115.m128_f32[0] = v172.m11;
    v185.m256i_i64[3] = 1065353216LL;
    v116 = *(__m128 *)v185.m256i_i8;
    v171 = 0;
    v117 = _mm_shuffle_ps(v115, v115, 225);
    v116.m128_f32[0] = v172.m21;
    v117.m128_f32[0] = v172.m12;
    v118 = _mm_shuffle_ps(v116, v116, 225);
    v118.m128_f32[0] = v172.m22;
    *(__m128 *)v185.m256i_i8 = _mm_shuffle_ps(v118, v118, 225);
    v169 = v185;
    v119 = v186;
    v184 = (__int128)_mm_shuffle_ps(v117, v117, 225);
    v119.m128_f32[0] = v172.dx;
    v168 = v184;
    v120 = _mm_shuffle_ps(v119, v119, 225);
    v120.m128_f32[0] = v172.dy;
    v186 = _mm_shuffle_ps(v120, v120, 225);
    v170 = (__int128)v186;
  }
  else
  {
    m11_low = (__m128)(unsigned int)FLOAT_1_0;
    v94 = *(float *)&FLOAT_1_0;
    *(_OWORD *)&v164.m11 = _xmm;
    LOWORD(v171) = 32085;
    v168 = _xmm;
    *(_QWORD *)&v164.m[2][0] = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *(_OWORD *)v169.m256i_i8 = _xmm;
    *(_OWORD *)&v169.m256i_u64[2] = _xmm;
    v170 = _xmm;
  }
  v95 = CCpuClip::ResolveClip(*((CCpuClip **)this + 2), v160);
  v25 = v95;
  if ( v95 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v97, 0LL, 0, v95, 0x348u, 0LL);
    goto LABEL_131;
  }
  if ( (*v15 & 1) != 0 )
  {
    v121 = CShape::Combine(*(_QWORD *)a2, v96, v160[0], &v168, 1, &v174);
    v25 = v121;
    if ( v121 >= 0 )
    {
      CShapePtr::Release((CShapePtr *)v156);
      v12 = *(const struct CShape **)&v174.m11;
      v123 = &v188;
      v156[0] = *(_QWORD *)&v174.m11;
      v151 = 1;
      LOBYTE(v156[1]) = 1;
      if ( *((_QWORD *)a2 + 1) )
        v123 = (LPVOID *)*((_QWORD *)a2 + 1);
      v159 = (unsigned __int64)v123;
      goto LABEL_146;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v122, 0LL, 0, v121, 0x353u, 0LL);
LABEL_131:
    v4 = 0;
    goto LABEL_65;
  }
  v98 = v160[0];
  v99 = m11_low;
  v99.m128_f32[0] = m11_low.m128_f32[0] * *(float *)a2;
  v100 = v94 * *((float *)a2 + 1);
  v101 = m11_low.m128_f32[0] * *((float *)a2 + 2);
  v102 = v94 * *((float *)a2 + 3);
  *(_QWORD *)&v173 = __PAIR64__(LODWORD(v100), v99.m128_u32[0]);
  *((_QWORD *)&v173 + 1) = __PAIR64__(LODWORD(v102), LODWORD(v101));
  if ( !CShape::IsAxisAlignedRectangle(v160[0]) || !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v168) )
  {
    CRectanglesShape::SetSingleRect((CRectanglesShape *)&v175, (const struct MilRectF *)&v173);
    v125 = CShape::Combine(&v175, v124, v98, &v168, 1, &v174);
    v25 = v125;
    if ( v125 >= 0 )
    {
      CShapePtr::Release((CShapePtr *)v156);
      v12 = *(const struct CShape **)&v174.m11;
      v156[0] = *(_QWORD *)&v174.m11;
      v151 = 1;
      LOBYTE(v156[1]) = 1;
      *(_OWORD *)&v174.m11 = v173;
      *(_OWORD *)&v172.m11 = v173;
      CEdgeFlagsMap::AddEdgeFlags(&v188, &v172, v13, &Matrix3x3::Identity);
      v159 = (unsigned __int64)&v188;
LABEL_146:
      v19 = 1;
      v158 = 1;
      v152[0] = 1;
      goto LABEL_113;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v126, 0LL, 0, v125, 0x38Eu, 0LL);
    goto LABEL_131;
  }
  v103 = (*(__int64 (__fastcall **)(CShape *, D2D1_MATRIX_3X2_F *, __int128 *))(*(_QWORD *)v98 + 32LL))(
           v98,
           &v174,
           &v168);
  v25 = v103;
  if ( v103 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v104, 0LL, 0, v103, 0x36Cu, 0LL);
    goto LABEL_131;
  }
  if ( *((_BYTE *)this + 28) )
    v105 = 50529027;
  else
    v105 = 0;
  v106 = _mm_shuffle_ps(v99, v99, 225);
  v106.m128_f32[0] = v100;
  v107 = _mm_shuffle_ps(v106, v106, 198);
  v107.m128_f32[0] = v101;
  v108 = _mm_shuffle_ps(v107, v107, 39);
  v108.m128_f32[0] = v102;
  *(__m128 *)v160 = _mm_shuffle_ps(v108, v108, 57);
  v162 = *(_OWORD *)v160;
  *(_OWORD *)&v172.m11 = *(_OWORD *)&v174.m11;
  if ( ClipRectAndEdgeFlags((float *)&v162, v13, &v172.m11, v105, v160, v153) )
  {
    v152[0] = 1;
    v173 = *(_OWORD *)v160;
  }
  CRectanglesShape::SetSingleRect((CRectanglesShape *)&v175, (const struct MilRectF *)&v173);
  CShapePtr::Release((CShapePtr *)v156);
  v13 = v153[0];
  v12 = (const struct CShape *)&v175;
  v156[0] = (__int64)&v175;
  v151 = 0;
  v19 = 0;
  LOBYTE(v156[1]) = 0;
  *(float *)&v158 = 0.0;
LABEL_113:
  if ( !CShapePtr::IsEmpty((CShapePtr *)v156) )
  {
    v109 = *((float *)this + 1);
    v110 = *(float *)&FLOAT_1_0;
    v153[0] = (int)FLOAT_1_0;
    LODWORD(v155[0]) = (_DWORD)FLOAT_1_0;
    if ( v109 < 1.0 || *((float *)this + 2) < 1.0 )
    {
      v172.m22 = *((FLOAT *)this + 2);
      v172.m11 = v109;
      *(_QWORD *)&v172.m[0][1] = 0LL;
      v172.dx = 0.0 - (float)(v109 * 0.0);
      v172.dy = 0.0 - (float)(v172.m22 * 0.0);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v174,
        (const struct D2D1::Matrix3x2F *)&v164,
        (const struct D2D1::Matrix3x2F *)&v172);
      v172 = v174;
      D2DMatrixHelper::GetScaleDimensions((D2DMatrixHelper *)&v172, (const struct D2D_MATRIX_3X2_F *)v153, v155, v127);
      v92 = *(float *)v153;
      v110 = v155[0];
    }
    RectangleMesh = (*(__int64 (__fastcall **)(const struct CShape *, D2D1_MATRIX_3X2_F *, _QWORD))(*(_QWORD *)v12 + 32LL))(
                      v12,
                      &v174,
                      0LL);
    v25 = RectangleMesh;
    if ( RectangleMesh < 0 )
    {
      v150 = 947;
      goto LABEL_151;
    }
    if ( (float)((float)(v174.m21 - v174.m11) * v92) <= 0.015625
      || (float)((float)(v174.m22 - v174.m12) * v110) <= 0.015625 )
    {
      CShapePtr::Release((CShapePtr *)v156);
      v12 = (const struct CShape *)v156[0];
      v151 = v156[1];
    }
  }
LABEL_16:
  if ( !v12 || (*(unsigned __int8 (__fastcall **)(const struct CShape *))(*(_QWORD *)v12 + 16LL))(v12) )
    goto LABEL_61;
  if ( a3 )
  {
    v20 = *(_OWORD *)a3;
    LOBYTE(v154.m[2][0]) = *((_BYTE *)a3 + 16);
  }
  else
  {
    v20 = _xmm;
  }
  v21 = *(_QWORD *)v12;
  *(_OWORD *)&v154.m11 = v20;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CShape *, int *))(v21 + 40))(v12, &v165) && v165 == 1 )
  {
    (*(void (__fastcall **)(const struct CShape *, D2D1_MATRIX_3X2_F *, __int64))(*(_QWORD *)v12 + 48LL))(
      v12,
      &v174,
      1LL);
    v22 = (CDrawListEntryBuilder *)((char *)this + 104);
    *(_OWORD *)v156 = *(_OWORD *)&v174.m11;
    *(_OWORD *)&v172.m11 = *(_OWORD *)&v174.m11;
    RectangleMesh = Mesh::CreateRectangleMesh(
                      (const struct Mesh::MeshGraph **)this + 13,
                      (const struct Mesh::ContentInfo *)&v154,
                      (const struct D2D_RECT_F *)&v172,
                      v13);
    v25 = RectangleMesh;
    if ( RectangleMesh >= 0 )
      goto LABEL_23;
    v150 = 1015;
  }
  else
  {
    v131 = (CDrawListPolygonBuilder *)*((_QWORD *)this + 23);
    if ( !v131 )
    {
      v132 = DefaultHeap::Alloc(0xB0uLL);
      if ( v132 )
      {
        v132[3] = 0;
        memset_0(v132 + 8, 0, 0x90uLL);
        *(_QWORD *)v132 = &CDrawListPolygonBuilder::`vftable'{for `CMILCOMBase'};
        *((_QWORD *)v132 + 2) = &CDrawListPolygonBuilder::`vftable'{for `ID2D1GeometrySink'};
        v132[2] = 0;
        *((_QWORD *)v132 + 3) = v132 + 12;
        *((_QWORD *)v132 + 4) = v132 + 12;
        *((_QWORD *)v132 + 5) = v132 + 44;
      }
      else
      {
        v132 = 0LL;
      }
      wil::com_ptr_t<Windows::Devices::Display::Core::IDisplayDevice,wil::err_returncode_policy>::operator=(
        (char *)this + 184,
        v132);
      v131 = (CDrawListPolygonBuilder *)*((_QWORD *)this + 23);
      if ( !v131 )
      {
        v25 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024882, 0x3FEu, 0LL);
        goto LABEL_158;
      }
    }
    RectangleMesh = CDrawListPolygonBuilder::Build(v131, v12);
    v25 = RectangleMesh;
    if ( RectangleMesh >= 0 )
    {
      v133 = v152[0];
      if ( *((_DWORD *)this + 3) == 1 || v152[0] && !*((_BYTE *)this + 28) )
        v134 = 0LL;
      else
        v134 = 3LL;
      *(_QWORD *)&v184 = &v185.m256i_i64[1];
      *((_QWORD *)&v184 + 1) = &v185.m256i_i64[1];
      v185.m256i_i64[0] = (__int64)&v187;
      v135 = *((_QWORD *)this + 23);
      v136 = *(_QWORD *)(v135 + 24);
      v137 = *(_QWORD *)(v135 + 32) - v136;
      *(_QWORD *)&v174.m[1][0] = v136;
      v138 = v137 >> 3;
      *(_QWORD *)&v174.m11 = (unsigned int)v138;
      if ( !v136 && (_DWORD)v138 )
      {
        ((void (__fastcall *)(__int64, _QWORD, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          v138,
          0LL,
          v134);
        __debugbreak();
      }
      *(_OWORD *)&v172.m11 = *(_OWORD *)&v174.m11;
      CEdgeFlagsMap::ResolveEdgeFlags(v159, (unsigned int)&v172, v134, (unsigned int)&v184, (__int64)v152);
      if ( !v133 || (v8 = v152[0] == 0, v152[0] = 1, v8) )
        v152[0] = 0;
      v22 = (CDrawListEntryBuilder *)((char *)this + 104);
      PolygonMesh = Mesh::CreatePolygonMesh(
                      (CDrawListEntryBuilder *)((char *)this + 104),
                      (const struct Mesh::ContentInfo *)&v154,
                      *(const struct D2D_POINT_2F **)(*((_QWORD *)this + 23) + 24LL),
                      (const enum D2D1_EDGE_FLAGS *)v184,
                      (__int64)(*(_QWORD *)(*((_QWORD *)this + 23) + 32LL) - *(_QWORD *)(*((_QWORD *)this + 23) + 24LL)) >> 3);
      v25 = PolygonMesh;
      if ( PolygonMesh < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v140, 0LL, 0, PolygonMesh, 0x421u, 0LL);
        v129 = (__m256i *)v184;
        if ( (__int64)(*((_QWORD *)&v184 + 1) - v184) >> 2 )
        {
          detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
            &v184,
            0LL);
          v129 = (__m256i *)v184;
        }
        *(_QWORD *)&v184 = 0LL;
        if ( v129 == (__m256i *)&v185.m256i_u64[1] )
          v129 = 0LL;
        operator delete(v129);
        goto LABEL_158;
      }
      v141 = (__m256i *)v184;
      if ( (__int64)(*((_QWORD *)&v184 + 1) - v184) >> 2 )
      {
        detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,16,1,detail::liberal_expansion_policy>>::clear_region(
          &v184,
          0LL);
        v141 = (__m256i *)v184;
      }
      *(_QWORD *)&v184 = 0LL;
      if ( v141 == (__m256i *)&v185.m256i_u64[1] )
        v141 = 0LL;
      operator delete(v141);
LABEL_23:
      if ( !v25 )
      {
        v26 = *v15;
        v155[0] = 0.0;
        v153[0] = 0;
        v27 = (v26 & 4) != 0;
        v28 = (v26 & 2) != 0;
        GeometryCount = Mesh::GetGeometryCount(v22, v28, v27, (int *)v155, v153);
        v25 = GeometryCount;
        if ( GeometryCount < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, GeometryCount, 0x480u, 0LL);
LABEL_153:
          v128 = v25;
          v150 = 1063;
          goto LABEL_154;
        }
        if ( v153[0] > 0 )
        {
          v31 = (__int64 *)((char *)this + 192);
          v32 = *((_QWORD *)this + 24);
          v33 = (__int64 *)((char *)this + 1184);
          v34 = (const char *)*((_QWORD *)this + 25);
          v35 = (__int64)(*((_QWORD *)this + 149) - *((_QWORD *)this + 148)) >> 4;
          v166 = 8 * *(_DWORD *)this + 16;
          v36 = (__int64)&v34[-v32] >> 4;
          v160[0] = (CShape *)v35;
          v37 = *((_QWORD *)this + 274) - *((_QWORD *)this + 273);
          LODWORD(v161.m11) = v166 >> 4;
          *(_QWORD *)&v162 = v32;
          v159 = v36;
          *(_QWORD *)&v174.m11 = v37 >> 1;
          *((_QWORD *)&v38 + 1) = LODWORD(v155[0]) * (v166 >> 4);
          *(_QWORD *)&v173 = *((_QWORD *)&v38 + 1);
          v39 = *((_QWORD *)&v38 + 1) + v36;
          v156[0] = *((_QWORD *)&v38 + 1) + v36;
          *(_OWORD *)&v172.m11 = 0uLL;
          if ( *((_QWORD *)&v38 + 1) + v36 <= v36 )
          {
            detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
              v31,
              v156[0],
              (__int64)&v34[-v32 + -16 * v39] >> 4);
            v33 = (__int64 *)((char *)this + 1184);
          }
          else
          {
            v40 = (const char *)*((_QWORD *)this + 26);
            if ( (unsigned __int64)((v40 - v34) >> 4) < *((_QWORD *)&v38 + 1) )
            {
              if ( v39 < v36 )
                std::_Xoverflow_error(v40);
              v79 = detail::liberal_expansion_policy::expand(
                      (detail::liberal_expansion_policy *)((__int64)&v40[-v32] >> 4),
                      (__int64)&v40[-v32] >> 4,
                      v39);
              v80 = operator new(saturated_mul(v79, 0x10uLL));
              v81 = *((_QWORD *)this + 25);
              v82 = *((_QWORD *)this + 24);
              *(_QWORD *)&v154.m11 = v80;
              v83 = v80;
              *(_OWORD *)&v154.m[1][0] = v159;
              v157 = 0LL;
              *(_OWORD *)v156 = *(_OWORD *)&v154.m11;
              std::uninitialized_copy<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                &v154,
                v82,
                v81,
                v156);
              v84 = (CDrawListEntryBuilder *)*((_QWORD *)this + 24);
              *((_QWORD *)this + 24) = v83;
              v31 = (__int64 *)((char *)this + 192);
              if ( v84 == (CDrawListEntryBuilder *)((char *)this + 224) )
                v84 = 0LL;
              operator delete(v84);
              v32 = *v31;
              v33 = (__int64 *)((char *)this + 1184);
              *((_QWORD *)&v38 + 1) = v173;
              v34 = (const char *)(*v31 + 16 * v159);
              v85 = *v31 + 16 * v79;
              *((_QWORD *)this + 25) = v34;
              *((_QWORD *)this + 26) = v85;
              v36 = v159;
              *(_QWORD *)&v162 = v32;
            }
            v41 = 0LL;
            *(_QWORD *)&v154.m[2][0] = 0LL;
            v42 = (__int64)&v34[-v32] >> 4;
            v157 = 0LL;
            *(_QWORD *)&v38 = v162 + 16 * v42;
            v43 = v42 - v36;
            *(_OWORD *)&v154.m11 = v38;
            *(_OWORD *)v156 = v38;
            if ( *((_QWORD *)&v38 + 1) && !(_QWORD)v38 )
              goto LABEL_233;
            v157 = *((_QWORD *)&v38 + 1);
            v44 = v42 - v36;
            if ( *((_QWORD *)&v38 + 1) < v43 )
              v44 = *((_QWORD *)&v38 + 1);
            *(_OWORD *)&v154.m11 = v38;
            v45 = 16 * v44;
            *(_QWORD *)&v38 = &v34[-v45];
            *(_QWORD *)&v154.m[2][0] = *((_QWORD *)&v38 + 1);
            if ( v34 != &v34[-v45] )
            {
              v41 = v156[0] + 16LL * *((_QWORD *)&v38 + 1);
              *(_QWORD *)&v161.m[2][0] = *(_QWORD *)&v154.m[2][0];
              v31 = (__int64 *)((char *)this + 192);
              do
              {
                v34 -= 16;
                if ( !*(_QWORD *)&v154.m11 )
                  goto LABEL_233;
                if ( !*(_QWORD *)&v161.m[2][0] )
                  goto LABEL_233;
                v41 -= 16LL;
                --*(_QWORD *)&v161.m[2][0];
                v36 = v159;
                if ( *(_QWORD *)&v161.m[2][0] >= *(_QWORD *)&v154.m[1][0] )
                  goto LABEL_233;
                *(_OWORD *)v41 = *(_OWORD *)v34;
              }
              while ( v34 != (const char *)v38 );
            }
            if ( v43 > *((_QWORD *)&v38 + 1) )
            {
              v41 = v162;
              *(_QWORD *)&v154.m11 = v162;
              *(_OWORD *)&v154.m[1][0] = (unsigned __int64)v42;
              v142 = v42 < 0;
              if ( v42 )
              {
                if ( !(_QWORD)v162 )
                  goto LABEL_233;
                v142 = v42 < 0;
              }
              if ( v142 && v42 )
                goto LABEL_233;
              *(_QWORD *)&v154.m[2][0] = v42;
              v46 = 16 * v36;
              *(_OWORD *)v156 = *(_OWORD *)&v154.m11;
              v157 = v42;
              std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                &v154,
                v162 + v46,
                v162 + 16 * (v42 - *((_QWORD *)&v38 + 1)),
                v156);
              *((_QWORD *)&v38 + 1) = v173;
              v33 = (__int64 *)((char *)this + 1184);
            }
            else
            {
              v46 = 16 * v36;
            }
            v47 = (_OWORD *)(v162 + v46);
            v31[1] += 16LL * *((_QWORD *)&v38 + 1);
            if ( *((_QWORD *)&v38 + 1) )
            {
              *v47 = *(_OWORD *)&v172.m11;
              qmemcpy(v47 + 1, v47, 8 * ((unsigned __int64)(16LL * *((_QWORD *)&v38 + 1) - 9) >> 3));
            }
          }
          v48 = *v33;
          v49 = (_OWORD *)v33[1];
          *(_OWORD *)&v172.m11 = 0uLL;
          v50 = (char *)v160[0] + (unsigned int)(LODWORD(v155[0]) * LODWORD(v161.m11));
          v51 = ((__int64)v49 - v48) >> 4;
          v156[0] = v48;
          *(_QWORD *)&v161.m[2][0] = v51;
          if ( (unsigned __int64)v50 <= v51 )
          {
            detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::clear_region(
              v33,
              v50,
              ((__int64)v49 - v48 + -16 * ((__int64)v160[0] + (unsigned int)(LODWORD(v155[0]) * LODWORD(v161.m11)))) >> 4);
          }
          else
          {
            v52 = v33[2];
            *((_QWORD *)&v38 + 1) = &v50[-v51];
            *(_QWORD *)&v173 = &v50[-v51];
            if ( (v52 - (__int64)v49) >> 4 < (unsigned __int64)&v50[-v51] )
            {
              if ( (unsigned __int64)v50 < v51 )
                std::_Xoverflow_error(v50);
              v86 = detail::liberal_expansion_policy::expand(
                      (detail::liberal_expansion_policy *)v50,
                      (v52 - v48) >> 4,
                      (unsigned __int64)v160[0] + (unsigned int)(LODWORD(v155[0]) * LODWORD(v161.m11)));
              v87 = operator new(saturated_mul(v86, 0x10uLL));
              v88 = *((_QWORD *)this + 149);
              v89 = *((_QWORD *)this + 148);
              *(_QWORD *)&v154.m11 = v87;
              v90 = v87;
              *(_OWORD *)&v154.m[1][0] = *(unsigned __int64 *)&v161.m[2][0];
              v157 = 0LL;
              *(_OWORD *)v156 = *(_OWORD *)&v154.m11;
              std::uninitialized_copy<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                &v154,
                v89,
                v88,
                v156);
              v91 = (CDrawListEntryBuilder *)*((_QWORD *)this + 148);
              *((_QWORD *)this + 148) = v90;
              if ( v91 == (CDrawListEntryBuilder *)((char *)this + 1216) )
                v91 = 0LL;
              operator delete(v91);
              v51 = *(_QWORD *)&v161.m[2][0];
              v33 = (__int64 *)((char *)this + 1184);
              v48 = *((_QWORD *)this + 148);
              *((_QWORD *)&v38 + 1) = v173;
              v49 = (_OWORD *)(v48 + 16LL * *(_QWORD *)&v161.m[2][0]);
              *((_QWORD *)this + 149) = v49;
              *((_QWORD *)this + 150) = v48 + 16 * v86;
              v156[0] = v48;
            }
            *(_OWORD *)&v154.m[1][0] = *((unsigned __int64 *)&v38 + 1);
            v42 = ((__int64)v49 - v48) >> 4;
            v163 = 0LL;
            v41 = v48 + 16 * v42;
            v53 = v42 - v51;
            *(_QWORD *)&v154.m11 = v41;
            v162 = *(_OWORD *)&v154.m11;
            v54 = v38 < 0;
            if ( *((_QWORD *)&v38 + 1) )
            {
              if ( !v41 )
                goto LABEL_233;
              v54 = v38 < 0;
            }
            if ( v54 && *((_QWORD *)&v38 + 1) )
              goto LABEL_233;
            v163 = *((_QWORD *)&v38 + 1);
            v55 = (((__int64)v49 - v48) >> 4) - v51;
            if ( *((_QWORD *)&v38 + 1) < v53 )
              v55 = *((_QWORD *)&v38 + 1);
            v41 = 16 * v55;
            *(_QWORD *)&v38 = (char *)v49 - v41;
            *(_QWORD *)&v154.m[2][0] = *((_QWORD *)&v38 + 1);
            if ( v49 != (_OWORD *)((char *)v49 - v41) )
            {
              v41 = v162 + 16LL * *((_QWORD *)&v38 + 1);
              *(_QWORD *)&v162 = *(_QWORD *)&v154.m[2][0];
              v51 = *(_QWORD *)&v161.m[2][0];
              do
              {
                --v49;
                if ( !*(_QWORD *)&v154.m11 )
                  goto LABEL_233;
                if ( !(_QWORD)v162 )
                  goto LABEL_233;
                v41 -= 16LL;
                *(_QWORD *)&v162 = v162 - 1;
                v33 = (__int64 *)((char *)this + 1184);
                if ( (unsigned __int64)v162 >= *(_QWORD *)&v154.m[1][0] )
                  goto LABEL_233;
                *(_OWORD *)v41 = *v49;
              }
              while ( v49 != (_OWORD *)v38 );
            }
            if ( v53 > *((_QWORD *)&v38 + 1) )
            {
              *(_QWORD *)&v154.m11 = v48;
              *(_OWORD *)&v154.m[1][0] = (unsigned __int64)v42;
              v143 = v42 < 0;
              if ( v42 )
              {
                if ( !v48 )
                  goto LABEL_233;
                v143 = v42 < 0;
              }
              if ( v143 && v42 )
                goto LABEL_233;
              *(_QWORD *)&v154.m[2][0] = v42;
              v56 = 16 * v51;
              v162 = *(_OWORD *)&v154.m11;
              v163 = v42;
              std::move_backward<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                &v154,
                v48 + v56,
                v48 + 16 * (v42 - *((_QWORD *)&v38 + 1)),
                &v162);
              *((_QWORD *)&v38 + 1) = v173;
              v33 = (__int64 *)((char *)this + 1184);
              v48 = v156[0];
            }
            else
            {
              v56 = 16 * v51;
            }
            v57 = (_OWORD *)(v48 + v56);
            v33[1] += 16LL * *((_QWORD *)&v38 + 1);
            if ( *((_QWORD *)&v38 + 1) )
            {
              *v57 = *(_OWORD *)&v172.m11;
              qmemcpy(v57 + 1, v57, 8 * ((unsigned __int64)(16LL * *((_QWORD *)&v38 + 1) - 9) >> 3));
            }
          }
          v58 = *(_QWORD *)&v174.m11;
          LOWORD(v155[1]) = 0;
          detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
            (unsigned __int64 *)this + 273,
            *(_QWORD *)&v174.m11 + v153[0],
            (unsigned __int16 *)&v155[1],
            (__int64)v33);
          v59 = v159;
          *(_QWORD *)&v173 = *((_QWORD *)this + 24) + 16 * v159;
          v156[0] = *((_QWORD *)this + 148) + 16 * (__int64)v160[0];
          v60 = *((_QWORD *)this + 273);
          *((_QWORD *)&v173 + 1) = __PAIR64__(LODWORD(v155[0]), v166);
          v156[1] = __PAIR64__(LODWORD(v155[0]), v166);
          Geometry = Mesh::GenerateGeometry(
                       (CDrawListEntryBuilder *)((char *)this + 104),
                       v28,
                       v27,
                       (__int64)&v173,
                       (__int64)v156,
                       v155,
                       *((_WORD *)this + 1088),
                       (unsigned __int16 *)(v60 + 2 * v58),
                       v153);
          v25 = Geometry;
          if ( Geometry >= 0 )
          {
            v63 = v155[0];
            *((_DWORD *)this + 544) += LODWORD(v155[0]);
            m11 = v161.m11;
            v42 = *((_QWORD *)this + 25);
            v33 = (__int64 *)*((_QWORD *)this + 24);
            *(_OWORD *)&v172.m11 = 0uLL;
            v41 = v59 + (unsigned int)(LODWORD(v161.m11) * LODWORD(v63));
            v65 = (v42 - (__int64)v33) >> 4;
            if ( v41 > v65 )
            {
              v156[0] = v42;
              detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::insert(
                (_DWORD)this + 192,
                (unsigned int)&v173,
                (unsigned int)v156,
                v41 - v65,
                (__int64)&v172);
              goto LABEL_55;
            }
            v66 = (v42 - 16 * v41 - (__int64)v33) >> 4;
            *((_QWORD *)&v38 + 1) = v66 + v41;
            if ( v66 + v41 > v65 )
              std::_Xoverflow_error((const char *)v41);
            *(_QWORD *)&v154.m11 = v33;
            *(_OWORD *)&v154.m[1][0] = (unsigned __int64)((v42 - (__int64)v33) >> 4);
            if ( *((_QWORD *)&v38 + 1) == v65 )
            {
LABEL_54:
              *((_QWORD *)this + 25) = v42 - 16 * v66;
LABEL_55:
              v67 = LODWORD(v155[0]) * LODWORD(m11);
              v41 = *((_QWORD *)this + 149);
              v33 = (__int64 *)*((_QWORD *)this + 148);
              *(_OWORD *)&v172.m11 = 0uLL;
              v68 = (v41 - (__int64)v33) >> 4;
              v42 = (__int64)v160[0] + v67;
              if ( v42 > v68 )
              {
                v156[0] = v41;
                detail::vector_facade<CDrawListEntryBuilder::Align16Chunk,detail::buffer_impl<CDrawListEntryBuilder::Align16Chunk,60,1,detail::liberal_expansion_policy>>::insert(
                  (_DWORD)this + 1184,
                  (unsigned int)&v173,
                  (unsigned int)v156,
                  v42 - v68,
                  (__int64)&v172);
                goto LABEL_59;
              }
              v69 = (v41 - 16 * v42 - (__int64)v33) >> 4;
              *((_QWORD *)&v38 + 1) = v69 + v42;
              if ( v69 + v42 > v68 )
                std::_Xoverflow_error((const char *)v41);
              *(_QWORD *)&v154.m11 = v33;
              *(_OWORD *)&v154.m[1][0] = (unsigned __int64)((v41 - (__int64)v33) >> 4);
              if ( *((_QWORD *)&v38 + 1) == v68 )
              {
LABEL_58:
                *((_QWORD *)this + 149) = v41 - 16 * v69;
LABEL_59:
                LOWORD(v155[1]) = 0;
                detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,30,1,detail::liberal_expansion_policy>>::resize(
                  (unsigned __int64 *)this + 273,
                  *(_QWORD *)&v174.m11 + v153[0],
                  (unsigned __int16 *)&v155[1],
                  (__int64)v33);
                goto LABEL_60;
              }
              v145 = v42 < 0;
              if ( v42 )
              {
                if ( !v33 )
                  goto LABEL_233;
                v145 = v42 < 0;
              }
              if ( (!v145 || !v42) && (v42 <= 0 || v68 >= v42) )
              {
                *(_QWORD *)&v154.m[2][0] = (char *)v160[0] + v67;
                v172 = v154;
                std::move<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                  &v154,
                  &v33[2 * *((_QWORD *)&v38 + 1)],
                  &v33[2 * v68],
                  &v172);
                v41 = *((_QWORD *)this + 149);
                goto LABEL_58;
              }
              goto LABEL_233;
            }
            v144 = v41 < 0;
            if ( v41 )
            {
              if ( !v33 )
                goto LABEL_233;
              v144 = v41 < 0;
            }
            if ( (!v144 || !v41) && (v41 <= 0 || v65 >= v41) )
            {
              *(_QWORD *)&v154.m[2][0] = v41;
              *(_OWORD *)&v172.m11 = *(_OWORD *)&v154.m11;
              *(_QWORD *)&v172.m[2][0] = v41;
              std::move<std::move_iterator<CDrawListEntryBuilder::Align16Chunk *>,stdext::checked_array_iterator<CDrawListEntryBuilder::Align16Chunk *>>(
                &v154,
                &v33[2 * *((_QWORD *)&v38 + 1)],
                &v33[2 * v65],
                &v172);
              v42 = *((_QWORD *)this + 25);
              goto LABEL_54;
            }
LABEL_233:
            _o__invalid_parameter_noinfo_noreturn(v41, *((_QWORD *)&v38 + 1), v42, v33);
            JUMPOUT(0x1801163F0LL);
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
        (const struct D2D1::Matrix3x2F *)&v164,
        v167);
      v19 = v158;
LABEL_61:
      ++*((_DWORD *)this + 568);
      if ( !v152[0] )
        goto LABEL_62;
      if ( **((_QWORD **)this + 2) )
        ++*((_DWORD *)this + 24);
      if ( !v19 )
      {
        ++dword_18033C858;
        goto LABEL_63;
      }
      v146 = v19 - 1;
      if ( !v146 )
      {
        ++dword_18033C85C;
        goto LABEL_63;
      }
      if ( v146 == 1 )
LABEL_62:
        ++dword_18033C854;
LABEL_63:
      v4 = v151;
LABEL_64:
      v25 = 0;
      goto LABEL_65;
    }
    v150 = 1025;
  }
LABEL_151:
  v128 = RectangleMesh;
LABEL_154:
  MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v128, v150, 0LL);
LABEL_158:
  v4 = v151;
LABEL_65:
  v70 = lpMem;
  if ( (v197 - (_BYTE *)lpMem) >> 3 )
  {
    detail::vector_facade<D2D_VECTOR_2F,detail::buffer_impl<D2D_VECTOR_2F,8,1,detail::liberal_expansion_policy>>::clear_region(&lpMem);
    v70 = lpMem;
  }
  lpMem = 0LL;
  if ( v70 != v199 && v70 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v70);
  }
  v71 = v192;
  if ( (v193 - (_BYTE *)v192) >> 3 )
  {
    detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,16,1,detail::liberal_expansion_policy>>::clear_region(
      &v192,
      0LL);
    v71 = v192;
  }
  v192 = 0LL;
  if ( v71 != v195 && v71 )
  {
    v148 = GetProcessHeap();
    HeapFree(v148, 0, v71);
  }
  v72 = v188;
  v73 = (v189 - (_BYTE *)v188) >> 2;
  if ( v73 )
  {
    detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,8,1,detail::liberal_expansion_policy>>::clear_region(
      &v188,
      v18,
      v73);
    v72 = v188;
  }
  v188 = 0LL;
  if ( v72 != v191 && v72 )
  {
    v149 = GetProcessHeap();
    HeapFree(v149, 0, v72);
  }
  v74 = v177;
  v75 = v178;
  v175 = &CRectanglesShape::`vftable';
  HIDWORD(v180) = 0;
  if ( v177 != v178 )
  {
    operator delete(v177);
    v75 = v178;
    v74 = v178;
    v177 = v178;
    LODWORD(v180) = v179;
  }
  if ( v182 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v182 + 16LL))(v182);
    v75 = v178;
    v74 = v177;
    v182 = 0LL;
  }
  if ( v74 != v75 )
  {
    operator delete(v74);
    v177 = 0LL;
  }
  v76 = v176;
  if ( v176 )
  {
    v176 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v76 + 16LL))(v76);
  }
  if ( v4 && v12 )
    (**(void (__fastcall ***)(const struct CShape *, __int64))v12)(v12, 1LL);
  return v25;
}
