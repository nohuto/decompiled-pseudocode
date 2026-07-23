/*
 * XREFs of sub_1408DFEC4 @ 0x1408DFEC4
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408DFEC4(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r14
  int v6; // edi
  signed int v9; // ebx
  unsigned int i; // edx
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rdx
  _QWORD *v15; // rax
  int v16; // ebp
  int v17; // r8d
  unsigned int v18; // eax
  int v19; // r15d
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // edx
  PVOID PoolWithTag; // rax
  __int64 v24; // r10
  int v25; // ebp
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // ecx
  char *v29; // r8
  int v30; // r9d
  unsigned int v31; // eax
  unsigned int v32; // r12d
  char *v33; // rcx
  char *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r9
  unsigned int v38; // ecx
  unsigned int v39; // eax
  char *v40; // r8
  unsigned int v41; // eax
  unsigned int v42; // r10d
  char *v43; // rcx
  char *v44; // rdx
  __int64 v45; // rax
  _QWORD *v47; // [rsp+20h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  v6 = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v11 = -1LL;
      if ( v4 + 4 >= v4 )
        v11 = v4 + 4;
      v9 = v4 + 4 < v4 ? 0xC0000095 : 0;
      if ( v4 + 4 < v4 )
        goto LABEL_18;
      v12 = v11 + *(unsigned int *)v4;
      v4 = -1LL;
      if ( v12 >= v11 )
        v4 = v12;
      v9 = v12 < v11 ? 0xC0000095 : 0;
      if ( v12 < v11 )
        goto LABEL_18;
    }
    v13 = *(_DWORD *)v4;
    v14 = -1LL;
    if ( v4 + 4 >= v4 )
      v14 = v4 + 4;
    v9 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
    {
LABEL_18:
      v13 = a3;
      v15 = v47;
      goto LABEL_19;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (_QWORD *)v14;
LABEL_19:
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v47 = (_QWORD *)*v15;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  v16 = qword_14096E350 ? qword_14096E350() : -1073741637;
  v9 = v16;
  if ( v16 < 0 )
    return (unsigned int)v9;
  v17 = *(_DWORD *)(a2 + 32);
  v18 = *(_DWORD *)(a2 + 16) + 48;
  v19 = -1;
  v20 = -1;
  if ( v18 >= 0x30 )
    v20 = v18;
  v9 = v18 < 0x30 ? 0xC0000095 : 0;
  if ( v18 >= 0x30 )
  {
    v21 = v20 + 4;
    v22 = -1;
    if ( v20 + 4 >= v20 )
      v22 = v20 + 4;
    v9 = v21 < v20 ? 0xC0000095 : 0;
    if ( v21 >= v20 )
      v9 = v22 + v17 < v22 ? 0xC0000095 : 0;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  if ( !a4 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a4 + 4) = 20;
  v9 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  if ( PoolWithTag )
  {
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v9 = -1073741801;
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
  v24 = *(_QWORD *)(a4 + 8);
  v25 = v16 | 0x10000000;
  if ( v24 )
  {
    v29 = *(char **)(a4 + 8);
    v30 = 0;
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v31 = -1;
        if ( *(_DWORD *)v29 < 0xFFFFFFFC )
          v31 = *(_DWORD *)v29 + 4;
        v9 = *(_DWORD *)v29 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v29 + 4) < 4 )
          break;
        v32 = v31;
        v33 = v29;
        v34 = &v29[v31];
        v35 = -1LL;
        if ( v34 >= v29 )
          v35 = (__int64)&v29[v32];
        v29 = (char *)v35;
        v9 = v34 < v33 ? 0xC0000095 : 0;
        if ( v34 < v33 )
          break;
        if ( (unsigned int)++v30 >= *(_DWORD *)a4 )
          goto LABEL_54;
      }
    }
    else
    {
LABEL_54:
      v36 = -1LL;
      if ( v29 + 4 >= v29 )
        v36 = (__int64)(v29 + 4);
      v9 = v29 + 4 < v29 ? 0xC0000095 : 0;
      if ( v29 + 4 >= v29 )
      {
        if ( (unsigned __int64)(v29 + 8) > v24 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *(_DWORD *)v29 = 4;
        *(_DWORD *)v36 = v25;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v26 = *(_DWORD *)(a4 + 4);
    v27 = -1;
    v28 = v26 + 8;
    if ( v26 + 8 >= v26 )
      v27 = v26 + 8;
    v9 = v28 < v26 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v27;
    if ( v28 >= v26 )
    {
      ++*(_DWORD *)a4;
      goto LABEL_60;
    }
  }
  if ( v9 < 0 )
    return (unsigned int)v9;
LABEL_60:
  v37 = *(_QWORD *)(a4 + 8);
  if ( v37 )
  {
    v40 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v41 = -1;
        if ( *(_DWORD *)v40 < 0xFFFFFFFC )
          v41 = *(_DWORD *)v40 + 4;
        v9 = *(_DWORD *)v40 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v40 + 4) < 4 )
          break;
        v42 = v41;
        v43 = v40;
        v44 = &v40[v41];
        v45 = -1LL;
        if ( v44 >= v40 )
          v45 = (__int64)&v40[v42];
        v40 = (char *)v45;
        v9 = v44 < v43 ? 0xC0000095 : 0;
        if ( v44 < v43 )
          break;
        if ( (unsigned int)++v6 >= *(_DWORD *)a4 )
          goto LABEL_73;
      }
      return (unsigned int)v9;
    }
LABEL_73:
    if ( v40 + 4 >= v40 )
      v5 = (__int64)(v40 + 4);
    v9 = v40 + 4 < v40 ? 0xC0000095 : 0;
    if ( v40 + 4 < v40 )
      return (unsigned int)v9;
    if ( (unsigned __int64)(v40 + 12) <= v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v40 = 8;
      *(_QWORD *)v5 = v47;
      goto LABEL_79;
    }
    return (unsigned int)-1073741789;
  }
  v38 = *(_DWORD *)(a4 + 4);
  v39 = v38 + 12;
  if ( v38 + 12 >= v38 )
    v19 = v38 + 12;
  v9 = v39 < v38 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v19;
  if ( v39 >= v38 )
  {
    v9 = 0;
LABEL_79:
    ++*(_DWORD *)a4;
  }
  return (unsigned int)v9;
}
