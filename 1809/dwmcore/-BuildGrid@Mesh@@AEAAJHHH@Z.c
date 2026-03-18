/*
 * XREFs of ?BuildGrid@Mesh@@AEAAJHHH@Z @ 0x1800BB720
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800BA810 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180185618 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Mesh::BuildGrid(Mesh *this, __int64 a2, int a3, int a4)
{
  __int64 v4; // rdx
  Mesh *v5; // r14
  float *v6; // r10
  __int64 v7; // rsi
  int v8; // r9d
  char v9; // bl
  float v10; // xmm2_4
  float v11; // xmm4_4
  float v12; // xmm0_4
  __int64 v13; // r11
  float *v14; // rcx
  float *v15; // r8
  __int64 v16; // rax
  float v17; // xmm1_4
  float v18; // xmm3_4
  int v19; // r13d
  float v20; // xmm0_4
  char v21; // al
  __int64 v22; // rbx
  __int64 v23; // rcx
  float *v24; // r10
  float v25; // xmm1_4
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r10d
  __int64 v29; // r15
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // rsi
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r12
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // r10d
  unsigned int v39; // edi
  __int64 v40; // rax
  __int64 v41; // rdx
  _DWORD *v42; // r8
  _DWORD *v43; // rcx
  float v44; // xmm1_4
  __int128 v45; // xmm0
  unsigned int v46; // eax
  float v47; // xmm0_4
  _BYTE *v48; // r10
  __int64 v49; // rsi
  __int64 v50; // rdx
  _DWORD *v51; // r8
  _DWORD *v52; // rcx
  __int128 v53; // xmm0
  unsigned int v54; // eax
  float v55; // xmm0_4
  int v56; // r9d
  int v57; // ecx
  __int64 v58; // rbx
  __int64 v59; // r10
  __int64 v60; // r8
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rcx
  int v64; // r11d
  int v65; // eax
  __int64 v66; // r9
  __int64 v67; // rbx
  int v68; // edx
  bool v69; // r8
  _BYTE *v70; // r13
  int v71; // ecx
  __int64 v72; // r14
  __int64 v73; // rsi
  __int64 v74; // rbx
  __int64 v75; // r15
  _QWORD *v76; // rax
  __int64 v77; // r12
  __int64 v78; // rdx
  _QWORD *v79; // rax
  __int64 v80; // rcx
  bool v81; // zf
  __int64 v82; // r12
  __int64 (__fastcall ***v83)(_QWORD, __int64); // rcx
  __int64 v84; // r15
  Mesh *v85; // rcx
  __int64 v86; // rax
  int v87; // eax
  __int64 v88; // r12
  __int64 v89; // r15
  __int64 v90; // r15
  __int64 v91; // rax
  int v92; // eax
  int v93; // eax
  __int64 *v94; // r10
  int v95; // r9d
  __int64 v96; // rax
  __int64 v97; // rdx
  __int64 v98; // rcx
  char v99; // r8
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v106; // rcx
  int v107; // eax
  int v108; // edx
  __int64 v109; // rcx
  int v110; // eax
  __int64 v111; // rcx
  float v112; // xmm8_4
  float v113; // xmm6_4
  float v114; // xmm7_4
  float v115; // xmm1_4
  float v116; // xmm7_4
  float v117; // xmm3_4
  float v118; // xmm6_4
  __int64 v119; // rax
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rcx
  __int64 v123; // rcx
  bool v124; // [rsp+30h] [rbp-D0h]
  bool v125; // [rsp+31h] [rbp-CFh]
  int v126; // [rsp+34h] [rbp-CCh]
  int v128; // [rsp+40h] [rbp-C0h]
  int v129; // [rsp+44h] [rbp-BCh]
  int v130; // [rsp+48h] [rbp-B8h]
  int v131; // [rsp+4Ch] [rbp-B4h]
  int v132; // [rsp+50h] [rbp-B0h]
  _DWORD *v133; // [rsp+58h] [rbp-A8h]
  int v134; // [rsp+64h] [rbp-9Ch]
  __int64 v135; // [rsp+68h] [rbp-98h]
  __int64 v136; // [rsp+70h] [rbp-90h]
  __int64 v137; // [rsp+78h] [rbp-88h]
  __int64 v138; // [rsp+80h] [rbp-80h]
  __int64 v139; // [rsp+88h] [rbp-78h]
  __int64 v140; // [rsp+90h] [rbp-70h]
  __int64 v141; // [rsp+98h] [rbp-68h]
  __int64 v142; // [rsp+A0h] [rbp-60h]
  __int64 v143; // [rsp+A8h] [rbp-58h]
  __int64 v144; // [rsp+B0h] [rbp-50h]
  __int128 v145; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v146; // [rsp+C8h] [rbp-38h]
  __int64 v147; // [rsp+D0h] [rbp-30h]
  float v149[28]; // [rsp+E0h] [rbp-20h]
  float v150; // [rsp+150h] [rbp+50h]
  char v151; // [rsp+154h] [rbp+54h] BYREF

  v4 = *((_QWORD *)this + 2);
  v5 = this;
  v6 = *(float **)this;
  v7 = a4;
  v8 = 1;
  v126 = v7;
  v9 = 1;
  v10 = *(float *)(v4 + 4);
  v11 = *(float *)(*(_QWORD *)this + 4LL);
  v150 = v11;
  v12 = v10 + v11;
  v13 = (unsigned int)a3;
  if ( a3 > 1 )
  {
    v14 = &v6[6 * v7 + 1];
    v15 = (float *)&v151;
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
        ++v8;
        v12 = v10 + v17;
        v9 = 1;
      }
      *v15 = v17;
      v14 += 6 * v7;
      ++v15;
      --v16;
    }
    while ( v16 );
    v11 = v150;
  }
  v19 = 1;
  v149[0] = *v6;
  v18 = v149[0];
  v128 = 1;
  v20 = v149[0] + v10;
  v21 = 1;
  v22 = v7;
  if ( v7 > 1 )
  {
    v23 = 1LL;
    v24 = v6 + 6;
    do
    {
      v25 = *v24;
      if ( v21 && v20 > v25 )
      {
        v149[v23] = v149[v23 - 1];
        v21 = 0;
      }
      else
      {
        if ( v25 <= v20 )
          v25 = v20;
        v149[v23] = v25;
        v20 = v10 + v25;
        ++v19;
        v21 = 1;
      }
      ++v23;
      v24 += 6;
    }
    while ( v23 < v7 );
    v18 = v149[0];
    v128 = v19;
  }
  v26 = *(int *)(v4 + 32);
  v27 = *(_QWORD *)(v4 + 16);
  v28 = v26 + v13 * v7;
  if ( v28 > v27 )
  {
    v39 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0x270u);
  }
  else
  {
    if ( (int)v26 < 0 || v26 >= v27 )
      goto LABEL_138;
    v29 = *(_QWORD *)(v4 + 24) + (v26 << 6);
    *(_DWORD *)(v4 + 32) = v28;
    v26 = *((_QWORD *)v5 + 2);
    v137 = v29;
    v30 = *(int *)(v26 + 56);
    v31 = *(_QWORD *)(v26 + 40);
    if ( (int)v30 + v8 > v31 )
    {
      v39 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0x273u);
      return v39;
    }
    if ( (int)v30 < 0 || v30 >= v31 )
      goto LABEL_138;
    v32 = *(_QWORD *)(v26 + 48) + 88 * v30;
    *(_DWORD *)(v26 + 56) = v30 + v8;
    v26 = *((_QWORD *)v5 + 2);
    v143 = v32;
    v33 = *(int *)(v26 + 56);
    v34 = *(_QWORD *)(v26 + 40);
    if ( (int)v33 + v19 > v34 )
    {
      v39 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0x276u);
      return v39;
    }
    if ( (int)v33 < 0 || v33 >= v34 )
      goto LABEL_138;
    v35 = *(_QWORD *)(v26 + 48) + 88 * v33;
    *(_DWORD *)(v26 + 56) = v33 + v19;
    v26 = *((_QWORD *)v5 + 2);
    v140 = v35;
    v36 = *(int *)(v26 + 88);
    v37 = *(_QWORD *)(v26 + 72);
    v38 = v36 + 2 * v8 * v19;
    if ( v38 > v37 )
    {
      v39 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, -2147024882, 0x27Au);
      return v39;
    }
    if ( (int)v36 < 0 || v36 >= v37 )
    {
LABEL_138:
      gsl::details::terminate((gsl::details *)v26);
      JUMPOUT(0x1800BC1A3LL);
    }
    v39 = 0;
    v40 = *(_QWORD *)(v26 + 80) + 88 * v36;
    *(_DWORD *)(v26 + 88) = v38;
    v139 = v40;
    if ( (int)v13 > 0 )
    {
      v41 = 0LL;
      v42 = (_DWORD *)(v32 - 60);
      do
      {
        if ( v41 > 0 && *(&v150 + v41) == v149[v41 + 27] )
        {
          *v42 |= 0x10u;
        }
        else
        {
          v43 = v42 + 15;
          *((float *)&v145 + 1) = *(&v150 + v41);
          *(float *)&v145 = v18;
          v42 += 22;
          v44 = COERCE_DOUBLE(*(_QWORD *)&DOUBLE_1_0 & _xmm);
          if ( v44 < 0.0000011920929 )
          {
            LOWORD(v146) = 1;
            *((_QWORD *)&v145 + 1) = 0x3F80000000000000LL;
          }
          else
          {
            *((_QWORD *)&v145 + 1) = 1065353216LL;
            if ( (float)0.0 >= 0.0000011920929 )
              LOWORD(v146) = 0;
            else
              LOWORD(v146) = 256;
          }
          v45 = v145;
          *(_QWORD *)v43 = *((_QWORD *)v5 + 2);
          v46 = v146;
          *(_OWORD *)(v43 + 2) = v45;
          *((_QWORD *)v43 + 3) = v46;
          *((_QWORD *)v43 + 6) = 0LL;
          *((_QWORD *)v43 + 7) = 0LL;
          v43[16] = 0;
          if ( *((_BYTE *)v43 + 24) )
          {
            v47 = FLOAT_1_4142135;
          }
          else if ( *((_BYTE *)v43 + 25) )
          {
            v47 = 0.0;
          }
          else
          {
            v112 = *((float *)v43 + 4);
            v113 = *((float *)v43 + 5);
            v114 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v112) & _xmm);
            v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v113) & _xmm);
            if ( v114 <= v47 )
              v47 = 1.4142135 - v114;
            if ( (float)(v113 * v112) < 0.0 )
              LODWORD(v47) ^= _xmm;
          }
          *((float *)v43 + 8) = v47;
          *((_QWORD *)v43 + 9) = 0LL;
          *((_QWORD *)v43 + 10) = 0LL;
        }
        ++v41;
      }
      while ( v41 < (int)v13 );
    }
    *(_DWORD *)(v32 + 28) |= 1u;
    v48 = (_BYTE *)(v32 + 28);
    v136 = v8;
    v133 = (_DWORD *)(v32 + 28);
    v49 = 88LL * v8 + v32 - 88;
    v142 = v49;
    *(_DWORD *)(v49 + 28) |= 2u;
    if ( v22 > 0 )
    {
      v50 = 0LL;
      v51 = (_DWORD *)(v35 - 60);
      while ( v50 > 0 && v149[v50] == v149[v50 - 1] )
      {
        *v51 |= 0x10u;
LABEL_53:
        if ( ++v50 >= v22 )
          goto LABEL_54;
      }
      v52 = v51 + 15;
      *(float *)&v145 = v149[v50];
      *((float *)&v145 + 1) = v11;
      v51 += 22;
      if ( (float)0.0 >= 0.0000011920929 )
      {
        v115 = COERCE_DOUBLE(*(_QWORD *)&DOUBLE_1_0 & _xmm);
        if ( v115 < 0.0000011920929 )
        {
          LOWORD(v146) = 256;
          *((_QWORD *)&v145 + 1) = 1065353216LL;
          goto LABEL_50;
        }
        LOWORD(v146) = 0;
      }
      else
      {
        LOWORD(v146) = 1;
      }
      *((_QWORD *)&v145 + 1) = 0x3F80000000000000LL;
LABEL_50:
      v53 = v145;
      *(_QWORD *)v52 = *((_QWORD *)v5 + 2);
      v54 = v146;
      *(_OWORD *)(v52 + 2) = v53;
      *((_QWORD *)v52 + 3) = v54;
      *((_QWORD *)v52 + 6) = 0LL;
      *((_QWORD *)v52 + 7) = 0LL;
      v52[16] = 0;
      if ( *((_BYTE *)v52 + 24) )
      {
        v55 = FLOAT_1_4142135;
      }
      else if ( *((_BYTE *)v52 + 25) )
      {
        v55 = 0.0;
      }
      else
      {
        v116 = *((float *)v52 + 4);
        v117 = *((float *)v52 + 5);
        v118 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v116) & _xmm);
        v55 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v117) & _xmm);
        if ( v118 <= v55 )
          v55 = 1.4142135 - v118;
        if ( (float)(v117 * v116) < 0.0 )
          LODWORD(v55) ^= _xmm;
      }
      *((float *)v52 + 8) = v55;
      *((_QWORD *)v52 + 9) = 0LL;
      *((_QWORD *)v52 + 10) = 0LL;
      goto LABEL_53;
    }
LABEL_54:
    *(_DWORD *)(v35 + 28) |= 2u;
    v56 = 0;
    v144 = 88LL * v19 + v35 - 88;
    *(_DWORD *)(v144 + 28) |= 1u;
    if ( (int)v13 > 0 )
    {
      v57 = v126;
      v58 = 0LL;
      do
      {
        if ( v57 > 0 )
        {
          v59 = (unsigned int)v57;
          v60 = (v58 << 6) + v29 + 24;
          v58 += (unsigned int)v57;
          do
          {
            v61 = *(_QWORD *)v5;
            *(_DWORD *)(v60 - 24) = v56;
            v62 = v56++;
            *(_QWORD *)(v60 - 16) = v61 + 24 * v62;
            *(_QWORD *)v60 = 0LL;
            *(_QWORD *)(v60 + 8) = 0LL;
            *(_DWORD *)(v60 + 16) = 0;
            *(_QWORD *)(v60 + 24) = 0LL;
            v60 += 64LL;
            --v59;
          }
          while ( v59 );
          v57 = v126;
        }
        --v13;
      }
      while ( v13 );
      v48 = v133;
    }
    v63 = v136;
    v64 = 0;
    v132 = 0;
    v129 = 0;
    if ( v136 > 0 )
    {
      v65 = v126;
      v66 = 0LL;
      v67 = v19 - 1LL;
      v135 = 0LL;
      v141 = v67;
      v68 = v126 - 1;
      while ( 1 )
      {
        v69 = (*v48 & 0x10) != 0;
        v124 = v69;
        v138 = v67;
        v131 = v68;
        if ( v67 < 0 )
          goto LABEL_108;
        v70 = v48 + 12;
        v71 = v64 * v65;
        v72 = v35 + 88 * v67 + 40;
        v73 = 88 * v66 + v139 + 104;
        v134 = v64 * v65;
        v129 += 2 * v128;
        do
        {
          v125 = (*(_BYTE *)(v72 - 12) & 0x10) != 0;
          *(_DWORD *)(v73 - 88) = 0;
          v74 = v29 + ((__int64)(v71 + v68) << 6);
          v130 = v71 + v68;
          *(_QWORD *)(v73 - 104) = v74;
          *(_QWORD *)(v73 - 72) = v74;
          *(_QWORD *)(v73 - 80) = v74;
          *(_QWORD *)(v73 - 56) = v74;
          *(_QWORD *)(v73 - 64) = v74;
          *(_QWORD *)(v73 - 96) = v48 - 28;
          *(_QWORD *)(v73 - 32) = 0LL;
          *(_QWORD *)(v73 - 24) = 0LL;
          *(_QWORD *)(v73 - 48) = 0LL;
          *(_QWORD *)(v73 - 40) = 0LL;
          v75 = *((_QWORD *)v70 + 1);
          if ( v75 )
            v76 = (_QWORD *)(**(__int64 (__fastcall ***)(_BYTE *, _QWORD))v70)(v70, *((_QWORD *)v70 + 1));
          else
            v76 = v70 + 16;
          v77 = *v76;
          if ( *v76 )
          {
            v119 = (**(__int64 (__fastcall ***)(_BYTE *, _QWORD))v70)(v70, *v76);
            v78 = v73 - 104;
            *(_QWORD *)(v119 + 8) = v73 - 104;
          }
          else
          {
            v78 = v73 - 104;
          }
          *(_QWORD *)(**(__int64 (__fastcall ***)(_BYTE *, __int64))v70)(v70, v78) = v77;
          *(_QWORD *)((**(__int64 (__fastcall ***)(_BYTE *, __int64))v70)(v70, v73 - 104) + 8) = v75;
          if ( v75 )
          {
            v79 = (_QWORD *)(**(__int64 (__fastcall ***)(_BYTE *, __int64))v70)(v70, v75);
            v80 = v73 - 104;
            *v79 = v73 - 104;
          }
          else
          {
            v80 = v73 - 104;
          }
          if ( v75 == *((_QWORD *)v70 + 1) )
            *((_QWORD *)v70 + 1) = v80;
          v81 = v77 == *((_QWORD *)v70 + 2);
          v82 = v73 - 104;
          if ( v81 )
            *((_QWORD *)v70 + 2) = v82;
          ++*((_DWORD *)v70 + 6);
          v83 = (__int64 (__fastcall ***)(_QWORD, __int64))(v74 + 16);
          v84 = *(_QWORD *)(v74 + 32);
          if ( v84 )
          {
            v120 = (**v83)(v83, *(_QWORD *)(v74 + 32));
            v83 = (__int64 (__fastcall ***)(_QWORD, __int64))(v74 + 16);
            *(_QWORD *)(v120 + 8) = v82;
          }
          *(_QWORD *)(**v83)(v83, v73 - 104) = v84;
          *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, __int64))(v74 + 16))(v74 + 16, v73 - 104) + 8) = 0LL;
          if ( !*(_QWORD *)(v74 + 24) )
            *(_QWORD *)(v74 + 24) = v82;
          if ( v84 == *(_QWORD *)(v74 + 32) )
            *(_QWORD *)(v74 + 32) = v82;
          ++*(_DWORD *)(v74 + 40);
          v85 = this;
          if ( (*(_BYTE *)(v72 - 12) & 1) != 0 )
          {
            v86 = *((_QWORD *)this + 2);
            *(_DWORD *)(v73 - 88) |= 2u;
            ++*(_DWORD *)(v86 + 96);
          }
          else
          {
            v106 = *((_QWORD *)this + 2);
            v107 = *(_DWORD *)(v73 - 88);
            if ( (*v133 & 2) != 0 )
            {
              *(_DWORD *)(v73 - 88) = v107 | 8;
              ++*(_DWORD *)(v106 + 100);
            }
            else
            {
              if ( (*v133 & 1) != 0 )
              {
                *(_DWORD *)(v73 - 88) = v107 | 4;
                ++*(_DWORD *)(v106 + 100);
                v85 = this;
                goto LABEL_84;
              }
              *(_DWORD *)(v73 - 88) = v107 | 1;
              ++*(_DWORD *)(v106 + 92);
            }
            v85 = this;
          }
LABEL_84:
          v87 = *(_DWORD *)(v73 - 88);
          if ( (v87 & 5) != 0 )
          {
            v111 = *((_QWORD *)v85 + 2);
            if ( (v87 & 0x10A) == 0 )
            {
              *(_DWORD *)(v73 - 88) = v87 | 0x100;
              ++*(_DWORD *)(v111 + 104);
            }
          }
          v135 += 2LL;
          v88 = v73 - 16;
          *(_QWORD *)(v73 - 16) = v74;
          *(_QWORD *)(v73 - 8) = v72 - 40;
          *(_DWORD *)v73 = 0;
          *(_QWORD *)(v73 + 56) = 0LL;
          *(_QWORD *)(v73 + 64) = 0LL;
          *(_QWORD *)(v73 + 40) = 0LL;
          *(_QWORD *)(v73 + 48) = 0LL;
          *(_QWORD *)(v73 + 16) = v74;
          *(_QWORD *)(v73 + 8) = v74;
          *(_QWORD *)(v73 + 32) = v74;
          *(_QWORD *)(v73 + 24) = v74;
          v89 = *(_QWORD *)(v72 + 16);
          if ( v89 )
            *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, _QWORD))v72)(v72, *(_QWORD *)(v72 + 16)) + 8) = v88;
          *(_QWORD *)(**(__int64 (__fastcall ***)(__int64, __int64))v72)(v72, v73 - 16) = v89;
          *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, __int64))v72)(v72, v73 - 16) + 8) = 0LL;
          if ( !*(_QWORD *)(v72 + 8) )
            *(_QWORD *)(v72 + 8) = v88;
          if ( v89 == *(_QWORD *)(v72 + 16) )
            *(_QWORD *)(v72 + 16) = v88;
          ++*(_DWORD *)(v72 + 24);
          v90 = *(_QWORD *)(v74 + 32);
          if ( v90 )
            *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, _QWORD))(v74 + 16))(v74 + 16, *(_QWORD *)(v74 + 32)) + 8) = v88;
          *(_QWORD *)(**(__int64 (__fastcall ***)(__int64, __int64))(v74 + 16))(v74 + 16, v73 - 16) = v90;
          *(_QWORD *)((**(__int64 (__fastcall ***)(__int64, __int64))(v74 + 16))(v74 + 16, v73 - 16) + 8) = 0LL;
          if ( !*(_QWORD *)(v74 + 24) )
            *(_QWORD *)(v74 + 24) = v88;
          if ( v90 == *(_QWORD *)(v74 + 32) )
            *(_QWORD *)(v74 + 32) = v88;
          v48 = v133;
          ++*(_DWORD *)(v74 + 40);
          if ( (*(_BYTE *)v133 & 2) != 0 )
          {
            v91 = *((_QWORD *)this + 2);
            *(_DWORD *)v73 |= 2u;
            ++*(_DWORD *)(v91 + 96);
          }
          else
          {
            v108 = *(_DWORD *)(v72 - 12);
            v109 = *((_QWORD *)this + 2);
            v110 = *(_DWORD *)v73;
            if ( (v108 & 1) != 0 )
            {
              *(_DWORD *)v73 = v110 | 4;
              ++*(_DWORD *)(v109 + 100);
            }
            else if ( (v108 & 2) != 0 )
            {
              *(_DWORD *)v73 = v110 | 8;
              ++*(_DWORD *)(v109 + 100);
            }
            else
            {
              *(_DWORD *)v73 = v110 | 1;
              ++*(_DWORD *)(v109 + 92);
            }
          }
          v69 = v124;
          v29 = v137;
          if ( v124 )
          {
            ++*(_DWORD *)(*(_QWORD *)(v73 - 104) + 48LL);
            v121 = v137 + ((__int64)(v130 + v126) << 6);
            *(_QWORD *)(v73 - 56) = v121;
            *(_QWORD *)(v73 - 64) = v121;
            *(_QWORD *)(v73 + 16) = v121;
            *(_QWORD *)(v73 + 32) = v121;
          }
          if ( v125 )
          {
            ++*(_DWORD *)(*(_QWORD *)v88 + 48LL);
            v122 = v137 + ((__int64)(v130 - 1) << 6);
            *(_QWORD *)(v73 + 32) = v122;
            *(_QWORD *)(v73 + 24) = v122;
            *(_QWORD *)(v73 - 80) = v122;
            *(_QWORD *)(v73 - 64) = v122;
          }
          if ( v124 )
          {
            if ( !v125 )
            {
LABEL_105:
              v92 = 1;
              goto LABEL_106;
            }
            v123 = v137 + ((__int64)(v130 + v126 - 1) << 6);
            *(_QWORD *)(v73 - 64) = v123;
            *(_QWORD *)(v73 + 32) = v123;
          }
          if ( !v125 )
            goto LABEL_105;
          v92 = 2;
LABEL_106:
          v72 -= 88LL;
          v68 = v131 - v92;
          v131 -= v92;
          v73 += 176LL;
          --v138;
          v71 = v134;
        }
        while ( v138 >= 0 );
        v35 = v140;
        v66 = v135;
        v64 = v132;
        v67 = v141;
        v63 = v136;
LABEL_108:
        if ( v69 )
          v93 = 2;
        else
          v93 = 1;
        v64 += v93;
        v48 += 88;
        v65 = v126;
        --v63;
        v132 = v64;
        v133 = v48;
        v136 = v63;
        v68 = v126 - 1;
        if ( !v63 )
        {
          v49 = v142;
          v5 = this;
          break;
        }
      }
    }
    v94 = (__int64 *)&v145 + 1;
    *((_QWORD *)&v145 + 1) = v143;
    v95 = 0;
    v146 = v144;
    *(_QWORD *)&v145 = v35;
    v147 = v49;
    do
    {
      if ( v95 <= 0 )
        v96 = v49;
      else
        v96 = *(v94 - 2);
      v97 = *(v94 - 1);
      v98 = v49;
      v99 = v95;
      *(_QWORD *)(v97 + 72) = v96;
      *(_QWORD *)(v97 + 80) = *((_QWORD *)&v145 + (((_BYTE)v95 + 1) & 3));
      if ( v95 + 1 > 0 )
        v98 = v97;
      v100 = *v94;
      *(_QWORD *)(v100 + 72) = v98;
      v101 = v49;
      *(_QWORD *)(v100 + 80) = *((_QWORD *)&v145 + (((_BYTE)v95 - 2) & 3));
      if ( v95 + 2 > 0 )
        v101 = v100;
      v102 = v94[1];
      *(_QWORD *)(v102 + 72) = v101;
      v103 = v49;
      *(_QWORD *)(v102 + 80) = *((_QWORD *)&v145 + (((_BYTE)v95 - 1) & 3));
      if ( v95 + 3 > 0 )
        v103 = v102;
      v104 = v94[2];
      v95 += 4;
      v94 += 4;
      *(_QWORD *)(v104 + 72) = v103;
      *(_QWORD *)(v104 + 80) = *((_QWORD *)&v145 + (v99 & 3));
    }
    while ( (unsigned int)v95 < 4 );
    *(_QWORD *)(*((_QWORD *)v5 + 2) + 64LL) = v35;
  }
  return v39;
}
