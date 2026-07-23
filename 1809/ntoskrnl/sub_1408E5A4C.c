/*
 * XREFs of sub_1408E5A4C @ 0x1408E5A4C
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408E5A4C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v4; // ebx
  __int64 v8; // r15
  signed int v9; // r8d
  unsigned __int64 v10; // r9
  __int64 v11; // rsi
  unsigned __int64 v12; // r10
  unsigned int i; // r11d
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // r11
  _QWORD *v18; // rax
  unsigned int j; // edx
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // r14d
  int v25; // ebp
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edx
  char *PoolWithTag; // rax
  char *v30; // rdx
  int v31; // r14d
  char *v32; // rax
  __int64 v33; // r9
  unsigned int v34; // r10d
  __int64 v35; // r11
  unsigned int v36; // ecx
  unsigned int v37; // eax
  char *v38; // r9
  unsigned int v39; // eax
  unsigned int v40; // r14d
  char *v41; // rcx
  char *v42; // rdx
  __int64 v43; // rax
  _QWORD *v45; // [rsp+68h] [rbp+10h]

  v4 = 0;
  v8 = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = -1LL;
  if ( v10 && *(_DWORD *)a1 > 3u )
  {
    v12 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v14 = -1LL;
      if ( v12 + 4 >= v12 )
        v14 = v12 + 4;
      v9 = v12 + 4 < v12 ? 0xC0000095 : 0;
      if ( v12 + 4 < v12 )
        goto LABEL_21;
      v15 = v14 + *(unsigned int *)v12;
      v12 = -1LL;
      if ( v15 >= v14 )
        v12 = v15;
      v9 = v15 < v14 ? 0xC0000095 : 0;
      if ( v15 < v14 )
        goto LABEL_21;
    }
    v16 = *(_DWORD *)v12;
    v17 = -1LL;
    if ( v12 + 4 >= v12 )
      v17 = v12 + 4;
    v9 = v12 + 4 < v12 ? 0xC0000095 : 0;
    if ( v12 + 4 < v12 )
    {
LABEL_21:
      v16 = a3;
      v18 = v45;
      goto LABEL_22;
    }
    v18 = 0LL;
    if ( v16 )
      v18 = (_QWORD *)v17;
LABEL_22:
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( v16 != 8 )
      return (unsigned int)-1073741789;
    v45 = (_QWORD *)*v18;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    if ( !v10 || *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    for ( j = 0; j < 4; ++j )
    {
      v20 = -1LL;
      if ( v10 + 4 >= v10 )
        v20 = v10 + 4;
      v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
      if ( v10 + 4 < v10 )
        goto LABEL_43;
      v21 = v20 + *(unsigned int *)v10;
      v10 = -1LL;
      if ( v21 >= v20 )
        v10 = v21;
      v9 = v21 < v20 ? 0xC0000095 : 0;
      if ( v21 < v20 )
        goto LABEL_43;
    }
    v22 = *(unsigned int *)v10;
    v23 = -1LL;
    if ( v10 + 4 >= v10 )
      v23 = v10 + 4;
    v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_43:
      v22 = a3;
      goto LABEL_44;
    }
    if ( (_DWORD)v22 )
      v8 = v23;
LABEL_44:
    if ( v9 >= 0 )
    {
      if ( qword_14096E348 )
        v24 = qword_14096E348(v8, v22);
      else
        v24 = -1073741637;
      v25 = -1;
      v26 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v26 = *(_DWORD *)(a2 + 16) + 48;
      v9 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v27 = v26 + 4;
        v28 = -1;
        if ( v26 + 4 >= v26 )
          v28 = v26 + 4;
        v9 = v27 < v26 ? 0xC0000095 : 0;
        if ( v27 >= v26 )
          v9 = v28 + *(_DWORD *)(a2 + 32) < v28 ? 0xC0000095 : 0;
      }
      if ( v9 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        v30 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
        v31 = v24 | 0x10000000;
        v32 = PoolWithTag + 4;
        v33 = -1LL;
        v34 = 0;
        if ( v32 >= v30 )
          v33 = (__int64)v32;
        v9 = v32 < v30 ? 0xC0000095 : 0;
        if ( v32 >= v30 )
        {
          if ( v30 + 8 > &v30[*(unsigned int *)(a4 + 4)] )
            return (unsigned int)-1073741789;
          *(_DWORD *)v30 = 4;
          *(_DWORD *)v33 = v31;
          v34 = ++*(_DWORD *)a4;
        }
        if ( v32 < v30 )
          return (unsigned int)v9;
        v35 = *(_QWORD *)(a4 + 8);
        if ( !v35 )
        {
          v36 = *(_DWORD *)(a4 + 4);
          v37 = v36 + 12;
          if ( v36 + 12 >= v36 )
            v25 = v36 + 12;
          v9 = v37 < v36 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v25;
          if ( v37 >= v36 )
          {
            v9 = 0;
            *(_DWORD *)a4 = v34 + 1;
          }
          return (unsigned int)v9;
        }
        v38 = *(char **)(a4 + 8);
        if ( v34 )
        {
          while ( 1 )
          {
            v39 = -1;
            if ( *(_DWORD *)v38 < 0xFFFFFFFC )
              v39 = *(_DWORD *)v38 + 4;
            v9 = *(_DWORD *)v38 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v38 + 4) < 4 )
              break;
            v40 = v39;
            v41 = v38;
            v42 = &v38[v39];
            v43 = -1LL;
            if ( v42 >= v38 )
              v43 = (__int64)&v38[v40];
            v38 = (char *)v43;
            v9 = v42 < v41 ? 0xC0000095 : 0;
            if ( v42 < v41 )
              break;
            if ( ++v4 >= v34 )
              goto LABEL_77;
          }
          return (unsigned int)v9;
        }
LABEL_77:
        if ( v38 + 4 >= v38 )
          v11 = (__int64)(v38 + 4);
        v9 = v38 + 4 < v38 ? 0xC0000095 : 0;
        if ( v38 + 4 < v38 )
          return (unsigned int)v9;
        if ( (unsigned __int64)(v38 + 12) <= v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v38 = 8;
          *(_QWORD *)v11 = v45;
          ++*(_DWORD *)a4;
          return (unsigned int)v9;
        }
        return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)v9;
}
