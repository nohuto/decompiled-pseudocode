/*
 * XREFs of ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800AE440
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180057590 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x1801BA068 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z @ 0x1800AEE74 (-SetDirection@Line2d@Mesh@@QEAAXAEBUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Mesh::BuildGrid(Mesh *this, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdx
  int v5; // ebx
  float *v6; // r10
  Mesh *v7; // r12
  __int64 v8; // r14
  char v9; // di
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  __int64 v13; // r11
  float *v14; // rcx
  float *v15; // r8
  __int64 v16; // r9
  float v17; // xmm1_4
  float v18; // xmm5_4
  int v19; // edi
  float v20; // xmm0_4
  char v21; // cl
  __int64 v22; // rsi
  __int64 v23; // rax
  float *v24; // r10
  float v25; // xmm1_4
  unsigned __int64 v26; // rcx
  unsigned __int64 v27; // r8
  int v28; // r9d
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // r8
  __int64 v33; // r14
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  unsigned __int64 v36; // r8
  __int64 v37; // r13
  __int64 v38; // rcx
  unsigned __int64 v39; // rdx
  unsigned __int64 v40; // r8
  int v41; // r9d
  __int64 v42; // r15
  __int64 v43; // r10
  _DWORD *v44; // r14
  __int64 v45; // r9
  __int128 v46; // xmm0
  unsigned int v47; // eax
  float v48; // xmm0_4
  __int64 v49; // r14
  __int64 v50; // r10
  _DWORD *v51; // rbx
  __int64 v52; // r9
  __int128 v53; // xmm0
  unsigned int v54; // eax
  float v55; // xmm0_4
  int v56; // r9d
  int v57; // r8d
  unsigned __int64 v58; // r15
  __int64 v59; // rbx
  __int64 v60; // r10
  __int64 v61; // r8
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rbx
  int v65; // edx
  int v66; // r9d
  __int64 v67; // r11
  D2D_VECTOR_2F v68; // rax
  _DWORD *v69; // rcx
  bool v70; // r10
  int v71; // r10d
  __int64 v72; // r14
  _QWORD *v73; // rdx
  __int64 v74; // rsi
  __int64 v75; // r13
  unsigned __int64 v76; // rbx
  __int64 v77; // r15
  _QWORD *v78; // rax
  __int64 v79; // r12
  _DWORD *v80; // rax
  __int64 v81; // r15
  Mesh *v82; // rcx
  __int64 v83; // rax
  int v84; // eax
  __int64 v85; // r12
  __int64 v86; // r15
  __int64 v87; // r15
  __int64 v88; // rax
  int v89; // r9d
  int v90; // eax
  int v91; // eax
  __int64 *v92; // r11
  int v93; // r10d
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  char v98; // r9
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // rdx
  __int64 v102; // rcx
  unsigned int v103; // ebx
  __int64 v105; // rcx
  int v106; // edx
  int v107; // eax
  int v108; // edx
  __int64 v109; // rcx
  int v110; // eax
  __int64 v111; // rcx
  float v112; // xmm9_4
  float v113; // xmm2_4
  float v114; // xmm3_4
  float v115; // xmm5_4
  float v116; // xmm2_4
  float v117; // xmm3_4
  __int64 v118; // rax
  unsigned __int64 v119; // rcx
  unsigned __int64 v120; // rcx
  unsigned __int64 v121; // rcx
  bool v122; // [rsp+30h] [rbp-D0h]
  bool v123; // [rsp+31h] [rbp-CFh]
  _DWORD *v124; // [rsp+38h] [rbp-C8h]
  int v125; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v128; // [rsp+50h] [rbp-B0h]
  D2D_VECTOR_2F v129; // [rsp+58h] [rbp-A8h] BYREF
  int v130; // [rsp+60h] [rbp-A0h]
  int v131; // [rsp+64h] [rbp-9Ch]
  int v132; // [rsp+68h] [rbp-98h]
  int v133; // [rsp+6Ch] [rbp-94h]
  int v134; // [rsp+70h] [rbp-90h]
  _BYTE v135[12]; // [rsp+74h] [rbp-8Ch]
  __int64 v136; // [rsp+80h] [rbp-80h]
  __int64 v137; // [rsp+88h] [rbp-78h]
  __int64 v138; // [rsp+90h] [rbp-70h]
  _DWORD *v139; // [rsp+98h] [rbp-68h]
  __int64 v140; // [rsp+A0h] [rbp-60h]
  D2D_VECTOR_2F v141; // [rsp+A8h] [rbp-58h]
  __int64 v142; // [rsp+B0h] [rbp-50h]
  __int64 v143; // [rsp+B8h] [rbp-48h]
  __int128 v144; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v145; // [rsp+D0h] [rbp-30h]
  __int64 v146; // [rsp+D8h] [rbp-28h]
  float v147; // [rsp+E0h] [rbp-20h]
  _BYTE v148[108]; // [rsp+E4h] [rbp-1Ch] BYREF
  float v149[28]; // [rsp+150h] [rbp+50h]

  v4 = *((_QWORD *)this + 2);
  v5 = 1;
  v6 = *(float **)this;
  v7 = this;
  v8 = a4;
  v9 = 1;
  v10 = *(float *)(v4 + 4);
  v11 = *(float *)(*(_QWORD *)this + 4LL);
  v147 = v11;
  v12 = v10 + v11;
  v13 = (unsigned int)a3;
  if ( a3 > 1 )
  {
    v14 = &v6[6 * a4 + 1];
    v15 = (float *)v148;
    v16 = (unsigned int)(v13 - 1);
    do
    {
      v17 = *v14;
      if ( v9 && v12 > v17 )
      {
        v17 = *(v15 - 1);
        v9 = 0;
      }
      else
      {
        if ( v17 <= v12 )
          v17 = v12;
        ++v5;
        v12 = v10 + v17;
        v9 = 1;
      }
      *v15 = v17;
      v14 += 6 * v8;
      ++v15;
      --v16;
    }
    while ( v16 );
    v11 = v147;
  }
  v19 = 1;
  v149[0] = *v6;
  v18 = v149[0];
  v125 = 1;
  v20 = v149[0] + v10;
  v21 = 1;
  v22 = v8;
  if ( v8 > 1 )
  {
    v23 = 1LL;
    v24 = v6 + 6;
    do
    {
      v25 = *v24;
      if ( v21 && v20 > v25 )
      {
        v25 = *(float *)&v148[4 * v23 + 104];
        v21 = 0;
      }
      else
      {
        if ( v25 <= v20 )
          v25 = v20;
        ++v19;
        v20 = v10 + v25;
        v21 = 1;
      }
      v149[v23] = v25;
      v24 += 6;
      ++v23;
    }
    while ( v23 < v8 );
    v11 = v147;
    v18 = v149[0];
    v125 = v19;
  }
  v26 = *(int *)(v4 + 32);
  v27 = *(_QWORD *)(v4 + 16);
  v28 = v26 + v13 * v8;
  if ( v28 > (__int64)v27 )
  {
    v103 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, 0x8007000E, 0x270u, 0LL);
  }
  else
  {
    if ( v26 >= v27 )
      goto LABEL_154;
    v29 = *(_QWORD *)(v4 + 24) + (v26 << 6);
    *(_DWORD *)(v4 + 32) = v28;
    v30 = *((_QWORD *)v7 + 2);
    v128 = v29;
    v31 = *(int *)(v30 + 56);
    v32 = *(_QWORD *)(v30 + 40);
    if ( (int)v31 + v5 > (__int64)v32 )
    {
      v103 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, 0x8007000E, 0x273u, 0LL);
      return v103;
    }
    if ( v31 >= v32 )
      goto LABEL_154;
    v33 = *(_QWORD *)(v30 + 48) + 88 * v31;
    *(_DWORD *)(v30 + 56) = v31 + v5;
    v34 = *((_QWORD *)v7 + 2);
    v137 = v33;
    v35 = *(int *)(v34 + 56);
    v36 = *(_QWORD *)(v34 + 40);
    if ( (int)v35 + v19 > (__int64)v36 )
    {
      v103 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, 0x8007000E, 0x276u, 0LL);
      return v103;
    }
    if ( v35 >= v36 )
      goto LABEL_154;
    v37 = *(_QWORD *)(v34 + 48) + 88 * v35;
    *(_DWORD *)(v34 + 56) = v35 + v19;
    v38 = *((_QWORD *)v7 + 2);
    v140 = v37;
    v39 = *(int *)(v38 + 88);
    v40 = *(_QWORD *)(v38 + 72);
    v41 = v39 + 2 * v5 * v19;
    if ( v41 > (__int64)v40 )
    {
      v103 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, 0x8007000E, 0x27Au, 0LL);
      return v103;
    }
    if ( v39 >= v40 )
    {
LABEL_154:
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    v42 = (int)v13;
    v138 = *(_QWORD *)(v38 + 80) + 88 * v39;
    *(_DWORD *)(v38 + 88) = v41;
    if ( (int)v13 > 0 )
    {
      v43 = 0LL;
      v44 = (_DWORD *)(v33 - 60);
      do
      {
        if ( v43 > 0 && *(float *)&v148[4 * v43 - 4] == *((float *)&v146 + v43 + 1) )
        {
          *v44 |= 0x10u;
        }
        else
        {
          *(_QWORD *)&v144 = __PAIR64__(*(_DWORD *)&v148[4 * v43 - 4], LODWORD(v18));
          v129 = (D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)(unsigned int)FLOAT_1_0, (__m128)0LL).m128_u64[0];
          v44 += 22;
          Mesh::Line2d::SetDirection((Mesh::Line2d *)&v144, &v129);
          v46 = v144;
          v47 = v145;
          *(_QWORD *)v45 = *((_QWORD *)v7 + 2);
          *(_OWORD *)(v45 + 8) = v46;
          *(_QWORD *)(v45 + 24) = v47;
          *(_QWORD *)(v45 + 48) = 0LL;
          *(_QWORD *)(v45 + 56) = 0LL;
          *(_DWORD *)(v45 + 64) = 0;
          if ( *(_BYTE *)(v45 + 24) )
          {
            v48 = FLOAT_1_4142135;
          }
          else if ( *(_BYTE *)(v45 + 25) )
          {
            v48 = 0.0;
          }
          else
          {
            v112 = *(float *)(v45 + 16);
            v113 = *(float *)(v45 + 20);
            v114 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v112) & _xmm);
            v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v113) & _xmm);
            if ( v114 <= v48 )
              v48 = 1.4142135 - v114;
            if ( (float)(v113 * v112) < 0.0 )
              LODWORD(v48) ^= _xmm;
          }
          *(float *)(v45 + 32) = v48;
          *(_QWORD *)(v45 + 72) = 0LL;
          *(_QWORD *)(v45 + 80) = 0LL;
        }
        ++v43;
      }
      while ( v43 < v42 );
      v33 = v137;
    }
    *(_DWORD *)(v33 + 28) |= 1u;
    v136 = v5;
    v49 = 88LL * v5 + v33 - 88;
    v142 = v49;
    *(_DWORD *)(v49 + 28) |= 2u;
    if ( v22 > 0 )
    {
      v50 = 0LL;
      v51 = (_DWORD *)(v37 - 60);
      do
      {
        if ( v50 > 0 && v149[v50] == *(float *)&v148[4 * v50 + 104] )
        {
          *v51 |= 0x10u;
        }
        else
        {
          *(float *)&v144 = v149[v50];
          v129 = (D2D_VECTOR_2F)_mm_unpacklo_ps((__m128)0LL, (__m128)(unsigned int)FLOAT_1_0).m128_u64[0];
          *((float *)&v144 + 1) = v11;
          v51 += 22;
          Mesh::Line2d::SetDirection((Mesh::Line2d *)&v144, &v129);
          v53 = v144;
          v54 = v145;
          *(_QWORD *)v52 = *((_QWORD *)v7 + 2);
          *(_OWORD *)(v52 + 8) = v53;
          *(_QWORD *)(v52 + 24) = v54;
          *(_QWORD *)(v52 + 48) = 0LL;
          *(_QWORD *)(v52 + 56) = 0LL;
          *(_DWORD *)(v52 + 64) = 0;
          if ( *(_BYTE *)(v52 + 24) )
          {
            v55 = FLOAT_1_4142135;
          }
          else if ( *(_BYTE *)(v52 + 25) )
          {
            v55 = 0.0;
          }
          else
          {
            v115 = *(float *)(v52 + 16);
            v116 = *(float *)(v52 + 20);
            v117 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v115) & _xmm);
            v55 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v116) & _xmm);
            if ( v117 <= v55 )
              v55 = 1.4142135 - v117;
            if ( (float)(v116 * v115) < 0.0 )
              LODWORD(v55) ^= _xmm;
          }
          *(float *)(v52 + 32) = v55;
          *(_QWORD *)(v52 + 72) = 0LL;
          *(_QWORD *)(v52 + 80) = 0LL;
        }
        ++v50;
      }
      while ( v50 < v22 );
    }
    *(_DWORD *)(v37 + 28) |= 2u;
    v56 = 0;
    v57 = v125;
    v58 = v128;
    v143 = v37 + 88LL * v125 - 88;
    *(_DWORD *)(v143 + 28) |= 1u;
    if ( (int)v13 > 0 )
    {
      v59 = 0LL;
      do
      {
        if ( (int)v22 > 0 )
        {
          v60 = (unsigned int)v22;
          v61 = (v59 << 6) + v128 + 24;
          v59 += (unsigned int)v22;
          do
          {
            v62 = *(_QWORD *)v7;
            *(_DWORD *)(v61 - 24) = v56;
            v61 += 64LL;
            v63 = v56++;
            *(_QWORD *)(v61 - 80) = v62 + 24 * v63;
            *(_QWORD *)(v61 - 64) = 0LL;
            *(_QWORD *)(v61 - 56) = 0LL;
            *(_DWORD *)(v61 - 48) = 0;
            *(_QWORD *)(v61 - 40) = 0LL;
            --v60;
          }
          while ( v60 );
        }
        --v13;
      }
      while ( v13 );
      v57 = v125;
    }
    v64 = v136;
    v65 = 0;
    v133 = 0;
    v130 = 0;
    if ( v136 > 0 )
    {
      v66 = v22 - 1;
      v67 = 0LL;
      v68 = (D2D_VECTOR_2F)(v57 - 1LL);
      *(_DWORD *)&v135[8] = 0;
      v69 = (_DWORD *)(v137 + 40);
      v141 = v68;
      v124 = (_DWORD *)(v137 + 40);
      *(_QWORD *)v135 = (unsigned int)(v22 - 1);
      while ( 1 )
      {
        v70 = (*(_BYTE *)(v69 - 3) & 0x10) != 0;
        v122 = v70;
        v129 = v68;
        v132 = v66;
        if ( *(__int64 *)&v68 < 0 )
          goto LABEL_98;
        v71 = v65 * v22;
        v72 = v37 + 88LL * *(_QWORD *)&v68 + 40;
        v73 = v69 + 4;
        v139 = v69 + 4;
        v74 = 88 * v67 + v138 + 104;
        v134 = v71;
        v130 += 2 * v57;
        while ( 1 )
        {
          v123 = (*(_BYTE *)(v72 - 12) & 0x10) != 0;
          *(_DWORD *)(v74 - 88) = 0;
          v75 = v74 - 104;
          v76 = v58 + ((__int64)(v71 + v66) << 6);
          v131 = v71 + v66;
          *(_QWORD *)(v74 - 104) = v76;
          *(_QWORD *)(v74 - 72) = v76;
          *(_QWORD *)(v74 - 80) = v76;
          *(_QWORD *)(v74 - 56) = v76;
          *(_QWORD *)(v74 - 64) = v76;
          *(_QWORD *)(v74 - 96) = v69 - 10;
          *(_QWORD *)(v74 - 32) = 0LL;
          *(_QWORD *)(v74 - 24) = 0LL;
          *(_QWORD *)(v74 - 48) = 0LL;
          *(_QWORD *)(v74 - 40) = 0LL;
          v77 = *((_QWORD *)v69 + 1);
          if ( v77 )
          {
            v78 = (_QWORD *)(**(__int64 (__fastcall ***)(_DWORD *, _QWORD))v69)(v69, *((_QWORD *)v69 + 1));
            v69 = v124;
          }
          else
          {
            v78 = v73;
          }
          v79 = *v78;
          if ( *v78 )
          {
            v118 = (**(__int64 (__fastcall ***)(_DWORD *, _QWORD))v69)(v69, *v78);
            v69 = v124;
            *(_QWORD *)(v118 + 8) = v75;
          }
          *(_QWORD *)(**(__int64 (__fastcall ***)(_DWORD *, __int64))v69)(v69, v74 - 104) = v79;
          *(_QWORD *)((**(__int64 (__fastcall ***)(_DWORD *, __int64))v124)(v124, v74 - 104) + 8) = v77;
          if ( v77 )
            *(_QWORD *)(**(__int64 (__fastcall ***)(_DWORD *, __int64))v124)(v124, v77) = v75;
          v80 = v139;
          if ( v77 == *((_QWORD *)v139 - 1) )
            *((_QWORD *)v139 - 1) = v75;
          if ( v79 == *(_QWORD *)v80 )
            *(_QWORD *)v80 = v75;
          ++v80[2];
          v81 = *(_QWORD *)(v76 + 32);
          if ( v81 )
            *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, _QWORD))(v76 + 16))(v76 + 16, *(_QWORD *)(v76 + 32)) + 8) = v75;
          *(_QWORD *)(**(__int64 (__fastcall ***)(__int64, __int64))(v76 + 16))(v76 + 16, v74 - 104) = v81;
          *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, __int64))(v76 + 16))(v76 + 16, v74 - 104) + 8) = 0LL;
          if ( !*(_QWORD *)(v76 + 24) )
            *(_QWORD *)(v76 + 24) = v75;
          if ( v81 == *(_QWORD *)(v76 + 32) )
            *(_QWORD *)(v76 + 32) = v75;
          ++*(_DWORD *)(v76 + 40);
          v82 = this;
          if ( (*(_BYTE *)(v72 - 12) & 1) != 0 )
          {
            v83 = *((_QWORD *)this + 2);
            *(_DWORD *)(v74 - 88) |= 2u;
            ++*(_DWORD *)(v83 + 96);
          }
          else
          {
            v105 = *((_QWORD *)this + 2);
            v106 = *(v124 - 3);
            v107 = *(_DWORD *)(v74 - 88);
            if ( (v106 & 2) != 0 )
            {
              *(_DWORD *)(v74 - 88) = v107 | 8;
              ++*(_DWORD *)(v105 + 100);
            }
            else
            {
              if ( (v106 & 1) != 0 )
              {
                *(_DWORD *)(v74 - 88) = v107 | 4;
                ++*(_DWORD *)(v105 + 100);
                v82 = this;
                goto LABEL_74;
              }
              *(_DWORD *)(v74 - 88) = v107 | 1;
              ++*(_DWORD *)(v105 + 92);
            }
            v82 = this;
          }
LABEL_74:
          v84 = *(_DWORD *)(v74 - 88);
          if ( (v84 & 5) != 0 )
          {
            v111 = *((_QWORD *)v82 + 2);
            if ( (v84 & 0x10A) == 0 )
            {
              *(_DWORD *)(v74 - 88) = v84 | 0x100;
              ++*(_DWORD *)(v111 + 104);
            }
          }
          *(_QWORD *)&v135[4] += 2LL;
          v85 = v74 - 16;
          *(_QWORD *)(v74 - 16) = v76;
          *(_QWORD *)(v74 - 8) = v72 - 40;
          *(_DWORD *)v74 = 0;
          *(_QWORD *)(v74 + 56) = 0LL;
          *(_QWORD *)(v74 + 64) = 0LL;
          *(_QWORD *)(v74 + 40) = 0LL;
          *(_QWORD *)(v74 + 48) = 0LL;
          *(_QWORD *)(v74 + 16) = v76;
          *(_QWORD *)(v74 + 8) = v76;
          *(_QWORD *)(v74 + 32) = v76;
          *(_QWORD *)(v74 + 24) = v76;
          v86 = *(_QWORD *)(v72 + 16);
          if ( v86 )
            *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, _QWORD))v72)(v72, *(_QWORD *)(v72 + 16)) + 8) = v85;
          *(_QWORD *)(**(__int64 (__fastcall ***)(__int64, __int64))v72)(v72, v74 - 16) = v86;
          *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, __int64))v72)(v72, v74 - 16) + 8) = 0LL;
          if ( !*(_QWORD *)(v72 + 8) )
            *(_QWORD *)(v72 + 8) = v85;
          if ( v86 == *(_QWORD *)(v72 + 16) )
            *(_QWORD *)(v72 + 16) = v85;
          ++*(_DWORD *)(v72 + 24);
          v87 = *(_QWORD *)(v76 + 32);
          if ( v87 )
            *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, _QWORD))(v76 + 16))(v76 + 16, *(_QWORD *)(v76 + 32)) + 8) = v85;
          *(_QWORD *)(**(__int64 (__fastcall ***)(__int64, __int64))(v76 + 16))(v76 + 16, v74 - 16) = v87;
          *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, __int64))(v76 + 16))(v76 + 16, v74 - 16) + 8) = 0LL;
          if ( !*(_QWORD *)(v76 + 24) )
            *(_QWORD *)(v76 + 24) = v85;
          if ( v87 == *(_QWORD *)(v76 + 32) )
            *(_QWORD *)(v76 + 32) = v85;
          v69 = v124;
          ++*(_DWORD *)(v76 + 40);
          if ( (*(_BYTE *)(v124 - 3) & 2) != 0 )
          {
            v88 = *((_QWORD *)this + 2);
            *(_DWORD *)v74 |= 2u;
            ++*(_DWORD *)(v88 + 96);
            goto LABEL_89;
          }
          v108 = *(_DWORD *)(v72 - 12);
          v109 = *((_QWORD *)this + 2);
          v110 = *(_DWORD *)v74;
          if ( (v108 & 1) != 0 )
          {
            *(_DWORD *)v74 = v110 | 4;
            ++*(_DWORD *)(v109 + 100);
LABEL_121:
            v69 = v124;
            goto LABEL_89;
          }
          if ( (v108 & 2) == 0 )
          {
            *(_DWORD *)v74 = v110 | 1;
            ++*(_DWORD *)(v109 + 92);
            goto LABEL_121;
          }
          *(_DWORD *)v74 = v110 | 8;
          ++*(_DWORD *)(v109 + 100);
          v69 = v124;
LABEL_89:
          v70 = v122;
          v89 = v131;
          if ( v122 )
          {
            ++*(_DWORD *)(*(_QWORD *)v75 + 48LL);
            v119 = v128 + ((__int64)(v89 + a4) << 6);
            *(_QWORD *)(v74 - 56) = v119;
            *(_QWORD *)(v74 - 64) = v119;
            *(_QWORD *)(v74 + 16) = v119;
            *(_QWORD *)(v74 + 32) = v119;
            v69 = v124;
          }
          if ( v123 )
          {
            ++*(_DWORD *)(*(_QWORD *)v85 + 48LL);
            v120 = v128 + ((__int64)(v89 - 1) << 6);
            *(_QWORD *)(v74 + 32) = v120;
            *(_QWORD *)(v74 + 24) = v120;
            *(_QWORD *)(v74 - 80) = v120;
            *(_QWORD *)(v74 - 64) = v120;
            v69 = v124;
          }
          if ( v122 )
          {
            if ( !v123 )
            {
LABEL_95:
              v90 = 1;
              goto LABEL_96;
            }
            v121 = v128 + ((__int64)(v89 + *(_DWORD *)v135) << 6);
            *(_QWORD *)(v74 - 64) = v121;
            *(_QWORD *)(v74 + 32) = v121;
            v69 = v124;
          }
          if ( !v123 )
            goto LABEL_95;
          v90 = 2;
LABEL_96:
          v73 = v69 + 4;
          v66 = v132 - v90;
          v58 = v128;
          v72 -= 88LL;
          v132 -= v90;
          v74 += 176LL;
          if ( (__int64)--*(_QWORD *)&v129 < 0 )
            break;
          v71 = v134;
        }
        v37 = v140;
        v57 = v125;
        v67 = *(_QWORD *)&v135[4];
        LODWORD(v22) = a4;
        v65 = v133;
        v64 = v136;
LABEL_98:
        if ( v70 )
          v91 = 2;
        else
          v91 = 1;
        v65 += v91;
        v66 = v22 - 1;
        v68 = v141;
        v69 += 22;
        --v64;
        v133 = v65;
        v136 = v64;
        v124 = v69;
        if ( !v64 )
        {
          v49 = v142;
          v7 = this;
          break;
        }
      }
    }
    v92 = (__int64 *)&v144 + 1;
    v93 = 0;
    *((_QWORD *)&v144 + 1) = v137;
    v145 = v143;
    *(_QWORD *)&v144 = v37;
    v146 = v49;
    do
    {
      if ( v93 <= 0 )
        v94 = v49;
      else
        v94 = *(v92 - 2);
      v95 = *(v92 - 1);
      v96 = v49;
      v97 = v92[1];
      v98 = v93;
      *(_QWORD *)(v95 + 72) = v94;
      *(_QWORD *)(v95 + 80) = *((_QWORD *)&v144 + (((_BYTE)v93 + 1) & 3));
      if ( v93 + 1 > 0 )
        v96 = v95;
      v99 = *v92;
      *(_QWORD *)(v99 + 72) = v96;
      v100 = v49;
      *(_QWORD *)(v99 + 80) = *((_QWORD *)&v144 + (((_BYTE)v93 - 2) & 3));
      if ( v93 + 2 > 0 )
        v100 = v99;
      *(_QWORD *)(v97 + 72) = v100;
      v101 = v49;
      v102 = v92[2];
      *(_QWORD *)(v97 + 80) = *((_QWORD *)&v144 + (((_BYTE)v93 - 1) & 3));
      if ( v93 + 3 > 0 )
        v101 = v97;
      v93 += 4;
      *(_QWORD *)(v102 + 72) = v101;
      v92 += 4;
      *(_QWORD *)(v102 + 80) = *((_QWORD *)&v144 + (v98 & 3));
    }
    while ( (unsigned int)v93 < 4 );
    v103 = 0;
    *(_QWORD *)(*((_QWORD *)v7 + 2) + 64LL) = v37;
  }
  return v103;
}
