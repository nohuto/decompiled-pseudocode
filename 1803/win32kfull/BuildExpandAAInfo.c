/*
 * XREFs of BuildExpandAAInfo @ 0x1C0116CF0
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C00D2228 (_ALIGN_MEM.c)
 *     DivFD6 @ 0x1C00D331C (DivFD6.c)
 *     BuildRepData @ 0x1C0117040 (BuildRepData.c)
 *     RaisePower @ 0x1C0133408 (RaisePower.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

_DWORD *__fastcall BuildExpandAAInfo(
        __int64 a1,
        int a2,
        int *a3,
        signed int *a4,
        int a5,
        signed int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        unsigned int a10)
{
  unsigned int v10; // r12d
  signed int v13; // ecx
  int v14; // r13d
  __int16 v15; // r8
  int v16; // eax
  unsigned int v17; // r13d
  unsigned int v18; // edx
  int v19; // r14d
  int v20; // r15d
  int v21; // r9d
  int v22; // edi
  int v23; // r11d
  unsigned int v24; // ecx
  unsigned __int64 v25; // rax
  unsigned int v26; // edx
  unsigned int v27; // ecx
  int v28; // eax
  unsigned int v29; // esi
  int v30; // r10d
  int v31; // eax
  unsigned int v32; // r14d
  char *v33; // rax
  __int64 v34; // r8
  _DWORD *v35; // rbx
  _QWORD *v36; // r15
  _OWORD *v37; // r14
  int v38; // ecx
  int v39; // edx
  signed int v40; // eax
  int v41; // eax
  __int16 v42; // cx
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  int *v49; // r10
  signed int *v50; // r13
  _DWORD *v51; // r11
  _DWORD *v52; // r12
  unsigned __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned int v56; // r10d
  unsigned __int64 v57; // r11
  unsigned __int64 v58; // rax
  unsigned int v59; // eax
  unsigned __int64 v60; // rcx
  int *v61; // r11
  __int64 v62; // r10
  __int64 v63; // rax
  int *v64; // r9
  int v65; // r14d
  unsigned int *v66; // rdx
  int *v67; // r12
  int v68; // esi
  int *v69; // rdi
  int v70; // eax
  __int64 v71; // r8
  __int64 v72; // r10
  _QWORD *v73; // rcx
  __int64 v74; // rax
  unsigned int v75; // edx
  int v76; // r9d
  unsigned int v77; // r10d
  signed int v78; // ebx
  int v79; // ecx
  unsigned int v80; // r12d
  unsigned int v81; // esi
  int *v82; // rdx
  __int64 v83; // r8
  int *v84; // r11
  int v85; // ecx
  unsigned int v86; // r10d
  int *v87; // r9
  __int64 v88; // rax
  int *v89; // r9
  int v90; // esi
  int v91; // ebx
  int *v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // r10
  int v96; // eax
  int v97; // eax
  int v98; // r9d
  signed int v99; // ecx
  int v100; // eax
  __int64 *v101; // rcx
  int v102; // eax
  int v103; // edx
  __int64 i; // rcx
  __int64 v105; // rcx
  __int16 v106; // ax
  unsigned int v107; // [rsp+20h] [rbp-C9h] BYREF
  unsigned int v108; // [rsp+24h] [rbp-C5h]
  unsigned int v109; // [rsp+28h] [rbp-C1h]
  unsigned int v110; // [rsp+2Ch] [rbp-BDh]
  int v111; // [rsp+30h] [rbp-B9h]
  unsigned int v112; // [rsp+34h] [rbp-B5h] BYREF
  int v113; // [rsp+38h] [rbp-B1h]
  signed int v114; // [rsp+3Ch] [rbp-ADh]
  int v115; // [rsp+40h] [rbp-A9h] BYREF
  int v116; // [rsp+44h] [rbp-A5h]
  int v117; // [rsp+48h] [rbp-A1h]
  int *v118; // [rsp+50h] [rbp-99h]
  int *v119; // [rsp+58h] [rbp-91h]
  int v120; // [rsp+60h] [rbp-89h]
  int v121; // [rsp+64h] [rbp-85h]
  signed int v122; // [rsp+68h] [rbp-81h]
  int v123; // [rsp+6Ch] [rbp-7Dh]
  __int64 v124; // [rsp+70h] [rbp-79h]
  int v125; // [rsp+78h] [rbp-71h]
  unsigned int *v126; // [rsp+80h] [rbp-69h]
  _QWORD *v127; // [rsp+88h] [rbp-61h]
  _QWORD v128[4]; // [rsp+90h] [rbp-59h] BYREF
  _DWORD *v129; // [rsp+B0h] [rbp-39h]
  int *v130; // [rsp+B8h] [rbp-31h]
  signed int *v131; // [rsp+C0h] [rbp-29h]
  _DWORD *v132; // [rsp+C8h] [rbp-21h]
  _DWORD *v133; // [rsp+D0h] [rbp-19h]
  int *v134; // [rsp+D8h] [rbp-11h]
  __int64 v135; // [rsp+E0h] [rbp-9h]
  int v136; // [rsp+160h] [rbp+77h]

  v10 = 0;
  v111 = a2;
  v131 = a4;
  v13 = *a4;
  v14 = *a4;
  v130 = a3;
  v15 = a2;
  v16 = *a3;
  v17 = v14 - *a3;
  v18 = a7 - a6;
  v132 = a8;
  v133 = a9;
  v122 = 0;
  v116 = 0;
  v123 = 0;
  v110 = v16;
  v136 = a7 - a6;
  if ( (int)v17 <= 0 )
    return 0LL;
  v19 = *a8;
  v20 = *a9;
  v21 = 0;
  if ( v16 >= 0 )
    v21 = v16;
  v120 = *a8;
  v113 = v21;
  if ( v13 > a5 )
    v13 = a5;
  v22 = -1;
  v114 = v13;
  v121 = v20;
  v109 = -1;
  v117 = 0;
  if ( v19 >= v20 || (int)v17 >= (int)v18 )
    return 0LL;
  v23 = -1;
  if ( (v15 & 0x4A80) != 0 )
  {
    v24 = v13 - v21;
    if ( v24 + 3 < v24 )
      return 0LL;
    v25 = 2LL * (v24 + 3);
    if ( v25 > 0xFFFFFFFF )
      return 0LL;
    v26 = 2 * (v24 + 3);
    v27 = v25 + 8;
    v28 = -1;
    if ( v26 + 8 >= v26 )
      v28 = v26 + 8;
    v29 = v28 & 0xFFFFFFF8;
    if ( v27 < v26 )
      return 0LL;
    v18 = v136;
  }
  else
  {
    v29 = 0;
  }
  if ( (v15 & 0x4200) != 0 )
  {
    v30 = 0;
    v107 = 0;
    v108 = 0;
  }
  else
  {
    if ( v18 + v17 - 1 < v18 )
      return 0LL;
    v54 = 2LL * ((v18 + v17 - 1) / v17);
    if ( v54 > 0xFFFFFFFF )
      return 0LL;
    if ( !(_DWORD)v54 )
      return 0LL;
    v108 = v54 - 1;
    v55 = 4LL * (unsigned int)(v54 - 1);
    if ( v55 > 0xFFFFFFFF )
      return 0LL;
    v112 = 4 * (v54 - 1);
    if ( (int)ALIGN_MEM(&v112, v55) < 0 )
      return 0LL;
    v58 = 8LL * v56;
    if ( v58 > v57 )
      return 0LL;
    v107 = 8 * v56;
    if ( (int)ALIGN_MEM(&v107, v58) < 0 )
      return 0LL;
    v59 = v107;
    v107 = v112;
    if ( v59 + v112 < v59 )
      return 0LL;
    v60 = 8LL * (unsigned int)(v20 - v19);
    if ( v60 > 0xFFFFFFFF || (int)ALIGN_MEM(&v115, v60) < 0 )
      return 0LL;
    v10 = v115;
  }
  v31 = v23;
  if ( a10 + 8 >= a10 )
    v31 = a10 + 8;
  v32 = v31 & 0xFFFFFFF8;
  if ( a10 + 8 < a10
    || v10 + v29 < v29
    || v32 + v10 + v29 < v10 + v29
    || v32 + v10 + v29 + v30 < v32 + v10 + v29
    || v32 + v10 + v29 + v30 + 240 < v32 + v10 + v29 + v30 )
  {
    return 0LL;
  }
  v33 = (char *)EngAllocMem(1u, v32 + v10 + v29 + v30 + 240, 0x34355448u);
  v34 = 0LL;
  v129 = v33;
  v35 = v33;
  if ( !v33 )
    return v35;
  v36 = v33 + 240;
  if ( v32 )
  {
    *((_QWORD *)v33 + 4) = v36;
    v36 = (_QWORD *)((char *)v36 + v32);
  }
  if ( !v29 )
  {
    v42 = v111;
    goto LABEL_31;
  }
  v37 = v33 + 48;
  v38 = v113;
  v39 = v120;
  *((_DWORD *)v33 + 13) = v136;
  v40 = v114;
  v35[17] = v114;
  v35[18] = v39;
  v35[19] = v121;
  v35[16] = v38;
  *((_QWORD *)v35 + 11) = v36;
  v35[12] = v17;
  *((_QWORD *)v35 + 12) = (char *)v36 + 2 * (v40 - v38);
  v36 = (_QWORD *)((char *)v36 + v29);
  v41 = BuildRepData(v35 + 12, v110, (unsigned int)a6);
  v34 = 0LL;
  if ( v41 )
  {
    v42 = v111;
    v43 = *((_OWORD *)v35 + 4);
    *((_OWORD *)v35 + 7) = *v37;
    v44 = *((_OWORD *)v35 + 5);
    *((_OWORD *)v35 + 8) = v43;
    v45 = *((_OWORD *)v35 + 6);
    *((_OWORD *)v35 + 9) = v44;
    *((_OWORD *)v35 + 10) = v45;
    v46 = *((_OWORD *)v35 + 8);
    *((_OWORD *)v35 + 11) = *((_OWORD *)v35 + 7);
    v47 = *((_OWORD *)v35 + 9);
    *((_OWORD *)v35 + 12) = v46;
    v48 = *((_OWORD *)v35 + 10);
    *((_OWORD *)v35 + 13) = v47;
    *((_OWORD *)v35 + 14) = v48;
    if ( (v42 & 0x4000) != 0 )
    {
      v35[16] -= *((unsigned __int8 *)v35 + 80);
      v35[17] += *((unsigned __int8 *)v35 + 81);
    }
LABEL_31:
    if ( !v10 )
    {
      v49 = v130;
      v50 = v131;
      v51 = v132;
      v52 = v133;
      *v130 = v35[16];
      *v50 = v35[17] - 1;
      *v51 = v35[18];
      *v52 = v35[19] - 1;
LABEL_33:
      *v35 = *v50 - *v49 + 1;
      v35[1] = *v52 - *v51 + 1;
      return v35;
    }
    v61 = (int *)v108;
    v62 = 1000000LL;
    v63 = v107;
    v64 = (int *)v108;
    v65 = 4;
    v66 = (unsigned int *)((char *)v36 + v10);
    *((_QWORD *)v35 + 5) = v36;
    v126 = v66;
    v127 = (_QWORD *)((char *)v66 + v63);
    v118 = v61;
    v124 = 1000000LL;
    v67 = (int *)&v66[(unsigned __int64)(unsigned int)v61 >> 1];
    v119 = v67;
    *v67 = 1000000;
    if ( (v42 & 0x200) != 0 )
    {
      *((_WORD *)v35 + 4) |= 4u;
      goto LABEL_66;
    }
    v68 = v136 - v17;
    if ( (int)(v136 - v17) <= 0 )
      goto LABEL_62;
    v69 = (int *)v66;
    do
    {
      if ( --v67 < v69 )
        break;
      v70 = DivFD6(v68, v136);
      if ( v70 < 500000 )
      {
        v71 = 0LL;
LABEL_59:
        v70 = RaisePower((unsigned int)v70, 1414214LL, v71);
        goto LABEL_60;
      }
      if ( v70 > 500000 )
      {
        v71 = 1LL;
        goto LABEL_59;
      }
LABEL_60:
      v68 -= v17;
      v72 = v124;
      v34 = 0LL;
      *++v119 = v70;
      *v67 = v70;
      v62 = v72 + 2LL * v70;
      v124 = v62;
    }
    while ( v68 > 0 );
    v35 = v129;
    v22 = v109;
    v64 = v118;
    v66 = v126;
    LODWORD(v61) = v108;
LABEL_62:
    if ( (_DWORD)v61 )
    {
      v73 = v127;
      do
      {
        v74 = *v66++;
        v34 += v74;
        *v73++ = v34;
        v64 = (int *)((char *)v64 - 1);
      }
      while ( v64 );
    }
    LODWORD(v34) = 0;
LABEL_66:
    v75 = 0;
    v124 = (int)v17 * v62;
    v76 = v136;
    v112 = 0;
    v107 = 0;
    v77 = v136 + v17 * ((unsigned int)v61 >> 1);
    v109 = v77;
    if ( v136 )
    {
      v78 = v110;
      v79 = ((unsigned int)v61 >> 1) - v136;
      while ( 1 )
      {
        v111 = v79 + 1;
        v125 = v76 - 1;
        v80 = (unsigned int)v61;
        v81 = v77;
        memset(v128, 0, sizeof(v128));
        v82 = (int *)v126;
        v77 = v109 - v17 + v136;
        v83 = v128[3];
        v84 = (int *)v128[0];
        if ( v17 < v109 )
          v77 = v109 - v17;
        v109 = v77;
        LOWORD(v110) = 0;
        if ( !v108 )
        {
          v92 = (int *)v128[2];
          v89 = (int *)v128[1];
          v90 = v113;
          goto LABEL_87;
        }
        v118 = (int *)v128[2];
        v119 = (int *)v128[1];
        do
        {
          while ( 1 )
          {
            v134 = v82;
            v85 = v80;
            v86 = v80--;
            v87 = v82;
            v88 = *v82++;
            if ( v81 >= v17 )
            {
LABEL_94:
              if ( v81 / v17 <= v86 )
                v85 = v81 / v17;
              v115 = v85;
              if ( v108 - v80 == 1 )
              {
                v95 = 0LL;
              }
              else
              {
                v95 = v127[v108 - v80 - 2];
                v85 = v115;
              }
              v83 += v17 * (v127[v108 - v80 - 2 + v85] - v95);
              v81 -= v17 * v115;
              v80 += 1 - v115;
              v87 = &v134[v115 - 1];
              goto LABEL_100;
            }
            if ( v111 < 0 || v80 >= v111 )
              break;
            if ( v81 >= v17 )
              goto LABEL_94;
            v83 += v88 * v17;
            v81 -= v17;
LABEL_100:
            v128[3] = v83;
            v82 = v87 + 1;
            if ( !v80 )
            {
              v89 = v119;
              v90 = v113;
              goto LABEL_86;
            }
          }
          if ( v81 )
            v83 += v88 * v81;
          v89 = v118;
          v84 = v119;
          v118 = (int *)v83;
          v83 = v88 * (v17 - v81);
          v128[2] = v118;
          v128[3] = v83;
          v81 += v136 - v17;
          v128[0] = v119;
          v119 = v89;
          v128[1] = v89;
        }
        while ( v80 );
        v90 = v113;
        v91 = v78 + 1;
        if ( v91 >= v113 && v91 < v114 )
        {
          ++v117;
          ++v91;
          v110 = 0x8000;
          if ( v91 < v113 || v91 >= v114 )
            LOWORD(v110) = -16384;
        }
        v78 = v91 - 1;
LABEL_86:
        v92 = v118;
        v77 = v109;
LABEL_87:
        if ( v78 < v90 || v78 >= v114 || a6 < v120 || a6 >= v121 )
        {
          if ( v22 == -1 )
            goto LABEL_111;
          goto LABEL_112;
        }
        HIWORD(v135) = (v83 << 13) / v124;
        v93 = (v83 << 13) % v124 + ((_QWORD)v92 << 13);
        WORD2(v135) = v93 / v124;
        if ( v89 )
        {
          ++v107;
          WORD1(v135) = (v93 % v124 + ((_QWORD)v89 << 13)) / v124;
          if ( v84 )
          {
            ++v112;
            v94 = ((v93 % v124 + ((_QWORD)v89 << 13)) % v124 + ((_QWORD)v84 << 13)) / v124;
            goto LABEL_105;
          }
        }
        else
        {
          WORD1(v135) = 0;
        }
        LOWORD(v94) = 0;
LABEL_105:
        LOWORD(v135) = v110 | v94;
        *v36++ = v135;
        v122 = v78;
        v96 = a6;
        v123 = a6;
        if ( v22 != -1 )
          v96 = v116;
        v116 = v96;
        v97 = v78;
        if ( v22 != -1 )
          v97 = v22;
        v22 = v97;
LABEL_111:
        v76 = v125;
        v79 = v111;
        LODWORD(v61) = v108;
        ++a6;
        if ( !v125 )
        {
LABEL_112:
          v35 = v129;
          v75 = v112;
          LODWORD(v34) = v107;
          goto LABEL_114;
        }
      }
    }
    v90 = v113;
LABEL_114:
    if ( v22 != -1 )
    {
      v98 = v114;
      v99 = v122 + 1;
      if ( v122 + 1 < v90 || v99 >= v114 )
        v99 = v122;
      v100 = v123;
      v49 = v130;
      v50 = v131;
      v51 = v132;
      v52 = v133;
      *v130 = v22;
      *v50 = v99;
      *v51 = v116;
      *v52 = v100;
      v101 = (__int64 *)*((_QWORD *)v35 + 5);
      v35[5] = v117;
      v102 = 2;
      v35[4] = v36 - v101;
      if ( (_DWORD)v34 )
        v102 = (v75 != 0) + 3;
      v35[6] = v102;
      v135 = *v101;
      if ( (v135 & 0x8000u) == 0LL )
      {
        if ( v22 + 1 < v90 || v22 + 1 >= v98 )
          *((_WORD *)v35 + 4) |= 2u;
      }
      else
      {
        --v22;
        v65 = 3;
      }
      v103 = 0;
      for ( i = 0LL; i < (unsigned int)v65; ++i )
      {
        if ( (*((_WORD *)&v135 + i) & 0x3FFF) != 0 )
          break;
        ++v103;
      }
      if ( v65 <= v103 )
      {
        v106 = *((_WORD *)v35 + 6);
      }
      else
      {
        v105 = (unsigned int)(v65 - v103);
        do
        {
          if ( v22 < v90 || v22 >= v98 )
          {
            *((_WORD *)v35 + 6) += 16;
          }
          else
          {
            *v49 = v22;
            ++*((_WORD *)v35 + 6);
          }
          v106 = *((_WORD *)v35 + 6);
          --v22;
          --v105;
        }
        while ( v105 );
      }
      if ( v106 && v22 >= v90 && v22 < v98 )
      {
        *v49 = v22;
        *((_WORD *)v35 + 4) |= 1u;
      }
      goto LABEL_33;
    }
  }
  EngFreeMem(v35);
  return 0LL;
}
