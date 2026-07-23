/*
 * XREFs of SPCallServerHandleCheckLicense @ 0x1406C9710
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleCheckLicense(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // r10
  unsigned int i; // r11d
  unsigned __int64 v12; // r14
  signed int v13; // r8d
  unsigned __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // r11
  _QWORD *v17; // rax
  unsigned int j; // edx
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  __int64 v21; // r10
  __int64 v22; // rcx
  int v23; // r14d
  int v24; // ebp
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // edx
  char *PoolWithTag; // rax
  char *v29; // rdx
  int v30; // r14d
  char *v31; // rax
  __int64 v32; // r9
  unsigned int v33; // r10d
  __int64 v34; // r11
  char *v35; // r9
  unsigned int v36; // eax
  unsigned int v37; // r14d
  char *v38; // rcx
  char *v39; // rdx
  __int64 v40; // rax
  unsigned int v42; // ecx
  unsigned int v43; // eax
  _QWORD *v44; // [rsp+58h] [rbp+10h]

  v4 = 0;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v12 = -1LL;
      if ( v10 + 4 >= v10 )
        v12 = v10 + 4;
      v13 = v10 + 4 < v10 ? 0xC0000095 : 0;
      if ( v10 + 4 < v10 )
        goto LABEL_74;
      v14 = v12 + *(unsigned int *)v10;
      v10 = -1LL;
      if ( v14 >= v12 )
        v10 = v14;
      v13 = v14 < v12 ? 0xC0000095 : 0;
      if ( v14 < v12 )
        goto LABEL_74;
    }
    v15 = *(_DWORD *)v10;
    v16 = -1LL;
    if ( v10 + 4 >= v10 )
      v16 = v10 + 4;
    v13 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_74:
      v15 = a3;
      v17 = v44;
      goto LABEL_18;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_18:
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v44 = (_QWORD *)*v17;
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 >= 0 )
  {
    if ( !v8 || *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    for ( j = 0; j < 4; ++j )
    {
      v19 = -1LL;
      if ( v8 + 4 >= v8 )
        v19 = v8 + 4;
      v13 = v8 + 4 < v8 ? 0xC0000095 : 0;
      if ( v8 + 4 < v8 )
        goto LABEL_75;
      v20 = v19 + *(unsigned int *)v8;
      v8 = -1LL;
      if ( v20 >= v19 )
        v8 = v20;
      v13 = v20 < v19 ? 0xC0000095 : 0;
      if ( v20 < v19 )
        goto LABEL_75;
    }
    v21 = -1LL;
    if ( v8 + 4 >= v8 )
      v21 = v8 + 4;
    v13 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
    {
LABEL_75:
      v22 = (__int64)v44;
      goto LABEL_37;
    }
    v22 = 0LL;
    if ( *(_DWORD *)v8 )
      v22 = v21;
LABEL_37:
    if ( v13 >= 0 )
    {
      if ( qword_14096E3F8 )
        v23 = qword_14096E3F8(v22);
      else
        v23 = -1073741637;
      v24 = -1;
      v25 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v25 = *(_DWORD *)(a2 + 16) + 48;
      v13 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v26 = v25 + 4;
        v27 = -1;
        if ( v25 + 4 >= v25 )
          v27 = v25 + 4;
        v13 = v26 < v25 ? 0xC0000095 : 0;
        if ( v26 >= v25 )
          v13 = v27 + *(_DWORD *)(a2 + 32) < v27 ? 0xC0000095 : 0;
      }
      if ( v13 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        v29 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
        v30 = v23 | 0x10000000;
        v31 = PoolWithTag + 4;
        v32 = -1LL;
        v33 = 0;
        if ( v31 >= v29 )
          v32 = (__int64)v31;
        v13 = v31 < v29 ? 0xC0000095 : 0;
        if ( v31 >= v29 )
        {
          if ( v29 + 8 > &v29[*(unsigned int *)(a4 + 4)] )
            return (unsigned int)-1073741789;
          *(_DWORD *)v29 = 4;
          *(_DWORD *)v32 = v30;
          v33 = ++*(_DWORD *)a4;
        }
        if ( v31 < v29 )
          return (unsigned int)v13;
        v34 = *(_QWORD *)(a4 + 8);
        if ( !v34 )
        {
          v42 = *(_DWORD *)(a4 + 4);
          v43 = v42 + 12;
          if ( v42 + 12 >= v42 )
            v24 = v42 + 12;
          v13 = v43 < v42 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v24;
          if ( v43 >= v42 )
          {
            v13 = 0;
            *(_DWORD *)a4 = v33 + 1;
          }
          return (unsigned int)v13;
        }
        v35 = *(char **)(a4 + 8);
        if ( v33 )
        {
          while ( 1 )
          {
            v36 = -1;
            if ( *(_DWORD *)v35 < 0xFFFFFFFC )
              v36 = *(_DWORD *)v35 + 4;
            v13 = *(_DWORD *)v35 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v35 + 4) < 4 )
              break;
            v37 = v36;
            v38 = v35;
            v39 = &v35[v36];
            v40 = -1LL;
            if ( v39 >= v35 )
              v40 = (__int64)&v35[v37];
            v35 = (char *)v40;
            v13 = v39 < v38 ? 0xC0000095 : 0;
            if ( v39 < v38 )
              break;
            if ( ++v4 >= v33 )
              goto LABEL_64;
          }
          return (unsigned int)v13;
        }
LABEL_64:
        if ( v35 + 4 >= v35 )
          v9 = (__int64)(v35 + 4);
        v13 = v35 + 4 < v35 ? 0xC0000095 : 0;
        if ( v35 + 4 < v35 )
          return (unsigned int)v13;
        if ( (unsigned __int64)(v35 + 12) <= v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v35 = 8;
          *(_QWORD *)v9 = v44;
          ++*(_DWORD *)a4;
          return (unsigned int)v13;
        }
        return (unsigned int)-1073741789;
      }
    }
  }
  return (unsigned int)v13;
}
