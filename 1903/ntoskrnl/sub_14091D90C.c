/*
 * XREFs of sub_14091D90C @ 0x14091D90C
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x1401078A0 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14091D90C(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  signed int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  size_t *v14; // rdx
  size_t *v15; // rax
  unsigned int j; // edx
  __int64 v17; // rax
  unsigned int *v18; // r8
  size_t v19; // rdx
  const wchar_t *v20; // r11
  unsigned int *v21; // rcx
  __int64 v22; // rbp
  size_t v23; // r11
  unsigned int v24; // eax
  size_t v25; // rbp
  PVOID PoolWithTag; // rax
  PVOID v27; // rbx
  void *v28; // r12
  unsigned int *v29; // rax
  unsigned int k; // edx
  __int64 v31; // r10
  unsigned int *v32; // r8
  unsigned int v33; // ebx
  unsigned int *v34; // r11
  unsigned int m; // edx
  __int64 v36; // rax
  unsigned int *v37; // r8
  unsigned int *v38; // r9
  int v39; // edi
  int v40; // edx
  unsigned int v41; // ecx
  _DWORD *v42; // rax
  int v43; // edi
  unsigned int v44; // r8d
  unsigned __int64 v45; // r9
  unsigned int v46; // edx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned __int64 v49; // rdx
  unsigned int v50; // ecx
  unsigned int v51; // eax
  size_t v52; // xmm0_8
  size_t v54; // [rsp+30h] [rbp-48h]
  size_t pcbLength; // [rsp+88h] [rbp+10h] BYREF
  int v56; // [rsp+90h] [rbp+18h]

  v56 = a3;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v9 = v8;
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_17;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_17;
    }
    v13 = *v9;
    v14 = (size_t *)(v9 + 1);
    if ( v9 + 1 < v9 )
    {
LABEL_17:
      v7 = -1073741675;
    }
    else
    {
      v15 = 0LL;
      if ( v13 )
        v15 = v14;
      v7 = 0;
      if ( v13 != 8 )
        return (unsigned int)-1073741789;
      v54 = *v15;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( v8 && *(_DWORD *)a1 > 4u )
  {
    for ( j = 0; j < 4; ++j )
    {
      v17 = *v8;
      v18 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_39;
      v8 = (unsigned int *)((char *)v18 + v17);
      if ( (unsigned int *)((char *)v18 + v17) < v18 )
        goto LABEL_39;
    }
    v19 = *v8;
    if ( v8 + 1 < v8 )
    {
LABEL_39:
      v7 = -1073741675;
    }
    else
    {
      v20 = 0LL;
      if ( (_DWORD)v19 )
        v20 = (const wchar_t *)(v8 + 1);
      v7 = 0;
      if ( !(_DWORD)v19 )
        return (unsigned int)-1073741762;
      if ( (v19 & 1) != 0 )
        return (unsigned int)-1073741762;
      v22 = *v8;
      if ( v20[(v19 >> 1) - 1] || StringCbLengthW(v20, v19, &pcbLength) < 0 || pcbLength + 2 != v22 )
        return (unsigned int)-1073741762;
      v56 = pcbLength >> 1;
      pcbLength = v23;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  v24 = 2 * v56 + 2;
  if ( 2 * v56 == -2 )
    return (unsigned int)-1073741762;
  v25 = v24;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x20534C53u);
  v27 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, (const void *)pcbLength, v25);
  v28 = v27;
  v21 = *(unsigned int **)(a1 + 8);
  if ( !v21 || *(_DWORD *)a1 <= 5u )
    goto LABEL_33;
  v29 = *(unsigned int **)(a1 + 8);
  for ( k = 0; k < 5; ++k )
  {
    v31 = *v29;
    v32 = v29 + 1;
    if ( v29 + 1 < v29 )
      goto LABEL_85;
    v29 = (unsigned int *)((char *)v32 + v31);
    if ( (unsigned int *)((char *)v32 + v31) < v32 )
      goto LABEL_85;
  }
  v33 = *v29;
  if ( v29 + 1 >= v29 )
  {
    v34 = 0LL;
    if ( v33 )
      v34 = v29 + 1;
    if ( *(_DWORD *)a1 > 6u )
    {
      for ( m = 0; m < 6; ++m )
      {
        v36 = *v21;
        v37 = v21 + 1;
        if ( v21 + 1 < v21 )
          goto LABEL_85;
        v21 = (unsigned int *)((char *)v37 + v36);
        if ( (unsigned int *)((char *)v37 + v36) < v37 )
          goto LABEL_85;
      }
      if ( v21 + 1 < v21 )
        goto LABEL_85;
      v38 = 0LL;
      if ( *v21 )
        v38 = v21 + 1;
      if ( qword_1409AD440 )
        v39 = qword_1409AD440(v28, v34, v33, v38, *v21);
      else
        v39 = -1073741637;
      v7 = v39;
      if ( v39 < 0 )
        goto LABEL_86;
      v40 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
      {
        v41 = *(_DWORD *)(a2 + 16) + 52;
        if ( v41 >= *(_DWORD *)(a2 + 16) + 48 )
        {
          v7 = v41 + v40 < v41 ? 0xC0000095 : 0;
          if ( v41 + v40 < v41 )
            goto LABEL_86;
          *(_DWORD *)(a4 + 4) = 20;
          v42 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
          if ( !v42 )
          {
            v7 = -1073741801;
            goto LABEL_86;
          }
          *(_QWORD *)(a4 + 8) = v42;
          *(_DWORD *)a4 = 0;
          v43 = v39 | 0x10000000;
          if ( v42 + 1 >= v42 )
          {
            if ( v42 + 2 > (_DWORD *)((char *)v42 + *(unsigned int *)(a4 + 4)) )
            {
LABEL_72:
              v7 = -1073741789;
              goto LABEL_86;
            }
            *v42 = 4;
            v42[1] = v43;
            v44 = ++*(_DWORD *)a4;
            v45 = *(_QWORD *)(a4 + 8);
            pcbLength = v54;
            if ( !v45 )
            {
              v46 = *(_DWORD *)(a4 + 4);
              v47 = -1;
              v48 = v46 + 12;
              if ( v46 + 12 >= v46 )
                v47 = v46 + 12;
              v7 = v48 < v46 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v47;
              if ( v48 >= v46 )
              {
                v7 = 0;
                *(_DWORD *)a4 = v44 + 1;
              }
              goto LABEL_86;
            }
            v49 = v45;
            v50 = 0;
            if ( v44 )
            {
              while ( 1 )
              {
                v51 = *(_DWORD *)v49 + 4;
                if ( *(_DWORD *)v49 >= 0xFFFFFFFC || v49 + v51 < v49 )
                  break;
                ++v50;
                v49 += v51;
                if ( v50 >= v44 )
                  goto LABEL_82;
              }
            }
            else
            {
LABEL_82:
              if ( v49 + 4 >= v49 )
              {
                v7 = 0;
                if ( v49 + 12 > v45 + *(unsigned int *)(a4 + 4) )
                  goto LABEL_72;
                v52 = pcbLength;
                *(_DWORD *)v49 = 8;
                *(_QWORD *)(v49 + 4) = v52;
                ++*(_DWORD *)a4;
                goto LABEL_86;
              }
            }
          }
        }
      }
      goto LABEL_85;
    }
LABEL_33:
    v7 = -1073741811;
    goto LABEL_86;
  }
LABEL_85:
  v7 = -1073741675;
LABEL_86:
  if ( v28 )
    ExFreePoolWithTag(v28, 0x20534C53u);
  return (unsigned int)v7;
}
