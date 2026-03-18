/*
 * XREFs of ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180088CE0
 * Callers:
 *     ??$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAVCOcclusionContext@@W4WalkReason@@@Z @ 0x180085370 (--$WalkSubtree@VCOcclusionContext@@@CVisualTreeIterator@@QEAAJPEBVCVisualTree@@PEBVCVisual@@PEAV.c)
 * Callees:
 *     ?GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z @ 0x18000C0AC (-GetLightsCount@CVisual@@QEBAIW4LightBehavior@@@Z.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18001410C (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800156D0 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180028EDC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180029740 (--$Transform2DBoundsHelper@$00@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@AEAV1@@Z @ 0x180029BA0 (--$Transform3DBoundsHelper@$00@CMILMatrix@@AEBAXAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilP.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x180034E80 (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18006CB50 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180082A84 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18008A0F0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18008C180 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x18008C3D0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ??$AppendRects@V?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion@@QEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x1800BAAD8 (--$AppendRects@V-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@CRegion.c)
 *     ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x1800C0BA8 (-Clip@CBaseClipStack@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquenes.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?GetBounds@CVisual@@QEBAAEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCVisualTree@@@Z @ 0x1800ECD80 (-GetBounds@CVisual@@QEBAAEBV-$TMil3DRect@MV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0dffffq @ 0x180170B78 (McTemplateU0dffffq.c)
 *     ?erase@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@$$CBVOverlayPlaneInfo@COverlayContext@@@2@@Z @ 0x1801866C8 (-erase@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18021B50C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall COcclusionContext::PostSubgraph(COcclusionContext *this, const struct CVisualTree *a2, bool *a3)
{
  int v3; // r15d
  float **v4; // rsi
  const struct CVisualTree *v5; // r13
  __int64 v7; // rdi
  signed int v8; // r12d
  _QWORD *v9; // r14
  _BYTE *v10; // rsi
  int v11; // eax
  char v12; // al
  CMILMatrix *v13; // r14
  signed int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  CMILMatrix *v17; // rcx
  __int64 v18; // rcx
  char *v19; // r9
  bool v20; // zf
  __int64 v21; // r8
  int v22; // eax
  int v23; // eax
  char v24; // al
  int v25; // edx
  float *Bounds; // rax
  unsigned int v27; // r9d
  float *v28; // r8
  unsigned int v29; // edx
  unsigned int v30; // ecx
  float v31; // xmm0_4
  unsigned int v32; // eax
  _DWORD *v33; // r8
  float v34; // xmm6_4
  float v35; // xmm7_4
  __int64 v36; // rax
  float v37; // xmm0_4
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r9d
  RECT *v42; // rdx
  __int64 v43; // r14
  void *v44; // rcx
  unsigned __int64 *v45; // r14
  int v46; // edx
  unsigned int j; // esi
  int v48; // edx
  _QWORD *v49; // rcx
  __int64 *v50; // r14
  __int64 v51; // r15
  __int64 v52; // r13
  int v53; // eax
  __int128 *v54; // rsi
  __m128 v55; // xmm0
  __m128 v56; // xmm0
  float v57; // xmm7_4
  float v58; // xmm6_4
  float v59; // xmm8_4
  float v60; // xmm9_4
  float v61; // xmm3_4
  float v62; // xmm2_4
  float v63; // xmm0_4
  char v64; // al
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rax
  __int128 v68; // xmm1
  __int128 v69; // xmm0
  __int128 v70; // xmm1
  __int64 v71; // r8
  __int64 v72; // r9
  __int128 v73; // xmm0
  __int128 v74; // xmm1
  __int128 v75; // xmm0
  __int128 v76; // xmm1
  float *v77; // rax
  char v78; // r8
  float v79; // xmm5_4
  float v80; // xmm3_4
  float v81; // xmm1_4
  float v82; // xmm0_4
  float v83; // xmm7_4
  float v84; // xmm4_4
  float v85; // xmm2_4
  __int64 *v86; // rsi
  __int64 v87; // rcx
  unsigned int v88; // r15d
  float v89; // xmm0_4
  float v90; // xmm0_4
  float v91; // xmm0_4
  _QWORD *v92; // rsi
  __int64 v93; // rax
  __int64 v94; // rcx
  signed int v95; // r15d
  int v96; // ecx
  char v97; // cl
  __int64 v98; // rax
  bool *v99; // rdx
  __int64 k; // rcx
  bool *v101; // rcx
  __int64 v102; // rcx
  int v103; // eax
  int v104; // eax
  int v105; // eax
  __int64 v106; // r8
  LONG *v107; // r10
  char *v108; // r9
  signed int v109; // eax
  float v110; // edx
  float *v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rax
  _BYTE *v114; // rdx
  unsigned int m; // ecx
  float *v116; // rsi
  __int64 v117; // rax
  __int64 v118; // rax
  __int64 i; // rcx
  bool *v120; // rax
  _QWORD *v121; // rax
  _QWORD *v122; // rcx
  signed int v123; // eax
  __int64 v124; // rcx
  int v125; // eax
  int v126; // eax
  __m128 *v127; // rcx
  __m128 v128; // xmm1
  bool v129; // cc
  __int32 v130; // xmm0_4
  float v131; // xmm7_4
  __int32 v132; // xmm2_4
  float v133; // xmm6_4
  __int32 v134; // xmm3_4
  float v135; // xmm5_4
  char *v136; // r9
  __int64 v137; // rax
  _BYTE *v138; // rcx
  __int128 v139; // xmm0
  __int64 v140; // rax
  float v141; // xmm2_4
  float v142; // xmm1_4
  __int128 *v143; // rax
  int v144; // r10d
  __int128 v145; // xmm1
  unsigned __int64 v146; // rax
  unsigned __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // rcx
  float v150; // [rsp+48h] [rbp-C0h]
  __int64 v151; // [rsp+50h] [rbp-B8h] BYREF
  RECT *p_rcSrc1; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v153; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v154; // [rsp+78h] [rbp-90h]
  __int128 v155; // [rsp+88h] [rbp-80h]
  __int128 v156; // [rsp+98h] [rbp-70h]
  int v157; // [rsp+A8h] [rbp-60h]
  char v158[8]; // [rsp+B8h] [rbp-50h] BYREF
  char v159[64]; // [rsp+C0h] [rbp-48h] BYREF
  __m128 v160; // [rsp+100h] [rbp-8h] BYREF
  __m128 v161; // [rsp+110h] [rbp+8h] BYREF
  __m128 v162; // [rsp+120h] [rbp+18h] BYREF
  RECT rcSrc1; // [rsp+130h] [rbp+28h] BYREF
  __m128 v164; // [rsp+140h] [rbp+38h] BYREF
  struct tagRECT rcDst; // [rsp+158h] [rbp+50h] BYREF

  v3 = *((_DWORD *)this + 261);
  v4 = 0LL;
  *a3 = 1;
  v5 = a2;
  v7 = *((_QWORD *)this + 7);
  v8 = 0;
  if ( *((_BYTE *)a2 + 32) )
  {
    v9 = (_QWORD *)(v7 + 328);
  }
  else
  {
    a3 = *(bool **)(v7 + 224);
    if ( *(int *)a3 >= 0 )
      goto LABEL_33;
    v118 = *((unsigned int *)a3 + 1);
    a2 = (const struct CVisualTree *)(a3 + 8);
    for ( i = 0LL; (unsigned int)i < (unsigned int)v118; a2 = (const struct CVisualTree *)((char *)a2 + 1) )
    {
      if ( *(_BYTE *)a2 == 1 )
        break;
      i = (unsigned int)(i + 1);
    }
    if ( (unsigned int)i >= (unsigned int)v118 )
    {
      v120 = 0LL;
    }
    else
    {
      a2 = (const struct CVisualTree *)(v118 + 15);
      v120 = &a3[v118 + 15 + 8 * i - (((_BYTE)v118 + 15) & 7)];
    }
    v121 = *(_QWORD **)v120;
    if ( !v121 )
      goto LABEL_33;
    v122 = (_QWORD *)*v121;
    if ( (_QWORD *)*v121 == v121 )
      goto LABEL_33;
    while ( 1 )
    {
      v9 = v122 - 28;
      if ( (const struct CVisualTree *)v122[4] == v5 )
        break;
      v122 = (_QWORD *)*v122;
      if ( v122 == v121 )
        goto LABEL_33;
    }
  }
  if ( !v9 )
    goto LABEL_33;
  v10 = (_BYTE *)v9[4];
  if ( !v10 )
  {
    v140 = (*(__int64 (__fastcall **)(_QWORD, const struct CVisualTree *, bool *, __int64))(*(_QWORD *)v9[3] + 368LL))(
             v9[3],
             a2,
             a3,
             1LL);
    v9[4] = v140;
    v10 = (_BYTE *)v140;
    if ( !v140 )
      goto LABEL_32;
  }
  (*(void (__fastcall **)(_BYTE *, _QWORD, bool *, __int64))(*(_QWORD *)v10 + 16LL))(
    v10,
    *((unsigned int *)this + 260),
    a3,
    1LL);
  if ( (v10[8] & 1) != 0 )
  {
    v11 = *((_DWORD *)this + 272);
    if ( v11 && *(_DWORD *)(*((_QWORD *)this + 138) + 4LL * (unsigned int)(v11 - 1)) )
    {
      if ( (**(_DWORD **)(v7 + 224) & 0x100000) != 0
        && *((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v7) + 356) )
      {
        COcclusionContext::GetDestinationRect((__int64)this, (__int64)&v162);
        if ( *((_BYTE *)this + 824) )
          v136 = (char *)this + 828;
        else
          v136 = 0LL;
        (*(void (__fastcall **)(_QWORD, __m128 *, _QWORD, char *))(**((_QWORD **)this + 50) + 40LL))(
          *((_QWORD *)this + 50),
          &v162,
          *((unsigned int *)this + 260),
          v136);
        CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((COcclusionContext *)((char *)this + 968));
      }
      v12 = *(_BYTE *)(v7 + 272);
      v13 = (CMILMatrix *)&CMILMatrix::Identity;
      if ( (v12 & 1) != 0 && (*(_BYTE *)(v7 + 94) & 0x10) != 0 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, _QWORD, __m128 *))(*(_QWORD *)v7 + 232LL))(
                v7,
                *((_QWORD *)this + 144),
                &v162);
        v8 = v14;
        if ( v14 < 0 )
        {
          v4 = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x267u, 0LL);
          goto LABEL_33;
        }
        v16 = *((_DWORD *)this + 4);
        if ( v16 )
          v17 = (CMILMatrix *)(*((_QWORD *)this + 4) + 68LL * (unsigned int)(v16 - 1));
        else
          v17 = (CMILMatrix *)&CMILMatrix::Identity;
        CMILMatrix::Transform2DBoundsHelper<0>(v17);
        CBaseClipStack::Clip((char *)this + 128, &v161, &rcSrc1);
        v18 = *((_QWORD *)this + 50);
        v19 = (char *)this + 828;
        v20 = *((_BYTE *)this + 824) == 0;
        v21 = *((unsigned int *)this + 260);
        v160 = v161;
        if ( v20 )
          v19 = 0LL;
        (*(void (__fastcall **)(__int64, __m128 *, __int64, char *))(*(_QWORD *)v18 + 40LL))(v18, &v160, v21, v19);
        v12 = *(_BYTE *)(v7 + 272);
      }
      if ( (v12 & 3) != 0
        || (v22 = *((_DWORD *)this + 280)) != 0 && *(_BYTE *)((unsigned int)(v22 - 1) + *((_QWORD *)this + 142)) )
      {
        v123 = (*(__int64 (__fastcall **)(__int64, _QWORD, RECT *))(*(_QWORD *)v7 + 232LL))(
                 v7,
                 *((_QWORD *)this + 144),
                 &rcSrc1);
        v8 = v123;
        if ( v123 < 0 )
        {
          v4 = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(v124, 0LL, 0, v123, 0x27Du, 0LL);
          goto LABEL_33;
        }
        v125 = *((_DWORD *)this + 4);
        if ( v125 )
          v13 = (CMILMatrix *)(*((_QWORD *)this + 4) + 68LL * (unsigned int)(v125 - 1));
        CMILMatrix::Transform2DBoundsHelper<0>(v13);
        v126 = *((_DWORD *)this + 32);
        if ( v126 )
        {
          v127 = (__m128 *)(*((_QWORD *)this + 18) + 16LL * (unsigned int)(v126 - 1));
          v128 = *v127;
          v129 = v161.m128_f32[0] <= COERCE_FLOAT(*v127);
          v162 = *v127;
          if ( !v129 )
            v128.m128_i32[0] = v161.m128_i32[0];
          v130 = v162.m128_i32[1];
          v131 = v162.m128_f32[1];
          if ( v161.m128_f32[1] > v162.m128_f32[1] )
          {
            v130 = v161.m128_i32[1];
            v131 = v161.m128_f32[1];
          }
          v132 = v162.m128_i32[2];
          v133 = v162.m128_f32[2];
          if ( v162.m128_f32[2] > v161.m128_f32[2] )
          {
            v132 = v161.m128_i32[2];
            v133 = v161.m128_f32[2];
          }
          v134 = v162.m128_i32[3];
          v135 = v162.m128_f32[3];
          if ( v162.m128_f32[3] > v161.m128_f32[3] )
          {
            v134 = v161.m128_i32[3];
            v135 = v161.m128_f32[3];
          }
          if ( v133 <= v128.m128_f32[0] || v135 <= v131 )
          {
            v134 = 0;
            v132 = 0;
            v130 = 0;
            v128.m128_i32[0] = 0;
          }
          v160.m128_u64[0] = __PAIR64__(v130, v128.m128_u32[0]);
          v160.m128_u64[1] = __PAIR64__(v134, v132);
        }
        else
        {
          v160 = v161;
        }
        v162 = v160;
        CRegion::AppendRects<TMilRect_<float,MilRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>>((COcclusionContext *)((char *)this + 968));
      }
    }
    v23 = *((_DWORD *)this + 272);
    if ( v23 )
      *((_DWORD *)this + 272) = v23 - 1;
  }
  if ( !v3 )
  {
    v39 = *((_QWORD *)this + 144);
    *((_QWORD *)this + 102) = v7;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, COcclusionContext *, _BYTE *))(*(_QWORD *)v7 + 240LL))(
           v7,
           v39,
           this,
           v10);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, v8, 0x310u, 0LL);
    }
    else
    {
      v42 = (RECT *)*((_QWORD *)this + 51);
      LODWORD(v43) = *((_DWORD *)this + 108);
      p_rcSrc1 = v42;
      while ( (_DWORD)v43 )
      {
        v106 = *((unsigned int *)this + 260);
        v43 = (unsigned int)(v43 - 1);
        LODWORD(v151) = v106;
        v107 = &v42->left + 5 * v43;
        *((_DWORD *)this + 260) = v106 + 2;
        v164.m128_u64[0] = (unsigned __int64)v107;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        {
          McTemplateU0dffffq(5 * v43, (_DWORD)v42, v106, v41, v107[1], v107[2], v107[3], v107[4]);
          v42 = p_rcSrc1;
          v107 = (LONG *)v164.m128_u64[0];
          v106 = (unsigned int)v151;
        }
        if ( !v107[4] )
        {
          v108 = (char *)this + 828;
          if ( !*((_BYTE *)this + 824) )
            v108 = 0LL;
          v109 = (*(__int64 (__fastcall **)(_QWORD, LONG *, __int64, char *))(**((_QWORD **)this + 50) + 32LL))(
                   *((_QWORD *)this + 50),
                   v107,
                   v106,
                   v108);
          if ( v109 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v109, 0x356u, 0LL);
            break;
          }
          v42 = p_rcSrc1;
        }
      }
      v44 = (void *)*((_QWORD *)this + 51);
      *((_DWORD *)this + 108) = 0;
      if ( v44 != *((void **)this + 52) )
      {
        operator delete(v44);
        *((_QWORD *)this + 51) = *((_QWORD *)this + 52);
        *((_DWORD *)this + 107) = *((_DWORD *)this + 106);
      }
    }
    *((_QWORD *)this + 102) = 0LL;
    if ( v8 < 0 )
    {
      v4 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, v8, 0x28Eu, 0LL);
      goto LABEL_35;
    }
  }
  v24 = v10[8];
  if ( (v24 & 4) != 0 )
  {
    v96 = *((_DWORD *)this + 4);
    if ( v96 )
    {
      *((_DWORD *)this + 4) = v96 - 1;
      v24 = v10[8];
    }
  }
  if ( (v24 & 2) != 0 )
  {
    v104 = *((_DWORD *)this + 264);
    if ( v104 )
      *((_DWORD *)this + 264) = v104 - 1;
    v105 = *((_DWORD *)this + 32);
    if ( v105 )
      *((_DWORD *)this + 32) = v105 - 1;
  }
  if ( (v10[8] & 8) != 0 )
  {
    v103 = *((_DWORD *)this + 280);
    if ( v103 )
      *((_DWORD *)this + 280) = v103 - 1;
  }
  if ( !v3
    && ((unsigned int)((__int64)(*(_QWORD *)(v7 + 288) - *(_QWORD *)(v7 + 280)) >> 4)
     || (unsigned int)((__int64)(*(_QWORD *)(v7 + 312) - *(_QWORD *)(v7 + 304)) >> 4)) )
  {
    v151 = 0x100000000LL;
    v45 = (unsigned __int64 *)&v151;
    do
    {
      v46 = *(_DWORD *)v45;
      for ( j = 0; j < (unsigned int)CVisual::GetLightsCount((_QWORD *)v7, v46); ++j )
      {
        if ( j >= (unsigned int)CVisual::GetLightsCount(v49, v48) )
        {
          v138 = 0LL;
        }
        else
        {
          if ( v46 )
            v137 = *(_QWORD *)(v7 + 304);
          else
            v137 = *(_QWORD *)(v7 + 280);
          v138 = *(_BYTE **)(v137 + 16LL * j);
        }
        if ( v138[162] )
        {
          if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, const struct CVisualTree *, __int64))(*(_QWORD *)v138 + 248LL))(
                 v138,
                 v5,
                 v7) )
          {
            v139 = *(_OWORD *)(*((_QWORD *)this + 20) + 16LL * (unsigned int)--*((_DWORD *)this + 46));
            if ( (_QWORD)v139 )
              (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v139 + 16LL))(v139);
          }
          v46 = *(_DWORD *)v45;
        }
      }
      v45 = (unsigned __int64 *)((char *)v45 + 4);
    }
    while ( v45 != (unsigned __int64 *)&p_rcSrc1 );
  }
  a3 = *(bool **)(v7 + 224);
  if ( (*(_DWORD *)a3 & 0x1000000) != 0
    || (v25 = *(_DWORD *)(*(_QWORD *)(v7 + 216) + 4LL), (v25 & 0x2000000) != 0)
    || (v25 & 0x4000000) != 0 )
  {
    v4 = 0LL;
    goto LABEL_129;
  }
  if ( (*(_DWORD *)a3 & 0x200000) != 0 )
  {
    v98 = *((unsigned int *)a3 + 1);
    v99 = a3 + 8;
    v4 = 0LL;
    for ( k = 0LL; (unsigned int)k < (unsigned int)v98; ++v99 )
    {
      if ( *v99 == 11 )
        break;
      k = (unsigned int)(k + 1);
    }
    v101 = (unsigned int)k >= (unsigned int)v98 ? 0LL : &a3[8 * k - (((_BYTE)v98 + 15) & 7) + 15 + v98];
    v102 = *(_QWORD *)v101;
    if ( v102 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v102 + 48LL))(v102, 56LL) )
        goto LABEL_129;
    }
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48LL))(v7, 91LL) )
  {
LABEL_32:
    v4 = 0LL;
    goto LABEL_33;
  }
  v4 = 0LL;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 216LL))(v7) || *(_QWORD *)(v7 + 560) )
LABEL_129:
    --*((_DWORD *)this + 262);
LABEL_33:
  if ( v3 )
    --*((_DWORD *)this + 261);
LABEL_35:
  if ( !*((_BYTE *)this + 825) || *((_DWORD *)this + 261) || (*(_BYTE *)(v7 + 94) & 8) != 0 || *(char *)(v7 + 88) >= 0 )
    goto LABEL_55;
  Bounds = (float *)CVisual::GetBounds(v7, v5, a3, 1LL);
  v28 = Bounds;
  v29 = 0;
  if ( Bounds[5] <= Bounds[4] )
    v29 = v27;
  v30 = v29 + 1;
  v31 = Bounds[3];
  if ( Bounds[2] > *Bounds )
    v30 = v29;
  v32 = v30 + 1;
  if ( v31 > v28[1] )
    v32 = v30;
  if ( v32 > 1 )
    goto LABEL_55;
  v33 = *(_DWORD **)(v7 + 224);
  v34 = *(float *)&FLOAT_1_0;
  v35 = *(float *)&FLOAT_1_0;
  if ( (*v33 & 0x200000) != 0 )
  {
    v113 = (unsigned int)v33[1];
    v114 = v33 + 2;
    for ( m = 0; m < (unsigned int)v113; ++v114 )
    {
      if ( *v114 == 11 )
        break;
      ++m;
    }
    if ( m < (unsigned int)v113 )
      v4 = (float **)((char *)v33 + 8LL * m - (((_BYTE)v113 + 15) & 7) + v113 + 15);
    v116 = *v4;
    if ( (*(unsigned __int8 (__fastcall **)(float *, __int64))(*(_QWORD *)v116 + 48LL))(v116, 53LL) )
      v35 = v116[18];
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(fminf(1.0, fmaxf(v35, 0.0))) & _xmm) < 0.0000011920929 )
    goto LABEL_55;
  if ( v7 != *((_QWORD *)v5 + 3) || !*((_BYTE *)v5 + 34) )
  {
    v36 = *(_QWORD *)(v7 + 216);
    if ( (*(_DWORD *)(v36 + 4) & 0x8000000) != 0 )
    {
      v110 = *(float *)(v36 + 12);
      v111 = (float *)(v36 + 12);
      if ( (LODWORD(v110) & 0x7F000000) != 0x5000000 )
      {
        do
        {
          v111 = (float *)((char *)v111 + (LODWORD(v110) & 0xFFFFFF) + 4);
          v110 = *v111;
        }
        while ( (*(_DWORD *)v111 & 0x7F000000) != 0x5000000 );
      }
      v37 = v111[1];
    }
    else
    {
      v37 = *(float *)&FLOAT_1_0;
    }
    v34 = fminf(1.0, fmaxf(v37, 0.0));
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v34) & _xmm) < 0.0000011920929
    || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v7 + 264LL))(v7) && !v3 )
  {
    goto LABEL_55;
  }
  v50 = (__int64 *)*((_QWORD *)this + 150);
  v51 = (__int64)&v50[*((_QWORD *)this + 149)];
  v151 = v51;
  if ( v50 == (__int64 *)v51 )
    goto LABEL_55;
  while ( 1 )
  {
    v52 = *v50;
    if ( *(_BYTE *)(*v50 + 13432) )
      break;
LABEL_116:
    if ( ++v50 == (__int64 *)v51 )
      goto LABEL_55;
  }
  v53 = *((_DWORD *)this + 32);
  v54 = (__int128 *)(v52 + 12816);
  if ( v53 )
    v55 = *(__m128 *)(*((_QWORD *)this + 18) + 16LL * (unsigned int)(v53 - 1));
  else
    v55 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v160 = v55;
  CMILMatrix::Transform2DBoundsHelper<0>((CMILMatrix *)(v52 + 12816));
  v56 = *(__m128 *)(v52 + 56);
  v57 = v162.m128_f32[0];
  v58 = v162.m128_f32[1];
  v59 = v162.m128_f32[2];
  v60 = v162.m128_f32[3];
  v160 = v162;
  v164 = v56;
  if ( v56.m128_f32[0] > v162.m128_f32[0] )
  {
    v160.m128_i32[0] = v56.m128_i32[0];
    v57 = v56.m128_f32[0];
  }
  v61 = v162.m128_f32[1];
  if ( v164.m128_f32[1] > v162.m128_f32[1] )
  {
    v160.m128_i32[1] = v164.m128_i32[1];
    v58 = v164.m128_f32[1];
    v61 = v164.m128_f32[1];
  }
  v62 = v162.m128_f32[2];
  if ( v162.m128_f32[2] > v164.m128_f32[2] )
  {
    v160.m128_i32[2] = v164.m128_i32[2];
    v59 = v164.m128_f32[2];
    v62 = v164.m128_f32[2];
  }
  v63 = v162.m128_f32[3];
  if ( v162.m128_f32[3] > v164.m128_f32[3] )
  {
    v160.m128_i32[3] = v164.m128_i32[3];
    v60 = v164.m128_f32[3];
    v63 = v164.m128_f32[3];
  }
  if ( v62 <= v57 || v63 <= v61 )
  {
    v58 = 0.0;
    v57 = 0.0;
    v160 = 0uLL;
    v60 = 0.0;
    v59 = 0.0;
  }
  else if ( v62 > v57 && v63 > v58 )
  {
    v64 = 0;
    goto LABEL_86;
  }
  v64 = 1;
LABEL_86:
  if ( v64 )
    goto LABEL_116;
  v65 = *((_DWORD *)this + 4);
  v157 = 0;
  if ( v65 )
  {
    v66 = (unsigned int)(v65 - 1);
    v67 = *((_QWORD *)this + 4);
    v68 = *(_OWORD *)(68 * v66 + v67 + 16);
    v153 = *(_OWORD *)(68 * v66 + v67);
    v69 = *(_OWORD *)(68 * v66 + v67 + 32);
    v154 = v68;
    v70 = *(_OWORD *)(68 * v66 + v67 + 48);
    LODWORD(v67) = *(_DWORD *)(68 * v66 + v67 + 64);
    v155 = v69;
    v156 = v70;
    v157 = v67;
  }
  else
  {
    v153 = _xmm;
    v154 = _xmm;
    v155 = _xmm;
    v156 = _xmm;
    LOWORD(v157) = 32085;
  }
  if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(&v153) )
  {
    v73 = *v54;
    v74 = *(_OWORD *)(v52 + 12832);
    v157 = *(_DWORD *)(v52 + 12880);
    v153 = v73;
    v75 = *(_OWORD *)(v52 + 12848);
    v154 = v74;
    v76 = *(_OWORD *)(v52 + 12864);
    goto LABEL_91;
  }
  CMILMatrix::Ensure3DFlags((CMILMatrix *)(v52 + 12816));
  v97 = *(_BYTE *)(v52 + 12880);
  if ( (v97 & 3) != 1 )
  {
    if ( (v97 & 0xC) == 4 )
      goto LABEL_239;
    if ( (v97 & 0xC0) == 0x40 )
    {
      v141 = *(float *)(v52 + 12836);
      v142 = *(float *)v54;
      goto LABEL_238;
    }
    if ( (*(_BYTE *)(v52 + 12881) & 0xC) == 4 )
    {
      CMILMatrix::Rotate90((CMILMatrix *)&v153);
      LODWORD(v142) = *(_DWORD *)(v52 + 12832) ^ _xmm;
      v141 = *(float *)(v52 + 12820);
LABEL_238:
      CMILMatrix::Scale((CMILMatrix *)&v153, v142, v141, *(float *)(v52 + 12856));
LABEL_239:
      CMILMatrix::Translate(
        (CMILMatrix *)&v153,
        *(float *)(v52 + 12864),
        *(float *)(v52 + 12868),
        *(float *)(v52 + 12872));
    }
    else
    {
      v143 = Windows::Foundation::Numerics::operator*((__int64)v159, &v153, (_OWORD *)(v52 + 12816));
      v157 = v144;
      v145 = v143[1];
      v153 = *v143;
      v75 = v143[2];
      v154 = v145;
      v76 = v143[3];
LABEL_91:
      v156 = v76;
      v155 = v75;
    }
  }
  LOBYTE(v71) = *(float *)(v7 + 160) == 0.0 && *(float *)(v7 + 156) == 0.0;
  v77 = (float *)CVisual::GetBounds(v7, *((_QWORD *)this + 1), v71, v72);
  if ( v78 )
  {
    CMILMatrix::Transform2DBoundsHelper<1>((__int64)&v153, v77, v161.m128_f32);
    v79 = v161.m128_f32[3];
    v80 = v161.m128_f32[2];
    v81 = v161.m128_f32[1];
    v82 = v161.m128_f32[0];
  }
  else
  {
    CMILMatrix::Transform3DBoundsHelper<1>((__int64)&v153, v77, &v164);
    v82 = v164.m128_f32[0];
    v81 = v164.m128_f32[1];
    v80 = v164.m128_f32[2];
    v79 = v164.m128_f32[3];
    v161 = v164;
  }
  if ( v57 > v82 )
  {
    v161.m128_f32[0] = v57;
    v82 = v57;
  }
  v83 = v81;
  if ( v58 > v81 )
  {
    v161.m128_f32[1] = v58;
    v81 = v58;
    v83 = v58;
  }
  v84 = v80;
  if ( v80 > v59 )
  {
    v80 = v59;
    v84 = v59;
    v161.m128_f32[2] = v59;
  }
  v85 = v79;
  if ( v79 > v60 )
  {
    v79 = v60;
    v85 = v60;
    v161.m128_f32[3] = v60;
  }
  if ( v84 <= v82 || v85 <= v83 )
  {
    v161 = 0uLL;
    goto LABEL_116;
  }
  if ( v84 <= v82 || v85 <= v81 )
    goto LABEL_116;
  v86 = (__int64 *)(v52 + 192);
  v87 = *(_QWORD *)(v52 + 192);
  v88 = 0;
  v89 = v82 + 6291456.25;
  rcSrc1.left = (int)(LODWORD(v89) << 10) >> 11;
  v90 = v81 + 6291456.25;
  rcSrc1.top = (int)(LODWORD(v90) << 10) >> 11;
  v91 = v80 + 6291456.25;
  rcSrc1.right = (int)(LODWORD(v91) << 10) >> 11;
  v150 = v79 + 6291456.25;
  rcSrc1.bottom = (int)(LODWORD(v150) << 10) >> 11;
  if ( (unsigned int)((*(_QWORD *)(v52 + 200) - v87) >> 8) )
  {
    do
    {
      v146 = (unsigned __int64)v88 << 8;
      v164.m128_u64[0] = v146;
      if ( *(_QWORD *)(v87 + v146 + 8) != v7
        && *(_BYTE *)(v87 + v146 + 185)
        && !*(_BYTE *)(v87 + v146 + 189)
        && IntersectRect(&rcDst, &rcSrc1, (const RECT *)(v87 + v146 + 76)) )
      {
        v147 = v164.m128_u64[0] + *v86;
        if ( !*(_BYTE *)(v147 + 187) )
        {
          v164.m128_u64[0] += *v86;
          detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::erase(
            v52 + 192,
            v158,
            &v164);
          goto LABEL_248;
        }
        *(_BYTE *)(v147 + 188) = 0;
      }
      ++v88;
LABEL_248:
      v87 = *v86;
    }
    while ( v88 < (unsigned int)((__int64)(*(_QWORD *)(v52 + 200) - *(_QWORD *)(v52 + 192)) >> 8) );
  }
  v92 = (_QWORD *)(v52 + 13384);
  v93 = *(unsigned int *)(v52 + 13408);
  v94 = (unsigned int)(v93 + 1);
  if ( (unsigned int)v94 < (unsigned int)v93 )
  {
    v95 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0, 0x80070216, 0xB8u, 0LL);
LABEL_253:
    MilInstrumentationCheckHR_MaybeFailFast(v148, 0LL, 0, v95, 0x57Eu, 0LL);
    goto LABEL_114;
  }
  v95 = 0;
  if ( (unsigned int)v94 > *(_DWORD *)(v52 + 13404) )
  {
    p_rcSrc1 = &rcSrc1;
    v95 = DynArrayImpl<0>::Grow(v52 + 13384, 0x10u, 1, 0, (unsigned __int64 *)&p_rcSrc1);
    if ( v95 >= 0 )
    {
      v94 = *v92 + (unsigned int)(16 * *(_DWORD *)(v52 + 13408));
      *(RECT *)v94 = *p_rcSrc1;
      ++*(_DWORD *)(v52 + 13408);
      goto LABEL_113;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, v95, 0xC3u, 0LL);
    goto LABEL_253;
  }
  *(RECT *)(*v92 + 16 * v93) = rcSrc1;
  *(_DWORD *)(v52 + 13408) = v94;
LABEL_113:
  if ( *(_BYTE *)(v52 + 13448) )
  {
    v117 = v7;
    while ( (*(_BYTE *)(v117 + 94) & 0x20) == 0 )
    {
      v117 = *(_QWORD *)(v117 + 80);
      if ( !v117 )
      {
        *(_BYTE *)(v52 + 13448) = 0;
        break;
      }
    }
  }
LABEL_114:
  if ( v95 >= 0 )
  {
    v51 = v151;
    goto LABEL_116;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v94, 0LL, 0, v95, 0x90Cu, 0LL);
  MilInstrumentationCheckHR_MaybeFailFast(v149, 0LL, 0, v95, 0x8B8u, 0LL);
LABEL_55:
  *((_DWORD *)this + 260) += 2;
  return (unsigned int)v8;
}
