/*
 * XREFs of sub_1408E40FC @ 0x1408E40FC
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408E40FC(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r15
  int v6; // edi
  signed int v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned int i; // r9d
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  unsigned int v15; // ecx
  __int64 v16; // r9
  _QWORD *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned int j; // r9d
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rcx
  unsigned int v22; // ecx
  __int64 v23; // r9
  unsigned int *v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  unsigned int k; // edx
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rcx
  unsigned int v30; // ecx
  __int64 v31; // rdx
  unsigned int *v32; // rax
  int v33; // r14d
  int v34; // r12d
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // edx
  PVOID PoolWithTag; // rax
  __int64 v39; // r10
  int v40; // r14d
  unsigned int v41; // edx
  int v42; // eax
  unsigned int v43; // ecx
  char *v44; // r8
  int v45; // r9d
  unsigned int v46; // eax
  unsigned int v47; // r13d
  char *v48; // rcx
  char *v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r9
  unsigned int v53; // ecx
  unsigned int v54; // eax
  char *v55; // r8
  unsigned int v56; // eax
  unsigned int v57; // r10d
  char *v58; // rcx
  char *v59; // rdx
  __int64 v60; // rax
  _QWORD *v62; // [rsp+28h] [rbp-8h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  v6 = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v11 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v13 = -1LL;
      if ( v11 + 4 >= v11 )
        v13 = v11 + 4;
      v10 = v11 + 4 < v11 ? 0xC0000095 : 0;
      if ( v11 + 4 < v11 )
        goto LABEL_18;
      v14 = v13 + *(unsigned int *)v11;
      v11 = -1LL;
      if ( v14 >= v13 )
        v11 = v14;
      v10 = v14 < v13 ? 0xC0000095 : 0;
      if ( v14 < v13 )
        goto LABEL_18;
    }
    v15 = *(_DWORD *)v11;
    v16 = -1LL;
    if ( v11 + 4 >= v11 )
      v16 = v11 + 4;
    v10 = v11 + 4 < v11 ? 0xC0000095 : 0;
    if ( v11 + 4 < v11 )
    {
LABEL_18:
      v15 = a3;
      v17 = v62;
      goto LABEL_19;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_19:
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v62 = (_QWORD *)*v17;
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
    goto LABEL_44;
  }
  v18 = v4;
  for ( j = 0; j < 4; ++j )
  {
    v20 = -1LL;
    if ( v18 + 4 >= v18 )
      v20 = v18 + 4;
    v10 = v18 + 4 < v18 ? 0xC0000095 : 0;
    if ( v18 + 4 < v18 )
      goto LABEL_40;
    v21 = v20 + *(unsigned int *)v18;
    v18 = -1LL;
    if ( v21 >= v20 )
      v18 = v21;
    v10 = v21 < v20 ? 0xC0000095 : 0;
    if ( v21 < v20 )
      goto LABEL_40;
  }
  v22 = *(_DWORD *)v18;
  v23 = -1LL;
  if ( v18 + 4 >= v18 )
    v23 = v18 + 4;
  v10 = v18 + 4 < v18 ? 0xC0000095 : 0;
  if ( v18 + 4 < v18 )
  {
LABEL_40:
    v22 = a3;
    v24 = (unsigned int *)v62;
    goto LABEL_41;
  }
  v24 = 0LL;
  if ( v22 )
    v24 = (unsigned int *)v23;
LABEL_41:
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( v22 != 4 )
    return (unsigned int)-1073741789;
  a3 = *v24;
LABEL_44:
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( !v4 || *(_DWORD *)a1 <= 5u )
  {
    v10 = -1073741811;
LABEL_47:
    v25 = a3;
    goto LABEL_48;
  }
  for ( k = 0; k < 5; ++k )
  {
    v28 = -1LL;
    if ( v4 + 4 >= v4 )
      v28 = v4 + 4;
    v10 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
      goto LABEL_66;
    v29 = v28 + *(unsigned int *)v4;
    v4 = -1LL;
    if ( v29 >= v28 )
      v4 = v29;
    v10 = v29 < v28 ? 0xC0000095 : 0;
    if ( v29 < v28 )
      goto LABEL_66;
  }
  v30 = *(_DWORD *)v4;
  v31 = -1LL;
  if ( v4 + 4 >= v4 )
    v31 = v4 + 4;
  v10 = v4 + 4 < v4 ? 0xC0000095 : 0;
  if ( v4 + 4 < v4 )
  {
LABEL_66:
    v30 = a3;
    v32 = (unsigned int *)v62;
    goto LABEL_67;
  }
  v32 = 0LL;
  if ( v30 )
    v32 = (unsigned int *)v31;
LABEL_67:
  if ( v10 < 0 )
    goto LABEL_47;
  if ( v30 != 4 )
    return (unsigned int)-1073741789;
  v25 = *v32;
LABEL_48:
  if ( v10 < 0 )
    return (unsigned int)v10;
  v26 = a3 ? ClipSpInitialize(v25, &g_kernelCallbacks) : ClipSpUninitialize(v25);
  v33 = v26;
  v10 = v26;
  if ( v26 < 0 )
    return (unsigned int)v10;
  v34 = -1;
  v35 = -1;
  if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
    v35 = *(_DWORD *)(a2 + 16) + 48;
  v10 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
  {
    v36 = v35 + 4;
    v37 = -1;
    if ( v35 + 4 >= v35 )
      v37 = v35 + 4;
    v10 = v36 < v35 ? 0xC0000095 : 0;
    if ( v36 >= v35 )
      v10 = v37 + *(_DWORD *)(a2 + 32) < v37 ? 0xC0000095 : 0;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( !a4 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a4 + 4) = 20;
  v10 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  if ( PoolWithTag )
  {
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v10 = -1073741801;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  v39 = *(_QWORD *)(a4 + 8);
  v40 = v33 | 0x10000000;
  if ( v39 )
  {
    v44 = *(char **)(a4 + 8);
    v45 = 0;
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v46 = -1;
        if ( *(_DWORD *)v44 < 0xFFFFFFFC )
          v46 = *(_DWORD *)v44 + 4;
        v10 = *(_DWORD *)v44 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v44 + 4) < 4 )
          break;
        v47 = v46;
        v48 = v44;
        v49 = &v44[v46];
        v50 = -1LL;
        if ( v49 >= v44 )
          v50 = (__int64)&v44[v47];
        v44 = (char *)v50;
        v10 = v49 < v48 ? 0xC0000095 : 0;
        if ( v49 < v48 )
          break;
        if ( (unsigned int)++v45 >= *(_DWORD *)a4 )
          goto LABEL_99;
      }
    }
    else
    {
LABEL_99:
      v51 = -1LL;
      if ( v44 + 4 >= v44 )
        v51 = (__int64)(v44 + 4);
      v10 = v44 + 4 < v44 ? 0xC0000095 : 0;
      if ( v44 + 4 >= v44 )
      {
        if ( (unsigned __int64)(v44 + 8) > v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *(_DWORD *)v44 = 4;
        *(_DWORD *)v51 = v40;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v41 = *(_DWORD *)(a4 + 4);
    v42 = -1;
    v43 = v41 + 8;
    if ( v41 + 8 >= v41 )
      v42 = v41 + 8;
    v10 = v43 < v41 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v42;
    if ( v43 >= v41 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_105;
    }
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
LABEL_105:
  v52 = *(_QWORD *)(a4 + 8);
  if ( v52 )
  {
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
        if ( (unsigned int)++v6 >= *(_DWORD *)a4 )
          goto LABEL_118;
      }
      return (unsigned int)v10;
    }
LABEL_118:
    if ( v55 + 4 >= v55 )
      v5 = (__int64)(v55 + 4);
    v10 = v55 + 4 < v55 ? 0xC0000095 : 0;
    if ( v55 + 4 < v55 )
      return (unsigned int)v10;
    if ( (unsigned __int64)(v55 + 12) <= v52 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v55 = 8;
      *(_QWORD *)v5 = v62;
      goto LABEL_124;
    }
    return (unsigned int)-1073741789;
  }
  v53 = *(_DWORD *)(a4 + 4);
  v54 = v53 + 12;
  if ( v53 + 12 >= v53 )
    v34 = v53 + 12;
  v10 = v54 < v53 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v34;
  if ( v54 >= v53 )
  {
    v10 = 0;
LABEL_124:
    ++*(_DWORD *)a4;
  }
  return (unsigned int)v10;
}
