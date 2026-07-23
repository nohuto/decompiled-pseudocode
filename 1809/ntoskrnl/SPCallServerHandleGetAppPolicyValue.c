/*
 * XREFs of SPCallServerHandleGetAppPolicyValue @ 0x1406C2420
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     StringCbLengthW @ 0x1400FD170 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleGetAppPolicyValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  PVOID v7; // r12
  unsigned __int64 v8; // rdx
  unsigned int i; // r10d
  unsigned __int64 v10; // r9
  signed int v11; // ebx
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  _QWORD *v15; // rax
  unsigned int j; // edx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rcx
  unsigned int v19; // ecx
  __int64 v20; // rdx
  const wchar_t *v21; // r11
  __int64 v22; // rsi
  void *v23; // r11
  PVOID PoolWithTag; // rax
  unsigned __int64 v25; // r8
  unsigned int v26; // r11d
  unsigned __int64 v27; // rdx
  unsigned int k; // r9d
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  unsigned int m; // r9d
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // r9
  unsigned int *v38; // rax
  unsigned __int64 v39; // rdx
  unsigned int n; // r9d
  unsigned __int64 v41; // r10
  unsigned __int64 v42; // rcx
  unsigned int v43; // r14d
  __int64 v44; // rcx
  __int64 v45; // rsi
  unsigned int ii; // edx
  unsigned __int64 v47; // r9
  unsigned __int64 v48; // rcx
  unsigned int v49; // ecx
  __int64 v50; // rdx
  unsigned int *v51; // rax
  unsigned int v52; // r13d
  int v53; // ebx
  PVOID v54; // r11
  PVOID v55; // rcx
  int v56; // r12d
  int v57; // esi
  int v58; // eax
  unsigned int v59; // eax
  unsigned int v60; // ecx
  unsigned int v61; // eax
  unsigned int v62; // edx
  unsigned int v63; // eax
  unsigned int v64; // r9d
  unsigned int v65; // r8d
  unsigned int v66; // ecx
  int v67; // eax
  unsigned int v68; // ecx
  unsigned int v69; // r9d
  unsigned int v70; // edx
  unsigned int v71; // eax
  int v72; // ecx
  unsigned int v73; // ecx
  int v74; // r11d
  unsigned int v75; // eax
  unsigned int v76; // edx
  unsigned int v77; // eax
  unsigned int v78; // ecx
  unsigned int v79; // eax
  unsigned int v80; // edx
  PVOID v81; // rax
  __int64 v82; // r10
  int v83; // r12d
  int v84; // r9d
  char *v85; // r8
  __int64 v86; // rdx
  __int64 v87; // r10
  int v88; // r9d
  char *v89; // r8
  int v90; // eax
  unsigned int v91; // r14d
  __int64 v92; // rax
  char *v93; // rdx
  char *v94; // rcx
  __int64 v95; // rdx
  _QWORD *v96; // xmm0_8
  PVOID v97; // r11
  __int64 v98; // r10
  int v99; // r9d
  char *v100; // r8
  int v101; // eax
  unsigned int v102; // r11d
  __int64 v103; // rax
  char *v104; // rdx
  char *v105; // rcx
  __int64 v106; // r9
  __int64 v107; // r9
  int v108; // r15d
  char *v109; // r8
  int v110; // r10d
  int v111; // eax
  unsigned int v112; // r11d
  __int64 v113; // rax
  char *v114; // rdx
  char *v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // r9
  int v118; // r15d
  char *v119; // r8
  int v120; // r10d
  int v121; // eax
  unsigned int v122; // r11d
  __int64 v123; // rax
  char *v124; // rdx
  char *v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // r9
  int v128; // r15d
  char *v129; // r8
  int v130; // r10d
  int v131; // eax
  unsigned int v132; // r11d
  __int64 v133; // rax
  char *v134; // rdx
  char *v135; // rcx
  __int64 v136; // rdx
  void *v137; // rcx
  unsigned int v139; // edx
  int v140; // eax
  unsigned int v141; // ecx
  int v142; // eax
  unsigned int v143; // r14d
  __int64 v144; // rax
  char *v145; // rdx
  char *v146; // rcx
  unsigned int v147; // edx
  int v148; // eax
  unsigned int v149; // ecx
  int v150; // eax
  int v151; // ecx
  unsigned int v152; // edx
  int v153; // eax
  unsigned int v154; // ecx
  unsigned int v155; // edx
  int v156; // eax
  unsigned int v157; // ecx
  unsigned int v158; // edx
  int v159; // eax
  unsigned int v160; // ecx
  unsigned int v161; // ecx
  unsigned int v162; // eax
  int v163; // [rsp+68h] [rbp-9h]
  unsigned int v164; // [rsp+68h] [rbp-9h]
  int v165; // [rsp+6Ch] [rbp-5h] BYREF
  int v166; // [rsp+70h] [rbp-1h] BYREF
  int v167; // [rsp+74h] [rbp+3h] BYREF
  size_t pcbLength; // [rsp+78h] [rbp+7h] BYREF
  PVOID P; // [rsp+80h] [rbp+Fh]
  void *Src; // [rsp+88h] [rbp+17h]
  _QWORD *v171; // [rsp+90h] [rbp+1Fh]
  unsigned int v173; // [rsp+E8h] [rbp+77h]
  unsigned int v174; // [rsp+E8h] [rbp+77h]

  v4 = *(_QWORD *)(a1 + 8);
  v173 = 0;
  P = 0LL;
  v165 = 0;
  v166 = 0;
  v7 = 0LL;
  v167 = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v8 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v10 = -1LL;
      if ( v8 + 4 >= v8 )
        v10 = v8 + 4;
      v11 = v8 + 4 < v8 ? 0xC0000095 : 0;
      if ( v8 + 4 < v8 )
        goto LABEL_264;
      v12 = v10 + *(unsigned int *)v8;
      v8 = -1LL;
      if ( v12 >= v10 )
        v8 = v12;
      v11 = v12 < v10 ? 0xC0000095 : 0;
      if ( v12 < v10 )
        goto LABEL_264;
    }
    v13 = *(_DWORD *)v8;
    v14 = -1LL;
    if ( v8 + 4 >= v8 )
      v14 = v8 + 4;
    v11 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
    {
LABEL_264:
      v13 = 0;
      v15 = v171;
      goto LABEL_16;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (_QWORD *)v14;
LABEL_16:
    if ( v11 < 0 )
      goto LABEL_266;
    if ( v13 != 8 )
    {
      v11 = -1073741789;
      goto LABEL_266;
    }
    v171 = (_QWORD *)*v15;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( v11 >= 0 )
  {
    if ( v4 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v17 = -1LL;
        if ( v4 + 4 >= v4 )
          v17 = v4 + 4;
        v11 = v4 + 4 < v4 ? 0xC0000095 : 0;
        if ( v4 + 4 < v4 )
          goto LABEL_268;
        v18 = v17 + *(unsigned int *)v4;
        v4 = -1LL;
        if ( v18 >= v17 )
          v4 = v18;
        v11 = v18 < v17 ? 0xC0000095 : 0;
        if ( v18 < v17 )
          goto LABEL_268;
      }
      v19 = *(_DWORD *)v4;
      v20 = -1LL;
      if ( v4 + 4 >= v4 )
        v20 = v4 + 4;
      v11 = v4 + 4 < v4 ? 0xC0000095 : 0;
      if ( v4 + 4 < v4 )
      {
LABEL_268:
        v19 = 0;
        v21 = (const wchar_t *)v171;
        goto LABEL_35;
      }
      v21 = 0LL;
      if ( v19 )
        v21 = (const wchar_t *)v20;
LABEL_35:
      if ( v11 < 0 )
        goto LABEL_266;
      if ( !v19 )
        goto LABEL_269;
      if ( (v19 & 1) != 0 )
        goto LABEL_269;
      v22 = v19;
      if ( v21[((unsigned __int64)v19 >> 1) - 1] )
        goto LABEL_269;
      if ( StringCbLengthW(v21, v19, &pcbLength) < 0 || pcbLength + 2 != v22 )
      {
        v11 = -1073741762;
        goto LABEL_266;
      }
      v163 = pcbLength >> 1;
      Src = v23;
    }
    else
    {
      v11 = -1073741811;
    }
    if ( v11 < 0 )
      goto LABEL_266;
    if ( 2 * v163 != -2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(2 * v163 + 2), 0x20534C53u);
      pcbLength = (size_t)PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, Src, (unsigned int)(2 * v163 + 2));
        v25 = *(_QWORD *)(a1 + 8);
        if ( !v25 || (v26 = *(_DWORD *)a1, *(_DWORD *)a1 <= 5u) )
        {
          v11 = -1073741811;
          goto LABEL_252;
        }
        v27 = *(_QWORD *)(a1 + 8);
        for ( k = 0; k < 5; ++k )
        {
          v29 = -1LL;
          if ( v27 + 4 >= v27 )
            v29 = v27 + 4;
          v11 = v27 + 4 < v27 ? 0xC0000095 : 0;
          if ( v27 + 4 < v27 )
            goto LABEL_273;
          v30 = v29 + *(unsigned int *)v27;
          v27 = -1LL;
          if ( v30 >= v29 )
            v27 = v30;
          v11 = v30 < v29 ? 0xC0000095 : 0;
          if ( v30 < v29 )
            goto LABEL_273;
        }
        v164 = *(_DWORD *)v27;
        v31 = -1LL;
        if ( v27 + 4 >= v27 )
          v31 = v27 + 4;
        v11 = v27 + 4 < v27 ? 0xC0000095 : 0;
        if ( v27 + 4 < v27 )
        {
LABEL_273:
          v7 = v171;
          v164 = 0;
          goto LABEL_60;
        }
        if ( *(_DWORD *)v27 )
          v7 = (PVOID)v31;
LABEL_60:
        if ( v11 < 0 )
          goto LABEL_262;
        if ( v26 <= 6 )
        {
          v11 = -1073741811;
        }
        else
        {
          v32 = *(_QWORD *)(a1 + 8);
          for ( m = 0; m < 6; ++m )
          {
            v34 = -1LL;
            if ( v32 + 4 >= v32 )
              v34 = v32 + 4;
            v11 = v32 + 4 < v32 ? 0xC0000095 : 0;
            if ( v32 + 4 < v32 )
              goto LABEL_275;
            v35 = v34 + *(unsigned int *)v32;
            v32 = -1LL;
            if ( v35 >= v34 )
              v32 = v35;
            v11 = v35 < v34 ? 0xC0000095 : 0;
            if ( v35 < v34 )
              goto LABEL_275;
          }
          v36 = *(_DWORD *)v32;
          v37 = -1LL;
          if ( v32 + 4 >= v32 )
            v37 = v32 + 4;
          v11 = v32 + 4 < v32 ? 0xC0000095 : 0;
          if ( v32 + 4 < v32 )
          {
LABEL_275:
            v36 = 0;
            v38 = (unsigned int *)v171;
            goto LABEL_75;
          }
          v38 = 0LL;
          if ( v36 )
            v38 = (unsigned int *)v37;
LABEL_75:
          if ( v11 < 0 )
            goto LABEL_262;
          if ( v36 != 4 )
            goto LABEL_276;
          v173 = *v38;
        }
        if ( v11 < 0 )
        {
LABEL_262:
          v7 = 0LL;
          goto LABEL_252;
        }
        if ( v26 <= 7 )
        {
          v11 = -1073741811;
          goto LABEL_262;
        }
        v39 = *(_QWORD *)(a1 + 8);
        for ( n = 0; n < 7; ++n )
        {
          v41 = -1LL;
          if ( v39 + 4 >= v39 )
            v41 = v39 + 4;
          v11 = v39 + 4 < v39 ? 0xC0000095 : 0;
          if ( v39 + 4 < v39 )
            goto LABEL_278;
          v42 = v41 + *(unsigned int *)v39;
          v39 = -1LL;
          if ( v42 >= v41 )
            v39 = v42;
          v11 = v42 < v41 ? 0xC0000095 : 0;
          if ( v42 < v41 )
            goto LABEL_278;
        }
        v43 = *(_DWORD *)v39;
        v44 = -1LL;
        if ( v39 + 4 >= v39 )
          v44 = v39 + 4;
        v11 = v39 + 4 < v39 ? 0xC0000095 : 0;
        if ( v39 + 4 < v39 )
        {
LABEL_278:
          v43 = v173;
          v45 = (__int64)v171;
          goto LABEL_93;
        }
        v45 = 0LL;
        if ( v43 )
          v45 = v44;
LABEL_93:
        if ( v11 < 0 )
          goto LABEL_262;
        if ( v26 <= 8 )
        {
          v11 = -1073741811;
        }
        else
        {
          for ( ii = 0; ii < 8; ++ii )
          {
            v47 = -1LL;
            if ( v25 + 4 >= v25 )
              v47 = v25 + 4;
            v11 = v25 + 4 < v25 ? 0xC0000095 : 0;
            if ( v25 + 4 < v25 )
              goto LABEL_281;
            v48 = v47 + *(unsigned int *)v25;
            v25 = -1LL;
            if ( v48 >= v47 )
              v25 = v48;
            v11 = v48 < v47 ? 0xC0000095 : 0;
            if ( v48 < v47 )
              goto LABEL_281;
          }
          v49 = *(_DWORD *)v25;
          v50 = -1LL;
          if ( v25 + 4 >= v25 )
            v50 = v25 + 4;
          v11 = v25 + 4 < v25 ? 0xC0000095 : 0;
          if ( v25 + 4 < v25 )
          {
LABEL_281:
            v49 = v173;
            v51 = (unsigned int *)v171;
            goto LABEL_108;
          }
          v51 = 0LL;
          if ( v49 )
            v51 = (unsigned int *)v50;
LABEL_108:
          if ( v11 >= 0 )
          {
            if ( v49 == 4 )
            {
              v52 = *v51;
LABEL_111:
              if ( v11 < 0 )
                goto LABEL_251;
              if ( v52 )
              {
                v53 = 0;
                P = ExAllocatePoolWithTag(PagedPool, v52, 0x20534C53u);
                v54 = P;
                if ( !P )
                {
                  v11 = -1073741801;
                  v7 = 0LL;
                  goto LABEL_252;
                }
              }
              else
              {
                v54 = P;
                v53 = 1;
              }
              if ( qword_14096E398 )
              {
                v55 = 0LL;
                if ( !v53 )
                  v55 = v54;
                v56 = qword_14096E398(pcbLength, v7, v164, v173, v45, v43, v55, v52, &v165, &v166, &v167);
              }
              else
              {
                v56 = -1073741637;
              }
              v57 = -1;
              v174 = v52 + 4;
              v58 = -1;
              if ( v52 < 0xFFFFFFFC )
                v58 = v52 + 4;
              v11 = v52 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( v52 + 4 < 4 )
                goto LABEL_284;
              v59 = v58 + 20;
              v60 = -1;
              if ( v59 >= 0x14 )
                v60 = v59;
              v11 = v59 < 0x14 ? 0xC0000095 : 0;
              if ( v59 < 0x14 )
                goto LABEL_284;
              v61 = v60 + 8;
              v62 = -1;
              if ( v60 + 8 >= v60 )
                v62 = v60 + 8;
              v11 = v61 < v60 ? 0xC0000095 : 0;
              if ( v61 < v60 )
                goto LABEL_284;
              v63 = v62 + 8;
              v64 = -1;
              if ( v62 + 8 >= v62 )
                v64 = v62 + 8;
              v11 = v63 < v62 ? 0xC0000095 : 0;
              if ( v63 < v62 )
              {
LABEL_284:
                v65 = v52 + 4;
              }
              else
              {
                v65 = v52 + 4;
                v66 = v64 + 8;
                v67 = -1;
                if ( v64 + 8 >= v64 )
                  v67 = v64 + 8;
                v11 = v66 < v64 ? 0xC0000095 : 0;
                if ( v66 >= v64 )
                  v65 = v67;
              }
              if ( v11 < 0 )
                goto LABEL_251;
              v68 = -1;
              if ( v65 < 0xFFFFFFF8 )
                v68 = v65 + 8;
              v11 = v65 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
              if ( v65 + 8 >= 8 )
              {
                v69 = v52 + 4;
                v70 = (v68 + 7) & 0xFFFFFFF8;
                if ( v70 < v68 )
                {
                  v11 = -1073741675;
                }
                else
                {
                  v71 = v70 + 8;
                  v72 = -1;
                  if ( v70 + 8 >= v70 )
                    v72 = v70 + 8;
                  v11 = v71 < v70 ? 0xC0000095 : 0;
                  if ( v71 >= v70 )
                    v69 = v72;
                }
                if ( v11 < 0 )
                  goto LABEL_251;
                v73 = -1;
                v74 = *(_DWORD *)(a2 + 16);
                if ( v69 < 0xFFFFFFFC )
                  v73 = v69 + 4;
                v11 = v69 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( v69 + 4 >= 4 )
                {
                  v75 = v73 + 4;
                  v76 = -1;
                  if ( v73 + 4 >= v73 )
                    v76 = v73 + 4;
                  v11 = v75 < v73 ? 0xC0000095 : 0;
                  if ( v75 >= v73 )
                  {
                    v77 = v76 + v74;
                    v78 = -1;
                    if ( v76 + v74 >= v76 )
                      v78 = v76 + v74;
                    v11 = v77 < v76 ? 0xC0000095 : 0;
                    if ( v77 >= v76 )
                    {
                      v79 = v78 + 4;
                      v80 = -1;
                      if ( v78 + 4 >= v78 )
                        v80 = v78 + 4;
                      v11 = v79 < v78 ? 0xC0000095 : 0;
                      if ( v79 >= v78 )
                        v11 = v80 + *(_DWORD *)(a2 + 32) < v80 ? 0xC0000095 : 0;
                    }
                  }
                }
              }
              if ( v11 < 0 )
                goto LABEL_251;
              if ( !a4 )
              {
                v11 = -1073741811;
                goto LABEL_251;
              }
              v11 = 0;
              *(_DWORD *)(a4 + 4) = v65;
              if ( v65 )
              {
                v81 = ExAllocatePoolWithTag(PagedPool, v65, 0x20534C53u);
                if ( v81 )
                {
                  *(_QWORD *)(a4 + 8) = v81;
                  *(_DWORD *)a4 = 0;
                }
                else
                {
                  v11 = -1073741801;
                }
              }
              else
              {
                v11 = -1073741762;
              }
              if ( v11 < 0 )
                goto LABEL_251;
              v82 = *(_QWORD *)(a4 + 8);
              v83 = v56 | 0x10000000;
              if ( v82 )
              {
                v84 = 0;
                v85 = *(char **)(a4 + 8);
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v142 = -1;
                    if ( *(_DWORD *)v85 < 0xFFFFFFFC )
                      v142 = *(_DWORD *)v85 + 4;
                    v11 = *(_DWORD *)v85 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v85 + 4) < 4 )
                      break;
                    v143 = v142;
                    v144 = -1LL;
                    v145 = &v85[v143];
                    v146 = v85;
                    if ( v145 >= v85 )
                      v144 = (__int64)&v85[v143];
                    v85 = (char *)v144;
                    v11 = v145 < v146 ? 0xC0000095 : 0;
                    if ( v145 < v146 )
                      break;
                    if ( (unsigned int)++v84 >= *(_DWORD *)a4 )
                      goto LABEL_165;
                  }
                }
                else
                {
LABEL_165:
                  v86 = -1LL;
                  if ( v85 + 4 >= v85 )
                    v86 = (__int64)(v85 + 4);
                  v11 = v85 + 4 < v85 ? 0xC0000095 : 0;
                  if ( v85 + 4 >= v85 )
                  {
                    if ( (unsigned __int64)(v85 + 8) > v82 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      goto LABEL_261;
                    *(_DWORD *)v85 = 4;
                    *(_DWORD *)v86 = v83;
                    ++*(_DWORD *)a4;
                  }
                }
              }
              else
              {
                v139 = *(_DWORD *)(a4 + 4);
                v140 = -1;
                v141 = v139 + 8;
                if ( v139 + 8 >= v139 )
                  v140 = v139 + 8;
                v11 = v141 < v139 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v140;
                if ( v141 >= v139 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_171;
                }
              }
              if ( v11 < 0 )
                goto LABEL_251;
LABEL_171:
              v87 = *(_QWORD *)(a4 + 8);
              if ( v87 )
              {
                v88 = 0;
                v89 = *(char **)(a4 + 8);
                if ( *(_DWORD *)a4 )
                {
                  while ( 1 )
                  {
                    v90 = -1;
                    if ( *(_DWORD *)v89 < 0xFFFFFFFC )
                      v90 = *(_DWORD *)v89 + 4;
                    v11 = *(_DWORD *)v89 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v89 + 4) < 4 )
                      break;
                    v91 = v90;
                    v92 = -1LL;
                    v93 = &v89[v91];
                    v94 = v89;
                    if ( v93 >= v89 )
                      v92 = (__int64)&v89[v91];
                    v89 = (char *)v92;
                    v11 = v93 < v94 ? 0xC0000095 : 0;
                    if ( v93 < v94 )
                      break;
                    if ( (unsigned int)++v88 >= *(_DWORD *)a4 )
                      goto LABEL_180;
                  }
                }
                else
                {
LABEL_180:
                  v95 = -1LL;
                  if ( v89 + 4 >= v89 )
                    v95 = (__int64)(v89 + 4);
                  v11 = v89 + 4 < v89 ? 0xC0000095 : 0;
                  if ( v89 + 4 >= v89 )
                  {
                    if ( (unsigned __int64)(v89 + 12) > v87 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      goto LABEL_261;
                    v96 = v171;
                    *(_DWORD *)v89 = 8;
                    *(_QWORD *)v95 = v96;
                    ++*(_DWORD *)a4;
                  }
                }
              }
              else
              {
                v147 = *(_DWORD *)(a4 + 4);
                v148 = -1;
                v149 = v147 + 12;
                if ( v147 + 12 >= v147 )
                  v148 = v147 + 12;
                v11 = v149 < v147 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v148;
                if ( v149 >= v147 )
                {
                  ++*(_DWORD *)a4;
                  goto LABEL_186;
                }
              }
              if ( v11 < 0 )
                goto LABEL_251;
LABEL_186:
              v97 = P;
              if ( P )
              {
                if ( v52 )
                  goto LABEL_188;
              }
              else if ( !v52 )
              {
LABEL_188:
                v98 = *(_QWORD *)(a4 + 8);
                if ( v98 )
                {
                  v99 = 0;
                  v100 = *(char **)(a4 + 8);
                  if ( *(_DWORD *)a4 )
                  {
                    while ( 1 )
                    {
                      v101 = -1;
                      if ( *(_DWORD *)v100 < 0xFFFFFFFC )
                        v101 = *(_DWORD *)v100 + 4;
                      v11 = *(_DWORD *)v100 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                      if ( (unsigned int)(*(_DWORD *)v100 + 4) < 4 )
                        break;
                      v102 = v101;
                      v103 = -1LL;
                      v104 = &v100[v102];
                      v105 = v100;
                      if ( v104 >= v100 )
                        v103 = (__int64)&v100[v102];
                      v100 = (char *)v103;
                      v11 = v104 < v105 ? 0xC0000095 : 0;
                      if ( v104 < v105 )
                        break;
                      if ( (unsigned int)++v99 >= *(_DWORD *)a4 )
                      {
                        v97 = P;
                        goto LABEL_198;
                      }
                    }
                  }
                  else
                  {
LABEL_198:
                    v106 = -1LL;
                    if ( v100 + 4 >= v100 )
                      v106 = (__int64)(v100 + 4);
                    v11 = v100 + 4 < v100 ? 0xC0000095 : 0;
                    if ( v100 + 4 >= v100 )
                    {
                      if ( (unsigned __int64)&v100[v52 + 4] > v98 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_261;
                      *(_DWORD *)v100 = v52;
                      if ( v97 )
                        memmove((void *)v106, v97, v52);
                      ++*(_DWORD *)a4;
                    }
                  }
                }
                else
                {
                  v150 = -1;
                  if ( v174 >= 4 )
                    v150 = v52 + 4;
                  v11 = v52 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( v174 >= 4 )
                  {
                    v151 = v150;
                    v152 = *(_DWORD *)(a4 + 4);
                    v153 = -1;
                    v154 = v152 + v151;
                    if ( v154 >= v152 )
                      v153 = v154;
                    v11 = v154 < v152 ? 0xC0000095 : 0;
                    *(_DWORD *)(a4 + 4) = v153;
                    if ( v154 >= v152 )
                    {
                      ++*(_DWORD *)a4;
                      goto LABEL_206;
                    }
                  }
                }
LABEL_205:
                if ( v11 < 0 )
                  goto LABEL_251;
LABEL_206:
                v107 = *(_QWORD *)(a4 + 8);
                v108 = v165;
                if ( v107 )
                {
                  v109 = *(char **)(a4 + 8);
                  v110 = 0;
                  if ( *(_DWORD *)a4 )
                  {
                    while ( 1 )
                    {
                      v111 = -1;
                      if ( *(_DWORD *)v109 < 0xFFFFFFFC )
                        v111 = *(_DWORD *)v109 + 4;
                      v11 = *(_DWORD *)v109 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                      if ( (unsigned int)(*(_DWORD *)v109 + 4) < 4 )
                        break;
                      v112 = v111;
                      v113 = -1LL;
                      v114 = &v109[v112];
                      v115 = v109;
                      if ( v114 >= v109 )
                        v113 = (__int64)&v109[v112];
                      v109 = (char *)v113;
                      v11 = v114 < v115 ? 0xC0000095 : 0;
                      if ( v114 < v115 )
                        break;
                      if ( (unsigned int)++v110 >= *(_DWORD *)a4 )
                        goto LABEL_215;
                    }
                  }
                  else
                  {
LABEL_215:
                    v116 = -1LL;
                    if ( v109 + 4 >= v109 )
                      v116 = (__int64)(v109 + 4);
                    v11 = v109 + 4 < v109 ? 0xC0000095 : 0;
                    if ( v109 + 4 >= v109 )
                    {
                      if ( (unsigned __int64)(v109 + 8) > v107 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_261;
                      *(_DWORD *)v109 = 4;
                      *(_DWORD *)v116 = v108;
                      ++*(_DWORD *)a4;
                    }
                  }
                }
                else
                {
                  v155 = *(_DWORD *)(a4 + 4);
                  v156 = -1;
                  v157 = v155 + 8;
                  if ( v155 + 8 >= v155 )
                    v156 = v155 + 8;
                  v11 = v157 < v155 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v156;
                  if ( v157 >= v155 )
                  {
                    ++*(_DWORD *)a4;
                    goto LABEL_221;
                  }
                }
                if ( v11 < 0 )
                  goto LABEL_251;
LABEL_221:
                v117 = *(_QWORD *)(a4 + 8);
                v118 = v166;
                if ( v117 )
                {
                  v119 = *(char **)(a4 + 8);
                  v120 = 0;
                  if ( *(_DWORD *)a4 )
                  {
                    while ( 1 )
                    {
                      v121 = -1;
                      if ( *(_DWORD *)v119 < 0xFFFFFFFC )
                        v121 = *(_DWORD *)v119 + 4;
                      v11 = *(_DWORD *)v119 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                      if ( (unsigned int)(*(_DWORD *)v119 + 4) < 4 )
                        break;
                      v122 = v121;
                      v123 = -1LL;
                      v124 = &v119[v122];
                      v125 = v119;
                      if ( v124 >= v119 )
                        v123 = (__int64)&v119[v122];
                      v119 = (char *)v123;
                      v11 = v124 < v125 ? 0xC0000095 : 0;
                      if ( v124 < v125 )
                        break;
                      if ( (unsigned int)++v120 >= *(_DWORD *)a4 )
                        goto LABEL_230;
                    }
                  }
                  else
                  {
LABEL_230:
                    v126 = -1LL;
                    if ( v119 + 4 >= v119 )
                      v126 = (__int64)(v119 + 4);
                    v11 = v119 + 4 < v119 ? 0xC0000095 : 0;
                    if ( v119 + 4 >= v119 )
                    {
                      if ( (unsigned __int64)(v119 + 8) > v117 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        goto LABEL_261;
                      *(_DWORD *)v119 = 4;
                      *(_DWORD *)v126 = v118;
                      ++*(_DWORD *)a4;
                    }
                  }
                }
                else
                {
                  v158 = *(_DWORD *)(a4 + 4);
                  v159 = -1;
                  v160 = v158 + 8;
                  if ( v158 + 8 >= v158 )
                    v159 = v158 + 8;
                  v11 = v160 < v158 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v159;
                  if ( v160 >= v158 )
                  {
                    ++*(_DWORD *)a4;
LABEL_236:
                    v127 = *(_QWORD *)(a4 + 8);
                    v128 = v167;
                    if ( !v127 )
                    {
                      v161 = *(_DWORD *)(a4 + 4);
                      v162 = v161 + 8;
                      if ( v161 + 8 >= v161 )
                        v57 = v161 + 8;
                      v11 = v162 < v161 ? 0xC0000095 : 0;
                      *(_DWORD *)(a4 + 4) = v57;
                      if ( v162 < v161 )
                        goto LABEL_251;
                      v11 = 0;
                      goto LABEL_250;
                    }
                    v129 = *(char **)(a4 + 8);
                    v130 = 0;
                    if ( *(_DWORD *)a4 )
                    {
                      do
                      {
                        v131 = -1;
                        if ( *(_DWORD *)v129 < 0xFFFFFFFC )
                          v131 = *(_DWORD *)v129 + 4;
                        v11 = *(_DWORD *)v129 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                        if ( (unsigned int)(*(_DWORD *)v129 + 4) < 4 )
                          goto LABEL_251;
                        v132 = v131;
                        v133 = -1LL;
                        v134 = &v129[v132];
                        v135 = v129;
                        if ( v134 >= v129 )
                          v133 = (__int64)&v129[v132];
                        v129 = (char *)v133;
                        v11 = v134 < v135 ? 0xC0000095 : 0;
                        if ( v134 < v135 )
                          goto LABEL_251;
                      }
                      while ( (unsigned int)++v130 < *(_DWORD *)a4 );
                    }
                    v136 = -1LL;
                    if ( v129 + 4 >= v129 )
                      v136 = (__int64)(v129 + 4);
                    v11 = v129 + 4 < v129 ? 0xC0000095 : 0;
                    if ( v129 + 4 >= v129 )
                    {
                      if ( (unsigned __int64)(v129 + 8) <= v127 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      {
                        *(_DWORD *)v129 = 4;
                        *(_DWORD *)v136 = v128;
LABEL_250:
                        ++*(_DWORD *)a4;
                        goto LABEL_251;
                      }
LABEL_261:
                      v11 = -1073741789;
                    }
LABEL_251:
                    v7 = P;
LABEL_252:
                    v137 = (void *)pcbLength;
                    goto LABEL_253;
                  }
                }
                if ( v11 < 0 )
                  goto LABEL_251;
                goto LABEL_236;
              }
              v11 = -1073741811;
              goto LABEL_205;
            }
LABEL_276:
            v11 = -1073741789;
            goto LABEL_262;
          }
        }
        v52 = v173;
        goto LABEL_111;
      }
      v11 = -1073741801;
      goto LABEL_266;
    }
LABEL_269:
    v11 = -1073741762;
  }
LABEL_266:
  v137 = P;
LABEL_253:
  if ( v137 )
    ExFreePoolWithTag(v137, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v11;
}
