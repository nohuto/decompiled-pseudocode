/*
 * XREFs of SPCallServerHandleCheckLicense @ 0x1406EA214
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleCheckLicense(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v6; // rdx
  unsigned int *v7; // rax
  unsigned int i; // r8d
  __int64 v9; // r11
  unsigned int *v10; // r10
  unsigned int v11; // r10d
  unsigned int *v12; // r8
  unsigned int *v13; // rax
  unsigned int v14; // r8d
  unsigned int j; // ecx
  __int64 v16; // rax
  unsigned int *v17; // r8
  unsigned int v18; // r8d
  unsigned int *v19; // rcx
  int v20; // edi
  int v21; // edx
  unsigned int v22; // ecx
  _DWORD *PoolWithTag; // rax
  unsigned int v24; // ecx
  unsigned __int64 k; // rdx
  unsigned int v26; // eax
  unsigned int v28; // r9d
  __int64 v29; // r10
  int v30; // edi
  unsigned int v31; // edx
  int v32; // eax
  unsigned int v33; // ecx
  __int64 v34; // [rsp+38h] [rbp+10h]

  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  if ( v6 && *(_DWORD *)a1 > 3u )
  {
    v7 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v9 = *v7;
      v10 = v7 + 1;
      if ( v7 + 1 < v7 )
        goto LABEL_44;
      v7 = (unsigned int *)((char *)v10 + v9);
      if ( (unsigned int *)((char *)v10 + v9) < v10 )
        goto LABEL_44;
    }
    v11 = *v7;
    v12 = v7 + 1;
    if ( v7 + 1 < v7 )
    {
LABEL_44:
      v14 = -1073741675;
    }
    else
    {
      v13 = 0LL;
      if ( v11 )
        v13 = v12;
      v14 = 0;
      if ( v11 != 8 )
        return (unsigned int)-1073741789;
      v34 = *(_QWORD *)v13;
    }
  }
  else
  {
    v14 = -1073741811;
  }
  if ( (v14 & 0x80000000) != 0 )
    return v14;
  if ( !v6 || *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v16 = *v6;
    v17 = v6 + 1;
    if ( v6 + 1 < v6 )
      return (unsigned int)-1073741675;
    v6 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  v18 = *v6;
  if ( v6 + 1 < v6 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( v18 )
    v19 = v6 + 1;
  v20 = qword_1409AD488 ? qword_1409AD488(v19, v18) : -1073741637;
  v21 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v22 = *(_DWORD *)(a2 + 16) + 52;
  if ( v22 < *(_DWORD *)(a2 + 16) + 48 )
    return (unsigned int)-1073741675;
  v14 = v22 + v21 < v22 ? 0xC0000095 : 0;
  if ( v22 + v21 < v22 )
    return v14;
  *(_DWORD *)(a4 + 4) = 20;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = PoolWithTag;
  *(_DWORD *)a4 = 0;
  v30 = v20 | 0x10000000;
  if ( PoolWithTag + 1 < PoolWithTag )
    return (unsigned int)-1073741675;
  if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
    return (unsigned int)-1073741789;
  *PoolWithTag = 4;
  PoolWithTag[1] = v30;
  v28 = ++*(_DWORD *)a4;
  v29 = *(_QWORD *)(a4 + 8);
  if ( v29 )
  {
    v24 = 0;
    for ( k = *(_QWORD *)(a4 + 8); v24 < v28; k += v26 )
    {
      v26 = *(_DWORD *)k + 4;
      if ( *(_DWORD *)k >= 0xFFFFFFFC || k + v26 < k )
        return (unsigned int)-1073741675;
      ++v24;
    }
    if ( k + 4 >= k )
    {
      v14 = 0;
      if ( k + 12 <= v29 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)k = 8;
        *(_QWORD *)(k + 4) = v34;
        ++*(_DWORD *)a4;
        return v14;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  v31 = *(_DWORD *)(a4 + 4);
  v32 = -1;
  v33 = v31 + 12;
  if ( v31 + 12 >= v31 )
    v32 = v31 + 12;
  v14 = v33 < v31 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v32;
  if ( v33 >= v31 )
  {
    v14 = 0;
    *(_DWORD *)a4 = v28 + 1;
  }
  return v14;
}
