/*
 * XREFs of SPCallServerHandleAuthenticateCaller @ 0x140682D8C
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleAuthenticateCaller(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // r9d
  unsigned int v6; // eax
  unsigned __int64 v7; // rsi
  unsigned int v8; // ecx
  _DWORD *v9; // rdx
  unsigned int v10; // ecx
  unsigned __int64 i; // rdx
  unsigned int v12; // ebx
  PVOID PoolWithTag; // rax
  __int64 v14; // r9
  int v15; // ebp
  unsigned int v16; // edx
  int v17; // eax
  unsigned int v18; // ecx
  __int64 v19; // r10
  unsigned int v20; // ecx
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax

  v5 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v6 = *(_DWORD *)(a2 + 16) + 52;
  if ( v6 < *(_DWORD *)(a2 + 16) + 48 || v6 + v5 < v6 )
    return (unsigned int)-1073741675;
  if ( a3 < v6 + v5 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = __rdtsc();
    qword_1409AD2B8 = v7;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a4 + 4) = 20;
  v12 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  if ( PoolWithTag )
  {
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v12 = -1073741801;
  }
  if ( (v12 & 0x80000000) == 0 )
  {
    v14 = *(_QWORD *)(a4 + 8);
    v15 = -1;
    if ( v14 )
    {
      v8 = 0;
      v9 = *(_DWORD **)(a4 + 8);
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v22 = *v9 + 4;
          if ( *v9 >= 0xFFFFFFFC )
            break;
          if ( (_DWORD *)((char *)v9 + v22) < v9 )
            return (unsigned int)-1073741675;
          ++v8;
          v9 = (_DWORD *)((char *)v9 + v22);
          if ( v8 >= *(_DWORD *)a4 )
            goto LABEL_37;
        }
        v12 = -1073741675;
      }
      else
      {
LABEL_37:
        if ( v9 + 1 < v9 )
          return (unsigned int)-1073741675;
        v12 = 0;
        if ( (unsigned __int64)(v9 + 2) > v14 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v9 = 4;
        v9[1] = 0;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v16 = *(_DWORD *)(a4 + 4);
      v17 = -1;
      v18 = v16 + 8;
      if ( v16 + 8 >= v16 )
        v17 = v16 + 8;
      v12 = v18 < v16 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v17;
      if ( v18 >= v16 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_27;
      }
    }
    if ( (v12 & 0x80000000) != 0 )
      return v12;
LABEL_27:
    v19 = *(_QWORD *)(a4 + 8);
    if ( !v19 )
    {
      v20 = *(_DWORD *)(a4 + 4);
      v21 = v20 + 12;
      if ( v20 + 12 >= v20 )
        v15 = v20 + 12;
      v12 = v21 < v20 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v15;
      if ( v21 >= v20 )
      {
        ++*(_DWORD *)a4;
        return 0;
      }
      return v12;
    }
    v10 = 0;
    for ( i = *(_QWORD *)(a4 + 8); v10 < *(_DWORD *)a4; i += v23 )
    {
      v23 = *(_DWORD *)i + 4;
      if ( *(_DWORD *)i >= 0xFFFFFFFC || i + v23 < i )
        return (unsigned int)-1073741675;
      ++v10;
    }
    if ( i + 4 >= i )
    {
      v12 = 0;
      if ( i + 12 <= v19 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)i = 8;
        *(_QWORD *)(i + 4) = v7;
        ++*(_DWORD *)a4;
        return v12;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  return v12;
}
