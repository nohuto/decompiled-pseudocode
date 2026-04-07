/*
 * XREFs of ?TriangulatePathGeometry@CTouchDragVisualHelper@@SAJMPEBV?$DynArray@UTOUCH_DRAG_POINT@@$0A@@@PEBUtagRECT@@PEAV?$DynArray@UMilPoint3F@@$0A@@@PEAV?$DynArray@UMilPoint2D@@$0A@@@PEAV?$DynArray@I$0A@@@PEAV?$DynArray@K$0A@@@@Z @ 0x18009BF5C
 * Callers:
 *     ?UpdateVisual@CTouchDragVisual@@AEAAJXZ @ 0x18009D620 (-UpdateVisual@CTouchDragVisual@@AEAAJXZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180010DBC (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180014F38 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033FB0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     sqrtf_0 @ 0x18004FDDA (sqrtf_0.c)
 *     ?AddAndSet@?$DynArray@K$0A@@@QEAAJIAEBK@Z @ 0x18009B6F8 (-AddAndSet@-$DynArray@K$0A@@@QEAAJIAEBK@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z @ 0x18009B7C4 (-AddMultipleAndSet@-$DynArray@UMilPoint2D@@$0A@@@QEAAJPEFBUMilPoint2D@@I@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z @ 0x18009B858 (-AddMultipleAndSet@-$DynArray@UMilPoint3F@@$0A@@@QEAAJPEFBUMilPoint3F@@I@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CTouchDragVisualHelper::TriangulatePathGeometry(
        double a1,
        __int64 a2,
        int *a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // ecx
  __m128 v8; // xmm1
  int v9; // ebx
  __int64 *v10; // r10
  int v11; // esi
  unsigned int v12; // edi
  int v13; // eax
  int v14; // r13d
  int v15; // r15d
  float v16; // xmm11_4
  float v17; // xmm12_4
  __int64 v18; // rdx
  __int64 v19; // rcx
  __m128 v20; // xmm4
  __int64 v21; // r12
  __m128 v22; // xmm3
  float v23; // xmm5_4
  __m128 v24; // xmm1
  __m128 v25; // xmm2
  float v26; // xmm0_4
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  double v29; // xmm0_8
  int v30; // eax
  int v31; // edx
  __int64 v32; // r8
  __int64 v33; // rdx
  float v34; // eax
  __m128 v35; // xmm7
  __m128 v36; // xmm8
  float v37; // xmm10_4
  float v38; // eax
  float v39; // xmm4_4
  float v40; // xmm5_4
  float v41; // xmm6_4
  float v42; // xmm2_4
  float v43; // xmm3_4
  float v44; // xmm4_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  float *v47; // rax
  __int64 v48; // rcx
  float v49; // xmm1_4
  unsigned int v50; // esi
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r15
  float v54; // eax
  __m128 v55; // xmm14
  __m128 v56; // xmm15
  float v57; // xmm10_4
  float v58; // xmm11_4
  float v59; // xmm13_4
  float v60; // xmm12_4
  float v61; // eax
  float v62; // xmm7_4
  float v63; // xmm8_4
  float v64; // xmm9_4
  float v65; // xmm6_4
  char v66; // r8
  int v67; // eax
  __int64 v68; // rdx
  float v69; // eax
  float v70; // xmm0_4
  __m128 v71; // xmm1
  __m128 v72; // xmm2
  float v73; // xmm6_4
  _QWORD *v74; // r15
  __int64 v75; // r10
  unsigned int v76; // eax
  unsigned int v77; // edx
  int v78; // eax
  int v79; // ecx
  __int64 v80; // r15
  unsigned int v81; // eax
  int *v82; // r9
  unsigned int v83; // r8d
  int v84; // eax
  int v85; // ecx
  __int64 v86; // r15
  unsigned int v87; // eax
  int *v88; // r9
  unsigned int v89; // r8d
  int v90; // eax
  int v91; // r9d
  unsigned int v93; // [rsp+28h] [rbp-E0h]
  char v94; // [rsp+38h] [rbp-D0h]
  char v95; // [rsp+39h] [rbp-CFh]
  int v96; // [rsp+3Ch] [rbp-CCh] BYREF
  int v97; // [rsp+40h] [rbp-C8h]
  int v98; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v99; // [rsp+48h] [rbp-C0h]
  _QWORD *v100; // [rsp+50h] [rbp-B8h]
  unsigned int v101; // [rsp+58h] [rbp-B0h]
  __int64 v102; // [rsp+5Ch] [rbp-ACh]
  int v103; // [rsp+64h] [rbp-A4h]
  int v104; // [rsp+68h] [rbp-A0h]
  unsigned int v105; // [rsp+6Ch] [rbp-9Ch]
  __int64 v106; // [rsp+70h] [rbp-98h]
  __int64 v107; // [rsp+78h] [rbp-90h]
  float v108; // [rsp+80h] [rbp-88h]
  __int64 v109; // [rsp+88h] [rbp-80h]
  __int64 v110; // [rsp+90h] [rbp-78h]
  __int64 v111; // [rsp+98h] [rbp-70h]
  int *v112; // [rsp+A0h] [rbp-68h]
  __int128 v113; // [rsp+A8h] [rbp-60h] BYREF
  int v114; // [rsp+B8h] [rbp-50h]
  int v115; // [rsp+BCh] [rbp-4Ch]
  int v116; // [rsp+C0h] [rbp-48h]
  __int64 v117; // [rsp+C8h] [rbp-40h]
  __int64 *v118; // [rsp+D8h] [rbp-30h]
  float v119; // [rsp+E8h] [rbp-20h]
  float v120; // [rsp+F8h] [rbp-10h]
  float v121; // [rsp+108h] [rbp+0h]
  float v122; // [rsp+118h] [rbp+10h]
  float v123; // [rsp+128h] [rbp+20h]
  unsigned __int64 v124; // [rsp+130h] [rbp+28h] BYREF
  float v125; // [rsp+138h] [rbp+30h]
  __int64 v126; // [rsp+140h] [rbp+38h]
  __int64 v127; // [rsp+150h] [rbp+48h]
  float v128; // [rsp+158h] [rbp+50h]
  __int64 v129; // [rsp+160h] [rbp+58h]
  float v130; // [rsp+168h] [rbp+60h]
  __int64 v131; // [rsp+170h] [rbp+68h]
  float v132; // [rsp+178h] [rbp+70h]
  unsigned __int64 v133; // [rsp+180h] [rbp+78h] BYREF
  float v134; // [rsp+188h] [rbp+80h]
  double v135[2]; // [rsp+190h] [rbp+88h] BYREF
  int v136; // [rsp+1A0h] [rbp+98h] BYREF
  int v137; // [rsp+1A4h] [rbp+9Ch]
  int v138; // [rsp+1A8h] [rbp+A0h]
  int v139; // [rsp+1ACh] [rbp+A4h]
  int v140; // [rsp+1B0h] [rbp+A8h]
  int v141; // [rsp+1B4h] [rbp+ACh]
  unsigned __int64 v142; // [rsp+1B8h] [rbp+B0h] BYREF
  float v143; // [rsp+1C0h] [rbp+B8h]
  unsigned __int64 v144; // [rsp+1C4h] [rbp+BCh]
  float v145; // [rsp+1CCh] [rbp+C4h]
  _QWORD v146[4]; // [rsp+1D0h] [rbp+C8h] BYREF

  v7 = *(_DWORD *)(a2 + 24);
  v8 = *(__m128 *)&a1;
  v9 = 0;
  v114 = 0;
  v10 = (__int64 *)a2;
  v115 = 0;
  v11 = 0;
  v12 = 0;
  v109 = a5;
  v110 = a7;
  v13 = a3[3] - a3[1];
  LODWORD(v106) = LODWORD(a1);
  v118 = (__int64 *)a2;
  v100 = a4;
  v112 = a3;
  v105 = v7;
  v101 = v7 - 1;
  v116 = 0;
  v97 = -1;
  *(float *)&v14 = NAN;
  v15 = -1;
  v16 = (float)v13 / (float)(int)(v7 - 1);
  *(float *)&v99 = v16;
  v113 = 0LL;
  if ( !v7 )
    goto LABEL_82;
  v17 = FLOAT_1_1920929eN7;
  v18 = 0LL;
  v111 = 0LL;
  while ( 1 )
  {
    v19 = *v10;
    v20 = v8;
    v21 = *((unsigned int *)a4 + 6);
    v22 = v8;
    v104 = v15;
    v22.m128_f32[0] = v8.m128_f32[0] * *(float *)(v18 + v19 + 16);
    v20.m128_f32[0] = v8.m128_f32[0] * *(float *)(v18 + v19 + 20);
    v23 = v8.m128_f32[0] * *(float *)(v18 + v19 + 24);
    v24 = v22;
    v24.m128_f32[0] = v22.m128_f32[0] + *(float *)(v18 + v19 + 4);
    v25 = v20;
    v25.m128_f32[0] = v20.m128_f32[0] + *(float *)(v18 + v19 + 8);
    v26 = v23 + *(float *)(v18 + v19 + 12);
    v142 = _mm_unpacklo_ps(v24, v25).m128_u64[0];
    v119 = v26;
    v143 = v26;
    v27 = (__m128)*(unsigned int *)(v18 + v19 + 4);
    v27.m128_f32[0] = v27.m128_f32[0] - v22.m128_f32[0];
    v28 = (__m128)*(unsigned int *)(v18 + v19 + 8);
    v28.m128_f32[0] = v28.m128_f32[0] - v20.m128_f32[0];
    v120 = *(float *)(v18 + v19 + 12) - v23;
    v29 = (double)*a3;
    v145 = v120;
    v144 = _mm_unpacklo_ps(v27, v28).m128_u64[0];
    *(double *)v146 = v29;
    v27.m128_f32[0] = (float)((float)(int)v12 * v16) + (float)a3[1];
    *(double *)&v146[2] = (double)a3[2];
    *(double *)&v146[1] = v27.m128_f32[0];
    *(double *)&v146[3] = v27.m128_f32[0];
    v30 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)a4, &v142, 2u);
    v9 = v30;
    if ( v30 < 0 )
    {
      v93 = 237;
      goto LABEL_80;
    }
    v30 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v109, v146, 2u);
    v9 = v30;
    if ( v30 < 0 )
    {
      v93 = 238;
      goto LABEL_80;
    }
    v96 = 255;
    v30 = DynArray<unsigned long,0>::AddAndSet(v110, 2u, &v96);
    v9 = v30;
    if ( v30 < 0 )
    {
      v93 = 239;
      goto LABEL_80;
    }
    if ( v12 )
    {
      v95 = 0;
      v31 = v12 - 1;
      if ( v14 >= 0 )
        v31 = v14;
      v32 = *v100;
      v96 = v31;
      v126 = *(_QWORD *)(v32 + 12 * v21);
      v117 = *(_QWORD *)(v32 + 12LL * (unsigned int)(v21 + 1));
      v33 = (unsigned int)v21 + 2 * (v31 - v12);
      v34 = *(float *)(v32 + 12 * v33 + 8);
      v127 = *(_QWORD *)(v32 + 12 * v33);
      v35 = (__m128)(unsigned int)v127;
      v36 = (__m128)HIDWORD(v127);
      v128 = v34;
      v37 = v34;
      v38 = *(float *)(v32 + 12LL * (unsigned int)(v33 + 1) + 8);
      v107 = *(_QWORD *)(v32 + 12LL * (unsigned int)(v33 + 1));
      v39 = *(float *)&v107 - *(float *)&v127;
      v40 = *((float *)&v107 + 1) - *((float *)&v127 + 1);
      v108 = v38;
      v41 = (float)((float)(*((float *)&v117 + 1) - *((float *)&v126 + 1)) * (float)(*(float *)&v107 - *(float *)&v127))
          - (float)((float)(*(float *)&v117 - *(float *)&v126) * (float)(*((float *)&v107 + 1) - *((float *)&v127 + 1)));
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v41) & _xmm) <= v17 )
        break;
      v42 = (float)((float)((float)(*(float *)&v117 - *(float *)&v126)
                          * (float)(*((float *)&v127 + 1) - *((float *)&v126 + 1)))
                  - (float)((float)(*((float *)&v117 + 1) - *((float *)&v126 + 1))
                          * (float)(*(float *)&v127 - *(float *)&v126)))
          / v41;
      v43 = (float)((float)(v39 * (float)(*((float *)&v127 + 1) - *((float *)&v126 + 1)))
                  - (float)(v40 * (float)(*(float *)&v127 - *(float *)&v126)))
          / v41;
      if ( v42 <= v17 )
        break;
      if ( v42 >= 0.99999988 )
        break;
      if ( v43 <= v17 )
        break;
      if ( v43 >= 0.99999988 )
        break;
      v35.m128_f32[0] = *(float *)&v127 + (float)(v39 * v42);
      v36.m128_f32[0] = *((float *)&v127 + 1) + (float)(v40 * v42);
      v133 = _mm_unpacklo_ps(v35, v36).m128_u64[0];
      v121 = v37 + (float)((float)(v38 - v128) * v42);
      v134 = v121;
      DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)&v113, &v133, 1u);
      v14 = v96;
      v11 = v116;
      v95 = 1;
      if ( v12 == v101 )
        break;
    }
LABEL_66:
    ++v12;
    v18 = v111 + 28;
    v111 += 28LL;
    if ( v12 >= v105 )
      goto LABEL_82;
    v8 = (__m128)(unsigned int)v106;
    v15 = v97;
    a3 = v112;
    a4 = v100;
    v10 = v118;
  }
  if ( v14 < 0 )
  {
LABEL_51:
    if ( !v95 )
    {
      v85 = v104;
      if ( v15 > 0 )
        v15 = -1;
      v97 = v15;
      if ( v104 <= 0 )
        v85 = v21 - 2;
      if ( v14 >= 0 )
      {
        v97 = v21;
        *(float *)&v14 = NAN;
      }
      v136 = v21;
      v138 = v85 + 1;
      v86 = 0LL;
      v139 = v85 + 1;
      v140 = v21 + 1;
      v137 = v85;
      v141 = v21;
      while ( 1 )
      {
        v87 = *(_DWORD *)(a6 + 24);
        v88 = &v136 + v86;
        v89 = v87 + 1;
        if ( v87 + 1 < v87 )
          break;
        if ( v89 > *(_DWORD *)(a6 + 20) )
        {
          v90 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4, 1, v88);
          v9 = v90;
          if ( v90 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v90, 0xC0u);
          if ( v9 < 0 )
            goto LABEL_76;
        }
        else
        {
          v9 = 0;
          *(_DWORD *)(*(_QWORD *)a6 + 4LL * v87) = *v88;
          *(_DWORD *)(a6 + 24) = v89;
        }
        v86 = (unsigned int)(v86 + 1);
        if ( (unsigned int)v86 >= 6 )
          goto LABEL_66;
      }
      v9 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_76:
      v93 = 381;
      goto LABEL_70;
    }
    goto LABEL_66;
  }
  v44 = 0.0;
  v124 = 0LL;
  v45 = 0.0;
  v46 = 0.0;
  v125 = 0.0;
  v94 = 0;
  if ( v11 )
  {
    v44 = v125;
    v47 = (float *)(v113 + 8);
    v48 = (unsigned int)v11;
    do
    {
      v46 = v46 + *(v47 - 2);
      v45 = v45 + *(v47 - 1);
      v44 = v44 + *v47;
      v47 += 3;
      v124 = __PAIR64__(LODWORD(v45), LODWORD(v46));
      v125 = v44;
      --v48;
    }
    while ( v48 );
  }
  v116 = 0;
  v49 = 1.0 / (float)v11;
  *(float *)&v124 = v46 * v49;
  *((float *)&v124 + 1) = v45 * v49;
  v125 = v44 * v49;
  DynArrayImpl<0>::ShrinkToSize((__int64)&v113, 0xCu);
  v50 = v14;
  if ( v14 >= v12 )
  {
LABEL_50:
    v11 = v116;
    goto LABEL_51;
  }
  v51 = 2 * v12;
  while ( 1 )
  {
    v52 = (unsigned int)v21 + 2 * v50 - v51;
    v103 = v21 + 2 * v50 - v51;
    v53 = *v100;
    v54 = *(float *)(*v100 + 12 * v52 + 8);
    v129 = *(_QWORD *)(*v100 + 12 * v52);
    v55 = (__m128)(unsigned int)v129;
    v56 = (__m128)HIDWORD(v129);
    v57 = *(float *)&v124 - *(float *)&v129;
    v130 = v54;
    v58 = *((float *)&v124 + 1) - *((float *)&v129 + 1);
    v59 = v54;
    v60 = v125 - v54;
    v61 = *(float *)(v53 + 12LL * (unsigned int)(v52 + 1) + 8);
    v131 = *(_QWORD *)(v53 + 12LL * (unsigned int)(v52 + 1));
    v62 = *(float *)&v124 - *(float *)&v131;
    v102 = v131;
    v63 = *((float *)&v124 + 1) - *((float *)&v131 + 1);
    v132 = v61;
    *(float *)&v98 = v61;
    v64 = v125 - v61;
    *(float *)&v96 = sqrtf_0(
                       (float)((float)((float)(*(float *)&v131 - *(float *)&v129)
                                     * (float)(*(float *)&v131 - *(float *)&v129))
                             + (float)((float)(*((float *)&v131 + 1) - *((float *)&v129 + 1))
                                     * (float)(*((float *)&v131 + 1) - *((float *)&v129 + 1))))
                     + (float)((float)(v61 - v59) * (float)(v61 - v59)));
    v65 = *(float *)&v96 / sqrtf_0((float)((float)(v57 * v57) + (float)(v58 * v58)) + (float)(v60 * v60));
    if ( v50 == v14 )
    {
      if ( v65 <= 2.0 )
      {
        v94 = 1;
LABEL_27:
        v55.m128_f32[0] = v55.m128_f32[0] + (float)(v57 * v65);
        v67 = 2 * (v50 - v12) + 1;
        v56.m128_f32[0] = v56.m128_f32[0] + (float)(v58 * v65);
        v68 = 3LL * (unsigned int)(v21 + v67);
        *(_QWORD *)(v53 + 12LL * (unsigned int)(v21 + v67)) = _mm_unpacklo_ps(v55, v56).m128_u64[0];
        v122 = v59 + (float)(v60 * v65);
        v69 = v122;
        goto LABEL_29;
      }
      v66 = 0;
      v94 = 0;
    }
    else
    {
      v66 = v94;
    }
    if ( v66 )
      goto LABEL_27;
    v70 = sqrtf_0((float)((float)(v62 * v62) + (float)(v63 * v63)) + (float)(v64 * v64));
    v71 = (__m128)(unsigned int)v102;
    v72 = (__m128)HIDWORD(v102);
    v73 = *(float *)&v96 / v70;
    v68 = 3LL * ((unsigned int)v21 + 2 * (v50 - v12));
    v71.m128_f32[0] = *(float *)&v102 + (float)(v62 * (float)(*(float *)&v96 / v70));
    v72.m128_f32[0] = *((float *)&v102 + 1) + (float)(v63 * (float)(*(float *)&v96 / v70));
    v123 = *(float *)&v98 + (float)(v64 * (float)(*(float *)&v96 / v70));
    v69 = v123;
    *(_QWORD *)(v53 + 12LL * ((unsigned int)v21 + 2 * (v50 - v12))) = _mm_unpacklo_ps(v71, v72).m128_u64[0];
    v65 = v73 / (float)(v73 - 1.0);
LABEL_29:
    *(float *)(v53 + 4 * v68 + 8) = v69;
    if ( v50 < v12 - 1 )
      break;
    v16 = *(float *)&v99;
LABEL_48:
    ++v50;
    v51 = 2 * v12;
    if ( v50 >= v12 )
    {
      v17 = FLOAT_1_1920929eN7;
      v15 = v97;
      goto LABEL_50;
    }
  }
  v74 = v100;
  v30 = DynArray<MilPoint3F,0>::AddMultipleAndSet((__int64)v100, &v124, 1u);
  v9 = v30;
  if ( v30 < 0 )
  {
    v93 = 337;
    goto LABEL_80;
  }
  v16 = *(float *)&v99;
  v135[0] = (float)((float)((float)(v112[2] - *v112) / v65) + (float)*v112);
  v135[1] = (float)((float)((float)((float)(int)v50 * *(float *)&v99) + (float)v112[1]) + (float)(*(float *)&v99 * 0.5));
  v30 = DynArray<MilPoint2D,0>::AddMultipleAndSet(v109, v135, 1u);
  v9 = v30;
  if ( v30 < 0 )
  {
    v93 = 340;
LABEL_80:
    v91 = v30;
    goto LABEL_81;
  }
  v75 = v110;
  v98 = 255;
  v76 = *(_DWORD *)(v110 + 24);
  v77 = v76 + 1;
  if ( v76 + 1 < v76 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_72:
    v93 = 341;
    goto LABEL_70;
  }
  if ( v77 > *(_DWORD *)(v110 + 20) )
  {
    v78 = DynArrayImpl<0>::AddMultipleAndSet(v110, 4, 1, &v98);
    v9 = v78;
    if ( v78 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v78, 0xC0u);
    if ( v9 >= 0 )
      goto LABEL_38;
    goto LABEL_72;
  }
  *(_DWORD *)(*(_QWORD *)v110 + 4LL * v76) = 255;
  *(_DWORD *)(v75 + 24) = v77;
LABEL_38:
  v79 = *((_DWORD *)v74 + 6) - 1;
  v136 = v103;
  v138 = v79;
  v80 = 0LL;
  v141 = v79;
  v137 = v103 + 2;
  v139 = v103 + 1;
  v140 = v103 + 3;
  while ( 1 )
  {
    v81 = *(_DWORD *)(a6 + 24);
    v82 = &v136 + v80;
    v83 = v81 + 1;
    if ( v81 + 1 < v81 )
      break;
    if ( v83 > *(_DWORD *)(a6 + 20) )
    {
      v84 = DynArrayImpl<0>::AddMultipleAndSet(a6, 4, 1, v82);
      v9 = v84;
      if ( v84 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v84, 0xC0u);
      if ( v9 < 0 )
        goto LABEL_69;
    }
    else
    {
      v9 = 0;
      *(_DWORD *)(*(_QWORD *)a6 + 4LL * v81) = *v82;
      *(_DWORD *)(a6 + 24) = v83;
    }
    v80 = (unsigned int)(v80 + 1);
    if ( (unsigned int)v80 >= 6 )
      goto LABEL_48;
  }
  v9 = -2147024362;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
LABEL_69:
  v93 = 353;
LABEL_70:
  v91 = v9;
LABEL_81:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v91, v93);
LABEL_82:
  DynArrayImpl<0>::~DynArrayImpl<0>(&v113);
  return (unsigned int)v9;
}
