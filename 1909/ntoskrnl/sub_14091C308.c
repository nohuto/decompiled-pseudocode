/*
 * XREFs of sub_14091C308 @ 0x14091C308
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14091C308(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned int v18; // r10d
  unsigned int *v19; // rcx
  int v20; // edi
  int v21; // edx
  unsigned int v22; // ecx
  _DWORD *PoolWithTag; // rax
  int v24; // edi
  unsigned int v25; // r9d
  __int64 v26; // r10
  int v27; // r11d
  unsigned int v28; // edx
  int v29; // eax
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // r10
  unsigned int v35; // ecx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  _DWORD *k; // r9
  unsigned int v39; // eax
  _OWORD *v40; // rdx
  __int64 v41; // rcx
  _OWORD *v42; // rax
  __int128 v43; // xmm1
  __int64 v45; // [rsp+30h] [rbp-128h]
  _BYTE v46[256]; // [rsp+40h] [rbp-118h] BYREF

  if ( !a1 || !a2 || !a4 )
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
        goto LABEL_18;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_18;
    }
    v12 = *v8;
    v13 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
LABEL_18:
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
      v45 = *(_QWORD *)v14;
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
  if ( qword_1409AD448 )
    v20 = qword_1409AD448(v19, v18, v46, 256LL);
  else
    v20 = -1073741637;
  v6 = v20;
  if ( v20 < 0 )
    return v6;
  v21 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFED0 )
    return (unsigned int)-1073741675;
  v22 = *(_DWORD *)(a2 + 16) + 308;
  if ( v22 < *(_DWORD *)(a2 + 16) + 304 )
    return (unsigned int)-1073741675;
  v6 = v22 + v21 < v22 ? 0xC0000095 : 0;
  if ( v22 + v21 < v22 )
    return v6;
  *(_DWORD *)(a4 + 4) = 280;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x20534C53u);
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
  v27 = -1;
  if ( v26 )
  {
    v31 = 0;
    v32 = *(_QWORD *)(a4 + 8);
    if ( v25 )
    {
      while ( 1 )
      {
        v33 = *(_DWORD *)v32 + 4;
        if ( *(_DWORD *)v32 >= 0xFFFFFFFC )
          break;
        if ( v32 + v33 < v32 )
          return (unsigned int)-1073741675;
        ++v31;
        v32 += v33;
        if ( v31 >= v25 )
          goto LABEL_50;
      }
      v6 = -1073741675;
    }
    else
    {
LABEL_50:
      if ( v32 + 4 < v32 )
        return (unsigned int)-1073741675;
      v6 = 0;
      if ( v32 + 12 > v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *(_DWORD *)v32 = 8;
      *(_QWORD *)(v32 + 4) = v45;
      ++*(_DWORD *)a4;
    }
  }
  else
  {
    v28 = *(_DWORD *)(a4 + 4);
    v29 = -1;
    v30 = v28 + 12;
    if ( v28 + 12 >= v28 )
      v29 = v28 + 12;
    v6 = v30 < v28 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v29;
    if ( v30 >= v28 )
    {
      *(_DWORD *)a4 = v25 + 1;
      goto LABEL_54;
    }
  }
  if ( (v6 & 0x80000000) != 0 )
    return v6;
LABEL_54:
  v34 = *(_QWORD *)(a4 + 8);
  if ( !v34 )
  {
    v35 = *(_DWORD *)(a4 + 4);
    v36 = v35 + 260;
    if ( v35 + 260 >= v35 )
      v27 = v35 + 260;
    v6 = v36 < v35 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v27;
    if ( v36 >= v35 )
    {
      ++*(_DWORD *)a4;
      return 0;
    }
    return v6;
  }
  v37 = 0;
  for ( k = *(_DWORD **)(a4 + 8); v37 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v39) )
  {
    v39 = *k + 4;
    if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v39) < k )
      return (unsigned int)-1073741675;
    ++v37;
  }
  v40 = k + 1;
  if ( k + 1 < k )
    return (unsigned int)-1073741675;
  v6 = 0;
  if ( (unsigned __int64)(k + 65) > v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    return (unsigned int)-1073741789;
  v41 = 2LL;
  *k = 256;
  v42 = v46;
  do
  {
    *v40 = *v42;
    v40[1] = v42[1];
    v40[2] = v42[2];
    v40[3] = v42[3];
    v40[4] = v42[4];
    v40[5] = v42[5];
    v40[6] = v42[6];
    v40 += 8;
    v43 = v42[7];
    v42 += 8;
    *(v40 - 1) = v43;
    --v41;
  }
  while ( v41 );
  ++*(_DWORD *)a4;
  return v6;
}
