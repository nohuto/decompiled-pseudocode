/*
 * XREFs of BuildExpandAAInfo @ 0x1C00F1D50
 * Callers:
 *     <none>
 * Callees:
 *     _ALIGN_MEM @ 0x1C0038A60 (_ALIGN_MEM.c)
 *     DivFD6 @ 0x1C0039CA8 (DivFD6.c)
 *     RaisePower @ 0x1C0039EF4 (RaisePower.c)
 *     BuildRepData @ 0x1C00F2060 (BuildRepData.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

_DWORD *__fastcall BuildExpandAAInfo(
        __int64 a1,
        unsigned int a2,
        int *a3,
        signed int *a4,
        int a5,
        signed int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        unsigned int a10)
{
  int v10; // eax
  signed int v11; // ecx
  unsigned int v12; // r13d
  signed int v13; // r8d
  int v14; // r14d
  int v15; // r12d
  int v16; // r9d
  int v17; // edi
  unsigned int v18; // eax
  unsigned int v19; // ecx
  unsigned __int64 v20; // rax
  unsigned int v21; // esi
  int v22; // r10d
  unsigned int v23; // r12d
  unsigned int v24; // r14d
  unsigned int v25; // eax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  char *v28; // rax
  _DWORD *v29; // rbx
  _QWORD *v30; // r15
  _OWORD *v31; // r14
  int v32; // ecx
  int v33; // edx
  signed int v34; // eax
  __int64 v35; // rdx
  __int16 v36; // cx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  int *v43; // rsi
  signed int *v44; // r12
  _DWORD *v45; // r13
  _DWORD *v46; // rdx
  unsigned int v48; // eax
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rax
  unsigned int v51; // r10d
  unsigned __int64 v52; // r11
  unsigned __int64 v53; // rax
  unsigned int v54; // eax
  unsigned __int64 v55; // rcx
  int *v56; // r11
  __int64 v57; // r10
  __int64 v58; // rax
  int *v59; // r9
  int v60; // r14d
  unsigned int *v61; // rdx
  int *v62; // r12
  int v63; // esi
  int *v64; // rdi
  int v65; // eax
  char v66; // r8
  __int64 v67; // r10
  __int64 v68; // r8
  _QWORD *v69; // rcx
  __int64 v70; // rax
  unsigned int v71; // r8d
  unsigned int v72; // ecx
  int v73; // r9d
  unsigned int v74; // edx
  unsigned int v75; // r11d
  unsigned int v76; // edx
  signed int v77; // ebx
  int v78; // ecx
  unsigned int v79; // r12d
  unsigned int v80; // esi
  int v81; // edx
  int *v82; // r9
  int *v83; // r11
  unsigned int v84; // r8d
  unsigned int v85; // ecx
  __int64 v86; // r8
  unsigned int v87; // r10d
  __int64 v88; // rax
  int *v89; // r9
  __int64 v90; // r11
  __int64 v91; // rdx
  int v92; // r10d
  int *v93; // rcx
  __int64 v94; // rax
  int v95; // ebx
  int v96; // eax
  int v97; // eax
  int v98; // r9d
  signed int v99; // ecx
  _DWORD *v100; // rax
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
  unsigned int v111; // [rsp+30h] [rbp-B9h] BYREF
  int v112; // [rsp+34h] [rbp-B5h]
  signed int v113; // [rsp+38h] [rbp-B1h]
  int v114; // [rsp+3Ch] [rbp-ADh] BYREF
  int v115; // [rsp+40h] [rbp-A9h]
  int v116; // [rsp+44h] [rbp-A5h]
  int v117; // [rsp+48h] [rbp-A1h]
  int *v118; // [rsp+50h] [rbp-99h]
  _DWORD *v119; // [rsp+58h] [rbp-91h]
  int v120; // [rsp+60h] [rbp-89h]
  int v121; // [rsp+64h] [rbp-85h]
  signed int v122; // [rsp+68h] [rbp-81h]
  int v123; // [rsp+6Ch] [rbp-7Dh]
  __int64 v124; // [rsp+70h] [rbp-79h]
  int *v125; // [rsp+78h] [rbp-71h]
  int *v126; // [rsp+80h] [rbp-69h]
  _QWORD *v127; // [rsp+88h] [rbp-61h]
  _QWORD v128[4]; // [rsp+90h] [rbp-59h] BYREF
  int *v129; // [rsp+B0h] [rbp-39h]
  int *v130; // [rsp+B8h] [rbp-31h]
  _DWORD *v131; // [rsp+C0h] [rbp-29h]
  int *v132; // [rsp+C8h] [rbp-21h]
  signed int *v133; // [rsp+D0h] [rbp-19h]
  _DWORD *v134; // [rsp+D8h] [rbp-11h]
  __int64 v135; // [rsp+E0h] [rbp-9h]
  int v136; // [rsp+160h] [rbp+77h]

  v10 = *a3;
  v11 = *a4;
  v12 = *a4 - *a3;
  v132 = a3;
  v13 = a7 - a6;
  v133 = a4;
  v110 = a2;
  v134 = a8;
  v119 = a9;
  v122 = 0;
  v115 = 0;
  v123 = 0;
  v109 = v10;
  v136 = a7 - a6;
  if ( (int)v12 <= 0 )
    return 0LL;
  v14 = *a8;
  v15 = *a9;
  v16 = 0;
  if ( v10 >= 0 )
    v16 = v10;
  v120 = *a8;
  v112 = v16;
  if ( v11 > a5 )
    v11 = a5;
  v17 = -1;
  v113 = v11;
  v121 = v15;
  v117 = -1;
  v116 = 0;
  if ( v14 >= v15 || (int)v12 >= v13 )
    return 0LL;
  if ( (a2 & 0x4A80) != 0 )
  {
    v18 = v11 - v16;
    v19 = v11 - v16 + 3;
    if ( v19 < v18 )
      return 0LL;
    v20 = 2LL * v19;
    if ( v20 > 0xFFFFFFFF || (int)v20 + 8 < (unsigned int)v20 )
      return 0LL;
    v21 = (v20 + 8) & 0xFFFFFFF8;
  }
  else
  {
    v21 = 0;
  }
  if ( (a2 & 0x4200) != 0 )
  {
    v22 = 0;
    v107 = 0;
    v23 = 0;
    v108 = 0;
  }
  else
  {
    v48 = v12 + v13 - 1;
    if ( v48 < v13 )
      return 0LL;
    v49 = 2LL * (v48 / v12);
    if ( v49 > 0xFFFFFFFF )
      return 0LL;
    if ( !(_DWORD)v49 )
      return 0LL;
    v50 = 4LL * (unsigned int)(v49 - 1);
    v108 = v49 - 1;
    if ( v50 > 0xFFFFFFFF )
      return 0LL;
    v111 = 4 * (v49 - 1);
    if ( (int)ALIGN_MEM(&v111, v50) < 0 )
      return 0LL;
    v53 = 8LL * v51;
    if ( v53 > v52 )
      return 0LL;
    v107 = 8 * v51;
    if ( (int)ALIGN_MEM(&v107, v53) < 0 )
      return 0LL;
    v54 = v107;
    v107 = v111;
    if ( v54 + v111 < v54 )
      return 0LL;
    v55 = 8LL * (unsigned int)(v15 - v14);
    if ( v55 > 0xFFFFFFFF || (int)ALIGN_MEM(&v114, v55) < 0 )
      return 0LL;
    v23 = v114;
  }
  if ( a10 + 8 >= a10 )
  {
    v24 = (a10 + 8) & 0xFFFFFFF8;
    v25 = v23 + v21;
    if ( v23 + v21 >= v21 )
    {
      v26 = v24 + v25;
      if ( v24 + v25 >= v25 )
      {
        v27 = v26 + v22;
        if ( v26 + v22 >= v26 && v27 + 240 >= v27 )
        {
          v28 = (char *)EngAllocMem(1u, v27 + 240, 0x34355448u);
          v131 = v28;
          v29 = v28;
          if ( !v28 )
            return v29;
          v30 = v28 + 240;
          if ( v24 )
          {
            *((_QWORD *)v28 + 4) = v30;
            v30 = (_QWORD *)((char *)v30 + v24);
          }
          if ( v21 )
          {
            v31 = v28 + 48;
            v32 = v112;
            v33 = v120;
            *((_DWORD *)v28 + 13) = v136;
            v34 = v113;
            v29[17] = v113;
            v29[16] = v32;
            v29[18] = v33;
            v29[19] = v121;
            v35 = v109;
            *((_QWORD *)v29 + 12) = (char *)v30 + 2 * (v34 - v32);
            *((_QWORD *)v29 + 11) = v30;
            v30 = (_QWORD *)((char *)v30 + v21);
            v29[12] = v12;
            if ( !(unsigned int)BuildRepData(v29 + 12, v35, (unsigned int)a6) )
            {
LABEL_115:
              EngFreeMem(v29);
              return 0LL;
            }
            v36 = v110;
            v37 = *((_OWORD *)v29 + 4);
            *((_OWORD *)v29 + 7) = *v31;
            v38 = *((_OWORD *)v29 + 5);
            *((_OWORD *)v29 + 8) = v37;
            v39 = *((_OWORD *)v29 + 6);
            *((_OWORD *)v29 + 9) = v38;
            *((_OWORD *)v29 + 10) = v39;
            v40 = *((_OWORD *)v29 + 8);
            *((_OWORD *)v29 + 11) = *((_OWORD *)v29 + 7);
            v41 = *((_OWORD *)v29 + 9);
            *((_OWORD *)v29 + 12) = v40;
            v42 = *((_OWORD *)v29 + 10);
            *((_OWORD *)v29 + 13) = v41;
            *((_OWORD *)v29 + 14) = v42;
            if ( (v36 & 0x4000) != 0 )
            {
              v29[16] -= *((unsigned __int8 *)v29 + 80);
              v29[17] += *((unsigned __int8 *)v29 + 81);
            }
          }
          else
          {
            v36 = v110;
          }
          if ( !v23 )
          {
            v43 = v132;
            v44 = v133;
            v45 = v134;
            v46 = v119;
            *v132 = v29[16];
            *v44 = v29[17] - 1;
            *v45 = v29[18];
            *v46 = v29[19] - 1;
LABEL_29:
            *v29 = *v44 - *v43 + 1;
            v29[1] = *v46 - *v45 + 1;
            return v29;
          }
          v56 = (int *)v108;
          v57 = 1000000LL;
          v58 = v107;
          v59 = (int *)v108;
          v60 = 4;
          v61 = (unsigned int *)((char *)v30 + v23);
          *((_QWORD *)v29 + 5) = v30;
          v135 = 0LL;
          v127 = (_QWORD *)((char *)v61 + v58);
          v126 = (int *)v61;
          v125 = v56;
          v124 = 1000000LL;
          v62 = (int *)&v61[(unsigned __int64)(unsigned int)v56 >> 1];
          v118 = v62;
          *v62 = 1000000;
          if ( (v36 & 0x200) != 0 )
          {
            *((_WORD *)v29 + 4) |= 4u;
LABEL_60:
            v71 = 0;
            v72 = (unsigned int)v56 >> 1;
            v73 = v136;
            v124 = (int)v12 * v57;
            v74 = v12 * ((unsigned int)v56 >> 1);
            v75 = 0;
            v111 = 0;
            v107 = 0;
            v76 = v136 + v74;
            v110 = v76;
            if ( v136 )
            {
              v77 = v109;
              v78 = v72 - v136;
              while ( 1 )
              {
                v79 = v108;
                v80 = v76;
                v114 = v78 + 1;
                v117 = v73 - 1;
                memset(v128, 0, sizeof(v128));
                v81 = v136;
                v82 = v126;
                v83 = (int *)v128[1];
                v84 = v110 - v12 + v136;
                LOWORD(v109) = 0;
                if ( v12 < v110 )
                  v84 = v110 - v12;
                v85 = v108;
                v110 = v84;
                v86 = v128[3];
                if ( !v108 )
                {
                  v93 = (int *)v128[2];
                  v89 = (int *)v128[0];
                  v92 = v112;
                  goto LABEL_84;
                }
                v118 = (int *)v128[2];
                v125 = (int *)v128[0];
                v130 = (int *)v128[1];
                while ( 1 )
                {
                  v87 = v79--;
                  v88 = *v82++;
                  v129 = v82;
                  if ( v80 < v12 )
                    break;
                  if ( v80 / v12 <= v87 )
                    v87 = v80 / v12;
                  if ( v85 - v79 == 1 )
                    v90 = 0LL;
                  else
                    v90 = v127[v85 - v79 - 2];
                  v91 = v127[v87 - 2 + v85 - v79] - v90;
                  v83 = v130;
                  v86 += v12 * v91;
                  v81 = v136;
                  v80 -= v12 * v87;
                  v79 += 1 - v87;
                  v82 = &v129[v87 - 1];
LABEL_81:
                  v128[3] = v86;
                  if ( !v79 )
                  {
                    v89 = v125;
                    v92 = v112;
                    goto LABEL_83;
                  }
LABEL_74:
                  v85 = v108;
                }
                if ( v114 >= 0 && v79 < v114 )
                  break;
                if ( v80 )
                  v86 += v88 * v80;
                v125 = v83;
                v128[2] = v86;
                v128[0] = v83;
                v86 = v88 * (v12 - v80);
                v89 = v83;
                v83 = v118;
                v118 = (int *)v128[2];
                v128[3] = v86;
                v80 += v81 - v12;
                v130 = v83;
                v128[1] = v83;
                if ( v79 )
                {
                  v82 = v129;
                  goto LABEL_74;
                }
                v92 = v112;
                v95 = v77 + 1;
                if ( v95 >= v112 && v95 < v113 )
                {
                  ++v116;
                  ++v95;
                  v109 = 0x8000;
                  if ( v95 < v112 || v95 >= v113 )
                    LOWORD(v109) = -16384;
                }
                v77 = v95 - 1;
LABEL_83:
                v93 = v118;
LABEL_84:
                if ( v77 < v92 || v77 >= v113 || a6 < v120 || a6 >= v121 )
                {
                  if ( v17 == -1 )
                    goto LABEL_106;
                  goto LABEL_107;
                }
                HIWORD(v135) = (v86 << 13) / v124;
                WORD2(v135) = ((v86 << 13) % v124 + ((_QWORD)v93 << 13)) / v124;
                if ( v83 )
                {
                  ++v107;
                  WORD1(v135) = (((v86 << 13) % v124 + ((_QWORD)v93 << 13)) % v124 + ((_QWORD)v83 << 13)) / v124;
                  if ( v89 )
                  {
                    ++v111;
                    v94 = ((((v86 << 13) % v124 + ((_QWORD)v93 << 13)) % v124 + ((_QWORD)v83 << 13)) % v124
                         + ((_QWORD)v89 << 13))
                        / v124;
                    goto LABEL_100;
                  }
                }
                else
                {
                  WORD1(v135) = 0;
                }
                LOWORD(v94) = 0;
LABEL_100:
                LOWORD(v135) = v109 | v94;
                *v30++ = v135;
                v122 = v77;
                v96 = a6;
                v123 = a6;
                if ( v17 != -1 )
                  v96 = v115;
                v115 = v96;
                v97 = v77;
                if ( v17 != -1 )
                  v97 = v17;
                v17 = v97;
LABEL_106:
                v73 = v117;
                v78 = v114;
                v76 = v110;
                ++a6;
                if ( !v117 )
                {
LABEL_107:
                  v29 = v131;
                  v71 = v111;
                  v75 = v107;
                  goto LABEL_109;
                }
              }
              v86 += v88 * v12;
              v80 -= v12;
              goto LABEL_81;
            }
            v92 = v112;
LABEL_109:
            if ( v17 != -1 )
            {
              v98 = v113;
              v99 = v122 + 1;
              if ( v122 + 1 < v92 || v99 >= v113 )
                v99 = v122;
              v100 = v119;
              v43 = v132;
              v44 = v133;
              v45 = v134;
              *v132 = v17;
              *v44 = v99;
              *v45 = v115;
              *v100 = v123;
              v101 = (__int64 *)*((_QWORD *)v29 + 5);
              LODWORD(v100) = v116;
              v29[4] = v30 - v101;
              v29[5] = (_DWORD)v100;
              if ( v75 )
                v102 = (v71 != 0) + 3;
              else
                v102 = 2;
              v29[6] = v102;
              v135 = *v101;
              if ( (v135 & 0x8000u) == 0LL )
              {
                if ( v17 + 1 < v92 || v17 + 1 >= v98 )
                  *((_WORD *)v29 + 4) |= 2u;
              }
              else
              {
                --v17;
                v60 = 3;
              }
              v103 = 0;
              for ( i = 0LL; i < (unsigned int)v60; ++i )
              {
                if ( (*((_WORD *)&v135 + i) & 0x3FFF) != 0 )
                  break;
                ++v103;
              }
              if ( v60 <= v103 )
              {
                v106 = *((_WORD *)v29 + 6);
              }
              else
              {
                v105 = (unsigned int)(v60 - v103);
                do
                {
                  if ( v17 < v92 || v17 >= v98 )
                  {
                    *((_WORD *)v29 + 6) += 16;
                  }
                  else
                  {
                    *v43 = v17;
                    ++*((_WORD *)v29 + 6);
                  }
                  v106 = *((_WORD *)v29 + 6);
                  --v17;
                  --v105;
                }
                while ( v105 );
              }
              if ( v106 && v17 >= v92 )
              {
                v46 = v119;
                if ( v17 < v98 )
                {
                  *v43 = v17;
                  *((_WORD *)v29 + 4) |= 1u;
                }
              }
              else
              {
                v46 = v119;
              }
              goto LABEL_29;
            }
            goto LABEL_115;
          }
          v63 = v136 - v12;
          if ( (int)(v136 - v12) <= 0 )
          {
LABEL_57:
            v68 = 0LL;
            if ( (_DWORD)v56 )
            {
              v69 = v127;
              do
              {
                v70 = *v61++;
                v68 += v70;
                *v69++ = v68;
                v59 = (int *)((char *)v59 - 1);
              }
              while ( v59 );
            }
            goto LABEL_60;
          }
          v64 = (int *)v61;
          while ( 1 )
          {
            if ( --v62 < v64 )
            {
LABEL_56:
              v29 = v131;
              v17 = v117;
              v59 = v125;
              v61 = (unsigned int *)v126;
              LODWORD(v56) = v108;
              goto LABEL_57;
            }
            v65 = DivFD6(v63, v136);
            if ( v65 < 500000 )
              break;
            if ( v65 > 500000 )
            {
              v66 = 1;
              goto LABEL_54;
            }
LABEL_55:
            v63 -= v12;
            v67 = v124;
            *++v118 = v65;
            *v62 = v65;
            v57 = v67 + 2LL * v65;
            v124 = v57;
            if ( v63 <= 0 )
              goto LABEL_56;
          }
          v66 = 0;
LABEL_54:
          v65 = RaisePower(v65, 1414214, v66);
          goto LABEL_55;
        }
      }
    }
  }
  return 0LL;
}
