/*
 * XREFs of ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x1C0090E38
 * Callers:
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0090D58 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0014930 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 *     ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x1C00914A8 (-LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z.c)
 *     strcmp_0 @ 0x1C00C058A (strcmp_0.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 */

struct tagKbdLayer *__fastcall ReadLayoutFile(struct tagKBDFILE *a1, void *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r13
  int v7; // r15d
  struct tagKBDFILE *v9; // r14
  BOOL v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // r8d
  void *v13; // rdx
  char *v14; // rcx
  char *v15; // r14
  __int16 v16; // ax
  __int64 v17; // r15
  int v18; // esi
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rbx
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rbx
  unsigned int v24; // ebp
  char *v25; // rax
  void *v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rsi
  unsigned __int64 v29; // rax
  BOOL v30; // ebx
  __int64 v31; // r11
  unsigned __int64 *v32; // rcx
  unsigned __int64 v33; // rax
  _BYTE *v34; // rax
  _BYTE *v35; // rcx
  __int64 v36; // rax
  unsigned __int64 *v37; // rax
  _QWORD *v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  _QWORD *v43; // rcx
  _WORD *v44; // rax
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  _QWORD *v47; // rcx
  _WORD *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  unsigned __int64 v51; // rcx
  unsigned __int64 v52; // rdx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  _WORD *i; // rax
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rcx
  _DWORD *v60; // rax
  _DWORD *v61; // rcx
  unsigned __int64 v62; // rax
  _QWORD *v63; // rax
  _QWORD *v64; // rdx
  _WORD *v65; // rcx
  unsigned int v66; // eax
  unsigned __int64 v67; // r10
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // r8
  unsigned __int64 v70; // r9
  bool v71; // cc
  unsigned __int64 v72; // rcx
  unsigned __int64 v73; // rcx
  __int64 v74; // rax
  unsigned __int64 v75; // rbx
  unsigned __int64 *v76; // r8
  unsigned __int64 v77; // r10
  unsigned __int64 v78; // r11
  _BYTE *j; // rdx
  unsigned __int8 v80; // al
  _BYTE *v81; // r9
  _BYTE *v82; // rax
  _BYTE *v83; // rdx
  __int64 v84; // rax
  unsigned __int64 v85; // r9
  _QWORD *v86; // r8
  __int64 v87; // rax
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // r9
  _DWORD *v90; // rax
  unsigned __int64 v91; // rcx
  _DWORD *v92; // rdx
  __int64 v93; // rax
  unsigned __int64 v94; // r8
  unsigned __int64 v95; // rbx
  _BYTE *v96; // rdx
  unsigned __int64 v97; // r9
  unsigned __int64 v98; // r11
  _WORD *k; // rax
  _WORD *v100; // r8
  __int64 v101; // rax
  unsigned __int64 v102; // r10
  _BYTE *v103; // rdx
  __int64 v104; // rax
  unsigned __int64 v105; // r8
  unsigned __int64 v106; // rbx
  _BYTE *v107; // rdx
  unsigned __int64 v108; // r9
  unsigned __int64 v109; // r11
  _WORD *m; // rax
  _WORD *v111; // r8
  __int64 v112; // rax
  unsigned __int64 v113; // r10
  _BYTE *v114; // rdx
  __int64 v115; // rax
  unsigned __int64 v116; // r8
  unsigned __int64 v117; // rbx
  unsigned __int64 *v118; // rdx
  unsigned __int64 v119; // r10
  unsigned __int64 v120; // r9
  _WORD *n; // rax
  _WORD *v122; // r8
  __int64 v123; // rax
  unsigned __int64 v124; // r11
  _QWORD *v125; // rdx
  __int64 v126; // rax
  unsigned __int64 v127; // r8
  unsigned __int8 v128; // al
  __int64 v129; // rdx
  unsigned __int64 v130; // r8
  unsigned __int64 v131; // r9
  unsigned __int64 v132; // r8
  unsigned __int64 v133; // rax
  unsigned __int64 v134; // rdx
  __int64 v135; // rax
  unsigned __int64 v136; // r9
  unsigned __int64 v137; // r8
  unsigned __int64 v138; // rax
  unsigned __int64 v139; // rdx
  __int64 v140; // rax
  unsigned __int64 v141; // r9
  _BYTE *v142; // rdx
  unsigned __int64 v143; // r9
  int v144; // r8d
  __int16 *v145; // rcx
  unsigned __int64 v146; // r9
  __int16 v147; // ax
  __int64 v148; // r10
  unsigned __int64 v149; // r11
  _BYTE *v150; // rdx
  __int64 v151; // rax
  unsigned __int64 v152; // r8
  __int64 v153; // rcx
  __int64 v154; // rdx
  unsigned int v155; // [rsp+34h] [rbp-54h] BYREF
  BOOL v156; // [rsp+38h] [rbp-50h]
  void *v157; // [rsp+40h] [rbp-48h] BYREF

  v155 = 0;
  v5 = 0LL;
  v157 = 0LL;
  v6 = 0LL;
  v7 = 0;
  v9 = a1;
  v10 = PsGetCurrentProcessId() == (HANDLE)gpidLogon;
  *((_QWORD *)v9 + 6) = 0LL;
  v156 = v10;
  if ( (int)LoadFileContent(a2, v11, v12, &v157, &v155) >= 0 )
  {
    v13 = v157;
    v14 = (char *)v157 + *((unsigned int *)v157 + 15);
    if ( v14 >= v157 && (v10 || v14 + 263 >= v14) )
    {
      v15 = (char *)v157 + v155;
      if ( v14 + 264 < v15 )
      {
        v16 = *((_WORD *)v14 + 2);
        if ( v16 == 512 || v16 == -31132 || v16 == -21916 )
          v17 = *((_QWORD *)v14 + 6);
        else
          v17 = *((unsigned int *)v14 + 13);
        v18 = *((unsigned __int16 *)v14 + 3);
        v19 = (unsigned __int64)&v14[*((unsigned __int16 *)v14 + 10) + 24];
        if ( *((_WORD *)v14 + 3) )
        {
          v20 = v19 + 40;
          while ( v19 >= (unsigned __int64)v13 && (v156 || v20 - 1 >= v19) && v20 < (unsigned __int64)v15 )
          {
            v21 = strcmp_0((const char *)v19, ".data");
            v13 = v157;
            if ( v21 )
            {
              v19 += 40LL;
              v20 += 40LL;
              if ( --v18 )
                continue;
            }
            if ( !v18 )
              break;
            v22 = *(_DWORD *)(v19 + 12);
            if ( a3 < v22 )
              break;
            v23 = *(unsigned int *)(v19 + 8);
            v24 = a3 - v22;
            if ( v24 >= (unsigned int)v23 )
              break;
            if ( (unsigned int)v23 >= 0x40000 )
              break;
            v25 = (char *)v157 + *(unsigned int *)(v19 + 20);
            if ( v25 < v157 || &v25[v23] < v25 || &v25[v23] >= v15 )
              break;
            v26 = (void *)Win32AllocPool((unsigned int)v23, 0x746B7355u);
            v27 = (unsigned __int64)v26;
            if ( v26 )
            {
              *((_QWORD *)a1 + 3) = v26;
              memmove(v26, (char *)v157 + *(unsigned int *)(v19 + 20), (unsigned int)v23);
              *((_DWORD *)a1 + 10) = v23;
              v28 = v27 + (unsigned int)v23;
              v29 = *(unsigned int *)(v19 + 12);
              v5 = v27 + v24;
              if ( v27 >= v29 )
              {
                v30 = v156;
                v31 = v27 - v29 - v17;
                if ( v156 || v5 >= v27 && v5 <= v28 - 104 )
                {
                  v32 = *(unsigned __int64 **)v5;
                  if ( !*(_QWORD *)v5
                    || (v32 = (unsigned __int64 *)((char *)v32 + v31), *(_QWORD *)v5 = v32, (unsigned __int64)v32 >= v27)
                    && v32 + 2 >= v32
                    && (unsigned __int64)(v32 + 2) <= v28 )
                  {
                    if ( v30 || v32 )
                    {
                      if ( !*v32
                        || (*v32 += v31, v32 = *(unsigned __int64 **)v5, v33 = **(_QWORD **)v5, v33 >= v27)
                        && v33 + 2 >= v33
                        && v33 + 2 <= v28 )
                      {
                        if ( v30 || (unsigned __int64)v32 >= v27 && (unsigned __int64)v32 <= v28 - 16 )
                        {
                          v34 = (_BYTE *)*v32;
                          if ( *v32 >= v27 )
                          {
                            v35 = v34 + 2;
                            while ( v35 >= v34 && (unsigned __int64)v35 <= v28 )
                            {
                              if ( !*v34 )
                              {
                                v36 = *(_QWORD *)(v5 + 8);
                                if ( v36 )
                                {
                                  v37 = (unsigned __int64 *)(v31 + v36);
                                  *(_QWORD *)(v5 + 8) = v37;
                                  if ( (unsigned __int64)v37 < v27 || v37 + 2 < v37 || (unsigned __int64)(v37 + 2) > v28 )
                                    break;
                                  if ( v37 )
                                  {
                                    if ( (unsigned __int64)v37 >= v27 )
                                    {
                                      do
                                      {
                                        v38 = v37 + 2;
                                        if ( v37 + 2 < v37 || (unsigned __int64)v38 > v28 )
                                          break;
                                        if ( !*v37 )
                                          goto LABEL_56;
                                        v39 = v31 + *v37;
                                        *v37 = v39;
                                        if ( v39 < v27 )
                                          break;
                                        if ( v39 + 4 < v39 )
                                          break;
                                        if ( v39 + 4 > v28 )
                                          break;
                                        v37 += 2;
                                      }
                                      while ( (unsigned __int64)v38 >= v27 );
                                    }
                                    break;
                                  }
                                }
LABEL_56:
                                v40 = *(_QWORD *)(v5 + 16);
                                if ( v40 )
                                {
                                  v60 = (_DWORD *)(v31 + v40);
                                  *(_QWORD *)(v5 + 16) = v60;
                                  if ( (unsigned __int64)v60 < v27 || v60 + 2 < v60 || (unsigned __int64)(v60 + 2) > v28 )
                                    break;
                                  if ( v60 )
                                  {
                                    while ( (unsigned __int64)v60 >= v27 )
                                    {
                                      v61 = v60 + 2;
                                      if ( v60 + 2 < v60 || (unsigned __int64)v61 > v28 )
                                        break;
                                      if ( *v60 )
                                      {
                                        v60 += 2;
                                        if ( v61 )
                                          continue;
                                      }
                                      goto LABEL_57;
                                    }
                                    break;
                                  }
                                }
LABEL_57:
                                if ( *(_WORD *)(v5 + 82) )
                                {
                                  v41 = *(_QWORD *)(v5 + 88);
                                  if ( v41 )
                                  {
                                    v62 = v31 + v41;
                                    *(_QWORD *)(v5 + 88) = v62;
                                    if ( v62 < v27 || v62 + 6 < v62 || v62 + 6 > v28 )
                                      break;
                                  }
                                }
                                v42 = *(_QWORD *)(v5 + 24);
                                if ( v42 )
                                {
                                  v42 += v31;
                                  *(_QWORD *)(v5 + 24) = v42;
                                  if ( v42 < v27 || v42 + 16 < v42 || v42 + 16 > v28 )
                                    break;
                                }
                                if ( v42 )
                                {
                                  if ( v42 >= v27 )
                                  {
                                    v43 = (_QWORD *)(v42 + 8);
                                    do
                                    {
                                      if ( v43 + 1 < v43 - 1 || (unsigned __int64)(v43 + 1) > v28 )
                                        break;
                                      if ( !*((_BYTE *)v43 - 8) )
                                        goto LABEL_76;
                                      if ( *v43 )
                                      {
                                        v44 = (_WORD *)(v31 + *v43);
                                        *v43 = v44;
                                        if ( (unsigned __int64)v44 < v27
                                          || v44 + 1 < v44
                                          || (unsigned __int64)(v44 + 1) > v28 )
                                        {
                                          goto LABEL_422;
                                        }
                                      }
                                      else
                                      {
                                        v44 = 0LL;
                                      }
                                      if ( !v30 && v44 )
                                      {
                                        for ( ; (unsigned __int64)v44 >= v27; ++v44 )
                                        {
                                          if ( (unsigned __int64)v44 > v28 - 2 )
                                            break;
                                          if ( !*v44 )
                                            goto LABEL_74;
                                        }
                                        *v43 = 0LL;
                                      }
LABEL_74:
                                      v43 += 2;
                                    }
                                    while ( (unsigned __int64)(v43 - 1) >= v27 );
                                  }
                                  break;
                                }
LABEL_76:
                                v45 = *(_QWORD *)(v5 + 32);
                                if ( v45 )
                                {
                                  v46 = v31 + v45;
                                  *(_QWORD *)(v5 + 32) = v46;
                                  if ( v46 < v27 || v46 + 16 < v46 || v46 + 16 > v28 )
                                    break;
                                  if ( v46 )
                                  {
                                    if ( v46 >= v27 )
                                    {
                                      v47 = (_QWORD *)(v46 + 8);
                                      do
                                      {
                                        if ( v47 + 1 < v47 - 1 || (unsigned __int64)(v47 + 1) > v28 )
                                          break;
                                        if ( !*((_BYTE *)v47 - 8) )
                                          goto LABEL_93;
                                        if ( *v47 )
                                        {
                                          v48 = (_WORD *)(v31 + *v47);
                                          *v47 = v48;
                                          if ( (unsigned __int64)v48 < v27
                                            || v48 + 1 < v48
                                            || (unsigned __int64)(v48 + 1) > v28 )
                                          {
                                            goto LABEL_422;
                                          }
                                        }
                                        else
                                        {
                                          v48 = 0LL;
                                        }
                                        if ( !v30 && v48 )
                                        {
                                          for ( ; (unsigned __int64)v48 >= v27; ++v48 )
                                          {
                                            if ( (unsigned __int64)v48 > v28 - 2 )
                                              break;
                                            if ( !*v48 )
                                              goto LABEL_91;
                                          }
                                          *v47 = 0LL;
                                        }
LABEL_91:
                                        v47 += 2;
                                      }
                                      while ( (unsigned __int64)(v47 - 1) >= v27 );
                                    }
                                    break;
                                  }
                                }
LABEL_93:
                                v49 = *(_QWORD *)(v5 + 40);
                                if ( v49 )
                                {
                                  v63 = (_QWORD *)(v31 + v49);
                                  *(_QWORD *)(v5 + 40) = v63;
                                  if ( (unsigned __int64)v63 < v27 || v63 + 1 < v63 || (unsigned __int64)(v63 + 1) > v28 )
                                    break;
                                  if ( v63 )
                                  {
                                    if ( (unsigned __int64)v63 < v27 )
                                      break;
LABEL_183:
                                    v64 = v63 + 1;
                                    if ( v63 + 1 < v63 || (unsigned __int64)v64 > v28 )
                                      break;
                                    if ( *v63 )
                                    {
                                      v65 = (_WORD *)(v31 + *v63);
                                      *v63 = v65;
                                      if ( (unsigned __int64)v65 >= v27
                                        && v65 + 1 >= v65
                                        && (unsigned __int64)(v65 + 1) <= v28 )
                                      {
                                        while ( (unsigned __int64)v65 >= v27
                                             && v65 + 1 >= v65
                                             && (unsigned __int64)(v65 + 1) <= v28 )
                                        {
                                          if ( !*v65 )
                                          {
                                            ++v63;
                                            if ( (unsigned __int64)v64 >= v27 )
                                              goto LABEL_183;
                                            goto LABEL_422;
                                          }
                                          ++v65;
                                        }
                                      }
                                      break;
                                    }
                                  }
                                }
                                v50 = *(_QWORD *)(v5 + 48);
                                if ( !v50 )
                                  break;
                                v51 = v50 + v31;
                                *(_QWORD *)(v5 + 48) = v50 + v31;
                                if ( v50 + v31 < v27 )
                                  break;
                                if ( v51 + 2 < v51 )
                                  break;
                                if ( v51 + 2 > v28 )
                                  break;
                                v52 = v51 + 2LL * *(unsigned __int8 *)(v5 + 56);
                                if ( v52 < v27 || v52 + 2 < v52 || v52 + 2 > v28 )
                                  break;
                                v53 = *(_QWORD *)(v5 + 64);
                                if ( v53 )
                                {
                                  v54 = v31 + v53;
                                  *(_QWORD *)(v5 + 64) = v54;
                                  if ( v54 < v27 || v54 + 4 < v54 || v54 + 4 > v28 )
                                    break;
                                  if ( v54 )
                                  {
                                    for ( i = (_WORD *)(v54 + 2); !v30 || *i; i += 2 )
                                    {
                                      if ( (unsigned __int64)(i - 1) < v27
                                        || i + 1 < i - 1
                                        || (unsigned __int64)(i + 1) > v28 )
                                      {
                                        goto LABEL_422;
                                      }
                                      if ( !v30 && !*i )
                                        break;
                                    }
                                  }
                                }
                                v56 = *(_QWORD *)(v5 + 72);
                                if ( v56 )
                                {
                                  v57 = v31 + v56;
                                  *(_QWORD *)(v5 + 72) = v57;
                                  if ( v57 < v27 || v57 + 4 < v57 || v57 + 4 > v28 )
                                    break;
                                  if ( v57 )
                                  {
                                    if ( v57 >= v27 )
                                    {
                                      v58 = v57 + 4;
                                      do
                                      {
                                        if ( v58 < 4 || v58 > v28 )
                                          break;
                                        if ( !*(_WORD *)(v58 - 2) )
                                          goto LABEL_126;
                                        v58 += 4LL;
                                      }
                                      while ( v58 - 4 >= v27 );
                                    }
                                    break;
                                  }
                                }
LABEL_126:
                                if ( a4 )
                                {
                                  v66 = *(_DWORD *)(v19 + 12);
                                  if ( a4 < v66 )
                                    break;
                                  v6 = v27 + a4 - v66;
                                  if ( v6 < v27 )
                                    break;
                                  v67 = v6 + 32;
                                  if ( v6 + 32 < v6 || v67 > v28 )
                                    break;
                                  v68 = *(_QWORD *)(v6 + 8);
                                  v69 = v68;
                                  if ( v68 )
                                  {
                                    v68 += v31;
                                    *(_QWORD *)(v6 + 8) = v68;
                                    v69 = v68;
                                    if ( v68 < v27 || v68 + 132 < v68 || v68 + 132 > v28 )
                                      break;
                                    if ( v68 )
                                    {
                                      v70 = *(unsigned int *)(v6 + 4);
                                      if ( v30 )
                                      {
                                        v72 = v68 + 132LL * (unsigned int)(v70 - 1);
                                        if ( v72 < v27 || v72 + 132 < v72 )
                                          break;
                                        v71 = v72 + 132 <= v28;
                                      }
                                      else
                                      {
                                        v68 = (v28 - v68) / 0x84;
                                        v71 = v70 <= v68;
                                      }
                                      if ( !v71 )
                                        break;
                                    }
                                  }
                                  v73 = *(_QWORD *)(v6 + 24);
                                  if ( v73 )
                                  {
                                    v73 += v31;
                                    *(_QWORD *)(v6 + 24) = v73;
                                    if ( v73 < v27 )
                                      break;
                                    if ( v73 + 2 < v73 )
                                      break;
                                    if ( v73 + 2 > v28 )
                                      break;
                                    if ( v73 )
                                    {
                                      v68 = v73 + 2LL * (*(_DWORD *)(v6 + 16) - 1);
                                      if ( v68 < v27 || v68 + 2 < v68 || v68 + 2 > v28 )
                                        break;
                                    }
                                  }
                                  if ( !v30 )
                                  {
                                    v74 = *(unsigned int *)(v6 + 4);
                                    if ( (_DWORD)v74 )
                                    {
                                      if ( v69 < v67 )
                                      {
                                        v73 = v69 + 132 * v74;
                                        if ( v73 > v6 )
                                          break;
                                      }
                                    }
                                    if ( v6 - 104 < v5 && v67 > v5 )
                                      break;
                                  }
                                  if ( (int)IsEditionValidateKbdNLSTableSupported(v73, v68, v69) >= 0
                                    && !(unsigned int)EditionValidateKbdNLSTable(v6) )
                                  {
                                    break;
                                  }
                                  *((_QWORD *)a1 + 6) = v6;
                                }
                                if ( v30 )
                                  goto LABEL_128;
                                v75 = *(_QWORD *)(v5 + 8);
                                if ( v75 )
                                {
                                  v76 = *(unsigned __int64 **)(v5 + 8);
                                  if ( v75 < v27 )
                                    break;
                                  v77 = v75 + 16;
LABEL_233:
                                  if ( v77 < (unsigned __int64)v76 || v77 > v28 )
                                    break;
                                  v78 = *v76;
                                  if ( *v76 )
                                  {
                                    for ( j = (_BYTE *)*v76;
                                          (unsigned __int64)j >= v27 && j + 4 >= j && (unsigned __int64)(j + 4) <= v28;
                                          j += *(unsigned __int8 *)(v77 - 7) )
                                    {
                                      if ( !*j )
                                      {
                                        v83 = j + 4;
                                        if ( !v6
                                          || (v84 = *(unsigned int *)(v6 + 4), !(_DWORD)v84)
                                          || (v85 = *(_QWORD *)(v6 + 8), v85 >= (unsigned __int64)v83)
                                          || v85 + 132 * v84 <= v78 )
                                        {
                                          if ( v78 - 104 >= v5 || (unsigned __int64)v83 <= v5 )
                                          {
                                            v76 += 2;
                                            v77 += 16LL;
                                            if ( (unsigned __int64)v76 >= v27 )
                                              goto LABEL_233;
                                          }
                                        }
                                        goto LABEL_422;
                                      }
                                      v80 = *(_BYTE *)(v77 - 8);
                                      if ( v80 > 1u )
                                      {
                                        v81 = &j[2 * v80];
                                        if ( (unsigned __int64)v81 < v27 )
                                          goto LABEL_422;
                                        v82 = &j[2 * v80 + 2];
                                        if ( v82 < v81 || (unsigned __int64)v82 > v28 )
                                          goto LABEL_422;
                                      }
                                    }
                                    break;
                                  }
                                  v86 = v76 + 2;
                                  if ( v6 )
                                  {
                                    v87 = *(unsigned int *)(v6 + 4);
                                    if ( (_DWORD)v87 )
                                    {
                                      v88 = *(_QWORD *)(v6 + 8);
                                      if ( v88 < (unsigned __int64)v86 && v88 + 132 * v87 > v75 )
                                        break;
                                    }
                                  }
                                  if ( v75 - 104 < v5 && (unsigned __int64)v86 > v5 )
                                    break;
                                }
                                v89 = *(_QWORD *)(v5 + 16);
                                v90 = (_DWORD *)v89;
                                if ( v89 )
                                {
                                  v91 = v89 + 8;
                                  while ( (unsigned __int64)v90 >= v27 && v91 >= (unsigned __int64)v90 && v91 <= v28 )
                                  {
                                    v92 = v90 + 2;
                                    if ( !*v90 )
                                    {
                                      if ( v6 )
                                      {
                                        v93 = *(unsigned int *)(v6 + 4);
                                        if ( (_DWORD)v93 )
                                        {
                                          v94 = *(_QWORD *)(v6 + 8);
                                          if ( v94 < (unsigned __int64)v92 && v94 + 132 * v93 > v89 )
                                            goto LABEL_422;
                                        }
                                      }
                                      if ( v89 - 104 < v5 && (unsigned __int64)v92 > v5 )
                                        goto LABEL_422;
                                      goto LABEL_274;
                                    }
                                    v91 += 8LL;
                                    v90 += 2;
                                    if ( !v92 )
                                      goto LABEL_274;
                                  }
                                }
                                else
                                {
LABEL_274:
                                  v95 = *(_QWORD *)(v5 + 24);
                                  if ( v95 )
                                  {
                                    v96 = *(_BYTE **)(v5 + 24);
                                    if ( v95 >= v27 )
                                    {
                                      v97 = v95 + 16;
                                      while ( v97 >= (unsigned __int64)v96 && v97 <= v28 )
                                      {
                                        if ( !*v96 )
                                        {
                                          v103 = v96 + 16;
                                          if ( v6 )
                                          {
                                            v104 = *(unsigned int *)(v6 + 4);
                                            if ( (_DWORD)v104 )
                                            {
                                              v105 = *(_QWORD *)(v6 + 8);
                                              if ( v105 < (unsigned __int64)v103 && v105 + 132 * v104 > v95 )
                                                goto LABEL_422;
                                            }
                                          }
                                          if ( v95 - 104 < v5 && (unsigned __int64)v103 > v5 )
                                            goto LABEL_422;
                                          goto LABEL_301;
                                        }
                                        v98 = *(_QWORD *)(v97 - 8);
                                        if ( v98 )
                                        {
                                          for ( k = *(_WORD **)(v97 - 8); (unsigned __int64)k >= v27; ++k )
                                          {
                                            v100 = k + 1;
                                            if ( k + 1 < k || (unsigned __int64)v100 > v28 )
                                              break;
                                            if ( !*k )
                                            {
                                              if ( v6 )
                                              {
                                                v101 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v101 )
                                                {
                                                  v102 = *(_QWORD *)(v6 + 8);
                                                  if ( v102 < (unsigned __int64)v100 && v102 + 132 * v101 > v98 )
                                                    goto LABEL_422;
                                                }
                                              }
                                              if ( v98 - 104 < v5 && (unsigned __int64)v100 > v5 )
                                                goto LABEL_422;
                                              goto LABEL_293;
                                            }
                                          }
                                          goto LABEL_422;
                                        }
LABEL_293:
                                        v96 += 16;
                                        v97 += 16LL;
                                        if ( (unsigned __int64)v96 < v27 )
                                          goto LABEL_422;
                                      }
                                    }
                                  }
                                  else
                                  {
LABEL_301:
                                    v106 = *(_QWORD *)(v5 + 32);
                                    if ( v106 )
                                    {
                                      v107 = *(_BYTE **)(v5 + 32);
                                      if ( v106 >= v27 )
                                      {
                                        v108 = v106 + 16;
                                        while ( v108 >= (unsigned __int64)v107 && v108 <= v28 )
                                        {
                                          if ( !*v107 )
                                          {
                                            v114 = v107 + 16;
                                            if ( v6 )
                                            {
                                              v115 = *(unsigned int *)(v6 + 4);
                                              if ( (_DWORD)v115 )
                                              {
                                                v116 = *(_QWORD *)(v6 + 8);
                                                if ( v116 < (unsigned __int64)v114 && v116 + 132 * v115 > v106 )
                                                  goto LABEL_422;
                                              }
                                            }
                                            if ( v106 - 104 < v5 && (unsigned __int64)v114 > v5 )
                                              goto LABEL_422;
                                            goto LABEL_328;
                                          }
                                          v109 = *(_QWORD *)(v108 - 8);
                                          if ( v109 )
                                          {
                                            for ( m = *(_WORD **)(v108 - 8); (unsigned __int64)m >= v27; ++m )
                                            {
                                              v111 = m + 1;
                                              if ( m + 1 < m || (unsigned __int64)v111 > v28 )
                                                break;
                                              if ( !*m )
                                              {
                                                if ( v6 )
                                                {
                                                  v112 = *(unsigned int *)(v6 + 4);
                                                  if ( (_DWORD)v112 )
                                                  {
                                                    v113 = *(_QWORD *)(v6 + 8);
                                                    if ( v113 < (unsigned __int64)v111 && v113 + 132 * v112 > v109 )
                                                      goto LABEL_422;
                                                  }
                                                }
                                                if ( v109 - 104 < v5 && (unsigned __int64)v111 > v5 )
                                                  goto LABEL_422;
                                                goto LABEL_320;
                                              }
                                            }
                                            goto LABEL_422;
                                          }
LABEL_320:
                                          v107 += 16;
                                          v108 += 16LL;
                                          if ( (unsigned __int64)v107 < v27 )
                                            goto LABEL_422;
                                        }
                                      }
                                    }
                                    else
                                    {
LABEL_328:
                                      v117 = *(_QWORD *)(v5 + 40);
                                      if ( v117 )
                                      {
                                        v118 = *(unsigned __int64 **)(v5 + 40);
                                        if ( v117 < v27 )
                                          break;
                                        v119 = v117 + 8;
LABEL_331:
                                        if ( v119 < (unsigned __int64)v118 || v119 > v28 )
                                          break;
                                        v120 = *v118;
                                        if ( *v118 )
                                        {
                                          for ( n = (_WORD *)*v118; (unsigned __int64)n >= v27; ++n )
                                          {
                                            v122 = n + 1;
                                            if ( n + 1 < n || (unsigned __int64)v122 > v28 )
                                              break;
                                            if ( !*n )
                                            {
                                              if ( !v6
                                                || (v123 = *(unsigned int *)(v6 + 4), !(_DWORD)v123)
                                                || (v124 = *(_QWORD *)(v6 + 8), v124 >= (unsigned __int64)v122)
                                                || v124 + 132 * v123 <= v120 )
                                              {
                                                if ( v120 - 104 >= v5 || (unsigned __int64)v122 <= v5 )
                                                {
                                                  ++v118;
                                                  v119 += 8LL;
                                                  if ( (unsigned __int64)v118 >= v27 )
                                                    goto LABEL_331;
                                                }
                                              }
                                              goto LABEL_422;
                                            }
                                          }
                                          break;
                                        }
                                        v125 = v118 + 1;
                                        if ( v6 )
                                        {
                                          v126 = *(unsigned int *)(v6 + 4);
                                          if ( (_DWORD)v126 )
                                          {
                                            v127 = *(_QWORD *)(v6 + 8);
                                            if ( v127 < (unsigned __int64)v125 && v127 + 132 * v126 > v117 )
                                              break;
                                          }
                                        }
                                        if ( v117 - 104 < v5 && (unsigned __int64)v125 > v5 )
                                          break;
                                      }
                                      v128 = *(_BYTE *)(v5 + 56);
                                      if ( v128 )
                                      {
                                        if ( v6 )
                                        {
                                          v129 = *(unsigned int *)(v6 + 4);
                                          if ( (_DWORD)v129 )
                                          {
                                            v130 = *(_QWORD *)(v5 + 48);
                                            v131 = *(_QWORD *)(v6 + 8);
                                            if ( v131 < v130 + 2LL * v128 && v131 + 132 * v129 > v130 )
                                              break;
                                          }
                                        }
                                      }
                                      v132 = *(_QWORD *)(v5 + 64);
                                      if ( v132 )
                                      {
                                        v133 = *(_QWORD *)(v5 + 64);
                                        if ( v132 >= v27 )
                                        {
                                          while ( 1 )
                                          {
                                            v134 = v133 + 4;
                                            if ( v133 + 4 < v133 || v134 > v28 )
                                              break;
                                            if ( !*(_WORD *)(v133 + 2) )
                                            {
                                              if ( v6 )
                                              {
                                                v135 = *(unsigned int *)(v6 + 4);
                                                if ( (_DWORD)v135 )
                                                {
                                                  v136 = *(_QWORD *)(v6 + 8);
                                                  if ( v136 < v134 && v136 + 132 * v135 > v132 )
                                                    goto LABEL_422;
                                                }
                                              }
                                              if ( v132 - 104 < v5 && v134 > v5 )
                                                goto LABEL_422;
                                              goto LABEL_372;
                                            }
                                            v133 += 4LL;
                                            if ( v134 < v27 )
                                              goto LABEL_422;
                                          }
                                        }
                                      }
                                      else
                                      {
LABEL_372:
                                        v137 = *(_QWORD *)(v5 + 72);
                                        if ( v137 )
                                        {
                                          v138 = *(_QWORD *)(v5 + 72);
                                          if ( v137 >= v27 )
                                          {
                                            while ( 1 )
                                            {
                                              v139 = v138 + 4;
                                              if ( v138 + 4 < v138 || v139 > v28 )
                                                break;
                                              if ( !*(_WORD *)(v138 + 2) )
                                              {
                                                if ( v6 )
                                                {
                                                  v140 = *(unsigned int *)(v6 + 4);
                                                  if ( (_DWORD)v140 )
                                                  {
                                                    v141 = *(_QWORD *)(v6 + 8);
                                                    if ( v141 < v139 && v141 + 132 * v140 > v137 )
                                                      goto LABEL_422;
                                                  }
                                                }
                                                if ( v137 - 104 < v5 && v139 > v5 )
                                                  goto LABEL_422;
                                                goto LABEL_385;
                                              }
                                              v138 += 4LL;
                                              if ( v139 < v27 )
                                                goto LABEL_422;
                                            }
                                          }
                                        }
                                        else
                                        {
LABEL_385:
                                          if ( *(_WORD *)(v5 + 82) )
                                          {
                                            v142 = *(_BYTE **)(v5 + 88);
                                            if ( v142 )
                                            {
                                              if ( (unsigned __int64)v142 >= v27 )
                                              {
                                                v143 = *(_QWORD *)(v5 + 88);
                                                while ( (unsigned __int64)v142 <= v28 - 6 )
                                                {
                                                  if ( !*v142 )
                                                    goto LABEL_410;
                                                  v144 = 0;
                                                  if ( *(_BYTE *)(v5 + 84) )
                                                  {
                                                    v145 = (__int16 *)(v142 + 4);
                                                    while ( 1 )
                                                    {
                                                      if ( v144 > 0 )
                                                      {
                                                        v146 = (unsigned __int64)&v142[2 * v144 + 4];
                                                        if ( v146 < v27 || v146 > v28 - 2 )
                                                          break;
                                                      }
                                                      v147 = *v145++;
                                                      ++v144;
                                                      if ( v147 == -4096 || v144 >= *(unsigned __int8 *)(v5 + 84) )
                                                        goto LABEL_400;
                                                    }
                                                    *(_QWORD *)(v5 + 88) = 0LL;
                                                  }
LABEL_400:
                                                  v143 = *(_QWORD *)(v5 + 88);
                                                  if ( !v143 )
                                                    goto LABEL_418;
                                                  if ( v144 > 0 )
                                                  {
                                                    if ( v6 )
                                                    {
                                                      v148 = *(unsigned int *)(v6 + 4);
                                                      if ( (_DWORD)v148 )
                                                      {
                                                        v149 = *(_QWORD *)(v6 + 8);
                                                        if ( v149 < (unsigned __int64)&v142[2 * v144 + 4]
                                                          && v149 + 132 * v148 > (unsigned __int64)(v142 + 4) )
                                                        {
                                                          goto LABEL_417;
                                                        }
                                                      }
                                                    }
                                                    if ( (unsigned __int64)(v142 - 100) < v5
                                                      && (unsigned __int64)&v142[2 * v144 + 4] > v5 )
                                                    {
                                                      goto LABEL_417;
                                                    }
                                                  }
                                                  v142 += *(unsigned __int8 *)(v5 + 85);
                                                  if ( (unsigned __int64)v142 < v27 )
                                                    break;
                                                }
                                              }
                                              *(_QWORD *)(v5 + 88) = 0LL;
                                              v143 = 0LL;
LABEL_410:
                                              if ( v143 )
                                              {
                                                if ( (v150 = v142 + 6, v6)
                                                  && (v151 = *(unsigned int *)(v6 + 4), (_DWORD)v151)
                                                  && (v152 = *(_QWORD *)(v6 + 8), v152 < (unsigned __int64)v150)
                                                  && v152 + 132 * v151 > v143
                                                  || v143 - 104 < v5 && (unsigned __int64)v150 > v5 )
                                                {
LABEL_417:
                                                  *(_QWORD *)(v5 + 88) = 0LL;
                                                }
                                              }
                                            }
                                          }
LABEL_418:
                                          if ( !v6 )
                                            goto LABEL_128;
                                          v153 = *(unsigned int *)(v6 + 4);
                                          if ( !(_DWORD)v153 )
                                            goto LABEL_128;
                                          v154 = *(_QWORD *)(v6 + 8);
                                          if ( v154 - 104 >= v5 || v154 + 132 * v153 <= v5 )
                                            goto LABEL_128;
                                        }
                                      }
                                    }
                                  }
                                }
                                break;
                              }
                              v34 += 2;
                              v35 += 2;
                              if ( (unsigned __int64)v34 < v27 )
                                break;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LABEL_422:
              Win32FreePool(v27);
              v7 = 0;
            }
            else
            {
LABEL_128:
              v7 = 1;
            }
            goto LABEL_129;
          }
        }
        v7 = 0;
      }
LABEL_129:
      v9 = a1;
    }
  }
  if ( v157 )
    Win32FreePool((__int64)v157);
  if ( v7 )
    return (struct tagKbdLayer *)v5;
  *((_QWORD *)v9 + 6) = 0LL;
  return 0LL;
}
