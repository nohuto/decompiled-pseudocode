/*
 * XREFs of sub_1408E3004 @ 0x1408E3004
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     StringCbLengthW @ 0x1400FD170 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408E3004(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r15
  signed int v8; // ebx
  unsigned __int64 v9; // rdx
  unsigned int i; // r10d
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // r9
  _QWORD *v15; // rax
  void *v16; // r12
  unsigned __int64 v17; // rdx
  unsigned int j; // r10d
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rcx
  unsigned int v21; // ecx
  __int64 v22; // r9
  unsigned int *v23; // rax
  unsigned int k; // edx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  const wchar_t *v29; // r11
  unsigned __int64 v30; // r8
  __int64 v31; // rsi
  void *v32; // r11
  unsigned int v33; // eax
  size_t v34; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v36; // r11d
  unsigned __int64 v37; // rdx
  unsigned int m; // r9d
  unsigned __int64 v39; // r10
  unsigned __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  unsigned int n; // r9d
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rcx
  unsigned int v46; // r14d
  __int64 v47; // rcx
  __int64 v48; // rsi
  unsigned int v49; // r13d
  int v50; // ebx
  unsigned int ii; // edx
  unsigned __int64 v52; // r9
  unsigned __int64 v53; // rcx
  unsigned int v54; // ecx
  __int64 v55; // rdx
  unsigned int *v56; // rax
  void *v57; // rdx
  int v58; // r12d
  int v59; // esi
  int v60; // eax
  unsigned int v61; // ecx
  unsigned int v62; // eax
  unsigned int v63; // edx
  unsigned int v64; // r8d
  unsigned int v65; // ecx
  int v66; // eax
  unsigned int v67; // ecx
  unsigned int v68; // r9d
  unsigned int v69; // edx
  unsigned int v70; // eax
  int v71; // ecx
  unsigned int v72; // ecx
  int v73; // r11d
  unsigned int v74; // eax
  unsigned int v75; // edx
  unsigned int v76; // eax
  unsigned int v77; // ecx
  unsigned int v78; // eax
  unsigned int v79; // edx
  PVOID v80; // rax
  __int64 v81; // r10
  int v82; // r12d
  unsigned int v83; // edx
  int v84; // eax
  unsigned int v85; // ecx
  char *v86; // r8
  int v87; // r9d
  int v88; // eax
  unsigned int v89; // r14d
  __int64 v90; // rax
  char *v91; // rdx
  char *v92; // rcx
  __int64 v93; // rdx
  __int64 v94; // r10
  unsigned int v95; // edx
  int v96; // eax
  unsigned int v97; // ecx
  char *v98; // r8
  int v99; // r9d
  int v100; // eax
  unsigned int v101; // r14d
  __int64 v102; // rax
  char *v103; // rdx
  char *v104; // rcx
  __int64 v105; // rdx
  _QWORD *v106; // xmm0_8
  __int64 v107; // r10
  int v108; // eax
  int v109; // ecx
  unsigned int v110; // edx
  int v111; // eax
  unsigned int v112; // ecx
  char *v113; // r8
  int v114; // r9d
  int v115; // eax
  unsigned int v116; // r11d
  __int64 v117; // rax
  char *v118; // rdx
  char *v119; // rcx
  __int64 v120; // r9
  __int64 v121; // r9
  int v122; // r15d
  unsigned int v123; // ecx
  unsigned int v124; // eax
  int v125; // r10d
  char *v126; // r8
  int v127; // eax
  unsigned int v128; // r11d
  __int64 v129; // rax
  char *v130; // rdx
  char *v131; // rcx
  __int64 v132; // rdx
  unsigned int v134; // [rsp+50h] [rbp-30h]
  int v135; // [rsp+54h] [rbp-2Ch] BYREF
  void *v136; // [rsp+58h] [rbp-28h]
  size_t pcbLength; // [rsp+60h] [rbp-20h] BYREF
  void *Src; // [rsp+68h] [rbp-18h]
  _QWORD *v139; // [rsp+70h] [rbp-10h]
  unsigned int NumberOfBytesa; // [rsp+D0h] [rbp+50h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v134 = 0;
  v136 = 0LL;
  v135 = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v9 = v4;
    for ( i = 0; i < 3; ++i )
    {
      v11 = -1LL;
      if ( v9 + 4 >= v9 )
        v11 = v9 + 4;
      v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
      if ( v9 + 4 < v9 )
        goto LABEL_18;
      v12 = v11 + *(unsigned int *)v9;
      v9 = -1LL;
      if ( v12 >= v11 )
        v9 = v12;
      v8 = v12 < v11 ? 0xC0000095 : 0;
      if ( v12 < v11 )
        goto LABEL_18;
    }
    v13 = *(_DWORD *)v9;
    v14 = -1LL;
    if ( v9 + 4 >= v9 )
      v14 = v9 + 4;
    v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
    {
LABEL_18:
      v13 = a3;
      v15 = v139;
      goto LABEL_19;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (_QWORD *)v14;
LABEL_19:
    if ( v8 < 0 )
      goto LABEL_22;
    if ( v13 != 8 )
    {
LABEL_21:
      v8 = -1073741789;
LABEL_22:
      v16 = 0LL;
      goto LABEL_279;
    }
    v139 = (_QWORD *)*v15;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_22;
  if ( v4 && *(_DWORD *)a1 > 4u )
  {
    v17 = v4;
    for ( j = 0; j < 4; ++j )
    {
      v19 = -1LL;
      if ( v17 + 4 >= v17 )
        v19 = v17 + 4;
      v8 = v17 + 4 < v17 ? 0xC0000095 : 0;
      if ( v17 + 4 < v17 )
        goto LABEL_42;
      v20 = v19 + *(unsigned int *)v17;
      v17 = -1LL;
      if ( v20 >= v19 )
        v17 = v20;
      v8 = v20 < v19 ? 0xC0000095 : 0;
      if ( v20 < v19 )
        goto LABEL_42;
    }
    v21 = *(_DWORD *)v17;
    v22 = -1LL;
    if ( v17 + 4 >= v17 )
      v22 = v17 + 4;
    v8 = v17 + 4 < v17 ? 0xC0000095 : 0;
    if ( v17 + 4 < v17 )
    {
LABEL_42:
      v21 = a3;
      v23 = (unsigned int *)v139;
      goto LABEL_43;
    }
    v23 = 0LL;
    if ( v21 )
      v23 = (unsigned int *)v22;
LABEL_43:
    if ( v8 < 0 )
      goto LABEL_22;
    if ( v21 != 4 )
      goto LABEL_21;
    v134 = *v23;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_22;
  if ( v4 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v25 = -1LL;
      if ( v4 + 4 >= v4 )
        v25 = v4 + 4;
      v8 = v4 + 4 < v4 ? 0xC0000095 : 0;
      if ( v4 + 4 < v4 )
        goto LABEL_64;
      v26 = v25 + *(unsigned int *)v4;
      v4 = -1LL;
      if ( v26 >= v25 )
        v4 = v26;
      v8 = v26 < v25 ? 0xC0000095 : 0;
      if ( v26 < v25 )
        goto LABEL_64;
    }
    v27 = *(_DWORD *)v4;
    v28 = -1LL;
    if ( v4 + 4 >= v4 )
      v28 = v4 + 4;
    v8 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
    {
LABEL_64:
      v27 = a3;
      v29 = (const wchar_t *)v139;
      goto LABEL_65;
    }
    v29 = 0LL;
    if ( v27 )
      v29 = (const wchar_t *)v28;
LABEL_65:
    if ( v8 < 0 )
      goto LABEL_22;
    if ( !v27 )
      goto LABEL_67;
    if ( (v27 & 1) != 0 )
      goto LABEL_67;
    v31 = v27;
    if ( v29[((unsigned __int64)v27 >> 1) - 1] )
      goto LABEL_67;
    if ( StringCbLengthW(v29, v27, &pcbLength) < 0 || pcbLength + 2 != v31 )
    {
      v8 = -1073741762;
      goto LABEL_22;
    }
    a3 = pcbLength >> 1;
    Src = v32;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_22;
  v33 = 2 * a3 + 2;
  if ( 2 * a3 == -2 )
  {
LABEL_67:
    v8 = -1073741762;
    goto LABEL_22;
  }
  v34 = v33;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v33, 0x20534C53u);
  pcbLength = (size_t)PoolWithTag;
  if ( !PoolWithTag )
  {
    v8 = -1073741801;
    goto LABEL_22;
  }
  memmove(PoolWithTag, Src, v34);
  v30 = *(_QWORD *)(a1 + 8);
  if ( !v30 || (v36 = *(_DWORD *)a1, *(_DWORD *)a1 <= 6u) )
  {
    v8 = -1073741811;
    goto LABEL_22;
  }
  v37 = *(_QWORD *)(a1 + 8);
  for ( m = 0; m < 6; ++m )
  {
    v39 = -1LL;
    if ( v37 + 4 >= v37 )
      v39 = v37 + 4;
    v8 = v37 + 4 < v37 ? 0xC0000095 : 0;
    if ( v37 + 4 < v37 )
      goto LABEL_97;
    v40 = v39 + *(unsigned int *)v37;
    v37 = -1LL;
    if ( v40 >= v39 )
      v37 = v40;
    v8 = v40 < v39 ? 0xC0000095 : 0;
    if ( v40 < v39 )
      goto LABEL_97;
  }
  a3 = *(_DWORD *)v37;
  v41 = -1LL;
  if ( v37 + 4 >= v37 )
    v41 = v37 + 4;
  v8 = v37 + 4 < v37 ? 0xC0000095 : 0;
  if ( v37 + 4 < v37 )
  {
LABEL_97:
    v5 = (__int64)v139;
    goto LABEL_98;
  }
  if ( *(_DWORD *)v37 )
    v5 = v41;
LABEL_98:
  if ( v8 < 0 )
    goto LABEL_278;
  if ( v36 <= 7 )
    goto LABEL_100;
  v42 = *(_QWORD *)(a1 + 8);
  for ( n = 0; n < 7; ++n )
  {
    v44 = -1LL;
    if ( v42 + 4 >= v42 )
      v44 = v42 + 4;
    v8 = v42 + 4 < v42 ? 0xC0000095 : 0;
    if ( v42 + 4 < v42 )
      goto LABEL_115;
    v45 = v44 + *(unsigned int *)v42;
    v42 = -1LL;
    if ( v45 >= v44 )
      v42 = v45;
    v8 = v45 < v44 ? 0xC0000095 : 0;
    if ( v45 < v44 )
      goto LABEL_115;
  }
  v46 = *(_DWORD *)v42;
  v47 = -1LL;
  if ( v42 + 4 >= v42 )
    v47 = v42 + 4;
  v8 = v42 + 4 < v42 ? 0xC0000095 : 0;
  if ( v42 + 4 < v42 )
  {
LABEL_115:
    v46 = a3;
    v48 = (__int64)v139;
    goto LABEL_116;
  }
  v48 = 0LL;
  if ( v46 )
    v48 = v47;
LABEL_116:
  if ( v8 < 0 )
    goto LABEL_278;
  if ( v36 <= 8 )
  {
    v8 = -1073741811;
LABEL_119:
    v49 = a3;
    goto LABEL_120;
  }
  for ( ii = 0; ii < 8; ++ii )
  {
    v52 = -1LL;
    if ( v30 + 4 >= v30 )
      v52 = v30 + 4;
    v8 = v30 + 4 < v30 ? 0xC0000095 : 0;
    if ( v30 + 4 < v30 )
      goto LABEL_138;
    v53 = v52 + *(unsigned int *)v30;
    v30 = -1LL;
    if ( v53 >= v52 )
      v30 = v53;
    v8 = v53 < v52 ? 0xC0000095 : 0;
    if ( v53 < v52 )
      goto LABEL_138;
  }
  v54 = *(_DWORD *)v30;
  v55 = -1LL;
  if ( v30 + 4 >= v30 )
    v55 = v30 + 4;
  v8 = v30 + 4 < v30 ? 0xC0000095 : 0;
  if ( v30 + 4 < v30 )
  {
LABEL_138:
    v54 = a3;
    v56 = (unsigned int *)v139;
    goto LABEL_139;
  }
  v56 = 0LL;
  if ( v54 )
    v56 = (unsigned int *)v55;
LABEL_139:
  if ( v8 < 0 )
    goto LABEL_119;
  if ( v54 != 4 )
    goto LABEL_141;
  v49 = *v56;
LABEL_120:
  if ( v8 < 0 )
    goto LABEL_278;
  if ( v49 )
  {
    v50 = 0;
    v136 = ExAllocatePoolWithTag(PagedPool, v49, 0x20534C53u);
    v16 = v136;
    if ( !v136 )
    {
      v8 = -1073741801;
      goto LABEL_279;
    }
  }
  else
  {
    v16 = v136;
    v50 = 1;
  }
  if ( qword_14096E390 )
  {
    v57 = 0LL;
    if ( !v50 )
      v57 = v16;
    v58 = qword_14096E390(v134, pcbLength, v5, a3, v48, v46, v57, v49, &v135);
  }
  else
  {
    v58 = -1073741637;
  }
  v59 = -1;
  NumberOfBytesa = v49 + 4;
  v60 = -1;
  if ( v49 < 0xFFFFFFFC )
    v60 = v49 + 4;
  v8 = v49 >= 0xFFFFFFFC ? 0xC0000095 : 0;
  if ( v49 + 4 < 4 )
    goto LABEL_160;
  v61 = v60;
  v62 = v60 + 20;
  v63 = -1;
  if ( v61 < 0xFFFFFFEC )
    v63 = v62;
  v8 = v61 >= 0xFFFFFFEC ? 0xC0000095 : 0;
  if ( v62 < 0x14 )
  {
LABEL_160:
    v64 = v49 + 4;
  }
  else
  {
    v64 = v49 + 4;
    v65 = v63 + 8;
    v66 = -1;
    if ( v63 + 8 >= v63 )
      v66 = v63 + 8;
    v8 = v65 < v63 ? 0xC0000095 : 0;
    if ( v65 >= v63 )
      v64 = v66;
  }
  if ( v8 < 0 )
    goto LABEL_278;
  v67 = -1;
  if ( v64 < 0xFFFFFFF8 )
    v67 = v64 + 8;
  v8 = v64 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
  if ( v64 + 8 >= 8 )
  {
    v68 = v49 + 4;
    v69 = (v67 + 7) & 0xFFFFFFF8;
    if ( v69 >= v67 )
    {
      v70 = v69 + 8;
      v71 = -1;
      if ( v69 + 8 >= v69 )
        v71 = v69 + 8;
      v8 = v70 < v69 ? 0xC0000095 : 0;
      if ( v70 >= v69 )
        v68 = v71;
    }
    else
    {
      v8 = -1073741675;
    }
    if ( v8 < 0 )
      goto LABEL_278;
    v72 = -1;
    v73 = *(_DWORD *)(a2 + 16);
    if ( v68 < 0xFFFFFFFC )
      v72 = v68 + 4;
    v8 = v68 >= 0xFFFFFFFC ? 0xC0000095 : 0;
    if ( v68 + 4 >= 4 )
    {
      v74 = v72 + 4;
      v75 = -1;
      if ( v72 + 4 >= v72 )
        v75 = v72 + 4;
      v8 = v74 < v72 ? 0xC0000095 : 0;
      if ( v74 >= v72 )
      {
        v76 = v75 + v73;
        v77 = -1;
        if ( v75 + v73 >= v75 )
          v77 = v75 + v73;
        v8 = v76 < v75 ? 0xC0000095 : 0;
        if ( v76 >= v75 )
        {
          v78 = v77 + 4;
          v79 = -1;
          if ( v77 + 4 >= v77 )
            v79 = v77 + 4;
          v8 = v78 < v77 ? 0xC0000095 : 0;
          if ( v78 >= v77 )
            v8 = v79 + *(_DWORD *)(a2 + 32) < v79 ? 0xC0000095 : 0;
        }
      }
    }
  }
  if ( v8 < 0 )
    goto LABEL_278;
  if ( !a4 )
  {
LABEL_100:
    v8 = -1073741811;
    goto LABEL_278;
  }
  *(_DWORD *)(a4 + 4) = v64;
  v8 = 0;
  if ( v64 )
  {
    v80 = ExAllocatePoolWithTag(PagedPool, v64, 0x20534C53u);
    if ( v80 )
    {
      *(_QWORD *)(a4 + 8) = v80;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v8 = -1073741762;
  }
  if ( v8 < 0 )
    goto LABEL_278;
  v81 = *(_QWORD *)(a4 + 8);
  v82 = v58 | 0x10000000;
  if ( v81 )
  {
    v86 = *(char **)(a4 + 8);
    v87 = 0;
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v88 = -1;
        if ( *(_DWORD *)v86 < 0xFFFFFFFC )
          v88 = *(_DWORD *)v86 + 4;
        v8 = *(_DWORD *)v86 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v86 + 4) < 4 )
          break;
        v89 = v88;
        v90 = -1LL;
        v91 = &v86[v89];
        v92 = v86;
        if ( v91 >= v86 )
          v90 = (__int64)&v86[v89];
        v86 = (char *)v90;
        v8 = v91 < v92 ? 0xC0000095 : 0;
        if ( v91 < v92 )
          break;
        if ( (unsigned int)++v87 >= *(_DWORD *)a4 )
          goto LABEL_206;
      }
    }
    else
    {
LABEL_206:
      v93 = -1LL;
      if ( v86 + 4 >= v86 )
        v93 = (__int64)(v86 + 4);
      v8 = v86 + 4 < v86 ? 0xC0000095 : 0;
      if ( v86 + 4 >= v86 )
      {
        if ( (unsigned __int64)(v86 + 8) > v81 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_141;
        *(_DWORD *)v86 = 4;
        *(_DWORD *)v93 = v82;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v83 = *(_DWORD *)(a4 + 4);
    v84 = -1;
    v85 = v83 + 8;
    if ( v83 + 8 >= v83 )
      v84 = v83 + 8;
    v8 = v85 < v83 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v84;
    if ( v85 >= v83 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_212;
    }
  }
  if ( v8 < 0 )
    goto LABEL_278;
LABEL_212:
  v94 = *(_QWORD *)(a4 + 8);
  if ( v94 )
  {
    v98 = *(char **)(a4 + 8);
    v99 = 0;
    if ( *(_DWORD *)a4 )
    {
      do
      {
        v100 = -1;
        if ( *(_DWORD *)v98 < 0xFFFFFFFC )
          v100 = *(_DWORD *)v98 + 4;
        v8 = *(_DWORD *)v98 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v98 + 4) < 4 )
          goto LABEL_230;
        v101 = v100;
        v102 = -1LL;
        v103 = &v98[v101];
        v104 = v98;
        if ( v103 >= v98 )
          v102 = (__int64)&v98[v101];
        v98 = (char *)v102;
        v8 = v103 < v104 ? 0xC0000095 : 0;
        if ( v103 < v104 )
          goto LABEL_230;
      }
      while ( (unsigned int)++v99 < *(_DWORD *)a4 );
    }
    v105 = -1LL;
    if ( v98 + 4 >= v98 )
      v105 = (__int64)(v98 + 4);
    v8 = v98 + 4 < v98 ? 0xC0000095 : 0;
    if ( v98 + 4 < v98 )
      goto LABEL_230;
    if ( (unsigned __int64)(v98 + 12) <= v94 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      v106 = v139;
      *(_DWORD *)v98 = 8;
      *(_QWORD *)v105 = v106;
      ++*(_DWORD *)a4;
      goto LABEL_230;
    }
LABEL_141:
    v8 = -1073741789;
    goto LABEL_278;
  }
  v95 = *(_DWORD *)(a4 + 4);
  v96 = -1;
  v97 = v95 + 12;
  if ( v95 + 12 >= v95 )
    v96 = v95 + 12;
  v8 = v97 < v95 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v96;
  if ( v97 >= v95 )
  {
    ++*(_DWORD *)a4;
    goto LABEL_231;
  }
LABEL_230:
  if ( v8 < 0 )
    goto LABEL_278;
LABEL_231:
  v16 = v136;
  if ( v136 )
  {
    if ( !v49 )
      goto LABEL_233;
  }
  else if ( v49 )
  {
LABEL_233:
    v8 = -1073741811;
    goto LABEL_259;
  }
  v107 = *(_QWORD *)(a4 + 8);
  if ( v107 )
  {
    v113 = *(char **)(a4 + 8);
    v114 = 0;
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v115 = -1;
        if ( *(_DWORD *)v113 < 0xFFFFFFFC )
          v115 = *(_DWORD *)v113 + 4;
        v8 = *(_DWORD *)v113 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v113 + 4) < 4 )
          break;
        v116 = v115;
        v117 = -1LL;
        v118 = &v113[v116];
        v119 = v113;
        if ( v118 >= v113 )
          v117 = (__int64)&v113[v116];
        v113 = (char *)v117;
        v8 = v118 < v119 ? 0xC0000095 : 0;
        if ( v118 < v119 )
          break;
        if ( (unsigned int)++v114 >= *(_DWORD *)a4 )
          goto LABEL_251;
      }
    }
    else
    {
LABEL_251:
      v120 = -1LL;
      if ( v113 + 4 >= v113 )
        v120 = (__int64)(v113 + 4);
      v8 = v113 + 4 < v113 ? 0xC0000095 : 0;
      if ( v113 + 4 >= v113 )
      {
        if ( (unsigned __int64)&v113[v49 + 4] > v107 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          v8 = -1073741789;
          goto LABEL_279;
        }
        *(_DWORD *)v113 = v49;
        if ( v16 )
          memmove((void *)v120, v16, v49);
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v108 = -1;
    if ( NumberOfBytesa >= 4 )
      v108 = v49 + 4;
    v8 = v49 >= 0xFFFFFFFC ? 0xC0000095 : 0;
    if ( NumberOfBytesa >= 4 )
    {
      v109 = v108;
      v110 = *(_DWORD *)(a4 + 4);
      v111 = -1;
      v112 = v110 + v109;
      if ( v112 >= v110 )
        v111 = v112;
      v8 = v112 < v110 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v111;
      if ( v112 >= v110 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_260;
      }
    }
  }
LABEL_259:
  if ( v8 < 0 )
    goto LABEL_279;
LABEL_260:
  v121 = *(_QWORD *)(a4 + 8);
  v122 = v135;
  if ( !v121 )
  {
    v123 = *(_DWORD *)(a4 + 4);
    v124 = v123 + 8;
    if ( v123 + 8 >= v123 )
      v59 = v123 + 8;
    v8 = v124 < v123 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v59;
    if ( v124 >= v123 )
    {
      ++*(_DWORD *)a4;
      v8 = 0;
    }
    goto LABEL_278;
  }
  v125 = 0;
  v126 = *(char **)(a4 + 8);
  if ( *(_DWORD *)a4 )
  {
    do
    {
      v127 = -1;
      if ( *(_DWORD *)v126 < 0xFFFFFFFC )
        v127 = *(_DWORD *)v126 + 4;
      v8 = *(_DWORD *)v126 >= 0xFFFFFFFC ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)v126 + 4) < 4 )
        goto LABEL_278;
      v128 = v127;
      v129 = -1LL;
      v130 = &v126[v128];
      v131 = v126;
      if ( v130 >= v126 )
        v129 = (__int64)&v126[v128];
      v126 = (char *)v129;
      v8 = v130 < v131 ? 0xC0000095 : 0;
      if ( v130 < v131 )
        goto LABEL_278;
    }
    while ( (unsigned int)++v125 < *(_DWORD *)a4 );
  }
  v132 = -1LL;
  if ( v126 + 4 >= v126 )
    v132 = (__int64)(v126 + 4);
  v8 = v126 + 4 < v126 ? 0xC0000095 : 0;
  if ( v126 + 4 >= v126 )
  {
    if ( (unsigned __int64)(v126 + 8) <= v121 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v126 = 4;
      *(_DWORD *)v132 = v122;
      ++*(_DWORD *)a4;
      goto LABEL_278;
    }
    goto LABEL_141;
  }
LABEL_278:
  v16 = v136;
LABEL_279:
  if ( pcbLength )
    ExFreePoolWithTag((PVOID)pcbLength, 0x20534C53u);
  if ( v16 )
    ExFreePoolWithTag(v16, 0x20534C53u);
  return (unsigned int)v8;
}
