/*
 * XREFs of sub_14092067C @ 0x14092067C
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14092067C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r8d
  unsigned int *v7; // rdx
  unsigned int *v8; // rax
  unsigned int i; // r8d
  __int64 v10; // r11
  unsigned int *v11; // r10
  unsigned int v12; // r10d
  unsigned int *v13; // r8
  unsigned int *v14; // rax
  unsigned int j; // ecx
  __int64 v16; // rax
  unsigned int *v17; // r8
  unsigned int v18; // r8d
  unsigned int *v19; // rcx
  int v20; // edi
  int v21; // edx
  unsigned int v22; // ecx
  _DWORD *PoolWithTag; // rax
  int v24; // edi
  unsigned int v25; // r9d
  __int64 v26; // r10
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned __int64 k; // rdx
  unsigned int v32; // eax
  __int64 v34; // [rsp+38h] [rbp+10h]

  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v8 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_17;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_17;
    }
    v12 = *v8;
    v13 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
LABEL_17:
      v6 = -1073741675;
    }
    else
    {
      v14 = 0LL;
      if ( v12 )
        v14 = v13;
      v6 = 0;
      if ( v12 != 8 )
        return (unsigned int)-1073741789;
      v34 = *(_QWORD *)v14;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( (v6 & 0x80000000) != 0 )
    return v6;
  if ( !v7 || *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; j < 4; ++j )
  {
    v16 = *v7;
    v17 = v7 + 1;
    if ( v7 + 1 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  v18 = *v7;
  if ( v7 + 1 < v7 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( v18 )
    v19 = v7 + 1;
  v20 = qword_1409AD3D0 ? qword_1409AD3D0(v19, v18) : -1073741637;
  v21 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v22 = *(_DWORD *)(a2 + 16) + 52;
  if ( v22 < *(_DWORD *)(a2 + 16) + 48 )
    return (unsigned int)-1073741675;
  v6 = v22 + v21 < v22 ? 0xC0000095 : 0;
  if ( v22 + v21 < v22 )
    return v6;
  *(_DWORD *)(a4 + 4) = 20;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = PoolWithTag;
  *(_DWORD *)a4 = 0;
  v24 = v20 | 0x10000000;
  if ( PoolWithTag + 1 < PoolWithTag )
    return (unsigned int)-1073741675;
  if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
    return (unsigned int)-1073741789;
  *PoolWithTag = 4;
  PoolWithTag[1] = v24;
  v25 = ++*(_DWORD *)a4;
  v26 = *(_QWORD *)(a4 + 8);
  if ( !v26 )
  {
    v27 = *(_DWORD *)(a4 + 4);
    v28 = -1;
    v29 = v27 + 12;
    if ( v27 + 12 >= v27 )
      v28 = v27 + 12;
    v6 = v29 < v27 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v28;
    if ( v29 >= v27 )
    {
      v6 = 0;
      *(_DWORD *)a4 = v25 + 1;
    }
    return v6;
  }
  v30 = 0;
  for ( k = *(_QWORD *)(a4 + 8); v30 < v25; k += v32 )
  {
    v32 = *(_DWORD *)k + 4;
    if ( *(_DWORD *)k >= 0xFFFFFFFC || k + v32 < k )
      return (unsigned int)-1073741675;
    ++v30;
  }
  if ( k + 4 < k )
    return (unsigned int)-1073741675;
  v6 = 0;
  if ( k + 12 > v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    return (unsigned int)-1073741789;
  *(_DWORD *)k = 8;
  *(_QWORD *)(k + 4) = v34;
  ++*(_DWORD *)a4;
  return v6;
}
