/*
 * XREFs of ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180037760
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x180039420 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x180012488 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18002F61C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180030278 (-PushExact@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800306CC (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180041420 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x1800454C0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180047744 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180055610 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x1800648C0 (-AddMultipleAndSet@-$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackS.c)
 *     ?HrMalloc@WPF@@YAJ_K0PEAPEAX@Z @ 0x180065014 (-HrMalloc@WPF@@YAJ_K0PEAPEAX@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800DB270 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801E2780 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
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
  char v8; // r12
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  int v15; // eax
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  float v19; // xmm8_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  float v25; // xmm1_4
  char v26; // al
  char v27; // dl
  float v28; // xmm1_4
  float v29; // xmm1_4
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v32; // r8
  float v33; // xmm1_4
  float v34; // xmm1_4
  __int64 v35; // rax
  __int64 v36; // r10
  const struct CMILMatrix *v37; // r10
  __int64 v38; // r10
  __int64 v39; // r10
  char v40; // cl
  int v41; // eax
  unsigned int v42; // ecx
  int v43; // esi
  float v44; // xmm2_4
  float v45; // xmm3_4
  float v46; // xmm4_4
  float v47; // xmm5_4
  int v48; // r8d
  int v49; // eax
  __m128 v50; // xmm0
  void **v51; // r9
  __int64 v52; // rcx
  unsigned int v53; // eax
  unsigned int v54; // eax
  unsigned int v55; // ecx
  __int64 v56; // rcx
  int v58; // ebx
  float v59; // xmm0_4
  int v60; // eax
  float v61; // xmm0_4
  int v62; // eax
  float v63; // xmm0_4
  int v64; // eax
  float v65; // xmm0_4
  __int64 v66; // r15
  __int64 v67; // rbx
  char v68; // r14
  __int64 v69; // rcx
  int v70; // eax
  char v71; // r9
  float v72; // xmm2_4
  float v73; // xmm1_4
  float v74; // xmm1_4
  float v75; // xmm1_4
  float v76; // xmm0_4
  float v77; // xmm1_4
  float v78; // xmm1_4
  float v79; // xmm1_4
  float v80; // xmm1_4
  float v81; // xmm1_4
  float v82; // xmm1_4
  float v83; // xmm1_4
  float v84; // xmm1_4
  float v85; // xmm1_4
  float v86; // xmm1_4
  float v87; // xmm1_4
  float v88; // xmm1_4
  float v89; // xmm1_4
  float v90; // xmm1_4
  float v91; // xmm1_4
  float v92; // xmm6_4
  float v93; // xmm4_4
  float v94; // xmm5_4
  float v95; // xmm2_4
  float v96; // xmm3_4
  float v97; // xmm7_4
  float v98; // xmm6_4
  int v99; // xmm5_4
  float v100; // xmm4_4
  __int128 *v101; // rax
  __int128 v102; // xmm1
  unsigned int v103; // r14d
  int v104; // eax
  unsigned int v105; // ecx
  unsigned __int64 v106; // rax
  void *v107; // rbx
  unsigned int v108; // ecx
  int v109; // eax
  unsigned int v110; // ecx
  unsigned int v111; // [rsp+28h] [rbp-E0h]
  __int128 v112; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v113; // [rsp+48h] [rbp-C0h]
  __int128 v114; // [rsp+58h] [rbp-B0h]
  __int128 v115; // [rsp+68h] [rbp-A0h]
  int v116; // [rsp+78h] [rbp-90h]
  char *v117; // [rsp+88h] [rbp-80h]
  char *v118; // [rsp+90h] [rbp-78h]
  __int128 v119; // [rsp+98h] [rbp-70h] BYREF
  __int128 v120; // [rsp+A8h] [rbp-60h]
  __int128 v121; // [rsp+B8h] [rbp-50h]
  __int128 v122; // [rsp+C8h] [rbp-40h]
  int v123; // [rsp+D8h] [rbp-30h]
  void (__fastcall ***v124)(_QWORD, __int64); // [rsp+E8h] [rbp-20h] BYREF
  char v125; // [rsp+F0h] [rbp-18h]
  __int128 v126; // [rsp+F8h] [rbp-10h]
  __int128 v127; // [rsp+108h] [rbp+0h]
  __int128 v128; // [rsp+118h] [rbp+10h]
  __int128 v129; // [rsp+128h] [rbp+20h]
  int v130; // [rsp+138h] [rbp+30h]
  __int64 v131; // [rsp+140h] [rbp+38h]
  __int128 v132; // [rsp+148h] [rbp+40h] BYREF
  __m128 v133; // [rsp+158h] [rbp+50h]
  char v134; // [rsp+168h] [rbp+60h]
  void *lpMem; // [rsp+178h] [rbp+70h] BYREF
  float v136; // [rsp+180h] [rbp+78h]
  float v137; // [rsp+184h] [rbp+7Ch]
  __m128 v138; // [rsp+188h] [rbp+80h] BYREF

  v6 = *a2;
  v8 = 0;
  v117 = a5;
  v118 = a6;
  v124 = 0LL;
  v125 = 0;
  v130 = 0;
  if ( a4 )
  {
    v11 = *(_OWORD *)a4;
    v12 = *(_OWORD *)(a4 + 16);
    v130 = *(_DWORD *)(a4 + 64);
    v126 = v11;
    v13 = *(_OWORD *)(a4 + 32);
    v127 = v12;
    v14 = *(_OWORD *)(a4 + 48);
  }
  else
  {
    v126 = _xmm;
    v13 = _xmm;
    v127 = _xmm;
    v14 = _xmm;
    LOWORD(v130) = 32085;
  }
  v15 = *((_DWORD *)a1 + 6);
  v128 = v13;
  v129 = v14;
  v131 = 0LL;
  v16 = _mm_shuffle_ps(
          (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
          (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
          225);
  v16.m128_f32[0] = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v17 = _mm_shuffle_ps(v16, v16, 198);
  v17.m128_f32[0] = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v18 = _mm_shuffle_ps(v17, v17, 39);
  v18.m128_f32[0] = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v133 = _mm_shuffle_ps(v18, v18, 57);
  v138 = v133;
  if ( v15 && *(_DWORD *)(*a1 + 80LL * (unsigned int)(v15 - 1) + 4) )
    v132 = *(_OWORD *)(136LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1) + a1[104] + 96);
  else
    v132 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v134 = 0;
  v19 = 0.0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6) )
  {
    LODWORD(v44) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v45 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
    v46 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
    v47 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
    v132 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v134 = 1;
    goto LABEL_29;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 40LL))(v6, &lpMem) || (_DWORD)lpMem != 1 )
    goto LABEL_28;
  if ( SBYTE1(v130) >> 6 )
  {
    if ( SBYTE1(v130) >> 6 == 1 )
      goto LABEL_16;
  }
  else
  {
    v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v126 + 2) - 0.0)) & _xmm);
    if ( v20 >= 0.000081380211 )
      goto LABEL_96;
    v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v127 + 2) - 0.0)) & _xmm);
    if ( v21 >= 0.000081380211
      || (v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v129 + 2) - 0.0)) & _xmm), v22 >= 0.000081380211) )
    {
      if ( v20 >= 0.000081380211 )
        goto LABEL_96;
      v80 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v127 + 2) - 0.0)) & _xmm);
      if ( v80 >= 0.000081380211 )
        goto LABEL_96;
      v81 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v128 - 0.0)) & _xmm);
      if ( v81 >= 0.000081380211 )
        goto LABEL_96;
      v82 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v128 + 1) - 0.0)) & _xmm);
      if ( v82 >= 0.000081380211 )
        goto LABEL_96;
      v83 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v128 + 2) - 0.0)) & _xmm);
      if ( v83 >= 0.000081380211 )
      {
        v84 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v128 + 2) - 1.0)) & _xmm);
        if ( v84 >= 0.000081380211 )
          goto LABEL_96;
      }
      v85 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v128 + 3) - 0.0)) & _xmm);
      if ( v85 >= 0.000081380211 )
        goto LABEL_96;
      v86 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v129 + 2) - 0.0)) & _xmm);
      if ( v86 >= 0.000081380211 )
        goto LABEL_96;
    }
    v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v126 + 3)) & _xmm);
    v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v129 + 3)) & _xmm);
    v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v127 + 3)) & _xmm)
                                                                            * 61440.0)
                                                                    + (float)(v23 * 61440.0))
                                                            + v24)
                                                    - 1.0)) & _xmm);
    if ( v25 >= 0.000081380211 )
    {
LABEL_96:
      v27 = -64;
      v26 = 0;
    }
    else
    {
      v26 = 1;
      v27 = 64;
    }
    BYTE1(v130) = v27 | BYTE1(v130) & 0x3F;
    if ( v26 )
    {
LABEL_16:
      v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v126 + 1) - 0.0)) & _xmm);
      if ( v28 < 0.000081380211 )
      {
        v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v127 - 0.0)) & _xmm);
        if ( v29 < 0.000081380211 )
          goto LABEL_18;
      }
    }
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v126 - 0.0)) & _xmm) >= 0.000081380211
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v127 + 1) - 0.0)) & _xmm) >= 0.000081380211 )
  {
    goto LABEL_28;
  }
LABEL_18:
  v30 = *a1;
  v31 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
  v32 = *(_BYTE *)(*a1 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 73);
  if ( v32 >> 6 )
  {
    if ( v32 >> 6 == 1 )
      goto LABEL_20;
  }
  else
  {
    v71 = 0;
    v72 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                               + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                               + 16)
                                                    - 0.0)) & _xmm);
    if ( v72 < 0.000081380211 )
    {
      v73 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 32)
                                                      - 0.0)) & _xmm);
      if ( v73 < 0.000081380211 )
      {
        v75 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                   + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                   + 64)
                                                        - 0.0)) & _xmm);
        if ( v75 < 0.000081380211 )
          goto LABEL_83;
      }
      if ( v72 < 0.000081380211 )
      {
        v74 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                   + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                   + 32)
                                                        - 0.0)) & _xmm);
        if ( v74 < 0.000081380211 )
        {
          v79 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                     + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                     + 40)
                                                          - 0.0)) & _xmm);
          if ( v79 < 0.000081380211 )
          {
            v87 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                       + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                       + 44)
                                                            - 0.0)) & _xmm);
            if ( v87 < 0.000081380211 )
            {
              v88 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                         + 80LL
                                                                         * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                         + 48)
                                                              - 0.0)) & _xmm);
              if ( v88 < 0.000081380211
                || (v89 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                               + 80LL
                                                                               * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                               + 48)
                                                                    - 1.0)) & _xmm),
                    v89 < 0.000081380211) )
              {
                v90 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                           + 80LL
                                                                           * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                           + 52)
                                                                - 0.0)) & _xmm);
                if ( v90 < 0.000081380211 )
                {
                  v91 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                             + 80LL
                                                                             * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                             + 64)
                                                                  - 0.0)) & _xmm);
                  if ( v91 < 0.000081380211 )
                  {
LABEL_83:
                    v76 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v30
                                                                       + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                       + 20)) & _xmm);
                    v77 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v30
                                                                       + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                       + 68)) & _xmm);
                    v78 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v30 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 36)) & _xmm)
                                                                                            * 61440.0)
                                                                                    + (float)(v76 * 61440.0))
                                                                            + v77)
                                                                    - 1.0)) & _xmm);
                    v71 = v78 < 0.000081380211;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(_BYTE *)(v30 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 73) = v32 & 0x3F | ((v71 << 7) - 64);
    if ( v71 )
    {
LABEL_20:
      v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30 + 8 * v31 + 12) - 0.0)) & _xmm);
      if ( v33 < 0.000081380211 )
      {
        v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30 + 8 * v31 + 24) - 0.0)) & _xmm);
        if ( v34 < 0.000081380211 )
        {
LABEL_22:
          v35 = (unsigned int)(*((_DWORD *)a1 + 6) - 1);
          v36 = *a1 + 8;
          v134 = 1;
          v116 = 0;
          v37 = (const struct CMILMatrix *)(80 * v35 + v36);
          if ( &v112 == (__int128 *)v37 )
          {
            v119 = v126;
            v120 = v127;
            v121 = v128;
            v122 = v129;
            v123 = v130;
            CMILMatrix::Multiply((CMILMatrix *)&v119, v37);
            v70 = v123;
            v112 = v119;
            v113 = v120;
            v114 = v121;
            v115 = v122;
          }
          else
          {
            v112 = v126;
            v113 = v127;
            v114 = v128;
            v115 = v129;
            v116 = v130;
            if ( !(unsigned __int8)CMILMatrix::IsIdentity<1>(&v112) )
            {
              CMILMatrix::Ensure3DFlags((CMILMatrix *)v38);
              v40 = *(_BYTE *)(v39 + 64);
              if ( (v40 & 3) != 1 )
              {
                if ( (v40 & 0xC) == 4 )
                {
                  CMILMatrix::Translate(
                    (CMILMatrix *)&v112,
                    *(float *)(v39 + 48),
                    *(float *)(v39 + 52),
                    *(float *)(v39 + 56));
                }
                else if ( (v40 & 0xC0) == 0x40 )
                {
                  v92 = *(float *)(v39 + 48);
                  CMILMatrix::Scale((CMILMatrix *)&v112, *(float *)v39, *(float *)(v39 + 20), *(float *)(v39 + 40));
                  CMILMatrix::Translate((CMILMatrix *)&v112, v92, v94, v93);
                }
                else if ( (*(_BYTE *)(v39 + 65) & 0xC) == 4 )
                {
                  v95 = *(float *)(v39 + 4);
                  v96 = *(float *)(v39 + 40);
                  v97 = *(float *)(v39 + 48);
                  v98 = *(float *)(v39 + 52);
                  CMILMatrix::Rotate90((CMILMatrix *)&v112);
                  CMILMatrix::Scale((CMILMatrix *)&v112, COERCE_FLOAT(v99 ^ _xmm), v95, v96);
                  CMILMatrix::Translate((CMILMatrix *)&v112, v97, v98, v100);
                }
                else
                {
                  v101 = Windows::Foundation::Numerics::operator*((__int64)&v119, &v112, (_OWORD *)v39);
                  v112 = *v101;
                  v113 = v101[1];
                  v114 = v101[2];
                  v102 = v101[3];
                  v116 = 0;
                  v115 = v102;
                }
              }
              goto LABEL_25;
            }
            v112 = *(_OWORD *)v38;
            v113 = *(_OWORD *)(v38 + 16);
            v114 = *(_OWORD *)(v38 + 32);
            v115 = *(_OWORD *)(v38 + 48);
            v70 = *(_DWORD *)(v38 + 64);
          }
          v116 = v70;
LABEL_25:
          v41 = (*(__int64 (__fastcall **)(__int64, void **, __int128 *))(*(_QWORD *)v6 + 32LL))(v6, &lpMem, &v112);
          v43 = v41;
          if ( v41 < 0 )
          {
            v111 = 371;
            goto LABEL_144;
          }
          if ( a3 == 1 )
          {
            v58 = 0x7FFFFFFF;
            v59 = *(float *)&lpMem - 0.5;
            if ( (float)(*(float *)&lpMem - 0.5) < -2147483600.0 )
            {
              v60 = 0x80000000;
            }
            else if ( v59 >= 2147483600.0 )
            {
              v60 = 0x7FFFFFFF;
            }
            else
            {
              v60 = (int)ceilf_0(v59);
            }
            *(float *)&lpMem = (float)v60;
            v61 = *((float *)&lpMem + 1) - 0.5;
            if ( (float)(*((float *)&lpMem + 1) - 0.5) < -2147483600.0 )
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
            *((float *)&lpMem + 1) = (float)v62;
            v63 = v136 - 0.5;
            if ( (float)(v136 - 0.5) < -2147483600.0 )
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
            v136 = (float)v64;
            v65 = v137 - 0.5;
            if ( (float)(v137 - 0.5) < -2147483600.0 )
            {
              v58 = 0x80000000;
            }
            else if ( v65 < 2147483600.0 )
            {
              v58 = (int)ceilf_0(v65);
            }
            v137 = (float)v58;
          }
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v132, &lpMem);
          goto LABEL_28;
        }
      }
    }
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30 + 8 * v31 + 8) - 0.0)) & _xmm) < 0.000081380211
    && (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30 + 8 * v31 + 28) - 0.0)) & _xmm) < 0.000081380211 )
  {
    goto LABEL_22;
  }
LABEL_28:
  LODWORD(v44) = v132;
  v45 = *((float *)&v132 + 1);
  v46 = *((float *)&v132 + 2);
  v47 = *((float *)&v132 + 3);
LABEL_29:
  v48 = *((_DWORD *)a1 + 6);
  if ( v48
    && *(_DWORD *)(*a1 + 80LL * (unsigned int)(v48 - 1) + 4)
    && !TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(a1[104]
                                                                               + 96
                                                                               + 136LL
                                                                               * (unsigned int)(*((_DWORD *)a1 + 214) - 1)))
    || !v134 )
  {
    goto LABEL_67;
  }
  if ( v46 > v44 && v47 > v45 )
    v19 = (float)(v46 - v44) * (float)(v47 - v45);
  if ( v19 < CCommonRegistryData::m_flCpuClipAreaThreshold )
  {
LABEL_67:
    v41 = DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(a1 + 104, &v124);
    v43 = v41;
    if ( v41 >= 0 )
    {
      v66 = *a2;
      v67 = a1[104] + 136LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1);
      v68 = *((_BYTE *)a2 + 8);
      if ( *(_BYTE *)(v67 + 8) && *(_QWORD *)v67 )
        (***(void (__fastcall ****)(_QWORD, __int64))v67)(*(_QWORD *)v67, 1LL);
      *(_QWORD *)v67 = v66;
      *(_BYTE *)(v67 + 8) = v68;
      *a2 = 0LL;
      *((_BYTE *)a2 + 8) = 0;
      v69 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
      ++*(_DWORD *)(*a1 + 8 * v69 + 4);
      goto LABEL_48;
    }
    v111 = 406;
LABEL_144:
    MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, v111);
    goto LABEL_49;
  }
  if ( v48 && *(_DWORD *)(*a1 + 80LL * (unsigned int)(v48 - 1)) )
  {
    v49 = *((_DWORD *)a1 + 556);
    if ( v49 )
      v50 = *(__m128 *)(a1[280] + 16LL * (unsigned int)(v49 - 1));
    else
      v50 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
    lpMem = (void *)__PAIR64__(LODWORD(v45), LODWORD(v44));
    v136 = v46;
    v137 = v47;
    v138 = v50;
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v138, &lpMem);
    v52 = *((unsigned int *)a1 + 557);
    v43 = 0;
    v53 = *((_DWORD *)a1 + 556);
    lpMem = 0LL;
    if ( v53 != (_DWORD)v52 )
      goto LABEL_41;
    if ( (unsigned __int64)(2 * v52) > 0xFFFFFFFF )
    {
      v43 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v52, 0LL, 0, -2147024362, 0x4Cu);
      goto LABEL_44;
    }
    v103 = 2 * v52;
    if ( (unsigned int)(2 * v52) <= 8 )
      v103 = 8;
    v104 = WPF::HrMalloc((WPF *)0x10, v103, (unsigned __int64)&lpMem, v51);
    v43 = v104;
    if ( v104 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v105, 0LL, 0, v104, 0x54u);
    }
    else
    {
      v106 = 16LL * *((unsigned int *)a1 + 556);
      v43 = 0;
      if ( v106 <= 0xFFFFFFFF )
      {
        v107 = lpMem;
        memcpy_0(lpMem, (const void *)a1[280], (unsigned int)v106);
        WPF::ProcessHeapImpl::Free((void *)a1[280]);
        v53 = *((_DWORD *)a1 + 556);
        a1[280] = (__int64)v107;
        *((_DWORD *)a1 + 557) = v103;
LABEL_41:
        *(__m128 *)(a1[280] + 16LL * v53) = v138;
        v54 = *((_DWORD *)a1 + 562);
        v55 = *((_DWORD *)a1 + 556) + 1;
        *((_DWORD *)a1 + 556) = v55;
        if ( v54 <= v55 )
          v54 = v55;
        *((_DWORD *)a1 + 562) = v54;
        goto LABEL_44;
      }
      v43 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0xFFFFFFFF, 0LL, 0, -2147024362, 0x56u);
    }
    if ( lpMem )
      HeapFree(WPF::g_processHeap, 0, lpMem);
LABEL_44:
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v43, 0x31u);
      MilInstrumentationCheckHR_MaybeFailFast(v108, 0LL, 0, v43, 0x11Au);
      goto LABEL_46;
    }
    goto LABEL_45;
  }
  v109 = CD2DClipStack::PushExact(
           (CD2DClipStack *)(a1 + 278),
           (const struct MilRectF *)&v132,
           D2D1_ANTIALIAS_MODE_PER_PRIMITIVE);
  v43 = v109;
  if ( v109 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v110, 0LL, 0, v109, 0x116u);
    goto LABEL_46;
  }
LABEL_45:
  v56 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
  ++*(_DWORD *)(*a1 + 8 * v56);
LABEL_46:
  if ( v43 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v43, 0x18Fu);
    goto LABEL_49;
  }
  v8 = 1;
LABEL_48:
  *v117 = v134;
  *v118 = v8;
LABEL_49:
  if ( v125 && v124 )
    (**v124)(v124, 1LL);
  return (unsigned int)v43;
}
