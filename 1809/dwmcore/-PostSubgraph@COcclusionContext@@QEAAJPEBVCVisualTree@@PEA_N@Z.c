/*
 * XREFs of ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003E5E0
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x18003C2F0 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 * Callees:
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18000ED88 (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ?GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z @ 0x1800118DC (-GetLightAtNoRef@CVisual@@QEBAPEAVCCompositionLight@@IW4LightBehavior@@@Z.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x180012488 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?Pop@CLightStack@@QEAAJXZ @ 0x180013C58 (-Pop@CLightStack@@QEAAJXZ.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800142B8 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180014B40 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180040650 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180041420 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x1800454C0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180047744 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z @ 0x1800A2DA0 (-SetupBuffer@CWorkBuffer@Internal@FastRegion@@QEAAJH@Z.c)
 *     ?SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z @ 0x1800A6674 (-SaveResult@CRegion@FastRegion@@IEAAJPEAVCWorkBuffer@Internal@2@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z @ 0x1800A7760 (-Union@CRgnData@Internal@FastRegion@@QEAAXAEBV123@0@Z.c)
 *     ?EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z @ 0x1800A8078 (-EstimateSizeUnion@CRgnData@Internal@FastRegion@@SAHAEBV123@0@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A8A88 (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800AB370 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DB270 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DBCB0 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x1800DC0B0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x1800E4DF4 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 *     ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x180161868 (--1CWorkBuffer@Internal@FastRegion@@QEAA@XZ.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x18016CBBC (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     McTemplateU0dffffq @ 0x180177070 (McTemplateU0dffffq.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801E2780 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::PostSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  int v3; // r15d
  double **v4; // r14
  const struct CVisualTree *v6; // r13
  __int64 v7; // rsi
  int v8; // r12d
  _QWORD *v9; // rbx
  _BYTE *v10; // r14
  int v11; // eax
  char v12; // al
  CMILMatrix *v13; // rbx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  CMILMatrix *v17; // rcx
  int v18; // eax
  struct tagRECT *v19; // rcx
  struct tagRECT v20; // xmm0
  bool v21; // cc
  LONG top; // xmm1_4
  float v23; // xmm7_4
  LONG right; // xmm2_4
  float v25; // xmm6_4
  LONG bottom; // xmm3_4
  float v27; // xmm5_4
  __int64 v28; // rcx
  char *v29; // r9
  bool v30; // zf
  __int64 v31; // r8
  int v32; // eax
  int v33; // eax
  char v34; // al
  _DWORD *v35; // r8
  int v36; // edx
  float v37; // xmm0_4
  int v38; // ecx
  unsigned int v39; // eax
  _DWORD *v40; // r8
  float v41; // xmm6_4
  float v42; // xmm7_4
  __int64 v43; // rax
  float v44; // xmm0_4
  __int64 v46; // rdx
  int v47; // eax
  unsigned int v48; // ecx
  int v49; // r9d
  __int64 *v50; // rdx
  __int64 v51; // r13
  unsigned int v52; // ecx
  __int64 *v53; // r8
  int v54; // r14d
  unsigned int j; // ebx
  _QWORD *v56; // rcx
  int v57; // ecx
  gsl::details *v58; // rax
  gsl::details *v59; // rcx
  __int64 v60; // r13
  int v61; // eax
  float *v62; // r15
  struct tagRECT v63; // xmm0
  __int128 v64; // xmm0
  float v65; // xmm7_4
  float v66; // xmm6_4
  float v67; // xmm8_4
  float v68; // xmm9_4
  float v69; // xmm3_4
  float v70; // xmm2_4
  float v71; // xmm0_4
  char v72; // al
  int v73; // eax
  __int64 v74; // rcx
  __int64 v75; // rax
  __int128 v76; // xmm1
  __int128 v77; // xmm0
  __int128 v78; // xmm1
  char v79; // cl
  float v80; // xmm5_4
  float v81; // xmm3_4
  float v82; // xmm1_4
  float v83; // xmm0_4
  float v84; // xmm7_4
  float v85; // xmm4_4
  float v86; // xmm2_4
  __int64 *v87; // r15
  __int64 v88; // rcx
  unsigned int v89; // edx
  float v90; // xmm0_4
  float v91; // xmm0_4
  float v92; // xmm0_4
  __int64 v93; // r15
  __int64 v94; // rax
  unsigned int v95; // ecx
  int v96; // r13d
  unsigned int v97; // ecx
  int v98; // edx
  int *v99; // rcx
  __int128 v100; // xmm0
  __int128 v101; // xmm1
  __int128 v102; // xmm0
  __int128 v103; // xmm1
  __int64 v104; // rax
  _BYTE *v105; // rdx
  __int64 k; // rcx
  __int64 *v107; // rcx
  __int64 v108; // rcx
  int v109; // eax
  int v110; // eax
  int v111; // eax
  __int64 v112; // r8
  _DWORD *v113; // r10
  char *v114; // r9
  int v115; // eax
  unsigned int v116; // ecx
  unsigned int v117; // ecx
  int v118; // eax
  unsigned int v119; // ecx
  int v120; // eax
  int v121; // eax
  struct tagRECT *v122; // rcx
  struct tagRECT v123; // xmm0
  LONG v124; // xmm1_4
  float v125; // xmm7_4
  LONG v126; // xmm2_4
  float v127; // xmm6_4
  LONG v128; // xmm3_4
  float v129; // xmm4_4
  struct FastRegion::Internal::CRgnData **v130; // r8
  unsigned int v131; // ebx
  unsigned int v132; // r9d
  const struct FastRegion::Internal::CRgnData **v133; // rdx
  int v134; // r10d
  int v135; // ecx
  int v136; // r11d
  int v137; // eax
  int v138; // eax
  int v139; // ecx
  int v140; // eax
  int v141; // eax
  __int64 v142; // rax
  _BYTE *v143; // rdx
  unsigned int m; // ecx
  double *v145; // r14
  __int64 v146; // r8
  __int64 v147; // rax
  _BYTE *v148; // rdx
  __int64 i; // rcx
  _QWORD **v150; // rax
  _QWORD *v151; // rax
  _QWORD *v152; // rcx
  __int64 v153; // rax
  _BYTE *LightAtNoRef; // rax
  int v155; // eax
  unsigned int v156; // ecx
  char *v157; // r9
  __int64 v158; // rax
  float *v159; // rcx
  int v160; // ebx
  float v161; // xmm2_4
  float v162; // xmm1_4
  _OWORD *v163; // rax
  int v164; // r10d
  __int128 v165; // xmm1
  unsigned __int64 v166; // rax
  __int64 v167; // rdx
  unsigned int v168; // ecx
  unsigned int v169; // ecx
  __int64 p_rcSrc1; // [rsp+48h] [rbp-C0h] BYREF
  _DWORD *v171; // [rsp+50h] [rbp-B8h] BYREF
  __int64 *v172; // [rsp+58h] [rbp-B0h]
  __int64 v173; // [rsp+60h] [rbp-A8h]
  unsigned int v174[4]; // [rsp+68h] [rbp-A0h] BYREF
  struct tagRECT v175; // [rsp+78h] [rbp-90h]
  struct tagRECT v176; // [rsp+88h] [rbp-80h] BYREF
  RECT rcSrc1; // [rsp+98h] [rbp-70h] BYREF
  float v178[8]; // [rsp+A8h] [rbp-60h] BYREF
  struct FastRegion::Internal::CRgnData *v179[2]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 v180; // [rsp+D8h] [rbp-30h]
  __int128 v181; // [rsp+E8h] [rbp-20h]
  __int128 v182; // [rsp+F8h] [rbp-10h]
  int v183; // [rsp+108h] [rbp+0h]
  _BYTE v184[16]; // [rsp+118h] [rbp+10h] BYREF
  struct tagRECT rcDst; // [rsp+128h] [rbp+20h] BYREF
  _BYTE v186[80]; // [rsp+138h] [rbp+30h] BYREF
  int v187; // [rsp+188h] [rbp+80h] BYREF
  FastRegion::Internal::CRgnData *v188; // [rsp+190h] [rbp+88h]
  _BYTE v189[256]; // [rsp+198h] [rbp+90h] BYREF

  v3 = *((_DWORD *)this + 259);
  v4 = 0LL;
  *a3 = 1;
  v6 = a2;
  v7 = *((_QWORD *)this + 6);
  v8 = 0;
  *(_QWORD *)v178 = a2;
  if ( *((_BYTE *)a2 + 32) )
  {
    v9 = (_QWORD *)(v7 + 328);
  }
  else
  {
    v146 = *(_QWORD *)(v7 + 224);
    if ( *(int *)v146 >= 0 )
      goto LABEL_45;
    v147 = *(unsigned int *)(v146 + 4);
    v148 = (_BYTE *)(v146 + 8);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v147; ++v148 )
    {
      if ( *v148 == 1 )
        break;
      i = (unsigned int)(i + 1);
    }
    v150 = (unsigned int)i >= (unsigned int)v147
         ? 0LL
         : (_QWORD **)(v146 + v147 + 15 + 8 * i - (((_BYTE)v147 + 15) & 7));
    v151 = *v150;
    if ( !v151 )
      goto LABEL_45;
    v152 = (_QWORD *)*v151;
    if ( (_QWORD *)*v151 == v151 )
      goto LABEL_45;
    while ( 1 )
    {
      v9 = v152 - 28;
      if ( (const struct CVisualTree *)v152[4] == v6 )
        break;
      v152 = (_QWORD *)*v152;
      if ( v152 == v151 )
        goto LABEL_45;
    }
  }
  if ( !v9 )
    goto LABEL_45;
  v10 = (_BYTE *)v9[4];
  if ( !v10 )
  {
    v158 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v9[3] + 328LL))(v9[3]);
    v9[4] = v158;
    v10 = (_BYTE *)v158;
    if ( !v158 )
      goto LABEL_44;
  }
  (*(void (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)v10 + 16LL))(v10, *((unsigned int *)this + 258));
  if ( (v10[8] & 1) == 0 )
    goto LABEL_34;
  v11 = *((_DWORD *)this + 270);
  if ( v11 && *(_DWORD *)(*((_QWORD *)this + 137) + 4LL * (unsigned int)(v11 - 1)) )
  {
    if ( (**(_DWORD **)(v7 + 224) & 0x100000) != 0
      && *((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v7) + 356) )
    {
      COcclusionContext::GetDestinationRect((__int64)this, (__int64)&v176);
      if ( *((_BYTE *)this + 816) )
        v157 = (char *)this + 820;
      else
        v157 = 0LL;
      (*(void (__fastcall **)(_QWORD, struct tagRECT *, _QWORD, char *))(**((_QWORD **)this + 49) + 40LL))(
        *((_QWORD *)this + 49),
        &v176,
        *((unsigned int *)this + 258),
        v157);
      CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>(
        (COcclusionContext *)((char *)this + 960),
        (float *)&v176.left);
    }
    v12 = *(_BYTE *)(v7 + 272);
    v13 = (CMILMatrix *)&CMILMatrix::Identity;
    if ( (v12 & 1) != 0 && (*(_BYTE *)(v7 + 94) & 0x20) != 0 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v7 + 192LL))(
              v7,
              *((_QWORD *)this + 143),
              &rcSrc1);
      v8 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x268u);
        goto LABEL_44;
      }
      v16 = *((_DWORD *)this + 2);
      if ( v16 )
        v17 = (CMILMatrix *)(*((_QWORD *)this + 3) + 68LL * (unsigned int)(v16 - 1));
      else
        v17 = (CMILMatrix *)&CMILMatrix::Identity;
      CMILMatrix::Transform2DBoundsHelper<0>(v17);
      v18 = *((_DWORD *)this + 30);
      if ( v18 )
      {
        v19 = (struct tagRECT *)(*((_QWORD *)this + 17) + 16LL * (unsigned int)(v18 - 1));
        v20 = *v19;
        v21 = *(float *)v174 <= COERCE_FLOAT(*v19);
        v176 = *v19;
        if ( !v21 )
          v20.left = v174[0];
        top = v176.top;
        v23 = *(float *)&v176.top;
        if ( *(float *)&v174[1] > *(float *)&v176.top )
        {
          top = v174[1];
          v23 = *(float *)&v174[1];
        }
        right = v176.right;
        v25 = *(float *)&v176.right;
        if ( *(float *)&v176.right > *(float *)&v174[2] )
        {
          right = v174[2];
          v25 = *(float *)&v174[2];
        }
        bottom = v176.bottom;
        v27 = *(float *)&v176.bottom;
        if ( *(float *)&v176.bottom > *(float *)&v174[3] )
        {
          bottom = v174[3];
          v27 = *(float *)&v174[3];
        }
        if ( v25 <= *(float *)&v20.left || v27 <= v23 )
        {
          bottom = 0;
          right = 0;
          top = 0;
          v20.left = 0;
        }
        *(_QWORD *)&v175.left = __PAIR64__(top, v20.left);
        *(_QWORD *)&v175.right = __PAIR64__(bottom, right);
      }
      else
      {
        v175 = *(struct tagRECT *)v174;
      }
      v28 = *((_QWORD *)this + 49);
      v29 = (char *)this + 820;
      v30 = *((_BYTE *)this + 816) == 0;
      v31 = *((unsigned int *)this + 258);
      v176 = v175;
      if ( v30 )
        v29 = 0LL;
      (*(void (__fastcall **)(__int64, struct tagRECT *, __int64, char *))(*(_QWORD *)v28 + 40LL))(v28, &v176, v31, v29);
      v12 = *(_BYTE *)(v7 + 272);
    }
    if ( (v12 & 3) != 0
      || (v32 = *((_DWORD *)this + 278)) != 0 && *(_BYTE *)((unsigned int)(v32 - 1) + *((_QWORD *)this + 141)) )
    {
      v118 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v7 + 192LL))(
               v7,
               *((_QWORD *)this + 143),
               v184);
      v8 = v118;
      if ( v118 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v119, 0LL, 0, v118, 0x27Eu);
        goto LABEL_44;
      }
      v120 = *((_DWORD *)this + 2);
      if ( v120 )
        v13 = (CMILMatrix *)(*((_QWORD *)this + 3) + 68LL * (unsigned int)(v120 - 1));
      CMILMatrix::Transform2DBoundsHelper<0>(v13);
      v121 = *((_DWORD *)this + 30);
      if ( v121 )
      {
        v122 = (struct tagRECT *)(*((_QWORD *)this + 17) + 16LL * (unsigned int)(v121 - 1));
        v123 = *v122;
        v21 = *(float *)v174 <= COERCE_FLOAT(*v122);
        v176 = *v122;
        if ( !v21 )
          v123.left = v174[0];
        v124 = v176.top;
        v125 = *(float *)&v176.top;
        if ( *(float *)&v174[1] > *(float *)&v176.top )
        {
          v124 = v174[1];
          v125 = *(float *)&v174[1];
        }
        v126 = v176.right;
        v127 = *(float *)&v176.right;
        if ( *(float *)&v176.right > *(float *)&v174[2] )
        {
          v126 = v174[2];
          v127 = *(float *)&v174[2];
        }
        v128 = v176.bottom;
        v129 = *(float *)&v176.bottom;
        if ( *(float *)&v176.bottom > *(float *)&v174[3] )
        {
          v128 = v174[3];
          v129 = *(float *)&v174[3];
        }
        if ( v127 <= *(float *)&v123.left || v129 <= v125 )
        {
          v128 = 0;
          v126 = 0;
          v124 = 0;
          v123.left = 0;
        }
        *(_QWORD *)&v175.left = __PAIR64__(v124, v123.left);
        *(_QWORD *)&v175.right = __PAIR64__(v128, v126);
      }
      else
      {
        v175 = *(struct tagRECT *)v174;
      }
      v130 = &v179[1];
      v179[0] = (struct FastRegion::Internal::CRgnData *)&v179[1];
      v131 = 0;
      rcSrc1 = v175;
      LODWORD(v179[1]) = 0;
      while ( 1 )
      {
        v132 = v131 + 5;
        v133 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 960);
        if ( v131 + 5 > 1 )
          v132 = 1;
        LODWORD(p_rcSrc1) = v132;
        v134 = (int)*((float *)&rcSrc1.left + 4 * v131);
        v135 = (int)*((float *)&rcSrc1.top + 4 * v131);
        v136 = (int)*((float *)&rcSrc1.right + 4 * v131);
        LODWORD(v171) = v135;
        v137 = (int)*((float *)&rcSrc1.bottom + 4 * v131);
        LODWORD(v172) = v137;
        if ( v134 >= v136 || v135 >= v137 )
        {
          *(_DWORD *)v130 = 0;
        }
        else
        {
          v138 = (int)v171;
          *(_DWORD *)v130 = 2;
          *((_DWORD *)v130 + 1) = v134;
          *((_DWORD *)v130 + 2) = v136;
          *((_DWORD *)v130 + 3) = v138;
          *((_DWORD *)v130 + 4) = 16;
          v139 = (int)v172;
          *((_DWORD *)v130 + 7) = v134;
          *((_DWORD *)v130 + 8) = v136;
          *((_DWORD *)v130 + 5) = v139;
          *((_DWORD *)v130 + 6) = 16;
          v133 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 960);
        }
        LODWORD(v171) = ++v131;
        if ( v131 < v132 )
        {
          v159 = (float *)(&rcSrc1.right + 4 * v131);
          v172 = (__int64 *)v159;
          while ( 1 )
          {
            v174[0] = (int)*(v159 - 2);
            v174[1] = (int)*(v159 - 1);
            v174[2] = (int)*v159;
            v174[3] = (int)v159[1];
            v176 = *(struct tagRECT *)v174;
            FastRegion::CRegion::CRegion((FastRegion::CRegion *)v186, &v176);
            v160 = FastRegion::CRegion::Union((FastRegion::CRegion *)v179, (const struct CRegion *)v186);
            FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v186);
            if ( v160 < 0 )
              break;
            v131 = (_DWORD)v171 + 1;
            v159 = (float *)(v172 + 2);
            LODWORD(v171) = v131;
            v172 += 2;
            if ( v131 >= (unsigned int)p_rcSrc1 )
            {
              v133 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 960);
              goto LABEL_187;
            }
          }
LABEL_256:
          FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)v179);
          break;
        }
LABEL_187:
        v130 = (struct FastRegion::Internal::CRgnData **)v179[0];
        if ( !*(_DWORD *)v179[0] )
          goto LABEL_193;
        if ( *(_DWORD *)*v133 )
        {
          v140 = FastRegion::Internal::CRgnData::EstimateSizeUnion(*v133, v179[0]);
          v187 = 0;
          v188 = (FastRegion::Internal::CRgnData *)v189;
          LODWORD(v171) = FastRegion::Internal::CWorkBuffer::SetupBuffer(
                            (FastRegion::Internal::CWorkBuffer *)&v187,
                            v140);
          if ( (int)v171 < 0 )
          {
            FastRegion::Internal::CWorkBuffer::~CWorkBuffer((FastRegion::Internal::CWorkBuffer *)&v187);
            goto LABEL_241;
          }
          FastRegion::Internal::CRgnData::Union(
            v188,
            *((const struct FastRegion::Internal::CRgnData **)this + 120),
            v179[0]);
          v141 = FastRegion::CRegion::SaveResult(
                   (COcclusionContext *)((char *)this + 960),
                   (struct FastRegion::Internal::CWorkBuffer *)&v187);
          LODWORD(v171) = v141;
          if ( v189 != (_BYTE *)v188 )
          {
            WPF::ProcessHeapImpl::Free(v188);
LABEL_241:
            v141 = (int)v171;
          }
        }
        else
        {
          v141 = FastRegion::CRegion::Copy((COcclusionContext *)((char *)this + 960), (const struct CRegion *)v179);
        }
        if ( v141 < 0 )
          goto LABEL_256;
        v130 = (struct FastRegion::Internal::CRgnData **)v179[0];
LABEL_193:
        if ( v131 )
        {
          if ( &v179[1] != v130 )
            WPF::ProcessHeapImpl::Free(v130);
          break;
        }
      }
    }
  }
  v33 = *((_DWORD *)this + 270);
  if ( v33 )
    *((_DWORD *)this + 270) = v33 - 1;
LABEL_34:
  if ( v3 )
    goto LABEL_35;
  v46 = *((_QWORD *)this + 143);
  *((_QWORD *)this + 101) = v7;
  v47 = (*(__int64 (__fastcall **)(__int64, __int64, COcclusionContext *, _BYTE *))(*(_QWORD *)v7 + 200LL))(
          v7,
          v46,
          this,
          v10);
  v8 = v47;
  if ( v47 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0x311u);
    goto LABEL_69;
  }
  v50 = (__int64 *)*((_QWORD *)this + 50);
  LODWORD(v51) = *((_DWORD *)this + 106);
  v172 = v50;
  if ( !(_DWORD)v51 )
    goto LABEL_68;
  while ( 1 )
  {
    v112 = *((unsigned int *)this + 258);
    v51 = (unsigned int)(v51 - 1);
    LODWORD(p_rcSrc1) = v112;
    *((_DWORD *)this + 258) = v112 + 2;
    v113 = (_DWORD *)v50 + 5 * v51;
    v171 = v113;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      McTemplateU0dffffq(5 * v51, (_DWORD)v50, v112, v49, v113[1], v113[2], v113[3], v113[4]);
      v50 = v172;
      v113 = v171;
      v112 = (unsigned int)p_rcSrc1;
    }
    if ( v113[4] )
      goto LABEL_154;
    v114 = (char *)this + 820;
    if ( !*((_BYTE *)this + 816) )
      v114 = 0LL;
    v115 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, char *))(**((_QWORD **)this + 49) + 32LL))(
             *((_QWORD *)this + 49),
             v113,
             v112,
             v114);
    if ( v115 < 0 )
      break;
    v50 = v172;
LABEL_154:
    if ( !(_DWORD)v51 )
      goto LABEL_68;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v116, 0LL, 0, v115, 0x357u);
LABEL_68:
  *((_DWORD *)this + 106) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 400, 20LL);
  v6 = *(const struct CVisualTree **)v178;
LABEL_69:
  *((_QWORD *)this + 101) = 0LL;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, v8, 0x28Fu);
    v4 = 0LL;
    goto LABEL_47;
  }
LABEL_35:
  v34 = v10[8];
  if ( (v34 & 4) != 0 )
  {
    v57 = *((_DWORD *)this + 2);
    if ( v57 )
    {
      *((_DWORD *)this + 2) = v57 - 1;
      v34 = v10[8];
    }
  }
  if ( (v34 & 2) != 0 )
  {
    v110 = *((_DWORD *)this + 262);
    if ( v110 )
      *((_DWORD *)this + 262) = v110 - 1;
    v111 = *((_DWORD *)this + 30);
    if ( v111 )
      *((_DWORD *)this + 30) = v111 - 1;
  }
  if ( (v10[8] & 8) != 0 )
  {
    v109 = *((_DWORD *)this + 278);
    if ( v109 )
      *((_DWORD *)this + 278) = v109 - 1;
  }
  if ( !v3
    && ((unsigned int)((__int64)(*(_QWORD *)(v7 + 288) - *(_QWORD *)(v7 + 280)) >> 4)
     || (unsigned int)((__int64)(*(_QWORD *)(v7 + 312) - *(_QWORD *)(v7 + 304)) >> 4)) )
  {
    p_rcSrc1 = 0x100000000LL;
    v53 = &p_rcSrc1;
    v172 = &p_rcSrc1;
LABEL_74:
    v54 = *(_DWORD *)v53;
    for ( j = 0; ; ++j )
    {
      if ( j >= (unsigned int)CVisual::GetLightsCount((_QWORD *)v7, v54) )
      {
        v53 = (__int64 *)((char *)v172 + 4);
        v172 = v53;
        if ( v53 == (__int64 *)&v171 )
          goto LABEL_39;
        goto LABEL_74;
      }
      LightAtNoRef = (_BYTE *)CVisual::GetLightAtNoRef(v56, j, v54);
      if ( LightAtNoRef[154] )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, __int64))(*(_QWORD *)LightAtNoRef
                                                                                             + 208LL))(
               LightAtNoRef,
               v6,
               v7) )
        {
          v155 = CLightStack::Pop((COcclusionContext *)((char *)this + 152));
          if ( v155 < 0 )
            break;
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v156, 0LL, 0, v155, 0x69u);
  }
LABEL_39:
  v35 = *(_DWORD **)(v7 + 224);
  if ( (*v35 & 0x1000000) != 0
    || (v36 = *(_DWORD *)(*(_QWORD *)(v7 + 216) + 4LL), (v36 & 0x2000000) != 0)
    || (v36 & 0x4000000) != 0 )
  {
    v4 = 0LL;
    goto LABEL_140;
  }
  if ( (*v35 & 0x200000) != 0 )
  {
    v104 = (unsigned int)v35[1];
    v105 = v35 + 2;
    v4 = 0LL;
    for ( k = 0LL; (unsigned int)k < (unsigned int)v104; ++v105 )
    {
      if ( *v105 == 11 )
        break;
      k = (unsigned int)(k + 1);
    }
    v107 = (unsigned int)k >= (unsigned int)v104
         ? 0LL
         : (__int64 *)((char *)v35 + v104 + 8 * k - (((_BYTE)v104 + 15) & 7) + 15);
    v108 = *v107;
    if ( v108 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v108 + 48LL))(v108, 54LL) )
      {
LABEL_140:
        --*((_DWORD *)this + 260);
        goto LABEL_45;
      }
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 86LL) )
  {
LABEL_44:
    v4 = 0LL;
    goto LABEL_45;
  }
  v4 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 176LL))(v7) || *(_QWORD *)(v7 + 560) )
    goto LABEL_140;
LABEL_45:
  if ( v3 )
    --*((_DWORD *)this + 259);
LABEL_47:
  if ( *((_BYTE *)this + 817)
    && !*((_DWORD *)this + 259)
    && (*(_BYTE *)(v7 + 94) & 0x10) == 0
    && (*(_DWORD *)(v7 + 88) & 0x400) != 0 )
  {
    v37 = *(float *)(v7 + 160);
    v38 = (v37 <= *(float *)(v7 + 156)) + 1;
    if ( *(float *)(v7 + 148) > *(float *)(v7 + 140) )
      v38 = v37 <= *(float *)(v7 + 156);
    v39 = v38 + 1;
    if ( *(float *)(v7 + 152) > *(float *)(v7 + 144) )
      v39 = v38;
    if ( v39 <= 1 )
    {
      v40 = *(_DWORD **)(v7 + 224);
      v41 = FLOAT_1_0;
      v42 = FLOAT_1_0;
      if ( (*v40 & 0x200000) != 0 )
      {
        v142 = (unsigned int)v40[1];
        v143 = v40 + 2;
        for ( m = 0; m < (unsigned int)v142; ++v143 )
        {
          if ( *v143 == 11 )
            break;
          ++m;
        }
        if ( m < (unsigned int)v142 )
          v4 = (double **)((char *)v40 + v142 + 8LL * m - (((_BYTE)v142 + 15) & 7) + 15);
        v145 = *v4;
        if ( (*(unsigned __int8 (__fastcall **)(double *, __int64))(*(_QWORD *)v145 + 48LL))(v145, 51LL) )
          v42 = v145[9];
        v4 = 0LL;
      }
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v42, 0.0))) & _xmm) >= 0.0000011920929 )
      {
        if ( v7 != *((_QWORD *)v6 + 3) || !*((_BYTE *)v6 + 34) )
        {
          v43 = *(_QWORD *)(v7 + 216);
          if ( (*(_DWORD *)(v43 + 4) & 0x8000000) != 0 )
          {
            v98 = *(_DWORD *)(v43 + 12);
            v99 = (int *)(v43 + 12);
            if ( (v98 & 0x7F000000) != 0x5000000 )
            {
              do
              {
                v99 = (int *)((char *)v99 + (v98 & 0xFFFFFF) + 4);
                v98 = *v99;
              }
              while ( (*v99 & 0x7F000000) != 0x5000000 );
            }
            LODWORD(p_rcSrc1) = v99[1];
            v44 = *(float *)&p_rcSrc1;
          }
          else
          {
            v44 = FLOAT_1_0;
          }
          v41 = fminf(1.0, fmaxf(v44, 0.0));
        }
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v41) & _xmm) >= 0.0000011920929
          && ((*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 224LL))(v7) || v3) )
        {
          v58 = (gsl::details *)*((_QWORD *)this + 148);
          v59 = v58;
          v172 = (__int64 *)v58;
          while ( 1 )
          {
            if ( v4 == (double **)v59 )
              goto LABEL_65;
            if ( v4 == (double **)v58 )
              goto LABEL_243;
            v60 = *(_QWORD *)(*((_QWORD *)this + 149) + 8LL * (_QWORD)v4);
            v173 = v60;
            if ( *(_BYTE *)(v60 + 13416) )
              break;
LABEL_126:
            if ( (__int64)v4 < 0 || (v58 = (gsl::details *)*((_QWORD *)this + 148), v4 == (double **)v58) )
            {
LABEL_243:
              gsl::details::terminate(v59);
              JUMPOUT(0x18003F788LL);
            }
            v4 = (double **)((char *)v4 + 1);
          }
          v61 = *((_DWORD *)this + 30);
          v62 = (float *)(v60 + 12816);
          if ( v61 )
            v63 = *(struct tagRECT *)(*((_QWORD *)this + 17) + 16LL * (unsigned int)(v61 - 1));
          else
            v63 = (struct tagRECT)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
          v175 = v63;
          CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v60 + 12816));
          v64 = *(_OWORD *)(v60 + 56);
          v65 = *(float *)&v176.left;
          v66 = *(float *)&v176.top;
          v67 = *(float *)&v176.right;
          v68 = *(float *)&v176.bottom;
          v175 = v176;
          *(_OWORD *)v178 = v64;
          if ( *(float *)&v64 > *(float *)&v176.left )
          {
            v175.left = v64;
            v65 = *(float *)&v64;
          }
          v69 = *(float *)&v176.top;
          if ( v178[1] > *(float *)&v176.top )
          {
            *(float *)&v175.top = v178[1];
            v66 = v178[1];
            v69 = v178[1];
          }
          v70 = *(float *)&v176.right;
          if ( *(float *)&v176.right > v178[2] )
          {
            *(float *)&v175.right = v178[2];
            v67 = v178[2];
            v70 = v178[2];
          }
          v71 = *(float *)&v176.bottom;
          if ( *(float *)&v176.bottom > v178[3] )
          {
            *(float *)&v175.bottom = v178[3];
            v68 = v178[3];
            v71 = v178[3];
          }
          if ( v70 <= v65 || v71 <= v69 )
          {
            v66 = 0.0;
            v65 = 0.0;
            v175 = (struct tagRECT)0LL;
            v68 = 0.0;
            v67 = 0.0;
          }
          else if ( v70 > v65 && v71 > v66 )
          {
            v72 = 0;
            goto LABEL_99;
          }
          v72 = 1;
LABEL_99:
          if ( v72 )
            goto LABEL_125;
          v73 = *((_DWORD *)this + 2);
          v183 = 0;
          if ( v73 )
          {
            v74 = (unsigned int)(v73 - 1);
            v75 = *((_QWORD *)this + 3);
            v76 = *(_OWORD *)(68 * v74 + v75 + 16);
            *(_OWORD *)v179 = *(_OWORD *)(68 * v74 + v75);
            v77 = *(_OWORD *)(68 * v74 + v75 + 32);
            v180 = v76;
            v78 = *(_OWORD *)(68 * v74 + v75 + 48);
            LODWORD(v75) = *(_DWORD *)(68 * v74 + v75 + 64);
            v181 = v77;
            v182 = v78;
            v183 = v75;
          }
          else
          {
            *(_OWORD *)v179 = _xmm;
            v180 = _xmm;
            v181 = _xmm;
            v182 = _xmm;
            LOWORD(v183) = 32085;
          }
          if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(v179) )
          {
            v100 = *(_OWORD *)v62;
            v101 = *(_OWORD *)(v60 + 12832);
            v183 = *(_DWORD *)(v60 + 12880);
            *(_OWORD *)v179 = v100;
            v102 = *(_OWORD *)(v60 + 12848);
            v180 = v101;
            v103 = *(_OWORD *)(v60 + 12864);
          }
          else
          {
            CMILMatrix::Ensure3DFlags((CMILMatrix *)(v60 + 12816));
            v79 = *(_BYTE *)(v60 + 12880);
            if ( (v79 & 3) == 1 )
            {
LABEL_104:
              if ( *(float *)(v7 + 160) == 0.0 && *(float *)(v7 + 156) == 0.0 )
              {
                CMILMatrix::Transform2DBoundsHelper<1>(v179, v7 + 140, v174);
                v80 = *(float *)&v174[3];
                v81 = *(float *)&v174[2];
                v82 = *(float *)&v174[1];
                v83 = *(float *)v174;
              }
              else
              {
                CMILMatrix::Transform3DBoundsHelper<1>((CMILMatrix *)v179);
                v83 = v178[0];
                v82 = v178[1];
                v81 = v178[2];
                v80 = v178[3];
                *(_OWORD *)v174 = *(_OWORD *)v178;
              }
              if ( v65 > v83 )
              {
                *(float *)v174 = v65;
                v83 = v65;
              }
              v84 = v82;
              if ( v66 > v82 )
              {
                *(float *)&v174[1] = v66;
                v82 = v66;
                v84 = v66;
              }
              v85 = v81;
              if ( v81 > v67 )
              {
                v81 = v67;
                v85 = v67;
                *(float *)&v174[2] = v67;
              }
              v86 = v80;
              if ( v80 > v68 )
              {
                v80 = v68;
                v86 = v68;
                *(float *)&v174[3] = v68;
              }
              if ( v85 <= v83 || v86 <= v84 )
              {
                *(_OWORD *)v174 = 0uLL;
              }
              else if ( v85 > v83 && v86 > v82 )
              {
                v87 = (__int64 *)(v60 + 192);
                v88 = *(_QWORD *)(v60 + 192);
                v89 = 0;
                LODWORD(v171) = 0;
                v90 = v83 + 6291456.25;
                rcSrc1.left = (int)(LODWORD(v90) << 10) >> 11;
                v91 = v82 + 6291456.25;
                rcSrc1.top = (int)(LODWORD(v91) << 10) >> 11;
                v92 = v81 + 6291456.25;
                rcSrc1.right = (int)(LODWORD(v92) << 10) >> 11;
                *(float *)&p_rcSrc1 = v80 + 6291456.25;
                rcSrc1.bottom = (int)((_DWORD)p_rcSrc1 << 10) >> 11;
                if ( !(unsigned int)((*(_QWORD *)(v60 + 200) - v88) >> 8) )
                {
LABEL_120:
                  v93 = v60 + 13368;
                  v94 = *(unsigned int *)(v60 + 13392);
                  v95 = v94 + 1;
                  if ( (int)v94 + 1 < (unsigned int)v94 )
                  {
                    v96 = -2147024362;
                    MilInstrumentationCheckHR_MaybeFailFast(v95, 0LL, 0, -2147024362, 0xB5u);
                  }
                  else
                  {
                    v96 = 0;
                    if ( v95 <= *(_DWORD *)(v93 + 20) )
                    {
                      *(RECT *)(*(_QWORD *)v93 + 16 * v94) = rcSrc1;
                      *(_DWORD *)(v93 + 24) = v95;
                      goto LABEL_123;
                    }
                    p_rcSrc1 = (__int64)&rcSrc1;
                    v96 = DynArrayImpl<0>::Grow(v93, 16, 1, 0, (__int64)&p_rcSrc1);
                    if ( v96 >= 0 )
                    {
                      *(_OWORD *)(*(_QWORD *)v93 + (unsigned int)(16 * (*(_DWORD *)(v93 + 24))++)) = *(_OWORD *)p_rcSrc1;
LABEL_123:
                      v97 = v173;
                      if ( *(_BYTE *)(v173 + 13433) )
                      {
                        v153 = v7;
                        while ( (*(_BYTE *)(v153 + 94) & 0x40) == 0 )
                        {
                          v153 = *(_QWORD *)(v153 + 80);
                          if ( !v153 )
                          {
                            *(_BYTE *)(v173 + 13433) = 0;
                            break;
                          }
                        }
                      }
LABEL_124:
                      if ( v96 < 0 )
                      {
                        MilInstrumentationCheckHR_MaybeFailFast(v97, 0LL, 0, v96, 0x95Bu);
                        MilInstrumentationCheckHR_MaybeFailFast(v169, 0LL, 0, v96, 0x907u);
                        goto LABEL_65;
                      }
                      goto LABEL_125;
                    }
                    MilInstrumentationCheckHR_MaybeFailFast(v117, 0LL, 0, v96, 0xC0u);
                  }
                  MilInstrumentationCheckHR_MaybeFailFast(v168, 0LL, 0, v96, 0x57Au);
                  goto LABEL_124;
                }
                while ( 1 )
                {
                  v166 = (unsigned __int64)v89 << 8;
                  *(_QWORD *)v178 = v166;
                  if ( *(_QWORD *)(v166 + v88 + 8) != v7
                    && *(_BYTE *)(v88 + v166 + 185)
                    && !*(_BYTE *)(v88 + v166 + 189) )
                  {
                    if ( IntersectRect(&rcDst, &rcSrc1, (const RECT *)(v88 + v166 + 76)) )
                    {
                      v167 = *v87 + *(_QWORD *)v178;
                      if ( !*(_BYTE *)(v167 + 187) )
                      {
                        *(_QWORD *)v178 += *v87;
                        detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
                          v60 + 192,
                          v184,
                          v178);
                        v89 = (unsigned int)v171;
                        goto LABEL_280;
                      }
                      *(_BYTE *)(v167 + 188) = 0;
                    }
                    v89 = (unsigned int)v171;
                  }
                  LODWORD(v171) = ++v89;
LABEL_280:
                  v88 = *v87;
                  if ( v89 >= (unsigned int)((__int64)(*(_QWORD *)(v60 + 200) - *(_QWORD *)(v60 + 192)) >> 8) )
                    goto LABEL_120;
                }
              }
LABEL_125:
              v59 = (gsl::details *)v172;
              goto LABEL_126;
            }
            if ( (v79 & 0xC) == 4 )
            {
LABEL_270:
              CMILMatrix::Translate(
                (CMILMatrix *)v179,
                *(float *)(v60 + 12864),
                *(float *)(v60 + 12868),
                *(float *)(v60 + 12872));
              goto LABEL_104;
            }
            if ( (v79 & 0xC0) == 0x40 )
            {
              v161 = *(float *)(v60 + 12836);
              v162 = *v62;
LABEL_269:
              CMILMatrix::Scale((CMILMatrix *)v179, v162, v161, *(float *)(v60 + 12856));
              goto LABEL_270;
            }
            if ( (*(_BYTE *)(v60 + 12881) & 0xC) == 4 )
            {
              CMILMatrix::Rotate90((CMILMatrix *)v179);
              LODWORD(v162) = *(_DWORD *)(v60 + 12832) ^ _xmm;
              v161 = *(float *)(v60 + 12820);
              goto LABEL_269;
            }
            v163 = Windows::Foundation::Numerics::operator*((__int64)v186, (__int128 *)v179, (_OWORD *)(v60 + 12816));
            v183 = v164;
            v165 = v163[1];
            *(_OWORD *)v179 = *v163;
            v102 = v163[2];
            v180 = v165;
            v103 = v163[3];
          }
          v182 = v103;
          v181 = v102;
          goto LABEL_104;
        }
      }
    }
  }
LABEL_65:
  *((_DWORD *)this + 258) += 2;
  return (unsigned int)v8;
}
