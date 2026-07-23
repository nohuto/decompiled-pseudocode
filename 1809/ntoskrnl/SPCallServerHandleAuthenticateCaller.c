/*
 * XREFs of SPCallServerHandleAuthenticateCaller @ 0x1406CFBBC
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleAuthenticateCaller(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v6; // ebp
  int v7; // r8d
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // ecx
  int v13; // eax
  unsigned int v14; // r8d
  int v15; // esi
  unsigned __int64 v16; // r14
  PVOID PoolWithTag; // rax
  __int64 v18; // r10
  __int64 v19; // r9
  char *v20; // r8
  int v21; // r11d
  __int64 v22; // rdx
  __int64 v23; // r10
  char *v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // r11d
  char *v27; // rcx
  char *v28; // rdx
  __int64 v29; // rax
  unsigned int v31; // edx
  int v32; // eax
  unsigned int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // r12d
  char *v36; // rcx
  char *v37; // rdx
  __int64 v38; // rax
  unsigned int v39; // ecx
  unsigned int v40; // eax

  v6 = -1;
  v7 = *(_DWORD *)(a2 + 32);
  v8 = -1;
  if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
    v8 = *(_DWORD *)(a2 + 16) + 48;
  v9 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) < 0x30 )
    goto LABEL_43;
  v10 = v8 + 4;
  v11 = -1;
  if ( v8 + 4 >= v8 )
    v11 = v8 + 4;
  v9 = v10 < v8 ? 0xC0000095 : 0;
  if ( v10 < v8 )
  {
LABEL_43:
    v14 = a1;
  }
  else
  {
    v12 = v11 + v7;
    v13 = -1;
    v14 = a1;
    if ( v12 >= v11 )
      v13 = v12;
    v9 = v12 < v11 ? 0xC0000095 : 0;
    if ( v12 >= v11 )
      v14 = v13;
  }
  v15 = 0;
  if ( (v9 & 0x80000000) == 0 )
  {
    if ( a3 < v14 )
    {
      v16 = 0LL;
    }
    else
    {
      v16 = __rdtsc();
      qword_14096E220 = v16;
    }
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
    if ( (v9 & 0x80000000) == 0 )
    {
      v18 = *(_QWORD *)(a4 + 8);
      v19 = -1LL;
      if ( v18 )
      {
        v20 = *(char **)(a4 + 8);
        v21 = 0;
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v34 = -1;
            if ( *(_DWORD *)v20 < 0xFFFFFFFC )
              v34 = *(_DWORD *)v20 + 4;
            v9 = *(_DWORD *)v20 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v20 + 4) < 4 )
              break;
            v35 = v34;
            v36 = v20;
            v37 = &v20[v34];
            v38 = -1LL;
            if ( v37 >= v20 )
              v38 = (__int64)&v20[v35];
            v20 = (char *)v38;
            v9 = v37 < v36 ? 0xC0000095 : 0;
            if ( v37 < v36 )
              break;
            if ( (unsigned int)++v21 >= *(_DWORD *)a4 )
              goto LABEL_20;
          }
        }
        else
        {
LABEL_20:
          v22 = -1LL;
          if ( v20 + 4 >= v20 )
            v22 = (__int64)(v20 + 4);
          v9 = v20 + 4 < v20 ? 0xC0000095 : 0;
          if ( v20 + 4 >= v20 )
          {
            if ( (unsigned __int64)(v20 + 8) > v18 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            *(_DWORD *)v20 = 4;
            *(_DWORD *)v22 = 0;
            ++*(_DWORD *)a4;
          }
        }
      }
      else
      {
        v31 = *(_DWORD *)(a4 + 4);
        v32 = -1;
        v33 = v31 + 8;
        if ( v31 + 8 >= v31 )
          v32 = v31 + 8;
        v9 = v33 < v31 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v32;
        if ( v33 >= v31 )
        {
          ++*(_DWORD *)a4;
LABEL_26:
          v23 = *(_QWORD *)(a4 + 8);
          if ( !v23 )
          {
            v39 = *(_DWORD *)(a4 + 4);
            v40 = v39 + 12;
            if ( v39 + 12 >= v39 )
              v6 = v39 + 12;
            v9 = v40 < v39 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v6;
            if ( v40 < v39 )
              return v9;
            v9 = 0;
LABEL_40:
            ++*(_DWORD *)a4;
            return v9;
          }
          v24 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            do
            {
              v25 = -1;
              if ( *(_DWORD *)v24 < 0xFFFFFFFC )
                v25 = *(_DWORD *)v24 + 4;
              v9 = *(_DWORD *)v24 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v24 + 4) < 4 )
                return v9;
              v26 = v25;
              v27 = v24;
              v28 = &v24[v25];
              v29 = -1LL;
              if ( v28 >= v24 )
                v29 = (__int64)&v24[v26];
              v24 = (char *)v29;
              v9 = v28 < v27 ? 0xC0000095 : 0;
              if ( v28 < v27 )
                return v9;
            }
            while ( (unsigned int)++v15 < *(_DWORD *)a4 );
          }
          if ( v24 + 4 >= v24 )
            v19 = (__int64)(v24 + 4);
          v9 = v24 + 4 < v24 ? 0xC0000095 : 0;
          if ( v24 + 4 < v24 )
            return v9;
          if ( (unsigned __int64)(v24 + 12) <= v23 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v24 = 8;
            *(_QWORD *)v19 = v16;
            goto LABEL_40;
          }
          return (unsigned int)-1073741789;
        }
      }
      if ( (v9 & 0x80000000) != 0 )
        return v9;
      goto LABEL_26;
    }
  }
  return v9;
}
