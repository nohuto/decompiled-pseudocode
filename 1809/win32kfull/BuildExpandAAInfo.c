/*
 * XREFs of BuildExpandAAInfo @ 0x1C00E64A0
 * Callers:
 *     <none>
 * Callees:
 *     RaisePower @ 0x1C00126AC (RaisePower.c)
 *     DivFD6 @ 0x1C0015444 (DivFD6.c)
 *     _ALIGN_MEM @ 0x1C0015FFC (_ALIGN_MEM.c)
 *     BuildRepData @ 0x1C00E67F0 (BuildRepData.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

_DWORD *__fastcall BuildExpandAAInfo(
        __int64 a1,
        unsigned int a2,
        int *a3,
        _DWORD *a4,
        int a5,
        signed int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        unsigned int a10)
{
  int v12; // ecx
  int v13; // r13d
  __int16 v14; // r8
  int v15; // eax
  unsigned int v16; // r13d
  int v17; // edx
  int v18; // r14d
  int v19; // r12d
  int v20; // r9d
  int v21; // edi
  int v22; // r11d
  unsigned int v23; // ecx
  unsigned __int64 v24; // rax
  unsigned int v25; // edx
  unsigned int v26; // ecx
  int v27; // eax
  unsigned int v28; // esi
  int v29; // r10d
  unsigned int v30; // r12d
  int v31; // eax
  unsigned int v32; // r14d
  char *v33; // rax
  _DWORD *v34; // rbx
  _QWORD *v35; // r15
  _OWORD *v36; // r14
  int v37; // ecx
  int v38; // edx
  int v39; // eax
  __int64 v40; // rdx
  __int16 v41; // cx
  __int128 v42; // xmm1
  __int128 v43; // xmm0
  __int128 v44; // xmm1
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  int *v48; // r11
  _DWORD *v49; // rcx
  _DWORD *v50; // r12
  _DWORD *v51; // r13
  unsigned int v53; // ecx
  unsigned __int64 v54; // rcx
  unsigned int v55; // edx
  unsigned __int64 v56; // rax
  unsigned int v57; // r10d
  unsigned __int64 v58; // r11
  unsigned int v59; // edx
  unsigned __int64 v60; // rax
  unsigned int v61; // eax
  unsigned __int64 v62; // rcx
  int *v63; // r9
  __int64 v64; // r10
  int v65; // r14d
  unsigned int *v66; // rdx
  unsigned __int64 v67; // rax
  _QWORD *v68; // r11
  int *v69; // r12
  int v70; // esi
  int *v71; // rdi
  int v72; // eax
  char v73; // r8
  __int64 v74; // r10
  __int64 v75; // r8
  _QWORD *v76; // rcx
  __int64 v77; // rax
  unsigned int v78; // r11d
  unsigned int v79; // r8d
  int v80; // r9d
  unsigned int v81; // r10d
  unsigned int v82; // edx
  int v83; // ebx
  int v84; // ecx
  unsigned int v85; // esi
  unsigned int v86; // r12d
  int v87; // r9d
  int *v88; // rdx
  int *v89; // r11
  unsigned int v90; // r8d
  __int64 v91; // r8
  int v92; // ecx
  unsigned int v93; // r10d
  __int64 v94; // rax
  __int64 v95; // rcx
  int *v96; // rax
  int *v97; // r10
  int v98; // esi
  int v99; // ebx
  int *v100; // rcx
  __int64 v101; // rax
  __int64 v102; // r10
  int v103; // eax
  int v104; // eax
  int v105; // r9d
  int v106; // ecx
  int *v107; // rax
  __int64 *v108; // rcx
  int v109; // eax
  int v110; // edx
  __int64 i; // rcx
  __int64 v112; // rcx
  __int16 v113; // ax
  unsigned int v114; // [rsp+20h] [rbp-C9h] BYREF
  unsigned int v115; // [rsp+24h] [rbp-C5h]
  int v116; // [rsp+28h] [rbp-C1h]
  unsigned int v117; // [rsp+2Ch] [rbp-BDh]
  unsigned int v118; // [rsp+30h] [rbp-B9h] BYREF
  int v119; // [rsp+34h] [rbp-B5h]
  int v120; // [rsp+38h] [rbp-B1h]
  int v121; // [rsp+3Ch] [rbp-ADh]
  int v122; // [rsp+40h] [rbp-A9h] BYREF
  int v123; // [rsp+44h] [rbp-A5h]
  int v124; // [rsp+48h] [rbp-A1h]
  _DWORD *v125; // [rsp+50h] [rbp-99h]
  int *v126; // [rsp+58h] [rbp-91h]
  int v127; // [rsp+60h] [rbp-89h]
  int v128; // [rsp+64h] [rbp-85h]
  int v129; // [rsp+68h] [rbp-81h]
  int v130; // [rsp+6Ch] [rbp-7Dh]
  int *v131; // [rsp+70h] [rbp-79h]
  __int64 v132; // [rsp+78h] [rbp-71h]
  int *v133; // [rsp+80h] [rbp-69h]
  int v134; // [rsp+88h] [rbp-61h]
  int *v135; // [rsp+90h] [rbp-59h]
  _QWORD *v136; // [rsp+98h] [rbp-51h]
  _QWORD v137[4]; // [rsp+A0h] [rbp-49h] BYREF
  _DWORD *v138; // [rsp+C0h] [rbp-29h]
  int *v139; // [rsp+C8h] [rbp-21h]
  _DWORD *v140; // [rsp+D0h] [rbp-19h]
  _DWORD *v141; // [rsp+D8h] [rbp-11h]
  __int64 v142; // [rsp+E0h] [rbp-9h]
  int v143; // [rsp+160h] [rbp+77h]

  v117 = a2;
  v125 = a4;
  v12 = *a4;
  v13 = *a4;
  v139 = a3;
  v14 = a2;
  v15 = *a3;
  v16 = v13 - *a3;
  v17 = a7 - a6;
  v140 = a8;
  v141 = a9;
  v129 = 0;
  v123 = 0;
  v130 = 0;
  v116 = v15;
  v143 = a7 - a6;
  if ( (int)v16 <= 0 )
    return 0LL;
  v18 = *a8;
  v19 = *a9;
  v20 = 0;
  if ( v15 >= 0 )
    v20 = v15;
  v127 = *a8;
  v119 = v20;
  if ( v12 > a5 )
    v12 = a5;
  v21 = -1;
  v120 = v12;
  v128 = v19;
  v121 = -1;
  v124 = 0;
  if ( v18 >= v19 || (int)v16 >= v17 )
    return 0LL;
  v22 = -1;
  if ( (v14 & 0x4A80) != 0 )
  {
    v23 = v12 - v20;
    if ( v23 + 3 < v23 )
      return 0LL;
    v24 = 2LL * (v23 + 3);
    if ( v24 > 0xFFFFFFFF )
      return 0LL;
    v25 = 2 * (v23 + 3);
    v26 = v24 + 8;
    v27 = -1;
    if ( v25 + 8 >= v25 )
      v27 = v25 + 8;
    v28 = v27 & 0xFFFFFFF8;
    if ( v26 < v25 )
      return 0LL;
    v17 = v143;
  }
  else
  {
    v28 = 0;
  }
  if ( (v14 & 0x4200) != 0 )
  {
    v29 = 0;
    v114 = 0;
    v30 = 0;
    v115 = 0;
  }
  else
  {
    v53 = v17 + v16 - 1;
    if ( v53 < v17 )
      return 0LL;
    v54 = 2LL * (v53 / v16);
    if ( v54 > 0xFFFFFFFF || !(_DWORD)v54 )
      return 0LL;
    v55 = -1;
    v56 = 4LL * (unsigned int)(v54 - 1);
    v115 = v54 - 1;
    if ( v56 <= 0xFFFFFFFF )
      v55 = 4 * (v54 - 1);
    v118 = v55;
    if ( v56 > 0xFFFFFFFF || (int)ALIGN_MEM(&v118, v55) < 0 )
      return 0LL;
    v59 = v58;
    v60 = 8LL * v57;
    if ( v60 <= v58 )
      v59 = 8 * v57;
    v114 = v59;
    if ( v60 > v58 )
      return 0LL;
    if ( (int)ALIGN_MEM(&v114, v59) < 0 )
      return 0LL;
    v61 = v114;
    v114 = v118;
    if ( v61 + v118 < v61 )
      return 0LL;
    v62 = 8LL * (unsigned int)(v19 - v18);
    if ( v62 > 0xFFFFFFFF || (int)ALIGN_MEM(&v122, v62) < 0 )
      return 0LL;
    v30 = v122;
  }
  v31 = v22;
  if ( a10 + 8 >= a10 )
    v31 = a10 + 8;
  v32 = v31 & 0xFFFFFFF8;
  if ( a10 + 8 >= a10
    && v30 + v28 >= v28
    && v32 + v30 + v28 >= v30 + v28
    && v32 + v30 + v28 + v29 >= v32 + v30 + v28
    && v32 + v30 + v28 + v29 + 240 >= v32 + v30 + v28 + v29 )
  {
    v33 = (char *)EngAllocMem(1u, v32 + v30 + v28 + v29 + 240, 0x34355448u);
    v138 = v33;
    v34 = v33;
    if ( !v33 )
      return v34;
    v35 = v33 + 240;
    if ( v32 )
    {
      *((_QWORD *)v33 + 4) = v35;
      v35 = (_QWORD *)((char *)v35 + v32);
    }
    if ( v28 )
    {
      v36 = v33 + 48;
      v37 = v119;
      v38 = v127;
      *((_DWORD *)v33 + 13) = v143;
      v39 = v120;
      v34[17] = v120;
      v34[16] = v37;
      v34[18] = v38;
      v34[19] = v128;
      v40 = (unsigned int)v116;
      *((_QWORD *)v34 + 12) = (char *)v35 + 2 * (v39 - v37);
      *((_QWORD *)v34 + 11) = v35;
      v35 = (_QWORD *)((char *)v35 + v28);
      v34[12] = v16;
      if ( !(unsigned int)BuildRepData(v34 + 12, v40, (unsigned int)a6) )
      {
LABEL_122:
        EngFreeMem(v34);
        return 0LL;
      }
      v41 = v117;
      v42 = *((_OWORD *)v34 + 4);
      *((_OWORD *)v34 + 7) = *v36;
      v43 = *((_OWORD *)v34 + 5);
      *((_OWORD *)v34 + 8) = v42;
      v44 = *((_OWORD *)v34 + 6);
      *((_OWORD *)v34 + 9) = v43;
      *((_OWORD *)v34 + 10) = v44;
      v45 = *((_OWORD *)v34 + 8);
      *((_OWORD *)v34 + 11) = *((_OWORD *)v34 + 7);
      v46 = *((_OWORD *)v34 + 9);
      *((_OWORD *)v34 + 12) = v45;
      v47 = *((_OWORD *)v34 + 10);
      *((_OWORD *)v34 + 13) = v46;
      *((_OWORD *)v34 + 14) = v47;
      if ( (v41 & 0x4000) != 0 )
      {
        v34[16] -= *((unsigned __int8 *)v34 + 80);
        v34[17] += *((unsigned __int8 *)v34 + 81);
      }
    }
    else
    {
      v41 = v117;
    }
    if ( !v30 )
    {
      v48 = v139;
      v49 = v125;
      v50 = v140;
      v51 = v141;
      *v139 = v34[16];
      *v49 = v34[17] - 1;
      *v50 = v34[18];
      *v51 = v34[19] - 1;
LABEL_33:
      *v34 = *v49 - *v48 + 1;
      v34[1] = *v51 - *v50 + 1;
      return v34;
    }
    v63 = (int *)v115;
    v64 = 1000000LL;
    v65 = 4;
    v66 = (unsigned int *)((char *)v35 + v30);
    v67 = (unsigned __int64)v115 >> 1;
    v68 = (_QWORD *)((char *)v66 + v114);
    *((_QWORD *)v34 + 5) = v35;
    v135 = (int *)v66;
    v136 = v68;
    v133 = v63;
    v69 = (int *)&v66[v67];
    v126 = v69;
    *v69 = 1000000;
    v132 = 1000000LL;
    if ( (v41 & 0x200) != 0 )
    {
      *((_WORD *)v34 + 4) |= 4u;
LABEL_68:
      v78 = v115;
      v79 = 0;
      v80 = v143;
      v132 = (int)v16 * v64;
      v81 = 0;
      v118 = 0;
      v114 = 0;
      v82 = v143 + v16 * (v115 >> 1);
      v117 = v82;
      if ( v143 )
      {
        v83 = v116;
        v84 = (v115 >> 1) - v143;
        while ( 1 )
        {
          v85 = v82;
          v116 = v84 + 1;
          v134 = v80 - 1;
          v86 = v78;
          memset(v137, 0, sizeof(v137));
          v87 = v143;
          v88 = v135;
          v89 = (int *)v137[0];
          v90 = v117 - v16 + v143;
          LOWORD(v121) = 0;
          if ( v16 < v117 )
            v90 = v117 - v16;
          v117 = v90;
          v91 = v137[3];
          if ( !v115 )
          {
            v100 = (int *)v137[2];
            v97 = (int *)v137[1];
            v98 = v119;
            goto LABEL_89;
          }
          v131 = (int *)v137[2];
          v126 = (int *)v137[1];
          do
          {
            while ( 1 )
            {
              v133 = v88;
              v92 = v86;
              v93 = v86--;
              v94 = *v88++;
              if ( v85 >= v16 )
              {
LABEL_96:
                if ( v85 / v16 <= v93 )
                  v92 = v85 / v16;
                v122 = v92;
                if ( v115 - v86 == 1 )
                  v102 = 0LL;
                else
                  v102 = v136[v115 - v86 - 2];
                v87 = v143;
                v91 += v16 * (v136[v115 - v86 - 2 + v92] - v102);
                v85 -= v16 * v122;
                v86 += 1 - v122;
                v96 = &v133[v122 - 1];
                goto LABEL_102;
              }
              if ( v116 < 0 || v86 >= v116 )
                break;
              if ( v85 >= v16 )
                goto LABEL_96;
              v95 = v94 * v16;
              v96 = v133;
              v91 += v95;
              v85 -= v16;
LABEL_102:
              v137[3] = v91;
              v88 = v96 + 1;
              if ( !v86 )
              {
                v97 = v126;
                v98 = v119;
                goto LABEL_88;
              }
            }
            if ( v85 )
              v91 += v94 * v85;
            v97 = v131;
            v89 = v126;
            v131 = (int *)v91;
            v91 = v94 * (v16 - v85);
            v137[2] = v131;
            v137[3] = v91;
            v85 += v87 - v16;
            v137[0] = v126;
            v126 = v97;
            v137[1] = v97;
          }
          while ( v86 );
          v98 = v119;
          v99 = v83 + 1;
          if ( v99 >= v119 && v99 < v120 )
          {
            ++v124;
            ++v99;
            v121 = 0x8000;
            if ( v99 < v119 || v99 >= v120 )
              LOWORD(v121) = -16384;
          }
          v83 = v99 - 1;
LABEL_88:
          v100 = v131;
LABEL_89:
          if ( v83 < v98 || v83 >= v120 || a6 < v127 || a6 >= v128 )
          {
            if ( v21 == -1 )
              goto LABEL_113;
            goto LABEL_114;
          }
          HIWORD(v142) = (v91 << 13) / v132;
          WORD2(v142) = ((v91 << 13) % v132 + ((_QWORD)v100 << 13)) / v132;
          if ( v97 )
          {
            ++v114;
            WORD1(v142) = (((v91 << 13) % v132 + ((_QWORD)v100 << 13)) % v132 + ((_QWORD)v97 << 13)) / v132;
            if ( v89 )
            {
              ++v118;
              v101 = ((((v91 << 13) % v132 + ((_QWORD)v100 << 13)) % v132 + ((_QWORD)v97 << 13)) % v132
                    + ((_QWORD)v89 << 13))
                   / v132;
              goto LABEL_107;
            }
          }
          else
          {
            WORD1(v142) = 0;
          }
          LOWORD(v101) = 0;
LABEL_107:
          LOWORD(v142) = v121 | v101;
          *v35++ = v142;
          v129 = v83;
          v103 = a6;
          v130 = a6;
          if ( v21 != -1 )
            v103 = v123;
          v123 = v103;
          v104 = v83;
          if ( v21 != -1 )
            v104 = v21;
          v21 = v104;
LABEL_113:
          v84 = v116;
          v82 = v117;
          v78 = v115;
          ++a6;
          v80 = v134;
          if ( !v134 )
          {
LABEL_114:
            v34 = v138;
            v79 = v118;
            v81 = v114;
            goto LABEL_116;
          }
        }
      }
      v98 = v119;
LABEL_116:
      if ( v21 != -1 )
      {
        v105 = v120;
        v106 = v129 + 1;
        if ( v129 + 1 < v98 || v106 >= v120 )
          v106 = v129;
        v107 = v125;
        v48 = v139;
        v50 = v140;
        v51 = v141;
        *v139 = v21;
        *v107 = v106;
        LODWORD(v107) = v130;
        *v50 = v123;
        *v51 = (_DWORD)v107;
        v108 = (__int64 *)*((_QWORD *)v34 + 5);
        LODWORD(v107) = v124;
        v34[4] = v35 - v108;
        v34[5] = (_DWORD)v107;
        if ( v81 )
          v109 = (v79 != 0) + 3;
        else
          v109 = 2;
        v34[6] = v109;
        v142 = *v108;
        if ( (v142 & 0x8000u) == 0LL )
        {
          if ( v21 + 1 < v98 || v21 + 1 >= v105 )
            *((_WORD *)v34 + 4) |= 2u;
        }
        else
        {
          --v21;
          v65 = 3;
        }
        v110 = 0;
        for ( i = 0LL; i < (unsigned int)v65; ++i )
        {
          if ( (*((_WORD *)&v142 + i) & 0x3FFF) != 0 )
            break;
          ++v110;
        }
        if ( v65 <= v110 )
        {
          v113 = *((_WORD *)v34 + 6);
        }
        else
        {
          v112 = (unsigned int)(v65 - v110);
          do
          {
            if ( v21 < v98 || v21 >= v105 )
            {
              *((_WORD *)v34 + 6) += 16;
            }
            else
            {
              *v48 = v21;
              ++*((_WORD *)v34 + 6);
            }
            v113 = *((_WORD *)v34 + 6);
            --v21;
            --v112;
          }
          while ( v112 );
        }
        if ( v113 && v21 >= v98 )
        {
          v49 = v125;
          if ( v21 < v105 )
          {
            *v48 = v21;
            *((_WORD *)v34 + 4) |= 1u;
          }
        }
        else
        {
          v49 = v125;
        }
        goto LABEL_33;
      }
      goto LABEL_122;
    }
    v70 = v143 - v16;
    if ( (int)(v143 - v16) <= 0 )
    {
LABEL_65:
      v75 = 0LL;
      if ( v115 )
      {
        v76 = v68;
        do
        {
          v77 = *v66++;
          v75 += v77;
          *v76++ = v75;
          v63 = (int *)((char *)v63 - 1);
        }
        while ( v63 );
      }
      goto LABEL_68;
    }
    v71 = (int *)v66;
    while ( 1 )
    {
      if ( --v69 < v71 )
      {
LABEL_64:
        v34 = v138;
        v21 = v121;
        v63 = v133;
        v66 = (unsigned int *)v135;
        v68 = v136;
        goto LABEL_65;
      }
      v72 = DivFD6(v70, v143);
      if ( v72 < 500000 )
        break;
      if ( v72 > 500000 )
      {
        v73 = 1;
        goto LABEL_62;
      }
LABEL_63:
      v70 -= v16;
      v74 = v132;
      *++v126 = v72;
      *v69 = v72;
      v64 = v74 + 2LL * v72;
      v132 = v64;
      if ( v70 <= 0 )
        goto LABEL_64;
    }
    v73 = 0;
LABEL_62:
    v72 = RaisePower(v72, 1414214, v73);
    goto LABEL_63;
  }
  return 0LL;
}
