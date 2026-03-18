/*
 * XREFs of ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x18008D2C0
 * Callers:
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800616E0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJ$$QEAVCShapePtr@@PEBVCMILMatrix@@PEBV-.c)
 * Callees:
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18001410C (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x180028EDC (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsInfinite@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18007DF3C (-IsInfinite@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x18007F9B8 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180082A84 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18008A0F0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18008C180 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?IntersectUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800AEA10 (-IntersectUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800AF4EC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackState@CScopedClipStack@@I@Z @ 0x1800C0104 (-AddMultipleAndSet@-$DynArray@UCpuClipStackState@CScopedClipStack@@$0A@@@QEAAJPEFBUCpuClipStackS.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800F0187 (ceilf_0.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x1801874F0 (-PushExact@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18021B50C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
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
  signed int v41; // eax
  __int64 v42; // rcx
  signed int v43; // ebx
  float v44; // xmm2_4
  float v45; // xmm3_4
  float v46; // xmm4_4
  float v47; // xmm5_4
  int v48; // r8d
  int v49; // eax
  __m128 v50; // xmm0
  __int64 v51; // rcx
  unsigned int v52; // eax
  unsigned int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v57; // ebx
  float v58; // xmm0_4
  int v59; // eax
  float v60; // xmm0_4
  int v61; // eax
  float v62; // xmm0_4
  int v63; // eax
  float v64; // xmm0_4
  signed int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // r15
  __int64 v68; // rsi
  char v69; // r14
  __int64 v70; // rcx
  int v71; // eax
  unsigned int v72; // esi
  signed int v73; // eax
  __int64 v74; // rcx
  unsigned __int64 v75; // rax
  void *v76; // rbx
  float v77; // xmm1_4
  float v78; // xmm1_4
  float v79; // xmm0_4
  float v80; // xmm1_4
  float v81; // xmm1_4
  char v82; // al
  char v83; // r9
  float v84; // xmm1_4
  float v85; // xmm1_4
  float v86; // xmm1_4
  float v87; // xmm1_4
  float v88; // xmm1_4
  float v89; // xmm1_4
  float v90; // xmm1_4
  float v91; // xmm2_4
  float v92; // xmm1_4
  float v93; // xmm1_4
  float v94; // xmm1_4
  float v95; // xmm1_4
  float v96; // xmm1_4
  float v97; // xmm1_4
  float v98; // xmm1_4
  float v99; // xmm6_4
  float v100; // xmm4_4
  float v101; // xmm5_4
  float v102; // xmm2_4
  float v103; // xmm3_4
  float v104; // xmm7_4
  float v105; // xmm6_4
  int v106; // xmm5_4
  float v107; // xmm4_4
  __int128 *v108; // rax
  __int128 v109; // xmm1
  void *v110; // rsi
  HANDLE ProcessHeap; // rax
  __int64 v112; // rcx
  signed int v113; // eax
  __int64 v114; // rcx
  void *v115[2]; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v116; // [rsp+48h] [rbp-C0h]
  __int128 v117; // [rsp+58h] [rbp-B0h]
  __int128 v118; // [rsp+68h] [rbp-A0h]
  int v119; // [rsp+78h] [rbp-90h]
  char *v120; // [rsp+88h] [rbp-80h]
  char *v121; // [rsp+90h] [rbp-78h]
  __int128 v122; // [rsp+98h] [rbp-70h] BYREF
  __int128 v123; // [rsp+A8h] [rbp-60h]
  __int128 v124; // [rsp+B8h] [rbp-50h]
  __int128 v125; // [rsp+C8h] [rbp-40h]
  int v126; // [rsp+D8h] [rbp-30h]
  void (__fastcall ***v127)(_QWORD, __int64); // [rsp+E8h] [rbp-20h] BYREF
  char v128; // [rsp+F0h] [rbp-18h]
  __int128 v129; // [rsp+F8h] [rbp-10h]
  __int128 v130; // [rsp+108h] [rbp+0h]
  __int128 v131; // [rsp+118h] [rbp+10h]
  __int128 v132; // [rsp+128h] [rbp+20h]
  int v133; // [rsp+138h] [rbp+30h]
  __int64 v134; // [rsp+140h] [rbp+38h]
  __int128 v135; // [rsp+148h] [rbp+40h] BYREF
  __m128 v136; // [rsp+158h] [rbp+50h]
  char v137; // [rsp+168h] [rbp+60h]
  void *lpMem; // [rsp+178h] [rbp+70h] BYREF
  float v139; // [rsp+180h] [rbp+78h]
  float v140; // [rsp+184h] [rbp+7Ch]
  __m128 v141; // [rsp+188h] [rbp+80h] BYREF

  v6 = *a2;
  v9 = 0;
  v120 = a5;
  v121 = a6;
  v127 = 0LL;
  v128 = 0;
  v133 = 0;
  if ( a4 )
  {
    v11 = *(_OWORD *)a4;
    v12 = *(_OWORD *)(a4 + 16);
    v133 = *(_DWORD *)(a4 + 64);
    v129 = v11;
    v13 = *(_OWORD *)(a4 + 32);
    v130 = v12;
    v14 = *(_OWORD *)(a4 + 48);
  }
  else
  {
    v129 = _xmm;
    v13 = _xmm;
    v130 = _xmm;
    v14 = _xmm;
    LOWORD(v133) = 32085;
  }
  v15 = *((_DWORD *)a1 + 6);
  v131 = v13;
  v132 = v14;
  v134 = 0LL;
  v16 = _mm_shuffle_ps(
          (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
          (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite,
          225);
  v16.m128_f32[0] = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 1);
  v17 = _mm_shuffle_ps(v16, v16, 198);
  v17.m128_f32[0] = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 2);
  v18 = _mm_shuffle_ps(v17, v17, 39);
  v18.m128_f32[0] = *(&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite + 3);
  v136 = _mm_shuffle_ps(v18, v18, 57);
  v141 = v136;
  if ( v15 && *(_DWORD *)(*a1 + 80LL * (unsigned int)(v15 - 1) + 4) )
    v135 = *(_OWORD *)(136LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1) + a1[104] + 96);
  else
    v135 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  v137 = 0;
  v19 = 0.0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6) )
  {
    LODWORD(v44) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v45 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 1);
    v46 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 2);
    v47 = *((float *)&TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty + 3);
    v135 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
    v137 = 1;
    goto LABEL_29;
  }
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v6 + 40LL))(v6, &lpMem) || (_DWORD)lpMem != 1 )
    goto LABEL_28;
  if ( SBYTE1(v133) >> 6 )
  {
    if ( SBYTE1(v133) >> 6 == 1 )
      goto LABEL_16;
  }
  else
  {
    v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v129 + 2) - 0.0)) & _xmm);
    if ( v20 >= 0.000081380211 )
      goto LABEL_98;
    v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v130 + 2) - 0.0)) & _xmm);
    if ( v21 >= 0.000081380211
      || (v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v132 + 2) - 0.0)) & _xmm), v22 >= 0.000081380211) )
    {
      if ( v20 >= 0.000081380211 )
        goto LABEL_98;
      v84 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v130 + 2) - 0.0)) & _xmm);
      if ( v84 >= 0.000081380211 )
        goto LABEL_98;
      v85 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v131 - 0.0)) & _xmm);
      if ( v85 >= 0.000081380211 )
        goto LABEL_98;
      v86 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v131 + 1) - 0.0)) & _xmm);
      if ( v86 >= 0.000081380211 )
        goto LABEL_98;
      v87 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v131 + 2) - 0.0)) & _xmm);
      if ( v87 >= 0.000081380211 )
      {
        v88 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v131 + 2) - 1.0)) & _xmm);
        if ( v88 >= 0.000081380211 )
          goto LABEL_98;
      }
      v89 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v131 + 3) - 0.0)) & _xmm);
      if ( v89 >= 0.000081380211 )
        goto LABEL_98;
      v90 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v132 + 2) - 0.0)) & _xmm);
      if ( v90 >= 0.000081380211 )
        goto LABEL_98;
    }
    v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v129 + 3)) & _xmm);
    v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v132 + 3)) & _xmm);
    v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v130 + 3)) & _xmm)
                                                                            * 61440.0)
                                                                    + (float)(v23 * 61440.0))
                                                            + v24)
                                                    - 1.0)) & _xmm);
    if ( v25 >= 0.000081380211 )
    {
LABEL_98:
      v27 = -64;
      v26 = 0;
    }
    else
    {
      v26 = 1;
      v27 = 64;
    }
    BYTE1(v133) = v27 | BYTE1(v133) & 0x3F;
    if ( v26 )
    {
LABEL_16:
      v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v129 + 1) - 0.0)) & _xmm);
      if ( v28 < 0.000081380211 )
      {
        v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v130 - 0.0)) & _xmm);
        if ( v29 < 0.000081380211 )
          goto LABEL_18;
      }
    }
  }
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)&v129 - 0.0)) & _xmm) >= 0.000081380211
    || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v130 + 1) - 0.0)) & _xmm) >= 0.000081380211 )
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
    v91 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                               + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                               + 16)
                                                    - 0.0)) & _xmm);
    if ( v91 >= 0.000081380211 )
      goto LABEL_87;
    v77 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                               + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                               + 32)
                                                    - 0.0)) & _xmm);
    if ( v77 >= 0.000081380211
      || (v78 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                     + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                     + 64)
                                                          - 0.0)) & _xmm),
          v78 >= 0.000081380211) )
    {
      if ( v91 >= 0.000081380211 )
        goto LABEL_87;
      v92 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 32)
                                                      - 0.0)) & _xmm);
      if ( v92 >= 0.000081380211 )
        goto LABEL_87;
      v93 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 40)
                                                      - 0.0)) & _xmm);
      if ( v93 >= 0.000081380211 )
        goto LABEL_87;
      v94 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 44)
                                                      - 0.0)) & _xmm);
      if ( v94 >= 0.000081380211 )
        goto LABEL_87;
      v95 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 48)
                                                      - 0.0)) & _xmm);
      if ( v95 >= 0.000081380211 )
      {
        v96 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                   + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                   + 48)
                                                        - 1.0)) & _xmm);
        if ( v96 >= 0.000081380211 )
          goto LABEL_87;
      }
      v97 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 52)
                                                      - 0.0)) & _xmm);
      if ( v97 >= 0.000081380211 )
        goto LABEL_87;
      v98 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v30
                                                                 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1)
                                                                 + 64)
                                                      - 0.0)) & _xmm);
      if ( v98 >= 0.000081380211 )
        goto LABEL_87;
    }
    v79 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v30 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 20)) & _xmm);
    v80 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v30 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 68)) & _xmm);
    v81 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)(v30 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 36)) & _xmm)
                                                                            * 61440.0)
                                                                    + (float)(v79 * 61440.0))
                                                            + v80)
                                                    - 1.0)) & _xmm);
    if ( v81 >= 0.000081380211 )
    {
LABEL_87:
      v83 = -64;
      v82 = 0;
    }
    else
    {
      v82 = 1;
      v83 = 64;
    }
    *(_BYTE *)(v30 + 80LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1) + 73) = v83 | v32 & 0x3F;
    if ( v82 )
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
          v137 = 1;
          v119 = 0;
          v37 = (const struct CMILMatrix *)(80 * v35 + v36);
          if ( v115 == (void **)v37 )
          {
            v122 = v129;
            v123 = v130;
            v124 = v131;
            v125 = v132;
            v126 = v133;
            CMILMatrix::Multiply((CMILMatrix *)&v122, v37);
            v71 = v126;
            *(_OWORD *)v115 = v122;
            v116 = v123;
            v117 = v124;
            v118 = v125;
          }
          else
          {
            *(_OWORD *)v115 = v129;
            v116 = v130;
            v117 = v131;
            v118 = v132;
            v119 = v133;
            if ( !CMILMatrix::IsIdentity<1>((__int64)v115) )
            {
              CMILMatrix::Ensure3DFlags((CMILMatrix *)v38);
              v40 = *(_BYTE *)(v39 + 64);
              if ( (v40 & 3) != 1 )
              {
                if ( (v40 & 0xC) == 4 )
                {
                  CMILMatrix::Translate(
                    (CMILMatrix *)v115,
                    *(float *)(v39 + 48),
                    *(float *)(v39 + 52),
                    *(float *)(v39 + 56));
                }
                else if ( (v40 & 0xC0) == 0x40 )
                {
                  v99 = *(float *)(v39 + 48);
                  CMILMatrix::Scale((CMILMatrix *)v115, *(float *)v39, *(float *)(v39 + 20), *(float *)(v39 + 40));
                  CMILMatrix::Translate((CMILMatrix *)v115, v99, v101, v100);
                }
                else if ( (*(_BYTE *)(v39 + 65) & 0xC) == 4 )
                {
                  v102 = *(float *)(v39 + 4);
                  v103 = *(float *)(v39 + 40);
                  v104 = *(float *)(v39 + 48);
                  v105 = *(float *)(v39 + 52);
                  CMILMatrix::Rotate90((CMILMatrix *)v115);
                  CMILMatrix::Scale((CMILMatrix *)v115, COERCE_FLOAT(v106 ^ _xmm), v102, v103);
                  CMILMatrix::Translate((CMILMatrix *)v115, v104, v105, v107);
                }
                else
                {
                  v108 = Windows::Foundation::Numerics::operator*((__int64)&v122, (__int128 *)v115, (_OWORD *)v39);
                  *(_OWORD *)v115 = *v108;
                  v116 = v108[1];
                  v117 = v108[2];
                  v109 = v108[3];
                  v119 = 0;
                  v118 = v109;
                }
              }
              goto LABEL_25;
            }
            *(_OWORD *)v115 = *(_OWORD *)v38;
            v116 = *(_OWORD *)(v38 + 16);
            v117 = *(_OWORD *)(v38 + 32);
            v118 = *(_OWORD *)(v38 + 48);
            v71 = *(_DWORD *)(v38 + 64);
          }
          v119 = v71;
LABEL_25:
          v41 = (*(__int64 (__fastcall **)(__int64, void **, void **))(*(_QWORD *)v6 + 32LL))(v6, &lpMem, v115);
          v43 = v41;
          if ( v41 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0x173u, 0LL);
            goto LABEL_49;
          }
          if ( a3 == 1 )
          {
            v57 = 0x7FFFFFFF;
            v58 = *(float *)&lpMem - 0.5;
            if ( (float)(*(float *)&lpMem - 0.5) < -2147483600.0 )
            {
              v59 = 0x80000000;
            }
            else if ( v58 >= 2147483600.0 )
            {
              v59 = 0x7FFFFFFF;
            }
            else
            {
              v59 = (int)ceilf_0(v58);
            }
            *(float *)&lpMem = (float)v59;
            v60 = *((float *)&lpMem + 1) - 0.5;
            if ( (float)(*((float *)&lpMem + 1) - 0.5) < -2147483600.0 )
            {
              v61 = 0x80000000;
            }
            else if ( v60 >= 2147483600.0 )
            {
              v61 = 0x7FFFFFFF;
            }
            else
            {
              v61 = (int)ceilf_0(v60);
            }
            *((float *)&lpMem + 1) = (float)v61;
            v62 = v139 - 0.5;
            if ( (float)(v139 - 0.5) < -2147483600.0 )
            {
              v63 = 0x80000000;
            }
            else if ( v62 >= 2147483600.0 )
            {
              v63 = 0x7FFFFFFF;
            }
            else
            {
              v63 = (int)ceilf_0(v62);
            }
            v139 = (float)v63;
            v64 = v140 - 0.5;
            if ( (float)(v140 - 0.5) < -2147483600.0 )
            {
              v57 = 0x80000000;
            }
            else if ( v64 < 2147483600.0 )
            {
              v57 = (int)ceilf_0(v64);
            }
            v140 = (float)v57;
          }
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v135, &lpMem);
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
  LODWORD(v44) = v135;
  v45 = *((float *)&v135 + 1);
  v46 = *((float *)&v135 + 2);
  v47 = *((float *)&v135 + 3);
LABEL_29:
  v48 = *((_DWORD *)a1 + 6);
  if ( (!v48
     || !*(_DWORD *)(*a1 + 80LL * (unsigned int)(v48 - 1) + 4)
     || TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsInfinite((float *)(a1[104]
                                                                               + 96
                                                                               + 136LL
                                                                               * (unsigned int)(*((_DWORD *)a1 + 214) - 1))))
    && v137 )
  {
    if ( v46 > v44 && v47 > v45 )
      v19 = (float)(v46 - v44) * (float)(v47 - v45);
    if ( v19 >= CCommonRegistryData::m_flCpuClipAreaThreshold )
    {
      if ( !v48 || !*(_DWORD *)(*a1 + 80LL * (unsigned int)(v48 - 1)) )
      {
        v141.m128_u64[0] = __PAIR64__(LODWORD(v45), LODWORD(v44));
        v141.m128_u64[1] = __PAIR64__(LODWORD(v47), LODWORD(v46));
        v113 = CBaseClipStack::PushExact((CBaseClipStack *)(a1 + 278), (const struct MilRectF *)&v141);
        v43 = v113;
        if ( v113 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v114, 0LL, 0, v113, 0x116u, 0LL);
          goto LABEL_46;
        }
        goto LABEL_45;
      }
      v49 = *((_DWORD *)a1 + 556);
      if ( v49 )
        v50 = *(__m128 *)(a1[280] + 16LL * (unsigned int)(v49 - 1));
      else
        v50 = (__m128)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
      lpMem = (void *)__PAIR64__(LODWORD(v45), LODWORD(v44));
      v139 = v46;
      v140 = v47;
      v141 = v50;
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IntersectUnsafe(&v141, &lpMem);
      v51 = *((unsigned int *)a1 + 557);
      v52 = *((_DWORD *)a1 + 556);
      lpMem = 0LL;
      if ( v52 != (_DWORD)v51 )
        goto LABEL_41;
      v72 = 2 * v51;
      if ( (unsigned __int64)(2 * v51) > 0xFFFFFFFF )
      {
        v43 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, 0x80070216, 0x4Cu, 0LL);
        goto LABEL_136;
      }
      if ( v72 <= 8 )
        v72 = 8;
      v73 = HrMalloc(0x10uLL, v72, &lpMem);
      v43 = v73;
      if ( v73 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, v73, 0x53u, 0LL);
      }
      else
      {
        v75 = 16LL * *((unsigned int *)a1 + 556);
        if ( v75 <= 0xFFFFFFFF )
        {
          v76 = lpMem;
          memcpy_0(lpMem, (const void *)a1[280], (unsigned int)v75);
          operator delete((void *)a1[280]);
          v52 = *((_DWORD *)a1 + 556);
          a1[280] = (__int64)v76;
          *((_DWORD *)a1 + 557) = v72;
LABEL_41:
          v43 = 0;
          *(__m128 *)(a1[280] + 16LL * v52) = v141;
          v53 = *((_DWORD *)a1 + 562);
          v54 = (unsigned int)(*((_DWORD *)a1 + 556) + 1);
          *((_DWORD *)a1 + 556) = v54;
          if ( v53 <= (unsigned int)v54 )
            v53 = v54;
          *((_DWORD *)a1 + 562) = v53;
          goto LABEL_44;
        }
        v43 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v74, 0LL, 0, 0x80070216, 0x55u, 0LL);
      }
      v110 = lpMem;
      if ( lpMem )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v110);
      }
LABEL_44:
      if ( v43 >= 0 )
      {
LABEL_45:
        v55 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
        ++*(_DWORD *)(*a1 + 8 * v55);
LABEL_46:
        if ( v43 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v55, 0LL, 0, v43, 0x18Fu, 0LL);
          goto LABEL_49;
        }
        v9 = 1;
        goto LABEL_48;
      }
LABEL_136:
      MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v43, 0x31u, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(v112, 0LL, 0, v43, 0x11Au, 0LL);
      goto LABEL_46;
    }
  }
  v65 = DynArray<CScopedClipStack::CpuClipStackState,0>::AddMultipleAndSet(a1 + 104, &v127);
  v43 = v65;
  if ( v65 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0x196u, 0LL);
    goto LABEL_49;
  }
  v67 = *a2;
  v68 = a1[104] + 136LL * (unsigned int)(*((_DWORD *)a1 + 214) - 1);
  v69 = *((_BYTE *)a2 + 8);
  if ( *(_BYTE *)(v68 + 8) && *(_QWORD *)v68 )
    (***(void (__fastcall ****)(_QWORD, __int64))v68)(*(_QWORD *)v68, 1LL);
  *(_QWORD *)v68 = v67;
  *(_BYTE *)(v68 + 8) = v69;
  *a2 = 0LL;
  *((_BYTE *)a2 + 8) = 0;
  v70 = 10LL * (unsigned int)(*((_DWORD *)a1 + 6) - 1);
  ++*(_DWORD *)(*a1 + 8 * v70 + 4);
LABEL_48:
  *v120 = v137;
  *v121 = v9;
LABEL_49:
  if ( v128 && v127 )
    (**v127)(v127, 1LL);
  return (unsigned int)v43;
}
