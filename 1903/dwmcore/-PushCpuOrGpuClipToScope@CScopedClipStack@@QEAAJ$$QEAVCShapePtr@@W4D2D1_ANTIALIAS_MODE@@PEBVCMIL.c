/*
 * XREFs of ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180057AD0
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180059670 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x180015690 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180060B60 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x1800644B0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18006FC34 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180071C38 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180071D5C (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x18007F954 (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180085BC4 (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A1C50 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x1800BE83C (-AddMultipleAndSet@-$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackS.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x180188BD0 (-PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18021CBFC (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

__int64 __fastcall CScopedClipStack::PushCpuOrGpuClipToScope(
        __int64 *a1,
        __int64 *a2,
        int a3,
        __int64 a4,
        char *a5,
        char *a6)
{
  __int64 v6; // rbx
  char v9; // r12
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __int64 v19; // r9
  float v20; // xmm8_4
  float v21; // xmm2_4
  float v22; // xmm1_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm1_4
  char v27; // al
  char v28; // dl
  float v29; // xmm1_4
  float v30; // xmm1_4
  __int64 v31; // rdx
  __int64 v32; // rcx
  char v33; // r8
  float v34; // xmm1_4
  float v35; // xmm1_4
  __int64 v36; // rax
  __int64 v37; // r10
  const struct CMILMatrix *v38; // r10
  __int64 v39; // r10
  __int64 v40; // r10
  char v41; // cl
  int v42; // eax
  unsigned int v43; // ecx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // ebx
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm4_4
  float v50; // xmm5_4
  __int64 v51; // r8
  int v52; // eax
  __m128 v53; // xmm0
  __int64 v54; // rcx
  unsigned int v55; // eax
  unsigned int v56; // eax
  unsigned int v57; // ecx
  __int64 v58; // rcx
  int v60; // ebx
  float v61; // xmm0_4
  int v62; // eax
  float v63; // xmm0_4
  int v64; // eax
  float v65; // xmm0_4
  int v66; // eax
  float v67; // xmm0_4
  int v68; // eax
  unsigned int v69; // ecx
  __int64 v70; // r15
  __int64 v71; // rsi
  char v72; // r14
  __int64 v73; // rcx
  int v74; // eax
  unsigned int v75; // esi
  int v76; // eax
  unsigned int v77; // ecx
  unsigned __int64 v78; // rax
  void *v79; // rbx
  float v80; // xmm1_4
  float v81; // xmm1_4
  float v82; // xmm0_4
  float v83; // xmm1_4
  float v84; // xmm1_4
  char v85; // al
  float v86; // xmm1_4
  float v87; // xmm1_4
  float v88; // xmm1_4
  float v89; // xmm1_4
  float v90; // xmm1_4
  float v91; // xmm1_4
  float v92; // xmm1_4
  float v93; // xmm2_4
  float v94; // xmm1_4
  float v95; // xmm1_4
  float v96; // xmm1_4
  float v97; // xmm1_4
  float v98; // xmm1_4
  float v99; // xmm1_4
  float v100; // xmm1_4
  float v101; // xmm6_4
  float v102; // xmm4_4
  float v103; // xmm5_4
  float v104; // xmm2_4
  float v105; // xmm3_4
  float v106; // xmm7_4
  float v107; // xmm6_4
  int v108; // xmm5_4
  float v109; // xmm4_4
  __int128 *v110; // rax
  __int128 v111; // xmm1
  void *v112; // rsi
  HANDLE ProcessHeap; // rax
  unsigned int v114; // ecx
  int v115; // eax
  unsigned int v116; // ecx
  void *v117[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v118; // [rsp+48h] [rbp-C0h]
  __int128 v119; // [rsp+58h] [rbp-B0h]
  __int128 v120; // [rsp+68h] [rbp-A0h]
  int v121; // [rsp+78h] [rbp-90h]
  char *v122; // [rsp+88h] [rbp-80h]
  char *v123; // [rsp+90h] [rbp-78h]
  __int128 v124; // [rsp+98h] [rbp-70h] BYREF
  __int128 v125; // [rsp+A8h] [rbp-60h]
  __int128 v126; // [rsp+B8h] [rbp-50h]
  __int128 v127; // [rsp+C8h] [rbp-40h]
  int v128; // [rsp+D8h] [rbp-30h]
  void (__fastcall ***v129)(_QWORD, __int64); // [rsp+E8h] [rbp-20h] BYREF
  char v130; // [rsp+F0h] [rbp-18h]
  __int128 v131; // [rsp+F8h] [rbp-10h]
  __int128 v132; // [rsp+108h] [rbp+0h]
  __int128 v133; // [rsp+118h] [rbp+10h]
  __int128 v134; // [rsp+128h] [rbp+20h]
  int v135; // [rsp+138h] [rbp+30h]
  __int64 v136; // [rsp+140h] [rbp+38h]
  __int128 v137; // [rsp+148h] [rbp+40h] BYREF
  __m128 v138; // [rsp+158h] [rbp+50h]
  char v139; // [rsp+168h] [rbp+60h]
  void *lpMem; // [rsp+178h] [rbp+70h] BYREF
  float v141; // [rsp+180h] [rbp+78h]
  float v142; // [rsp+184h] [rbp+7Ch]
  __m128 v143; // [rsp+188h] [rbp+80h] BYREF

  v6 = *a2;
  v9 = 0;
  v122 = a5;
  v123 = a6;
  v129 = 0LL;
  v130 = 0;
  v135 = 0;
  if ( a4 )
  {
    v11 = *(_OWORD *)a4;
    v12 = *(_OWORD *)(a4 + 16);
    v135 = *(_DWORD *)(a4 + 64);
    v131 = v11;
    v13 = *(_OWORD *)(a4 + 32);
    v132 = v12;
    v14 = *(_OWORD *)(a4 + 48);
  }
  else
  {
    v131 = _xmm;
    v13 = _xmm;
    v132 = _xmm;
    v14 = _xmm;
    LOWORD(v135) = 32085;
  }
  v15 = *((_DWORD *)a1 + 6);
  v133 = v13;
  v134 = v14;
  v136 = 0LL;
  v16 = _mm_shuffle_ps(
          (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
          (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
          225);
  v16.m128_f32[0] = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v17 = _mm_shuffle_ps(v16, v16, 198);
  v17.m128_f32[0] = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v18 = _mm_shuffle_ps(v17, v17, 39);
  v18.m128_f32[0] = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v138 = _mm_shuffle_ps(v18, v18, 57);
  v143 = v138;
  if ( v15 && *(_DWORD *)(*a1 + 80LL * (unsigned int)(v15 - 1) + 4) )
    v137 = *(_OWORD *)(136LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1) + a1[104] + 96);
  else
    v137 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v139 = 0;
  v20 = 0.0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6) )
  {
    LODWORD(v47) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v48 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
    v49 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
    v50 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
    v137 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v139 = 1;
    goto LABEL_29;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 40LL))(v6, &lpMem) || (_DWORD)lpMem != 1 )
    goto LABEL_28;
  if ( SBYTE1(v135) >> 6 )
  {
    if ( SBYTE1(v135) >> 6 == 1 )
      goto LABEL_16;
  }
  else
  {
    v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v131 + 2) - 0.0)) & _xmm);
    if ( v21 >= 0.000081380211 )
      goto LABEL_98;
    v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v132 + 2) - 0.0)) & _xmm);
    if ( v22 >= 0.000081380211
      || (v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v134 + 2) - 0.0)) & _xmm), v23 >= 0.000081380211) )
    {
      if ( v21 >= 0.000081380211 )
        goto LABEL_98;
      v86 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v132 + 2) - 0.0)) & _xmm);
      if ( v86 >= 0.000081380211 )
        goto LABEL_98;
      v87 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v133 - 0.0)) & _xmm);
      if ( v87 >= 0.000081380211 )
        goto LABEL_98;
      v88 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v133 + 1) - 0.0)) & _xmm);
      if ( v88 >= 0.000081380211 )
        goto LABEL_98;
      v89 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v133 + 2) - 0.0)) & _xmm);
      if ( v89 >= 0.000081380211 )
      {
        v90 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v133 + 2) - 1.0)) & _xmm);
        if ( v90 >= 0.000081380211 )
          goto LABEL_98;
      }
      v91 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v133 + 3) - 0.0)) & _xmm);
      if ( v91 >= 0.000081380211 )
        goto LABEL_98;
      v92 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v134 + 2) - 0.0)) & _xmm);
      if ( v92 >= 0.000081380211 )
        goto LABEL_98;
    }
    v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v131 + 3)) & _xmm);
    v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v134 + 3)) & _xmm);
    v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v132 + 3)) & _xmm)
                                                                            * 61440.0)
                                                                    + (float)(v24 * 61440.0))
                                                            + v25)
                                                    - 1.0)) & _xmm);
    if ( v26 >= 0.000081380211 )
    {
LABEL_98:
      v28 = -64;
      v27 = 0;
    }
    else
    {
      v27 = 1;
      v28 = 64;
    }
    BYTE1(v135) = v28 | BYTE1(v135) & 0x3F;
    if ( v27 )
    {
LABEL_16:
      v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v131 + 1) - 0.0)) & _xmm);
      if ( v29 < 0.000081380211 )
      {
        v30 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v132 - 0.0)) & _xmm);
        if ( v30 < 0.000081380211 )
          goto LABEL_18;
      }
    }
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v131 - 0.0)) & _xmm) >= 0.000081380211
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v132 + 1) - 0.0)) & _xmm) >= 0.000081380211 )
  {
    goto LABEL_28;
  }
LABEL_18:
  v31 = *a1;
  v32 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
  v33 = *(_BYTE *)(*a1 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 73);
  if ( v33 >> 6 )
  {
    if ( v33 >> 6 == 1 )
      goto LABEL_20;
  }
  else
  {
    v93 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                               + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                               + 16)
                                                    - 0.0)) & _xmm);
    if ( v93 >= 0.000081380211 )
      goto LABEL_87;
    v80 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                               + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                               + 32)
                                                    - 0.0)) & _xmm);
    if ( v80 >= 0.000081380211
      || (v81 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                     + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                     + 64)
                                                          - 0.0)) & _xmm),
          v81 >= 0.000081380211) )
    {
      if ( v93 >= 0.000081380211 )
        goto LABEL_87;
      v94 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 32)
                                                      - 0.0)) & _xmm);
      if ( v94 >= 0.000081380211 )
        goto LABEL_87;
      v95 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 40)
                                                      - 0.0)) & _xmm);
      if ( v95 >= 0.000081380211 )
        goto LABEL_87;
      v96 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 44)
                                                      - 0.0)) & _xmm);
      if ( v96 >= 0.000081380211 )
        goto LABEL_87;
      v97 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 48)
                                                      - 0.0)) & _xmm);
      if ( v97 >= 0.000081380211 )
      {
        v98 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                   + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                   + 48)
                                                        - 1.0)) & _xmm);
        if ( v98 >= 0.000081380211 )
          goto LABEL_87;
      }
      v99 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 52)
                                                      - 0.0)) & _xmm);
      if ( v99 >= 0.000081380211 )
        goto LABEL_87;
      v100 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31
                                                                  + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                  + 64)
                                                       - 0.0)) & _xmm);
      if ( v100 >= 0.000081380211 )
        goto LABEL_87;
    }
    v82 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v31 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 20)) & _xmm);
    v83 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v31 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 68)) & _xmm);
    v84 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v31 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 36)) & _xmm)
                                                                            * 61440.0)
                                                                    + (float)(v82 * 61440.0))
                                                            + v83)
                                                    - 1.0)) & _xmm);
    if ( v84 >= 0.000081380211 )
    {
LABEL_87:
      LOBYTE(v19) = -64;
      v85 = 0;
    }
    else
    {
      v85 = 1;
      LOBYTE(v19) = 64;
    }
    *(_BYTE *)(v31 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 73) = v19 | v33 & 0x3F;
    if ( v85 )
    {
LABEL_20:
      v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31 + 8 * v32 + 12) - 0.0)) & _xmm);
      if ( v34 < 0.000081380211 )
      {
        v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31 + 8 * v32 + 24) - 0.0)) & _xmm);
        if ( v35 < 0.000081380211 )
        {
LABEL_22:
          v36 = (unsigned int)(*((_DWORD *)a1 + 6) - 1);
          v37 = *a1 + 8;
          v139 = 1;
          v121 = 0;
          v38 = (const struct CMILMatrix *)(80 * v36 + v37);
          if ( v117 == (void **)v38 )
          {
            v124 = v131;
            v125 = v132;
            v126 = v133;
            v127 = v134;
            v128 = v135;
            CMILMatrix::Multiply((CMILMatrix *)&v124, v38);
            v74 = v128;
            *(_OWORD *)v117 = v124;
            v118 = v125;
            v119 = v126;
            v120 = v127;
          }
          else
          {
            *(_OWORD *)v117 = v131;
            v118 = v132;
            v119 = v133;
            v120 = v134;
            v121 = v135;
            if ( !(unsigned __int8)CMILMatrix::IsIdentity<1>(v117) )
            {
              CMILMatrix::Ensure3DFlags((CMILMatrix *)v39);
              v41 = *(_BYTE *)(v40 + 64);
              if ( (v41 & 3) != 1 )
              {
                if ( (v41 & 0xC) == 4 )
                {
                  CMILMatrix::Translate(
                    (CMILMatrix *)v117,
                    *(float *)(v40 + 48),
                    *(float *)(v40 + 52),
                    *(float *)(v40 + 56));
                }
                else if ( (v41 & 0xC0) == 0x40 )
                {
                  v101 = *(float *)(v40 + 48);
                  CMILMatrix::Scale((CMILMatrix *)v117, *(float *)v40, *(float *)(v40 + 20), *(float *)(v40 + 40));
                  CMILMatrix::Translate((CMILMatrix *)v117, v101, v103, v102);
                }
                else if ( (*(_BYTE *)(v40 + 65) & 0xC) == 4 )
                {
                  v104 = *(float *)(v40 + 4);
                  v105 = *(float *)(v40 + 40);
                  v106 = *(float *)(v40 + 48);
                  v107 = *(float *)(v40 + 52);
                  CMILMatrix::Rotate90((CMILMatrix *)v117);
                  CMILMatrix::Scale((CMILMatrix *)v117, COERCE_FLOAT(v108 ^ _xmm), v104, v105);
                  CMILMatrix::Translate((CMILMatrix *)v117, v106, v107, v109);
                }
                else
                {
                  v110 = Windows::Foundation::Numerics::operator*((__int64)&v124, (__int128 *)v117, (_OWORD *)v40);
                  *(_OWORD *)v117 = *v110;
                  v118 = v110[1];
                  v119 = v110[2];
                  v111 = v110[3];
                  v121 = 0;
                  v120 = v111;
                }
              }
              goto LABEL_25;
            }
            *(_OWORD *)v117 = *(_OWORD *)v39;
            v118 = *(_OWORD *)(v39 + 16);
            v119 = *(_OWORD *)(v39 + 32);
            v120 = *(_OWORD *)(v39 + 48);
            v74 = *(_DWORD *)(v39 + 64);
          }
          v121 = v74;
LABEL_25:
          v42 = (*(__int64 (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v6 + 32LL))(v6, &lpMem, v117);
          v46 = v42;
          if ( v42 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v43, 0LL, 0, v42, 0x173u, 0LL);
            goto LABEL_49;
          }
          if ( a3 == 1 )
          {
            v60 = 0x7FFFFFFF;
            v61 = *(float *)&lpMem - 0.5;
            if ( (float)(*(float *)&lpMem - 0.5) < -2147483600.0 )
            {
              v62 = 0x80000000;
            }
            else if ( v61 >= 2147483600.0 )
            {
              v62 = 0x7FFFFFFF;
            }
            else
            {
              v62 = (int)ceilf_0(v61);
            }
            *(float *)&lpMem = (float)v62;
            v63 = *((float *)&lpMem + 1) - 0.5;
            if ( (float)(*((float *)&lpMem + 1) - 0.5) < -2147483600.0 )
            {
              v64 = 0x80000000;
            }
            else if ( v63 >= 2147483600.0 )
            {
              v64 = 0x7FFFFFFF;
            }
            else
            {
              v64 = (int)ceilf_0(v63);
            }
            *((float *)&lpMem + 1) = (float)v64;
            v65 = v141 - 0.5;
            if ( (float)(v141 - 0.5) < -2147483600.0 )
            {
              v66 = 0x80000000;
            }
            else if ( v65 >= 2147483600.0 )
            {
              v66 = 0x7FFFFFFF;
            }
            else
            {
              v66 = (int)ceilf_0(v65);
            }
            v141 = (float)v66;
            v67 = v142 - 0.5;
            if ( (float)(v142 - 0.5) < -2147483600.0 )
            {
              v60 = 0x80000000;
            }
            else if ( v67 < 2147483600.0 )
            {
              v60 = (int)ceilf_0(v67);
            }
            v142 = (float)v60;
          }
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v137, &lpMem, v44, v45);
          goto LABEL_28;
        }
      }
    }
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31 + 8 * v32 + 8) - 0.0)) & _xmm) < 0.000081380211
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v31 + 8 * v32 + 28) - 0.0)) & _xmm) < 0.000081380211 )
  {
    goto LABEL_22;
  }
LABEL_28:
  LODWORD(v47) = v137;
  v48 = *((float *)&v137 + 1);
  v49 = *((float *)&v137 + 2);
  v50 = *((float *)&v137 + 3);
LABEL_29:
  v51 = *((unsigned int *)a1 + 6);
  if ( (!(_DWORD)v51
     || !*(_DWORD *)(*a1 + 80LL * (unsigned int)(v51 - 1) + 4)
     || (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite(a1[104] + 96 + 136LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1)))
    && v139 )
  {
    if ( v49 > v47 && v50 > v48 )
      v20 = (float)(v49 - v47) * (float)(v50 - v48);
    if ( v20 >= CCommonRegistryData::m_flCpuClipAreaThreshold )
    {
      if ( !(_DWORD)v51 || !*(_DWORD *)(*a1 + 80LL * (unsigned int)(v51 - 1)) )
      {
        v143.m128_u64[0] = __PAIR64__(LODWORD(v48), LODWORD(v47));
        v143.m128_u64[1] = __PAIR64__(LODWORD(v50), LODWORD(v49));
        v115 = CBaseClipStack::PushExact((CBaseClipStack *)(a1 + 278), (const struct MilRectF *)&v143);
        v46 = v115;
        if ( v115 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v116, 0LL, 0, v115, 0x116u, 0LL);
          goto LABEL_46;
        }
        goto LABEL_45;
      }
      v52 = *((_DWORD *)a1 + 556);
      if ( v52 )
        v53 = *(__m128 *)(a1[280] + 16LL * (unsigned int)(v52 - 1));
      else
        v53 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      lpMem = (void *)__PAIR64__(LODWORD(v48), LODWORD(v47));
      v141 = v49;
      v142 = v50;
      v143 = v53;
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v143, &lpMem, v51, v19);
      v54 = *((unsigned int *)a1 + 557);
      v55 = *((_DWORD *)a1 + 556);
      lpMem = 0LL;
      if ( v55 != (_DWORD)v54 )
        goto LABEL_41;
      v75 = 2 * v54;
      if ( (unsigned __int64)(2 * v54) > 0xFFFFFFFF )
      {
        v46 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, -2147024362, 0x4Cu, 0LL);
        goto LABEL_136;
      }
      if ( v75 <= 8 )
        v75 = 8;
      v76 = HrMalloc(0x10uLL, v75, &lpMem);
      v46 = v76;
      if ( v76 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, v76, 0x53u, 0LL);
      }
      else
      {
        v78 = 16LL * *((unsigned int *)a1 + 556);
        if ( v78 <= 0xFFFFFFFF )
        {
          v79 = lpMem;
          memcpy_0(lpMem, (const void *)a1[280], (unsigned int)v78);
          operator delete((void *)a1[280]);
          v55 = *((_DWORD *)a1 + 556);
          a1[280] = (__int64)v79;
          *((_DWORD *)a1 + 557) = v75;
LABEL_41:
          v46 = 0;
          *(__m128 *)(a1[280] + 16LL * v55) = v143;
          v56 = *((_DWORD *)a1 + 562);
          v57 = *((_DWORD *)a1 + 556) + 1;
          *((_DWORD *)a1 + 556) = v57;
          if ( v56 <= v57 )
            v56 = v57;
          *((_DWORD *)a1 + 562) = v56;
          goto LABEL_44;
        }
        v46 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v77, 0LL, 0, -2147024362, 0x55u, 0LL);
      }
      v112 = lpMem;
      if ( lpMem )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v112);
      }
LABEL_44:
      if ( v46 >= 0 )
      {
LABEL_45:
        v58 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
        ++*(_DWORD *)(*a1 + 8 * v58);
LABEL_46:
        if ( v46 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v46, 0x18Fu, 0LL);
          goto LABEL_49;
        }
        v9 = 1;
        goto LABEL_48;
      }
LABEL_136:
      MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v46, 0x31u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0, v46, 0x11Au, 0LL);
      goto LABEL_46;
    }
  }
  v68 = DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(a1 + 104, &v129);
  v46 = v68;
  if ( v68 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, v68, 0x196u, 0LL);
    goto LABEL_49;
  }
  v70 = *a2;
  v71 = a1[104] + 136LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1);
  v72 = *((_BYTE *)a2 + 8);
  if ( *(_BYTE *)(v71 + 8) && *(_QWORD *)v71 )
    (***(void (__fastcall ****)(_QWORD, __int64))v71)(*(_QWORD *)v71, 1LL);
  *(_QWORD *)v71 = v70;
  *(_BYTE *)(v71 + 8) = v72;
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  v73 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
  ++*(_DWORD *)(*a1 + 8 * v73 + 4);
LABEL_48:
  *v122 = v139;
  *v123 = v9;
LABEL_49:
  if ( v130 && v129 )
    (**v129)(v129, 1LL);
  return (unsigned int)v46;
}
