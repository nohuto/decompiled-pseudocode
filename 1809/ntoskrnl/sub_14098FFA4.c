/*
 * XREFs of sub_14098FFA4 @ 0x14098FFA4
 * Callers:
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140333010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140346BE8 @ 0x140346BE8 (sub_140346BE8.c)
 *     sub_140990E9C @ 0x140990E9C (sub_140990E9C.c)
 * Callees:
 *     sub_1401ADA3C @ 0x1401ADA3C (sub_1401ADA3C.c)
 *     sub_1401ADA9C @ 0x1401ADA9C (sub_1401ADA9C.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     sub_1403495B4 @ 0x1403495B4 (sub_1403495B4.c)
 *     KeGuardDispatchICall @ 0x14034BB40 (KeGuardDispatchICall.c)
 *     MmImageSectionPagable @ 0x1406551AC (MmImageSectionPagable.c)
 */

__int64 __fastcall sub_14098FFA4(__int64 a1, ULONG_PTR a2, char a3)
{
  _BYTE *v3; // rbx
  __int64 v5; // rsi
  int v6; // r13d
  int v7; // edi
  __int64 v8; // rcx
  unsigned __int8 CurrentIrql; // r14
  int v10; // r12d
  unsigned int *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // xmm1_8
  int v14; // ecx
  __int128 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  int v19; // r8d
  unsigned int v20; // r15d
  unsigned int v21; // eax
  int v22; // r13d
  _BYTE *v23; // rdi
  int v24; // ecx
  unsigned int v25; // eax
  __int64 v26; // r8
  int v27; // edx
  unsigned __int64 v28; // rcx
  int v29; // ebx
  int v30; // ecx
  int v31; // ecx
  _BYTE *v32; // rsi
  _QWORD *v33; // rax
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int64 i; // rax
  _QWORD *v37; // rdx
  __int64 v38; // r8
  char *v39; // rcx
  char v40; // al
  unsigned __int64 v41; // rbx
  _QWORD *v42; // rax
  unsigned __int64 v43; // rcx
  int v44; // r11d
  _DWORD *v45; // rsi
  int v46; // ecx
  __int16 v47; // ax
  char *v48; // r8
  __int64 *v49; // r10
  signed __int64 v50; // r9
  char *v51; // r15
  int v52; // ebx
  char *v53; // r12
  __int64 v54; // rdx
  __int64 v55; // rax
  unsigned int v56; // r8d
  __int64 *v57; // r9
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rax
  int v62; // r9d
  signed __int64 v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rax
  int v66; // r9d
  signed __int64 v67; // r8
  __int64 v68; // rdx
  __int64 v69; // rax
  unsigned int v70; // ecx
  BOOL v71; // r12d
  unsigned int v72; // r15d
  int v73; // eax
  ULONG_PTR v74; // rdx
  _BYTE *v75; // rcx
  __int64 v76; // r9
  BOOL v77; // r11d
  ULONG_PTR v78; // rax
  unsigned int v79; // r13d
  _DWORD *v80; // rsi
  int v81; // eax
  int v82; // r11d
  char *v83; // rbx
  int v84; // ecx
  __int16 v85; // ax
  char *v86; // r8
  int v87; // r10d
  signed __int64 v88; // r9
  __int64 v89; // rdx
  __int64 v90; // rax
  __int64 *v91; // r9
  unsigned int v92; // r8d
  __int64 *v93; // r10
  __int64 v94; // rcx
  __int64 v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rax
  char *v98; // r8
  int v99; // r10d
  __int64 v100; // rdx
  __int64 v101; // rax
  char *v102; // r8
  int v103; // r9d
  signed __int64 v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // rax
  unsigned int v107; // ecx
  int v108; // eax
  bool v109; // zf
  ULONG_PTR v110; // rbx
  unsigned __int64 *v111; // rax
  int v112; // r9d
  __int64 *v113; // rcx
  ULONG_PTR v114; // r8
  _BYTE *v115; // rax
  unsigned __int64 v116; // r8
  __int64 v117; // rsi
  unsigned __int64 v118; // rax
  char **v119; // r15
  unsigned int v120; // eax
  __int64 v121; // rbx
  unsigned int v122; // r11d
  ULONG_PTR v123; // rsi
  _DWORD *v124; // r13
  char *v125; // r9
  char *v126; // r10
  const char *v127; // rax
  int j; // r12d
  unsigned __int64 v129; // r8
  unsigned __int64 v130; // rdi
  __int64 v131; // rdx
  __int64 v132; // rax
  __int64 v133; // r8
  unsigned __int128 v134; // rax
  unsigned __int64 v135; // rax
  unsigned __int64 v136; // rsi
  __int64 v137; // r15
  _DWORD *v138; // r12
  __int64 v139; // r13
  _DWORD *v140; // r9
  _QWORD *v141; // r11
  char *v142; // r15
  int v143; // r8d
  char *v144; // rcx
  _QWORD *v145; // rdx
  __int64 v146; // r10
  char v147; // al
  int v148; // ecx
  __int64 k; // rcx
  unsigned __int64 v150; // rax
  __int64 v151; // r15
  bool v152; // cf
  __int64 v153; // r13
  int v154; // r8d
  int v155; // r12d
  unsigned int v156; // eax
  __int64 v157; // rsi
  int v158; // ecx
  unsigned int v159; // eax
  __int64 v160; // r8
  int v161; // edx
  unsigned __int64 v162; // rcx
  int v163; // edi
  int v164; // ecx
  __int64 v166; // rdi
  int v167; // ecx
  _QWORD *v168; // rax
  __int64 v169; // rdx
  _QWORD *v170; // r9
  int v171; // r10d
  const char *v172; // rax
  unsigned __int64 v173; // r8
  unsigned int m; // r11d
  __int64 v175; // rax
  __int64 v176; // r8
  unsigned __int128 v177; // rax
  unsigned int v178; // edx
  unsigned __int64 v179; // rax
  __int64 v180; // rax
  unsigned __int64 n; // rax
  __int64 v182; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE *v183; // [rsp+40h] [rbp-C8h]
  ULONG_PTR v184; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v185; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 v186; // [rsp+58h] [rbp-B0h]
  __int64 v187; // [rsp+60h] [rbp-A8h]
  __int64 v188; // [rsp+68h] [rbp-A0h]
  ULONG_PTR v189; // [rsp+70h] [rbp-98h]
  char **v190; // [rsp+78h] [rbp-90h]
  int v191; // [rsp+80h] [rbp-88h]
  int v192; // [rsp+84h] [rbp-84h]
  __int64 v193; // [rsp+88h] [rbp-80h]
  _BYTE *v194; // [rsp+90h] [rbp-78h]
  __int64 v195; // [rsp+98h] [rbp-70h]
  __int128 v196; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v197; // [rsp+B0h] [rbp-58h]
  char *v198; // [rsp+B8h] [rbp-50h]
  __int64 *v199; // [rsp+C0h] [rbp-48h]
  char *v200; // [rsp+C8h] [rbp-40h]
  char *v201; // [rsp+D0h] [rbp-38h]
  _BYTE *v202; // [rsp+D8h] [rbp-30h]
  _BYTE *v203; // [rsp+E0h] [rbp-28h]
  __int64 v204; // [rsp+E8h] [rbp-20h]
  __int64 v205; // [rsp+F0h] [rbp-18h]
  _BYTE v206[96]; // [rsp+F8h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+170h] [rbp+68h]
  int v210; // [rsp+178h] [rbp+70h]
  unsigned __int16 v211; // [rsp+180h] [rbp+78h]
  unsigned int v212; // [rsp+180h] [rbp+78h]
  int v213; // [rsp+180h] [rbp+78h]

  BugCheckParameter2 = a2;
  v3 = *(_BYTE **)a1;
  v190 = (char **)(*(__int64 (__fastcall **)(ULONG_PTR))(*(_QWORD *)a1 + 496LL))(a2);
  v5 = (__int64)v190;
  if ( !v190 )
    return 3221225595LL;
  v6 = (*((__int64 (__fastcall **)(ULONG_PTR))v3 + 84))(a2);
  LODWORD(v187) = v6;
  v211 = *((_WORD *)v190 + 3);
  if ( v211 && *((_DWORD *)v190 + 14) >= 0x1000u && (a2 & 0xFFF) == 0 )
  {
    v7 = -1073741275;
    v8 = *((_QWORD *)v3 + 166);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    (*((void (__fastcall **)(__int64))v3 + 41))(v8);
    v10 = 24;
    v11 = (unsigned int *)**((_QWORD **)v3 + 192);
    v12 = (unsigned __int64)(v11 + 4);
    while ( *(_QWORD *)(v12 + 8) != a2 )
    {
      v12 += 24LL;
      if ( v12 >= (unsigned __int64)&v11[6 * *v11 + 4] )
        goto LABEL_10;
    }
    v13 = *(_QWORD *)(v12 + 16);
    v7 = 0;
    v196 = *(_OWORD *)v12;
    v197 = v13;
LABEL_10:
    (*((void (__fastcall **)(_QWORD))v3 + 49))(*((_QWORD *)v3 + 166));
    __writecr8(CurrentIrql);
    if ( v7 >= 0 )
    {
      v17 = (unsigned int)v197;
    }
    else
    {
      v14 = 24;
      v15 = &v196;
      v16 = 3LL;
      do
      {
        *(_QWORD *)v15 = 0LL;
        v14 -= 8;
        v15 = (__int128 *)((char *)v15 + 8);
        --v16;
      }
      while ( v16 );
      for ( ; v14; --v14 )
      {
        *(_BYTE *)v15 = 0;
        v15 = (__int128 *)((char *)v15 + 1);
      }
      v17 = *(unsigned int *)(v5 + 80);
      LODWORD(v197) = *(_DWORD *)(v5 + 80);
      *((_QWORD *)&v196 + 1) = a2;
      *(_QWORD *)&v196 = 1LL;
    }
    v18 = *((unsigned int *)v3 + 499);
    v19 = *((_DWORD *)v3 + 577);
    v186 = ((a2 & 0xFFF) + 4095 + v17) >> 12;
    v20 = 20 * v186;
    v21 = 20 * v186 + v18 + 48;
    v22 = (v6 != 0) + 33;
    if ( v21 <= *((_DWORD *)v3 + 639) )
    {
      v23 = v3;
      v193 = (__int64)v3;
      *((_DWORD *)v3 + 499) = v21;
    }
    else
    {
      v193 = sub_1403495B4(v3, v21, v19);
      v23 = (_BYTE *)v193;
      if ( !v193 )
        return 3221225626LL;
      v24 = *((_DWORD *)v3 + 604);
      if ( (v24 & 4) == 0 )
      {
        v25 = *((_DWORD *)v3 + 499);
        v26 = *((_QWORD *)v3 + 246);
        v27 = (v24 & 0x20000000) != 0 ? *((_DWORD *)v3 + 577) : 0;
        if ( v25 >= 8 )
        {
          v28 = (unsigned __int64)v25 >> 3;
          do
          {
            *(_QWORD *)v3 = 0LL;
            v25 -= 8;
            v3 += 8;
            --v28;
          }
          while ( v28 );
        }
        for ( ; v25; --v25 )
          *v3++ = 0;
        v29 = *((_DWORD *)v23 + 577);
        *((_DWORD *)v23 + 577) = v27;
        if ( v27 == 3 )
        {
          (*((void (__fastcall **)(__int64))v23 + 108))(v26);
        }
        else
        {
          v30 = 0;
          if ( (*((_DWORD *)v23 + 604) & 0x10000000) == 0 )
            v30 = v27;
          if ( v30 )
            (*((void (__fastcall **)(__int64, _QWORD))v23 + 68))(v26 - 8, *(_QWORD *)(v26 - 8));
          else
            (*((void (__fastcall **)(__int64))v23 + 31))(v26);
        }
        *((_DWORD *)v23 + 577) = v29;
      }
      *((_DWORD *)v23 + 604) &= ~4u;
    }
    ++*((_DWORD *)v23 + 509);
    v31 = 48;
    v32 = &v23[v18];
    v202 = v32;
    v33 = v32;
    v34 = 6LL;
    do
    {
      *v33 = 0LL;
      v31 -= 8;
      ++v33;
      --v34;
    }
    while ( v34 );
    for ( ; v31; --v31 )
    {
      *(_BYTE *)v33 = 0;
      v33 = (_QWORD *)((char *)v33 + 1);
    }
    *(_DWORD *)v32 = v22;
    *((_QWORD *)v32 + 1) = 0LL;
    *((_DWORD *)v32 + 4) = 0;
    v35 = *((_QWORD *)v23 + 256);
    for ( i = v35; ; LODWORD(v35) = i ^ v35 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v37 = v32 + 24;
    v203 = v32;
    *((_DWORD *)v32 + 5) = v35 & 0x7FFFFFFF;
    v38 = 3LL;
    v39 = (char *)&v196;
    *(_QWORD *)a1 = v23;
    do
    {
      v10 -= 8;
      *v37 = *(_QWORD *)v39;
      v39 += 8;
      ++v37;
      --v38;
    }
    while ( v38 );
    for ( ; v10; --v10 )
    {
      v40 = *v39++;
      *(_BYTE *)v37 = v40;
      v37 = (_QWORD *)((char *)v37 + 1);
    }
    LOBYTE(v37) = 1;
    v41 = (*((__int64 (__fastcall **)(ULONG_PTR, _QWORD *, __int64, __int64 *))v23 + 61))(
            BugCheckParameter2,
            v37,
            12LL,
            &v182);
    v185 = v41;
    LODWORD(v182) = v41 != 0 ? v182 : 0;
    v210 = a3 & 1;
    if ( !v210 )
    {
      v41 = 0LL;
      LODWORD(v182) = 0;
      v185 = 0LL;
    }
    v194 = v32 + 48;
    v183 = v32 + 48;
    v188 = (__int64)&v32[20 * (unsigned int)v186 + 48];
    v42 = v32 + 48;
    if ( v20 >= 8 )
    {
      v43 = (unsigned __int64)v20 >> 3;
      do
      {
        *v42 = -1LL;
        v20 -= 8;
        ++v42;
        --v43;
      }
      while ( v43 );
    }
    for ( ; v20; --v20 )
    {
      *(_BYTE *)v42 = -1;
      v42 = (_QWORD *)((char *)v42 + 1);
    }
    v44 = 0;
    v45 = (_DWORD *)((char *)v190 + *((unsigned __int16 *)v190 + 10) + 24);
    v186 = (unsigned __int64)&v45[10 * v211];
    if ( (v45[9] & 0x2000000) != 0
      || (v46 = *v45, *v45 == 1414090313) && v45[1] == 1195525195
      || v46 == 1162297680 && ((v47 = *((_WORD *)v45 + 2), v47 == 30839) || v47 == 29303 || v47 == 30583)
      || v46 == 1095914053 && *((_WORD *)v45 + 2) == 16724 )
    {
LABEL_81:
      v44 = 1;
    }
    else
    {
      v48 = (char *)*((_QWORD *)v23 + 290);
      v49 = (__int64 *)*((_QWORD *)v23 + 291);
      v50 = (char *)v45 - v48;
      v51 = (char *)*((_QWORD *)v23 + 292);
      v52 = 7;
      v53 = (char *)*((_QWORD *)v23 + 293);
      while ( 1 )
      {
        v54 = (unsigned __int8)v48[v50];
        v55 = (unsigned __int8)*v48++;
        if ( v54 != v55 )
          break;
        if ( !--v52 )
        {
LABEL_80:
          v41 = v185;
          goto LABEL_81;
        }
      }
      v56 = 8;
      v57 = (__int64 *)v45;
      while ( 1 )
      {
        v58 = *v57++;
        v59 = *v49++;
        if ( v58 != v59 )
          break;
        v56 -= 8;
        if ( v56 < 8 )
        {
          if ( !v56 )
            goto LABEL_80;
          while ( 1 )
          {
            v60 = *(unsigned __int8 *)v57;
            v57 = (__int64 *)((char *)v57 + 1);
            v61 = *(unsigned __int8 *)v49;
            v49 = (__int64 *)((char *)v49 + 1);
            if ( v60 != v61 )
              goto LABEL_73;
            if ( !--v56 )
              goto LABEL_80;
          }
        }
      }
LABEL_73:
      v62 = 4;
      v63 = (char *)v45 - v51;
      while ( 1 )
      {
        v64 = (unsigned __int8)v51[v63];
        v65 = (unsigned __int8)*v51++;
        if ( v64 != v65 )
          break;
        if ( !--v62 )
          goto LABEL_80;
      }
      v66 = 6;
      v67 = (char *)v45 - v53;
      while ( 1 )
      {
        v68 = (unsigned __int8)v53[v67];
        v69 = (unsigned __int8)*v53++;
        if ( v68 != v69 )
          break;
        if ( !--v66 )
          goto LABEL_80;
      }
      v41 = v185;
    }
    if ( (int)v45[9] < 0 )
      v44 = 1;
    if ( v44 && *v45 == 1414090313 && v45[1] == 1195525195 && (*((_DWORD *)v23 + 605) & 0x2000) != 0 )
      v44 = 0;
    v70 = v45[4];
    v71 = v44 == 0;
    v212 = v45[3];
    if ( v70 <= v45[2] )
      v70 = v45[2];
    v72 = (v70 + v45[3] + 4095) & 0xFFFFF000;
    v73 = MmImageSectionPagable((__int64)v45);
    v74 = BugCheckParameter2;
    v75 = v183;
    v76 = v188;
    v77 = v73 != 0;
    v184 = BugCheckParameter2;
    v78 = BugCheckParameter2;
    v79 = 0;
    if ( v183 != (_BYTE *)v188 )
    {
      v80 = v45 + 1;
      while ( 1 )
      {
        if ( v79 < v212 )
        {
LABEL_137:
          v110 = v184;
          v111 = &v185;
          v112 = 0;
          v113 = &v182;
          while ( 1 )
          {
            v114 = *v111;
            if ( *(_DWORD *)v113 )
            {
              if ( v184 >= v114 && v184 <= v114 + *(unsigned int *)v113 - 1LL )
                break;
            }
            ++v112;
            v113 = (__int64 *)((char *)v113 + 4);
            ++v111;
            if ( v112 )
            {
              if ( v79 >= v212 && v77 )
              {
                v115 = v183;
              }
              else
              {
                v115 = v183;
                *((_DWORD *)v183 + 4) &= ~0x80000000;
              }
              v115[15] &= ~0x80u;
              break;
            }
          }
          v75 = v183;
          v78 = v110;
          v76 = v188;
          goto LABEL_150;
        }
        if ( v79 >= v72 )
        {
          if ( v80 - 1 == (_DWORD *)v186 )
          {
            if ( (*((_DWORD *)v23 + 604) & 0x200000) == 0 )
            {
              v191 = 1329594368;
              KeBugCheckEx(__ROL4__(1329594368, 10), 0xAuLL, BugCheckParameter2, 5uLL, 0LL);
            }
            if ( !*((_DWORD *)v23 + 566) )
            {
              *((_QWORD *)v23 + 285) = 0LL;
              *((_QWORD *)v23 + 284) = v23 - 0x5C5FC0A76E374B18LL;
              *((_QWORD *)v23 + 286) = 271LL;
              *((_QWORD *)v23 + 287) = BugCheckParameter2;
              *((_DWORD *)v23 + 566) = 1;
            }
            return 3221225595LL;
          }
          if ( v80[12] < v79 )
          {
            v78 = v184;
            goto LABEL_150;
          }
          v81 = v80[18];
          v80 += 10;
          v82 = 0;
          if ( (v81 & 0x2000000) != 0
            || (v83 = (char *)(v80 - 1), v84 = *(v80 - 1), v84 == 1414090313) && *v80 == 1195525195
            || v84 == 1162297680 && ((v85 = *(_WORD *)v80, *(_WORD *)v80 == 30839) || v85 == 29303 || v85 == 30583)
            || v84 == 1095914053 && *(_WORD *)v80 == 16724 )
          {
            v82 = 1;
          }
          else
          {
            v86 = (char *)*((_QWORD *)v23 + 290);
            v87 = 7;
            v199 = (__int64 *)*((_QWORD *)v23 + 291);
            v88 = v83 - v86;
            v200 = (char *)*((_QWORD *)v23 + 292);
            v201 = (char *)*((_QWORD *)v23 + 293);
            v198 = v86;
            while ( 1 )
            {
              v89 = (unsigned __int8)v86[v88];
              v90 = (unsigned __int8)*v86++;
              if ( v89 != v90 )
                break;
              if ( !--v87 )
              {
LABEL_125:
                v82 = 1;
                goto LABEL_126;
              }
            }
            v91 = v199;
            v92 = 8;
            v93 = (__int64 *)(v80 - 1);
            while ( 1 )
            {
              v94 = *v93++;
              v95 = *v91++;
              if ( v94 != v95 )
                break;
              v92 -= 8;
              if ( v92 < 8 )
              {
                if ( !v92 )
                  goto LABEL_125;
                while ( 1 )
                {
                  v96 = *(unsigned __int8 *)v93;
                  v93 = (__int64 *)((char *)v93 + 1);
                  v97 = *(unsigned __int8 *)v91;
                  v91 = (__int64 *)((char *)v91 + 1);
                  if ( v96 != v97 )
                    goto LABEL_118;
                  if ( !--v92 )
                    goto LABEL_125;
                }
              }
            }
LABEL_118:
            v98 = v200;
            v99 = 4;
            while ( 1 )
            {
              v100 = (unsigned __int8)v98[v83 - v200];
              v101 = (unsigned __int8)*v98++;
              if ( v100 != v101 )
                break;
              if ( !--v99 )
                goto LABEL_125;
            }
            v102 = v201;
            v103 = 6;
            v104 = v83 - v201;
            while ( 1 )
            {
              v105 = (unsigned __int8)v102[v104];
              v106 = (unsigned __int8)*v102++;
              if ( v105 != v106 )
                break;
              if ( !--v103 )
                goto LABEL_125;
            }
          }
LABEL_126:
          if ( (int)v80[8] < 0 )
            v82 = 1;
          if ( v82 && *(v80 - 1) == 1414090313 && *v80 == 1195525195 && (*((_DWORD *)v23 + 605) & 0x2000) != 0 )
            v82 = 0;
          v107 = v80[3];
          v71 = v82 == 0;
          if ( v107 <= v80[1] )
            v107 = v80[1];
          v72 = (v107 + 4095 + v80[2]) & 0xFFFFF000;
          v108 = MmImageSectionPagable((__int64)(v80 - 1));
          v75 = v183;
          v76 = v188;
          v109 = v108 == 0;
          v78 = v184;
          v77 = !v109;
        }
        if ( v71 )
          goto LABEL_137;
LABEL_150:
        v78 += 4096LL;
        v75 += 20;
        v79 += 4096;
        v184 = v78;
        v183 = v75;
        if ( v75 == (_BYTE *)v76 )
        {
          v41 = v185;
          v74 = BugCheckParameter2;
          break;
        }
      }
    }
    v116 = (unsigned __int64)v194;
    if ( v194 != (_BYTE *)v76 )
    {
      do
      {
        LODWORD(v117) = 0;
        if ( v116 != v76 )
        {
          v118 = v116;
          do
          {
            if ( *(char *)(v118 + 15) < 0 )
              break;
            v117 = (unsigned int)(v117 + 1);
            v118 = v116 + 20 * v117;
          }
          while ( v118 != v76 );
          LODWORD(v183) = v117;
          if ( (_DWORD)v117 )
          {
            v119 = (char **)*((_QWORD *)v23 + 331);
            v120 = v117;
            LODWORD(v184) = v117;
            v190 = v119;
            v186 = v116;
            v189 = v74;
            do
            {
              v121 = 8LL;
              v122 = 0;
              if ( v120 < 8 )
                v121 = v120;
              v123 = v189;
              v124 = v206;
              do
              {
                v119[1] = (char *)4096;
                v125 = (char *)(v123 + (v122 << 12));
                *v119 = v125;
                v126 = v125;
                *((_DWORD *)v23 + 516) += 4096;
                v127 = v125;
                for ( j = *((_DWORD *)v23 + 511); v127 < v125 + 4096; v127 += 64 )
                  _mm_prefetch(v127, 0);
                v129 = *((_QWORD *)v23 + 256);
                v213 = 32;
                v130 = v129;
                do
                {
                  v131 = 8LL;
                  do
                  {
                    v132 = v129 ^ *(_QWORD *)v126;
                    v133 = *((_QWORD *)v126 + 1);
                    v126 += 16;
                    v129 = __ROL8__(__ROL8__(v132, j) ^ v133, j);
                    --v131;
                  }
                  while ( v131 );
                  v134 = (__ROL8__(v130 ^ (v126 - v125), 17) ^ v130 ^ (v126 - v125))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v195 = *((_QWORD *)&v134 + 1);
                  j = ((unsigned __int8)v134 ^ (unsigned __int8)(BYTE8(v134) ^ j)) & 0x3F;
                  if ( !j )
                    LOBYTE(j) = 1;
                  --v213;
                }
                while ( v213 );
                v23 = (_BYTE *)v193;
                v135 = v129;
                v123 = v189;
                while ( 1 )
                {
                  v135 >>= 31;
                  if ( !v135 )
                    break;
                  LODWORD(v129) = v135 ^ v129;
                }
                ++v122;
                *v124 = v129 & 0x7FFFFFFF;
                v119 += 6;
                ++v124;
              }
              while ( v122 < (unsigned int)v121 );
              v136 = v186;
              v137 = (__int64)v190;
              sub_1401ADA9C((__int64)v23, (__int64)v190, v121);
              v138 = v206;
              v139 = (unsigned int)v121;
              v140 = (_DWORD *)(v136 + 16);
              v141 = (_QWORD *)v136;
              v142 = (char *)(v137 + 16);
              do
              {
                v143 = 16;
                v144 = v142;
                v145 = v141;
                v146 = 2LL;
                do
                {
                  v143 -= 8;
                  *v145 = *(_QWORD *)v144;
                  v144 += 8;
                  ++v145;
                  --v146;
                }
                while ( v146 );
                for ( ; v143; --v143 )
                {
                  v147 = *v144++;
                  *(_BYTE *)v145 = v147;
                  v145 = (_QWORD *)((char *)v145 + 1);
                }
                v142 += 48;
                v141 = (_QWORD *)((char *)v141 + 20);
                v148 = (*v138++ ^ *v140) & 0x7FFFFFFF;
                *v140 ^= v148;
                v140 += 5;
                --v139;
              }
              while ( v139 );
              v23 = (_BYTE *)v193;
              v119 = v190;
              v189 += (unsigned int)((_DWORD)v121 << 12);
              v120 = v184 - v121;
              v186 = v136 + 20 * v121;
              *(_DWORD *)(v193 + 2064) += (_DWORD)v121 << 15;
              LODWORD(v184) = v120;
            }
            while ( v120 );
            LODWORD(v117) = (_DWORD)v183;
            v116 = (unsigned __int64)v194;
            v76 = v188;
          }
        }
        for ( k = 5LL * (unsigned int)v117; ; k = 5 * v117 )
        {
          v150 = v116 + 4 * k;
          if ( v150 == v76 || *(char *)(v150 + 15) >= 0 )
            break;
          v117 = (unsigned int)(v117 + 1);
        }
        v74 = (unsigned int)((_DWORD)v117 << 12) + BugCheckParameter2;
        BugCheckParameter2 = v74;
        v116 += 20LL * (unsigned int)v117;
        v194 = (_BYTE *)v116;
      }
      while ( v116 != v76 );
      v41 = v185;
    }
    if ( !v210 )
      return 0LL;
    v151 = (unsigned int)v182;
    if ( !(_DWORD)v182 )
      return 0LL;
    v152 = (_DWORD)v187 != 0;
    LODWORD(v187) = -(int)v187;
    v153 = *((unsigned int *)v23 + 499);
    v154 = *((_DWORD *)v23 + 577);
    v204 = 0LL;
    v155 = v152 + 13;
    v156 = v153 + 48;
    if ( (unsigned int)(v153 + 48) <= *((_DWORD *)v23 + 639) )
    {
      v157 = (__int64)v23;
      *((_DWORD *)v23 + 499) = v156;
LABEL_212:
      ++*(_DWORD *)(v157 + 2036);
      v166 = v157 + v153;
      v167 = 48;
      v205 = v157 + v153;
      v168 = (_QWORD *)(v157 + v153);
      v169 = 6LL;
      do
      {
        *v168 = 0LL;
        v167 -= 8;
        ++v168;
        --v169;
      }
      while ( v169 );
      for ( ; v167; --v167 )
      {
        *(_BYTE *)v168 = 0;
        v168 = (_QWORD *)((char *)v168 + 1);
      }
      *(_DWORD *)v166 = v155;
      *(_QWORD *)(v166 + 8) = v41;
      v170 = (_QWORD *)v41;
      *(_DWORD *)(v166 + 16) = v151;
      *(_DWORD *)(v157 + 2064) += v151;
      v171 = *(_DWORD *)(v157 + 2044);
      if ( v41 < v41 + v151 )
      {
        v172 = (const char *)v41;
        do
        {
          _mm_prefetch(v172, 0);
          v172 += 64;
        }
        while ( (unsigned __int64)v172 < v41 + v151 );
      }
      v173 = *(_QWORD *)(v157 + 2048);
      for ( m = (unsigned int)v151 >> 7; m; --m )
      {
        v175 = 8LL;
        do
        {
          v176 = v170[1] ^ __ROL8__(*v170 ^ v173, v171);
          v170 += 2;
          v173 = __ROL8__(v176, v171);
          --v175;
        }
        while ( v175 );
        v177 = (__ROL8__(*(_QWORD *)(v157 + 2048) ^ ((unsigned __int64)v170 - v41), 17) ^ *(_QWORD *)(v157 + 2048) ^ ((unsigned __int64)v170 - v41))
             * (unsigned __int128)0x7010008004002001uLL;
        v171 = ((unsigned __int8)v177 ^ (unsigned __int8)(BYTE8(v177) ^ v171)) & 0x3F;
        if ( !v171 )
          LOBYTE(v171) = 1;
      }
      v178 = v151 & 0x7F;
      if ( v178 >= 8 )
      {
        v179 = (unsigned __int64)(v151 & 0x7F) >> 3;
        do
        {
          v173 = __ROL8__(*v170++ ^ v173, v171);
          v178 -= 8;
          --v179;
        }
        while ( v179 );
      }
      for ( ; v178; --v178 )
      {
        v180 = *(unsigned __int8 *)v170;
        v170 = (_QWORD *)((char *)v170 + 1);
        v173 = __ROL8__(v180 ^ v173, v171);
      }
      for ( n = v173; ; LODWORD(v173) = n ^ v173 )
      {
        n >>= 31;
        if ( !n )
          break;
      }
      *(_DWORD *)(v166 + 20) = v173 & 0x7FFFFFFF;
      *(_DWORD *)(v157 + 2064) += v151;
      if ( (*(_DWORD *)(v157 + 2416) & 0x40000000) != 0 )
      {
        if ( (_DWORD)v151 )
          sub_1401ADA3C(v157, v41, v151, v166 + 28);
      }
      *(_DWORD *)(v166 + 24) = 1;
      *(_QWORD *)a1 = v157;
      return 0LL;
    }
    v157 = sub_1403495B4(v23, v156, v154);
    if ( v157 )
    {
      v158 = *((_DWORD *)v23 + 604);
      if ( (v158 & 4) == 0 )
      {
        v159 = *((_DWORD *)v23 + 499);
        v160 = *((_QWORD *)v23 + 246);
        v161 = (v158 & 0x20000000) != 0 ? *((_DWORD *)v23 + 577) : 0;
        if ( v159 >= 8 )
        {
          v162 = (unsigned __int64)v159 >> 3;
          do
          {
            *(_QWORD *)v23 = 0LL;
            v159 -= 8;
            v23 += 8;
            --v162;
          }
          while ( v162 );
        }
        for ( ; v159; --v159 )
          *v23++ = 0;
        v163 = *(_DWORD *)(v157 + 2308);
        *(_DWORD *)(v157 + 2308) = v161;
        if ( v161 == 3 )
        {
          (*(void (__fastcall **)(__int64))(v157 + 864))(v160);
        }
        else
        {
          v164 = 0;
          if ( (*(_DWORD *)(v157 + 2416) & 0x10000000) == 0 )
            v164 = v161;
          if ( v164 )
            (*(void (__fastcall **)(__int64, _QWORD))(v157 + 544))(v160 - 8, *(_QWORD *)(v160 - 8));
          else
            (*(void (__fastcall **)(__int64))(v157 + 248))(v160);
        }
        *(_DWORD *)(v157 + 2308) = v163;
      }
      *(_DWORD *)(v157 + 2416) &= ~4u;
      goto LABEL_212;
    }
    return 3221225626LL;
  }
  if ( (*((_DWORD *)v3 + 604) & 0x200000) == 0 )
  {
    v192 = 1329594368;
    KeBugCheckEx(__ROL4__(1329594368, 10), 0xAuLL, a2, 4uLL, 0LL);
  }
  if ( !*((_DWORD *)v3 + 566) )
  {
    *((_QWORD *)v3 + 285) = 0LL;
    *((_QWORD *)v3 + 286) = 271LL;
    *((_QWORD *)v3 + 284) = v3 - 0x5C5FC0A76E374B18LL;
    *((_QWORD *)v3 + 287) = a2;
    *((_DWORD *)v3 + 566) = 1;
  }
  return 3221225595LL;
}
