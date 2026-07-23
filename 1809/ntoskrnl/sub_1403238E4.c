/*
 * XREFs of sub_1403238E4 @ 0x1403238E4
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1403238E4(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  PVOID v5; // r10
  __int64 v6; // r12
  signed int v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned int v17; // r14d
  int v18; // ebx
  unsigned int i; // r9d
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rdx
  unsigned int *v24; // rax
  PVOID v25; // rcx
  int v26; // r15d
  int v27; // esi
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // eax
  unsigned int v31; // edx
  unsigned int v32; // r8d
  unsigned int v33; // ecx
  int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // edx
  unsigned int v37; // r9d
  unsigned int v38; // eax
  int v39; // ecx
  int v40; // r11d
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // edx
  unsigned int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // eax
  unsigned int v47; // edx
  PVOID PoolWithTag; // rax
  __int64 v49; // r10
  int v50; // r15d
  unsigned int v51; // edx
  int v52; // eax
  unsigned int v53; // ecx
  int v54; // r9d
  char *v55; // r8
  unsigned int v56; // eax
  unsigned int v57; // r15d
  char *v58; // rcx
  char *v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r10
  unsigned int v63; // edx
  int v64; // eax
  unsigned int v65; // ecx
  int v66; // r9d
  char *v67; // r8
  unsigned int v68; // eax
  unsigned int v69; // r15d
  char *v70; // rcx
  char *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  const void *v74; // r11
  __int64 v75; // r9
  int v76; // r15d
  unsigned int v77; // ecx
  unsigned int v78; // eax
  __int64 v79; // r10
  int v80; // eax
  int v81; // ecx
  unsigned int v82; // edx
  int v83; // eax
  unsigned int v84; // ecx
  int v85; // r9d
  char *v86; // r8
  unsigned int v87; // eax
  unsigned int v88; // r11d
  char *v89; // rcx
  char *v90; // rdx
  __int64 v91; // rax
  __int64 v92; // r9
  int v93; // r10d
  char *v94; // r8
  unsigned int v95; // eax
  unsigned int v96; // r11d
  char *v97; // rcx
  char *v98; // rdx
  __int64 v99; // rax
  int v101; // [rsp+20h] [rbp-20h]
  unsigned int v102; // [rsp+24h] [rbp-1Ch]
  PVOID Src; // [rsp+30h] [rbp-10h]
  _QWORD *v104; // [rsp+38h] [rbp-8h]
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+40h] BYREF

  LODWORD(NumberOfBytes) = a3;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v6 = -1LL;
  Src = 0LL;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v11 = v4;
    do
    {
      v12 = -1LL;
      if ( v11 + 4 >= v11 )
        v12 = v11 + 4;
      v10 = v11 + 4 < v11 ? 0xC0000095 : 0;
      if ( v11 + 4 < v11 )
        goto LABEL_18;
      v13 = v12 + *(unsigned int *)v11;
      v11 = -1LL;
      if ( v13 >= v12 )
        v11 = v13;
      v10 = v13 < v12 ? 0xC0000095 : 0;
      if ( v13 < v12 )
        goto LABEL_18;
      LODWORD(v5) = (_DWORD)v5 + 1;
    }
    while ( (unsigned int)v5 < 3 );
    v14 = *(_DWORD *)v11;
    v15 = -1LL;
    if ( v11 + 4 >= v11 )
      v15 = v11 + 4;
    v10 = v11 + 4 < v11 ? 0xC0000095 : 0;
    if ( v11 + 4 < v11 )
    {
LABEL_18:
      v14 = NumberOfBytes;
      v16 = v104;
      goto LABEL_19;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_19:
    if ( v10 >= 0 )
    {
      if ( v14 != 8 )
        return (unsigned int)-1073741789;
      v104 = (_QWORD *)*v16;
    }
    v5 = 0LL;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( !v4 || *(_DWORD *)a1 <= 4u )
  {
    v10 = -1073741811;
LABEL_27:
    v17 = NumberOfBytes;
    goto LABEL_28;
  }
  for ( i = 0; i < 4; ++i )
  {
    v20 = -1LL;
    if ( v4 + 4 >= v4 )
      v20 = v4 + 4;
    v10 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
      goto LABEL_47;
    v21 = v20 + *(unsigned int *)v4;
    v4 = -1LL;
    if ( v21 >= v20 )
      v4 = v21;
    v10 = v21 < v20 ? 0xC0000095 : 0;
    if ( v21 < v20 )
      goto LABEL_47;
  }
  v22 = *(_DWORD *)v4;
  v23 = -1LL;
  if ( v4 + 4 >= v4 )
    v23 = v4 + 4;
  v10 = v4 + 4 < v4 ? 0xC0000095 : 0;
  if ( v4 + 4 < v4 )
  {
LABEL_47:
    v22 = NumberOfBytes;
    v24 = (unsigned int *)v104;
    goto LABEL_48;
  }
  v24 = 0LL;
  if ( v22 )
    v24 = (unsigned int *)v23;
LABEL_48:
  if ( v10 < 0 )
    goto LABEL_27;
  if ( v22 != 4 )
    return (unsigned int)-1073741789;
  v17 = *v24;
LABEL_28:
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( v17 )
  {
    v18 = 0;
    Src = ExAllocatePoolWithTag(PagedPool, v17, 0x20534C53u);
    v5 = Src;
    if ( !Src )
      return (unsigned int)-1073741801;
  }
  else
  {
    v18 = 1;
  }
  if ( qword_14096E408 )
  {
    v25 = 0LL;
    if ( !v18 )
      v25 = v5;
    v26 = qword_14096E408(v25, v17, &NumberOfBytes);
  }
  else
  {
    v26 = -1073741637;
  }
  v27 = -1;
  v102 = v17 + 4;
  v28 = -1;
  if ( v17 < 0xFFFFFFFC )
    v28 = v17 + 4;
  v10 = v17 >= 0xFFFFFFFC ? 0xC0000095 : 0;
  if ( v17 + 4 < 4 )
    goto LABEL_68;
  v29 = v28;
  v30 = v28 + 20;
  v31 = -1;
  if ( v29 < 0xFFFFFFEC )
    v31 = v30;
  v10 = v29 >= 0xFFFFFFEC ? 0xC0000095 : 0;
  if ( v30 < 0x14 )
  {
LABEL_68:
    v32 = NumberOfBytes;
  }
  else
  {
    v32 = NumberOfBytes;
    v33 = v31 + 8;
    v34 = -1;
    if ( v31 + 8 >= v31 )
      v34 = v31 + 8;
    v10 = v33 < v31 ? 0xC0000095 : 0;
    if ( v33 >= v31 )
      v32 = v34;
  }
  if ( v10 < 0 )
    goto LABEL_189;
  v35 = -1;
  if ( v32 < 0xFFFFFFF8 )
    v35 = v32 + 8;
  v10 = v32 >= 0xFFFFFFF8 ? 0xC0000095 : 0;
  if ( v32 + 8 >= 8 )
  {
    v36 = (v35 + 7) & 0xFFFFFFF8;
    if ( v36 >= v35 )
    {
      v38 = v36 + 8;
      v39 = -1;
      if ( v36 + 8 >= v36 )
        v39 = v36 + 8;
      v10 = v38 < v36 ? 0xC0000095 : 0;
      v37 = NumberOfBytes;
      if ( v38 >= v36 )
        v37 = v39;
    }
    else
    {
      v10 = -1073741675;
      v37 = NumberOfBytes;
    }
    if ( v10 < 0 )
      goto LABEL_189;
    v40 = *(_DWORD *)(a2 + 16);
    v41 = -1;
    if ( v37 < 0xFFFFFFFC )
      v41 = v37 + 4;
    v10 = v37 >= 0xFFFFFFFC ? 0xC0000095 : 0;
    if ( v37 + 4 >= 4 )
    {
      v42 = v41 + 4;
      v43 = -1;
      if ( v41 + 4 >= v41 )
        v43 = v41 + 4;
      v10 = v42 < v41 ? 0xC0000095 : 0;
      if ( v42 >= v41 )
      {
        v44 = v43 + v40;
        v45 = -1;
        if ( v43 + v40 >= v43 )
          v45 = v43 + v40;
        v10 = v44 < v43 ? 0xC0000095 : 0;
        if ( v44 >= v43 )
        {
          v46 = v45 + 4;
          v47 = -1;
          if ( v45 + 4 >= v45 )
            v47 = v45 + 4;
          v10 = v46 < v45 ? 0xC0000095 : 0;
          if ( v46 >= v45 )
            v10 = v47 + *(_DWORD *)(a2 + 32) < v47 ? 0xC0000095 : 0;
        }
      }
    }
  }
  if ( v10 < 0 )
    goto LABEL_189;
  if ( !a4 )
  {
    v10 = -1073741811;
    goto LABEL_189;
  }
  v10 = 0;
  *(_DWORD *)(a4 + 4) = v32;
  if ( v32 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v32, 0x20534C53u);
    if ( PoolWithTag )
    {
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
  }
  else
  {
    v10 = -1073741762;
  }
  if ( v10 < 0 )
    goto LABEL_189;
  v49 = *(_QWORD *)(a4 + 8);
  v50 = v26 | 0x10000000;
  v101 = v50;
  if ( v49 )
  {
    v54 = 0;
    v55 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v56 = -1;
        if ( *(_DWORD *)v55 < 0xFFFFFFFC )
          v56 = *(_DWORD *)v55 + 4;
        v10 = *(_DWORD *)v55 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v55 + 4) < 4 )
          break;
        v57 = v56;
        v58 = v55;
        v59 = &v55[v56];
        v60 = -1LL;
        if ( v59 >= v55 )
          v60 = (__int64)&v55[v57];
        v55 = (char *)v60;
        v10 = v59 < v58 ? 0xC0000095 : 0;
        if ( v59 < v58 )
          break;
        if ( (unsigned int)++v54 >= *(_DWORD *)a4 )
        {
          v50 = v101;
          goto LABEL_116;
        }
      }
    }
    else
    {
LABEL_116:
      v61 = -1LL;
      if ( v55 + 4 >= v55 )
        v61 = (__int64)(v55 + 4);
      v10 = v55 + 4 < v55 ? 0xC0000095 : 0;
      if ( v55 + 4 >= v55 )
      {
        if ( (unsigned __int64)(v55 + 8) > v49 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_187;
        *(_DWORD *)v55 = 4;
        *(_DWORD *)v61 = v50;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v51 = *(_DWORD *)(a4 + 4);
    v52 = -1;
    v53 = v51 + 8;
    if ( v51 + 8 >= v51 )
      v52 = v51 + 8;
    v10 = v53 < v51 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v52;
    if ( v53 >= v51 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_122;
    }
  }
  if ( v10 < 0 )
    goto LABEL_189;
LABEL_122:
  v62 = *(_QWORD *)(a4 + 8);
  if ( v62 )
  {
    v66 = 0;
    v67 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v68 = -1;
        if ( *(_DWORD *)v67 < 0xFFFFFFFC )
          v68 = *(_DWORD *)v67 + 4;
        v10 = *(_DWORD *)v67 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v67 + 4) < 4 )
          break;
        v69 = v68;
        v70 = v67;
        v71 = &v67[v68];
        v72 = -1LL;
        if ( v71 >= v67 )
          v72 = (__int64)&v67[v69];
        v67 = (char *)v72;
        v10 = v71 < v70 ? 0xC0000095 : 0;
        if ( v71 < v70 )
          break;
        if ( (unsigned int)++v66 >= *(_DWORD *)a4 )
          goto LABEL_135;
      }
    }
    else
    {
LABEL_135:
      v73 = -1LL;
      if ( v67 + 4 >= v67 )
        v73 = (__int64)(v67 + 4);
      v10 = v67 + 4 < v67 ? 0xC0000095 : 0;
      if ( v67 + 4 >= v67 )
      {
        if ( (unsigned __int64)(v67 + 12) > v62 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_187;
        *(_DWORD *)v67 = 8;
        *(_QWORD *)v73 = v104;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v63 = *(_DWORD *)(a4 + 4);
    v64 = -1;
    v65 = v63 + 12;
    if ( v63 + 12 >= v63 )
      v64 = v63 + 12;
    v10 = v65 < v63 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v64;
    if ( v65 >= v63 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_141;
    }
  }
  if ( v10 < 0 )
    goto LABEL_189;
LABEL_141:
  v74 = Src;
  if ( Src )
  {
    if ( !v17 )
      goto LABEL_143;
  }
  else if ( v17 )
  {
LABEL_143:
    v10 = -1073741811;
    goto LABEL_144;
  }
  v79 = *(_QWORD *)(a4 + 8);
  if ( v79 )
  {
    v85 = 0;
    v86 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v87 = -1;
        if ( *(_DWORD *)v86 < 0xFFFFFFFC )
          v87 = *(_DWORD *)v86 + 4;
        v10 = *(_DWORD *)v86 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v86 + 4) < 4 )
          goto LABEL_144;
        v88 = v87;
        v89 = v86;
        v90 = &v86[v87];
        v91 = -1LL;
        if ( v90 >= v86 )
          v91 = (__int64)&v86[v88];
        v86 = (char *)v91;
        v10 = v90 < v89 ? 0xC0000095 : 0;
        if ( v90 < v89 )
          goto LABEL_144;
        if ( (unsigned int)++v85 >= *(_DWORD *)a4 )
        {
          v74 = Src;
          break;
        }
      }
    }
    v92 = -1LL;
    if ( v86 + 4 >= v86 )
      v92 = (__int64)(v86 + 4);
    v10 = v86 + 4 < v86 ? 0xC0000095 : 0;
    if ( v86 + 4 < v86 )
      goto LABEL_144;
    if ( (unsigned __int64)&v86[v17 + 4] <= v79 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v86 = v17;
      if ( v74 )
        memmove((void *)v92, v74, v17);
      ++*(_DWORD *)a4;
      goto LABEL_144;
    }
LABEL_187:
    v10 = -1073741789;
    goto LABEL_189;
  }
  v80 = -1;
  if ( v102 >= 4 )
    v80 = v17 + 4;
  v10 = v17 >= 0xFFFFFFFC ? 0xC0000095 : 0;
  if ( v102 >= 4 )
  {
    v81 = v80;
    v82 = *(_DWORD *)(a4 + 4);
    v83 = -1;
    v84 = v82 + v81;
    if ( v84 >= v82 )
      v83 = v84;
    v10 = v84 < v82 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v83;
    if ( v84 >= v82 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_145;
    }
  }
LABEL_144:
  if ( v10 < 0 )
    goto LABEL_189;
LABEL_145:
  v75 = *(_QWORD *)(a4 + 8);
  v76 = NumberOfBytes;
  if ( !v75 )
  {
    v77 = *(_DWORD *)(a4 + 4);
    v78 = v77 + 8;
    if ( v77 + 8 >= v77 )
      v27 = v77 + 8;
    v10 = v78 < v77 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v27;
    if ( v78 >= v77 )
    {
      ++*(_DWORD *)a4;
      v10 = 0;
    }
    goto LABEL_189;
  }
  v93 = 0;
  v94 = *(char **)(a4 + 8);
  if ( *(_DWORD *)a4 )
  {
    do
    {
      v95 = -1;
      if ( *(_DWORD *)v94 < 0xFFFFFFFC )
        v95 = *(_DWORD *)v94 + 4;
      v10 = *(_DWORD *)v94 >= 0xFFFFFFFC ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)v94 + 4) < 4 )
        goto LABEL_189;
      v96 = v95;
      v97 = v94;
      v98 = &v94[v95];
      v99 = -1LL;
      if ( v98 >= v94 )
        v99 = (__int64)&v94[v96];
      v94 = (char *)v99;
      v10 = v98 < v97 ? 0xC0000095 : 0;
      if ( v98 < v97 )
        goto LABEL_189;
    }
    while ( (unsigned int)++v93 < *(_DWORD *)a4 );
  }
  if ( v94 + 4 >= v94 )
    v6 = (__int64)(v94 + 4);
  v10 = v94 + 4 < v94 ? 0xC0000095 : 0;
  if ( v94 + 4 >= v94 )
  {
    if ( (unsigned __int64)(v94 + 8) > v75 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_187;
    *(_DWORD *)v94 = 4;
    *(_DWORD *)v6 = v76;
    ++*(_DWORD *)a4;
  }
LABEL_189:
  if ( Src )
    ExFreePoolWithTag(Src, 0x20534C53u);
  return (unsigned int)v10;
}
