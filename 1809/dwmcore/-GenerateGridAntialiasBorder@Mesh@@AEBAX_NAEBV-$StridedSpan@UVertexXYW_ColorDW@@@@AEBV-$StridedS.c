/*
 * XREFs of ?GenerateGridAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x180038360
 * Callers:
 *     ?GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV?$StridedSpan@UVertexXYW_ColorDW@@@@AEBV?$StridedSpan@UVertexAAFixupBase@@@@PEAHPEAGH3@Z @ 0x180066B34 (-GenerateAntialiasBorder@Mesh@@AEBAX_NAEBV-$StridedSpan@UVertexXYW_ColorDW@@@@AEBV-$StridedSpan@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

_DWORD *__fastcall Mesh::GenerateGridAntialiasBorder(
        __int64 a1,
        char a2,
        __int64 *a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        __int16 a7,
        _DWORD *a8)
{
  __int64 v8; // r15
  __int64 *v9; // r11
  __int64 v10; // rsi
  int v11; // edi
  int v12; // r12d
  int v14; // ecx
  int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rax
  int v20; // edx
  int v21; // r9d
  int v22; // r12d
  __int64 v23; // rcx
  int v24; // edi
  int v25; // esi
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r15
  __int64 v28; // rdx
  int v29; // eax
  unsigned __int64 v30; // r8
  int v31; // r9d
  int v32; // esi
  __int64 v33; // r10
  __int64 v34; // r11
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  char v38; // cl
  char v39; // di
  int v40; // r11d
  int v41; // ebx
  __int64 v42; // r8
  __int64 v43; // r10
  float v44; // xmm1_4
  unsigned __int64 i; // r9
  int v46; // eax
  float *v47; // rcx
  bool v48; // zf
  float v49; // xmm0_4
  int v50; // eax
  char v51; // r8
  float *v52; // rcx
  float *v53; // rdx
  float v54; // xmm0_4
  float v55; // xmm0_4
  int v56; // r9d
  int v57; // r8d
  unsigned int v58; // edx
  __int64 v59; // r10
  __int64 v60; // rcx
  __int64 v61; // rcx
  __int64 v62; // rcx
  unsigned int v63; // r12d
  char *v64; // r10
  char *v65; // rcx
  char *v66; // r13
  char *v67; // r11
  _DWORD *v68; // r14
  __int64 v69; // r15
  int v70; // eax
  char v71; // r8
  int v72; // ebx
  int v73; // r11d
  __int64 v74; // r9
  char v75; // si
  __int64 v76; // rdi
  float v77; // xmm1_4
  unsigned __int64 v78; // rcx
  unsigned __int64 j; // r10
  int v80; // eax
  float *v81; // rdx
  __int64 v82; // r8
  float v83; // xmm0_4
  char v84; // r8
  int v85; // eax
  int v86; // r11d
  char v87; // si
  int v88; // ebx
  int v89; // r11d
  __int64 v90; // rdi
  __int64 v91; // r9
  float v92; // xmm1_4
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // r10
  int v95; // eax
  float *v96; // rdx
  __int64 v97; // r8
  float v98; // xmm0_4
  __int64 v99; // rcx
  unsigned int v100; // r13d
  __int64 v101; // r8
  int v102; // r11d
  __int16 v103; // si
  int v104; // r10d
  __int64 v105; // r9
  int v106; // ebx
  __int64 v107; // r14
  __int16 v108; // di
  __int16 v109; // r15
  unsigned __int16 v110; // dx
  int v111; // ecx
  __int64 v112; // r12
  __int64 v113; // rcx
  __int64 v114; // rax
  _DWORD *result; // rax
  int v116; // edx
  __int64 v117; // r8
  __int64 v118; // rcx
  char v119; // [rsp+1h] [rbp-BAh] BYREF
  int v120; // [rsp+2h] [rbp-B9h] BYREF
  int v121; // [rsp+6h] [rbp-B5h] BYREF
  char v122; // [rsp+Ah] [rbp-B1h]
  int v123; // [rsp+Eh] [rbp-ADh]
  int v124; // [rsp+12h] [rbp-A9h]
  int v125; // [rsp+16h] [rbp-A5h]
  char *v126; // [rsp+1Ah] [rbp-A1h]
  char *v127; // [rsp+22h] [rbp-99h]
  __int64 *v128; // [rsp+2Ah] [rbp-91h]
  int v129; // [rsp+32h] [rbp-89h]
  __int64 v130; // [rsp+3Ah] [rbp-81h]
  __int64 v131; // [rsp+42h] [rbp-79h]
  char *v132; // [rsp+4Ah] [rbp-71h]
  char *v133; // [rsp+52h] [rbp-69h]
  _BYTE *v134; // [rsp+5Ah] [rbp-61h]
  _DWORD *v135; // [rsp+62h] [rbp-59h]
  _DWORD *v136; // [rsp+6Ah] [rbp-51h]
  __int64 v137; // [rsp+72h] [rbp-49h]
  int v138; // [rsp+7Ah] [rbp-41h] BYREF
  _DWORD v139[3]; // [rsp+7Eh] [rbp-3Dh] BYREF
  int v140; // [rsp+8Ah] [rbp-31h] BYREF
  _DWORD v141[3]; // [rsp+8Eh] [rbp-2Dh] BYREF
  int v142; // [rsp+9Ah] [rbp-21h] BYREF
  _DWORD v143[7]; // [rsp+9Eh] [rbp-1Dh] BYREF

  v8 = a1;
  v9 = a3;
  v10 = a4;
  v137 = a6;
  v11 = 0;
  v135 = a5;
  v131 = a1;
  v12 = *a5;
  v136 = a8;
  v128 = a3;
  v14 = *(_DWORD *)(a1 + 48);
  v123 = *a8;
  v122 = a2;
  v15 = *(_DWORD *)(v8 + 52);
  v130 = a4;
  v124 = v12;
  v129 = v12;
  v125 = 0;
  v121 = 65537;
  v138 = v15 * (v14 - 1);
  v139[1] = v15 - 1;
  v120 = 257;
  v142 = v14;
  v143[0] = v15;
  v143[1] = v14;
  v143[2] = v15;
  v139[2] = v14 * v15 - 1;
  v139[0] = 0;
  v140 = -v15;
  v141[0] = 1;
  v141[1] = v15;
  v141[2] = -1;
  if ( !a2 )
    goto LABEL_46;
  v16 = 0;
  LODWORD(v127) = 0;
  v17 = 0LL;
  v18 = 56LL;
  do
  {
    if ( v16 )
    {
      v19 = v18;
      v134 = (char *)&v120 + v17 + 3;
      v133 = &v119 + v17;
    }
    else
    {
      v134 = (char *)&v121 + 3;
      v133 = (char *)&v120 + 3;
      v19 = 72LL;
    }
    v48 = *(_DWORD *)(v8 + v18 + 4) == 12;
    v132 = (char *)v19;
    if ( v48 )
    {
      v20 = *(_DWORD *)((char *)&v135 + v18) - 1;
      LODWORD(v126) = v20;
      if ( v20 <= 0 )
        goto LABEL_34;
LABEL_7:
      v22 = v11 + v12;
      v23 = *v9;
      v24 = *(_DWORD *)((char *)&v131 + v18);
      v21 = *((_DWORD *)v9 + 2);
      v25 = *(_DWORD *)((char *)&v133 + v18);
      v26 = 0LL;
      *(_DWORD *)((char *)&v137 + v18) = v22;
      v27 = (unsigned int)v20;
      do
      {
        v28 = (int)v26 * v25 * v21;
        v29 = v26++ * v21;
        *(_OWORD *)(v29 + v23 + v22 * v21) = *(_OWORD *)(v28 + v23 + v24 * v21);
      }
      while ( v26 < v27 );
      v30 = 0LL;
      v31 = *(_DWORD *)(v130 + 8);
      v32 = v31 * v25;
      v33 = *(_QWORD *)v130 + v31 * v24;
      v34 = *(_QWORD *)v130 + v31 * v22;
      do
      {
        v35 = (int)v30 * v32;
        v36 = v30++ * v31;
        *(_OWORD *)(v36 + v34) = *(_OWORD *)(v35 + v33);
      }
      while ( v30 < v27 );
      v37 = *(_DWORD *)(v131 + v18 + 4);
      if ( (v37 & 0xC) != 0 )
      {
        if ( (v37 & 8) != 0 )
          v38 = *((_BYTE *)&v120 + v17) == 0;
        else
          v38 = *((_BYTE *)&v120 + v17);
        v10 = v130;
        v39 = *((_BYTE *)&v121 + v17);
        v40 = *(_DWORD *)(v130 + 8);
        v41 = *((_DWORD *)v128 + 2);
        v42 = *(_QWORD *)v130 + v40 * v22;
        v43 = *v128 + v41 * v22;
        if ( v38 )
          v44 = FLOAT_0_5;
        else
          v44 = FLOAT_N0_5;
        for ( i = 0LL; i < v27; ++i )
        {
          v46 = i * v40;
          v47 = (float *)(v43 + (int)i * v41);
          if ( v39 )
          {
            *v47 = v44 + *(float *)(v46 + v42);
            v48 = v47[1] == *(float *)(v46 + v42 + 4);
          }
          else
          {
            v47[1] = v44 + *(float *)(v46 + v42 + 4);
            v48 = *v47 == *(float *)(v46 + v42);
          }
          if ( v48 )
            v49 = FLOAT_0_5;
          else
            v49 = FLOAT_0_70710677;
          *(float *)(v46 + v42 + 8) = v49;
        }
      }
      else
      {
        v10 = v130;
      }
      v8 = v131;
      v50 = *(_DWORD *)&v132[v131];
      if ( (v50 & 0xC) == 0 )
      {
        v9 = v128;
        goto LABEL_33;
      }
      v51 = *v133;
      if ( (v50 & 8) != 0 )
        v51 = v51 == 0;
      v9 = v128;
      v52 = (float *)(*(_QWORD *)v10 + v22 * *(_DWORD *)(v10 + 8));
      v53 = (float *)(*v128 + v22 * *((_DWORD *)v128 + 2));
      if ( v51 )
        v54 = FLOAT_0_5;
      else
        v54 = FLOAT_N0_5;
      if ( *v134 )
      {
        *v53 = v54 + *v52;
        if ( v53[1] == v52[1] )
        {
LABEL_29:
          v55 = FLOAT_0_5;
LABEL_32:
          v52[2] = v55;
LABEL_33:
          v11 = (_DWORD)v126 + v125;
          v12 = v124;
          v125 += (int)v126;
          goto LABEL_34;
        }
      }
      else
      {
        v53[1] = v54 + v52[1];
        if ( *v53 == *v52 )
          goto LABEL_29;
      }
      v55 = FLOAT_0_70710677;
      goto LABEL_32;
    }
    if ( *(_DWORD *)(v19 + v8) == 12 )
    {
      v20 = 1;
      LODWORD(v126) = 1;
      goto LABEL_7;
    }
LABEL_34:
    ++v17;
    v16 = (_DWORD)v127 + 1;
    v18 += 4LL;
    LODWORD(v127) = v16;
  }
  while ( v16 < 4 );
  v56 = 0;
  if ( v11 >= 3 )
  {
    v57 = v12 + 1;
    v58 = (v11 - 3) / 3u + 1;
    v59 = v58;
    v56 = 3 * v58;
    do
    {
      *(_DWORD *)((v57 - 1) * *(_DWORD *)(v10 + 8) + *(_QWORD *)v10 + 12LL) = 0;
      v60 = *v9 + (v57 - 1) * *((_DWORD *)v9 + 2);
      if ( *(char *)(v8 + 76) >= 0 )
        *(_DWORD *)(v60 + 12) = 0;
      else
        *(_BYTE *)(v60 + 15) = 0;
      *(_DWORD *)(*(_DWORD *)(v10 + 8) * v57 + *(_QWORD *)v10 + 12LL) = 0;
      v61 = *v9 + *((_DWORD *)v9 + 2) * v57;
      if ( *(char *)(v8 + 76) >= 0 )
        *(_DWORD *)(v61 + 12) = 0;
      else
        *(_BYTE *)(v61 + 15) = 0;
      *(_DWORD *)((v57 + 1) * *(_DWORD *)(v10 + 8) + *(_QWORD *)v10 + 12LL) = 0;
      v62 = *v9 + (v57 + 1) * *((_DWORD *)v9 + 2);
      if ( *(char *)(v8 + 76) >= 0 )
        *(_DWORD *)(v62 + 12) = 0;
      else
        *(_BYTE *)(v62 + 15) = 0;
      v57 += 3;
      --v59;
    }
    while ( v59 );
  }
  if ( v56 < v11 )
  {
    v116 = v56 + v12;
    v117 = (unsigned int)(v11 - v56);
    do
    {
      *(_DWORD *)(v116 * *(_DWORD *)(v10 + 8) + *(_QWORD *)v10 + 12LL) = 0;
      v118 = *v9 + v116 * *((_DWORD *)v9 + 2);
      if ( *(char *)(v8 + 76) >= 0 )
        *(_DWORD *)(v118 + 12) = 0;
      else
        *(_BYTE *)(v118 + 15) = 0;
      ++v116;
      --v117;
    }
    while ( v117 );
  }
  v124 = v11 + v12;
LABEL_46:
  v63 = 0;
  v134 = (char *)&v143[-1] - v8;
  v64 = (char *)&v141[-1] - v8;
  v65 = (char *)v139 - v8;
  v132 = (char *)&v141[-1] - v8;
  v66 = (char *)&v139[-1] - v8;
  v127 = (char *)v139 - v8;
  v67 = (char *)v141 - v8;
  v126 = (char *)v141 - v8;
  v68 = (_DWORD *)(v8 + 64);
  v133 = (char *)v143 - v8;
  v69 = 0LL;
  while ( 2 )
  {
    v70 = *(v68 - 1);
    if ( (v70 & 0xC) != 0 )
    {
      if ( (v70 & 4) != 0 )
        v71 = *((_BYTE *)&v120 + v69);
      else
        v71 = *((_BYTE *)&v120 + v69) == 0;
      v72 = *(_DWORD *)(v10 + 8) * *(_DWORD *)((char *)v68 + (_QWORD)v64 - 64);
      v73 = *((_DWORD *)v128 + 2) * *(_DWORD *)((char *)v68 + (_QWORD)v64 - 64);
      v74 = *(_QWORD *)v10 + *(_DWORD *)(v10 + 8) * *(_DWORD *)&v66[(_QWORD)v68 - 64];
      v75 = *((_BYTE *)&v121 + v69);
      v76 = *v128 + *((_DWORD *)v128 + 2) * *(_DWORD *)&v66[(_QWORD)v68 - 64];
      if ( v71 )
        v77 = FLOAT_0_5;
      else
        v77 = FLOAT_N0_5;
      v78 = 0LL;
      for ( j = *(unsigned int *)((char *)v68 + (_QWORD)v134 - 64); v78 < j; *(float *)(v80 + v74 + 8) = v83 )
      {
        v80 = v72 * v78;
        v81 = (float *)(v76 + (int)v78 * v73);
        v82 = v72 * (int)v78;
        if ( v75 )
        {
          *v81 = v77 + *(float *)(v80 + v74);
          if ( v81[1] != *(float *)(v82 + v74 + 4) )
            goto LABEL_85;
        }
        else
        {
          v81[1] = v77 + *(float *)(v80 + v74 + 4);
          if ( *v81 != *(float *)(v82 + v74) )
          {
LABEL_85:
            v83 = FLOAT_0_70710677;
            goto LABEL_56;
          }
        }
        v83 = FLOAT_0_5;
LABEL_56:
        ++v78;
      }
      v67 = v126;
      v65 = v127;
    }
    if ( (*v68 & 0xC) != 0 )
    {
      v84 = (*v68 & 4) != 0 ? *((_BYTE *)&v120 + v69 + 1) : *((_BYTE *)&v120 + v69 + 1) == 0;
      v85 = *(_DWORD *)((char *)v68 + (_QWORD)v65 - 64);
      v86 = *(_DWORD *)((char *)v68 + (_QWORD)v67 - 64);
      v87 = *((_BYTE *)&v121 + v69 + 1);
      v88 = *(_DWORD *)(v130 + 8) * v86;
      v89 = *((_DWORD *)v128 + 2) * v86;
      v90 = *v128 + *((_DWORD *)v128 + 2) * v85;
      v91 = *(_QWORD *)v130 + *(_DWORD *)(v130 + 8) * v85;
      v92 = v84 ? FLOAT_0_5 : FLOAT_N0_5;
      v93 = 0LL;
      v94 = *(unsigned int *)((char *)v68 + (_QWORD)v133 - 64);
      if ( *(_DWORD *)((char *)v68 + (_QWORD)v133 - 64) )
      {
        while ( 2 )
        {
          v95 = v88 * v93;
          v96 = (float *)(v90 + (int)v93 * v89);
          v97 = v88 * (int)v93;
          if ( v87 )
          {
            *v96 = v92 + *(float *)(v95 + v91);
            if ( v96[1] == *(float *)(v97 + v91 + 4) )
              goto LABEL_66;
LABEL_87:
            v98 = FLOAT_0_70710677;
          }
          else
          {
            v96[1] = v92 + *(float *)(v95 + v91 + 4);
            if ( *v96 != *(float *)(v97 + v91) )
              goto LABEL_87;
LABEL_66:
            v98 = FLOAT_0_5;
          }
          ++v93;
          *(float *)(v95 + v91 + 8) = v98;
          if ( v93 >= v94 )
            break;
          continue;
        }
      }
    }
    v64 = v132;
    v63 += 2;
    v65 = v127;
    v69 += 2LL;
    v67 = v126;
    v68 += 2;
    v10 = v130;
    if ( v63 < 4 )
      continue;
    break;
  }
  if ( v122 )
  {
    v99 = v131 - (_QWORD)&v138;
    v100 = 0;
    v131 -= (__int64)&v138;
    v101 = 0LL;
    do
    {
      if ( *(_DWORD *)((char *)&v139[v101 + 14] + v99) == 12 )
      {
        v102 = v139[v101 - 1];
        v103 = v129;
        v104 = v143[v101 + 3] - v129;
        if ( v143[v101 - 1] - 1 > 0 )
        {
          v105 = v123;
          v106 = v104 + 1;
          v107 = (unsigned int)(v143[v101 - 1] - 1);
          do
          {
            v108 = v103 + v104;
            v109 = v102 + LOWORD(v141[v101 - 1]);
            v110 = v103 + v106 % v125;
            v111 = *((_DWORD *)v128 + 2);
            v112 = v111 * (unsigned __int16)(v103 + v104);
            v113 = v111 * v110;
            if ( *(float *)(v112 + *v128) != *(float *)(v113 + *v128)
              || *(float *)(v112 + *v128 + 4) != *(float *)(v113 + *v128 + 4) )
            {
              v114 = v137;
              v123 += 6;
              *(_WORD *)(v137 + 2 * v105) = v108;
              *(_WORD *)(v114 + 2 * v105 + 2) = v110;
              *(_WORD *)(v114 + 2 * v105 + 4) = v109;
              *(_WORD *)(v114 + 2 * v105 + 6) = v108;
              *(_WORD *)(v114 + 2 * v105 + 8) = v109;
              *(_WORD *)(v114 + 2 * v105 + 10) = v102;
              v105 += 6LL;
            }
            v102 += v141[v101 - 1];
            LOWORD(v104) = v104 + 1;
            v103 = v129;
            ++v106;
            --v107;
          }
          while ( v107 );
          v99 = v131;
        }
      }
      ++v100;
      ++v101;
    }
    while ( v100 < 4 );
  }
  *v135 = v124;
  result = v136;
  *v136 = v123;
  return result;
}
