/*
 * XREFs of SPCallServerHandleUpdatePolicies @ 0x1406EF3D8
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleUpdatePolicies(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int *v10; // rcx
  unsigned int *v11; // rax
  unsigned int i; // edx
  __int64 v13; // r11
  unsigned int *v14; // r9
  unsigned int v15; // r9d
  unsigned int *v16; // rdx
  unsigned int *v17; // rax
  unsigned int v18; // edx
  int v19; // edx
  __int64 v20; // rax
  unsigned int *v21; // r8
  unsigned int v22; // r8d
  unsigned int *v23; // rdx
  int v24; // eax
  int v25; // r15d
  signed int v26; // r8d
  _DWORD *v27; // r9
  unsigned int v28; // ecx
  int v29; // edx
  unsigned int v30; // eax
  unsigned int v31; // ecx
  _DWORD *v32; // rdx
  unsigned int v33; // eax
  _DWORD *PoolWithTag; // rax
  __int64 v35; // r9
  unsigned int v36; // ecx
  _DWORD *j; // r8
  unsigned int v38; // ecx
  int v39; // edx
  unsigned int v40; // eax
  unsigned int v41; // eax
  _DWORD *v42; // rax
  unsigned int v43; // ecx
  unsigned int v44; // eax
  __int64 v46; // [rsp+20h] [rbp-18h]

  v6 = *(_DWORD *)(a2 + 32);
  v7 = *(_DWORD *)(a2 + 16) + 32;
  if ( v7 < 0x20 )
    return (unsigned int)-1073741675;
  v8 = v7 + 4;
  if ( v7 + 4 < v7 )
    return (unsigned int)-1073741675;
  v9 = v8 + v6;
  if ( v9 < v8 )
    return (unsigned int)-1073741675;
  if ( a3 < v9 )
  {
    if ( !a4 )
    {
      v26 = -1073741811;
      goto LABEL_66;
    }
    v27 = *(_DWORD **)(a4 + 8);
    if ( v27 )
    {
      v31 = 0;
      v32 = v27;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v33 = *v32 + 4;
          if ( v33 < 4 )
            break;
          if ( (_DWORD *)((char *)v32 + v33) < v32 )
            goto LABEL_65;
          ++v31;
          v32 = (_DWORD *)((char *)v32 + v33);
          if ( v31 >= *(_DWORD *)a4 )
            goto LABEL_52;
        }
        v26 = -1073741675;
      }
      else
      {
LABEL_52:
        if ( v32 + 1 < v32 )
          goto LABEL_65;
        v26 = 0;
        if ( v32 + 2 > (_DWORD *)((char *)v27 + *(unsigned int *)(a4 + 4)) )
          goto LABEL_59;
        *v32 = 4;
        v32[1] = 0;
        ++*(_DWORD *)a4;
      }
    }
    else
    {
      v28 = *(_DWORD *)(a4 + 4);
      v29 = -1;
      v30 = v28 + 8;
      if ( v28 + 8 >= v28 )
        v29 = v28 + 8;
      v26 = v30 < v28 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v29;
      if ( v30 >= v28 )
      {
        ++*(_DWORD *)a4;
        goto LABEL_56;
      }
    }
    if ( v26 < 0 )
      goto LABEL_66;
LABEL_56:
    if ( !*(_DWORD *)(a4 + 4) )
    {
      v26 = -1073741762;
      goto LABEL_66;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a4 + 4), 0x20534C53u);
    if ( !PoolWithTag )
    {
      v26 = -1073741801;
      goto LABEL_66;
    }
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
    if ( PoolWithTag + 1 >= PoolWithTag )
    {
      v26 = 0;
      if ( PoolWithTag + 2 <= (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
      {
        *PoolWithTag = 4;
        PoolWithTag[1] = 0;
        ++*(_DWORD *)a4;
        goto LABEL_66;
      }
LABEL_59:
      v26 = -1073741789;
      goto LABEL_66;
    }
LABEL_65:
    v26 = -1073741675;
LABEL_66:
    v18 = v26;
    if ( v26 >= 0 )
      return 0;
    return v18;
  }
  v10 = *(unsigned int **)(a1 + 8);
  if ( v10 && *(_DWORD *)a1 > 3u )
  {
    v11 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v13 = *v11;
      v14 = v11 + 1;
      if ( v11 + 1 < v11 )
        goto LABEL_70;
      v11 = (unsigned int *)((char *)v14 + v13);
      if ( (unsigned int *)((char *)v14 + v13) < v14 )
        goto LABEL_70;
    }
    v15 = *v11;
    v16 = v11 + 1;
    if ( v11 + 1 < v11 )
    {
LABEL_70:
      v18 = -1073741675;
      goto LABEL_16;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = v16;
    v18 = 0;
    if ( v15 == 8 )
    {
      v46 = *(_QWORD *)v17;
      goto LABEL_16;
    }
    return (unsigned int)-1073741789;
  }
  v18 = -1073741811;
LABEL_16:
  if ( (v18 & 0x80000000) != 0 )
    return v18;
  if ( !v46 || !qword_1409AD2B8 )
  {
    v25 = -1073425151;
    if ( !a4 )
      return (unsigned int)-1073741811;
    v35 = *(_QWORD *)(a4 + 8);
    if ( v35 )
    {
      v43 = 0;
      j = *(_DWORD **)(a4 + 8);
      if ( !*(_DWORD *)a4 )
        goto LABEL_74;
      while ( 1 )
      {
        v44 = *j + 4;
        if ( v44 < 4 )
          break;
        if ( (_DWORD *)((char *)j + v44) < j )
          return (unsigned int)-1073741675;
        ++v43;
        j = (_DWORD *)((char *)j + v44);
        if ( v43 >= *(_DWORD *)a4 )
          goto LABEL_74;
      }
LABEL_85:
      v18 = -1073741675;
      goto LABEL_35;
    }
LABEL_77:
    v38 = *(_DWORD *)(a4 + 4);
    v39 = -1;
    v40 = v38 + 8;
    if ( v38 + 8 >= v38 )
      v39 = v38 + 8;
    *(_DWORD *)(a4 + 4) = v39;
    v18 = v40 < v38 ? 0xC0000095 : 0;
    if ( v40 >= v38 )
    {
      ++*(_DWORD *)a4;
LABEL_36:
      if ( !*(_DWORD *)(a4 + 4) )
        return (unsigned int)-1073741762;
      v42 = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a4 + 4), 0x20534C53u);
      if ( !v42 )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = v42;
      *(_DWORD *)a4 = 0;
      if ( v42 + 1 >= v42 )
      {
        v18 = 0;
        if ( v42 + 2 <= (_DWORD *)((char *)v42 + *(unsigned int *)(a4 + 4)) )
        {
          *v42 = 4;
          v42[1] = v25;
          ++*(_DWORD *)a4;
          return v18;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741675;
    }
    goto LABEL_35;
  }
  if ( v46 == qword_1409AD2B8 )
  {
    if ( v10 && *(_DWORD *)a1 > 4u )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = *v10;
        v21 = v10 + 1;
        if ( v10 + 1 < v10 )
          break;
        v10 = (unsigned int *)((char *)v21 + v20);
        if ( (unsigned int *)((char *)v21 + v20) < v21 )
          break;
        if ( (unsigned int)++v19 >= 4 )
        {
          v22 = *v10;
          if ( v10 + 1 < v10 )
            return (unsigned int)-1073741675;
          v23 = 0LL;
          if ( v22 )
            v23 = v10 + 1;
          v24 = ((__int64 (__fastcall *)(_QWORD, unsigned int *))qword_1409AD4C8)(v22, v23);
          if ( v24 == 263 )
          {
            v25 = 1074058754;
          }
          else if ( v24 == 0x40000000 )
          {
            v25 = 1074058753;
          }
          else if ( v24 < 0 )
          {
            v25 = v24 | 0x10000000;
          }
          else
          {
            v25 = 0;
          }
          *(_DWORD *)(a4 + 4) = 0;
          *(_DWORD *)a4 = 0;
          if ( *(_QWORD *)(a4 + 8) )
          {
            ExFreePoolWithTag(*(PVOID *)(a4 + 8), 0x20534C53u);
            *(_QWORD *)(a4 + 8) = 0LL;
          }
          goto LABEL_77;
        }
      }
      return (unsigned int)-1073741675;
    }
    return (unsigned int)-1073741811;
  }
  v25 = -1073425151;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v35 = *(_QWORD *)(a4 + 8);
  if ( !v35 )
    goto LABEL_77;
  v36 = 0;
  for ( j = *(_DWORD **)(a4 + 8); v36 < *(_DWORD *)a4; j = (_DWORD *)((char *)j + v41) )
  {
    v41 = *j + 4;
    if ( v41 < 4 )
      goto LABEL_85;
    if ( (_DWORD *)((char *)j + v41) < j )
      return (unsigned int)-1073741675;
    ++v36;
  }
LABEL_74:
  if ( j + 1 < j )
    return (unsigned int)-1073741675;
  v18 = 0;
  if ( (unsigned __int64)(j + 2) > v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    return (unsigned int)-1073741789;
  *j = 4;
  j[1] = -1073425151;
  ++*(_DWORD *)a4;
LABEL_35:
  if ( (v18 & 0x80000000) == 0 )
    goto LABEL_36;
  return v18;
}
