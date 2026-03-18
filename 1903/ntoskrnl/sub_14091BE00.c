/*
 * XREFs of sub_14091BE00 @ 0x14091BE00
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14091BE00(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v4; // r8
  signed int v8; // ebx
  unsigned int *v9; // rax
  unsigned int i; // ecx
  __int64 v11; // r10
  unsigned int *v12; // rdx
  unsigned int v13; // edx
  unsigned int *v14; // rcx
  unsigned int *v15; // rax
  unsigned int j; // ecx
  __int64 v17; // rax
  unsigned int *v18; // rdx
  unsigned int v19; // edx
  int *v20; // rax
  PVOID PoolWithTag; // r14
  int v22; // esi
  int v23; // edx
  unsigned int v24; // ecx
  PVOID v25; // rax
  __int64 v26; // r9
  int v27; // esi
  int v28; // ebp
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  _DWORD *v33; // rdx
  unsigned int v34; // eax
  __int64 v35; // r8
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 v42; // r8
  unsigned int v43; // edx
  int v44; // eax
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  _DWORD *v47; // rdx
  unsigned int v48; // eax
  __int64 v49; // r9
  unsigned int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // ecx
  _DWORD *k; // rdx
  unsigned int v54; // eax
  __int64 v56; // [rsp+20h] [rbp-38h]

  v4 = *(unsigned int **)(a1 + 8);
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v9 = *(unsigned int **)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_14;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_14;
    }
    v13 = *v9;
    v14 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
LABEL_14:
      v8 = -1073741675;
      goto LABEL_15;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = v14;
    v8 = 0;
    if ( v13 == 8 )
    {
      v56 = *(_QWORD *)v15;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v8 = -1073741811;
LABEL_15:
  if ( v8 >= 0 )
  {
    if ( v4 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v17 = *v4;
        v18 = v4 + 1;
        if ( v4 + 1 < v4 )
          goto LABEL_28;
        v4 = (unsigned int *)((char *)v18 + v17);
        if ( (unsigned int *)((char *)v18 + v17) < v18 )
          goto LABEL_28;
      }
      v19 = *v4;
      if ( v4 + 1 < v4 )
      {
LABEL_28:
        v8 = -1073741675;
        goto LABEL_29;
      }
      v20 = 0LL;
      if ( v19 )
        v20 = (int *)(v4 + 1);
      v8 = 0;
      if ( v19 == 4 )
      {
        a3 = *v20;
        goto LABEL_29;
      }
      return (unsigned int)-1073741789;
    }
    v8 = -1073741811;
LABEL_29:
    if ( v8 >= 0 )
    {
      if ( a3 != 2048 )
        return (unsigned int)-1073741762;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x800uLL, 0x20534C53u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      if ( qword_1409AD4B8 )
        v22 = qword_1409AD4B8(PoolWithTag);
      else
        v22 = -1073741637;
      v8 = v22;
      if ( v22 < 0 )
        goto LABEL_103;
      v23 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFF7C8 )
        goto LABEL_102;
      v24 = *(_DWORD *)(a2 + 16) + 2108;
      if ( v24 < *(_DWORD *)(a2 + 16) + 2104 )
        goto LABEL_102;
      v8 = v24 + v23 < v24 ? 0xC0000095 : 0;
      if ( v24 + v23 < v24 )
      {
LABEL_103:
        ExFreePoolWithTag(PoolWithTag, 0x20534C53u);
        return (unsigned int)v8;
      }
      if ( !a4 )
      {
        v8 = -1073741811;
        goto LABEL_103;
      }
      *(_DWORD *)(a4 + 4) = 2080;
      v8 = 0;
      v25 = ExAllocatePoolWithTag(PagedPool, 0x820uLL, 0x20534C53u);
      if ( v25 )
      {
        *(_QWORD *)(a4 + 8) = v25;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v8 = -1073741801;
      }
      if ( v8 < 0 )
        goto LABEL_103;
      v26 = *(_QWORD *)(a4 + 8);
      v27 = v22 | 0x10000000;
      v28 = -1;
      if ( v26 )
      {
        v32 = 0;
        v33 = *(_DWORD **)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v34 = *v33 + 4;
            if ( *v33 >= 0xFFFFFFFC )
              break;
            if ( (_DWORD *)((char *)v33 + v34) < v33 )
              goto LABEL_102;
            ++v32;
            v33 = (_DWORD *)((char *)v33 + v34);
            if ( v32 >= *(_DWORD *)a4 )
              goto LABEL_56;
          }
          v8 = -1073741675;
        }
        else
        {
LABEL_56:
          if ( v33 + 1 < v33 )
            goto LABEL_102;
          v8 = 0;
          if ( (unsigned __int64)(v33 + 2) > v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_58;
          *v33 = 4;
          v33[1] = v27;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v29 = *(_DWORD *)(a4 + 4);
        v30 = -1;
        v31 = v29 + 8;
        if ( v29 + 8 >= v29 )
          v30 = v29 + 8;
        v8 = v31 < v29 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v30;
        if ( v31 >= v29 )
        {
          ++*(_DWORD *)a4;
          goto LABEL_62;
        }
      }
      if ( v8 < 0 )
        goto LABEL_103;
LABEL_62:
      v35 = *(_QWORD *)(a4 + 8);
      if ( v35 )
      {
        v39 = 0;
        v40 = *(_QWORD *)(a4 + 8);
        if ( *(_DWORD *)a4 )
        {
          while ( 1 )
          {
            v41 = *(_DWORD *)v40 + 4;
            if ( *(_DWORD *)v40 >= 0xFFFFFFFC )
              break;
            if ( v40 + v41 < v40 )
              goto LABEL_102;
            ++v39;
            v40 += v41;
            if ( v39 >= *(_DWORD *)a4 )
              goto LABEL_71;
          }
          v8 = -1073741675;
        }
        else
        {
LABEL_71:
          if ( v40 + 4 < v40 )
            goto LABEL_102;
          v8 = 0;
          if ( v40 + 12 > v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_58;
          *(_DWORD *)v40 = 8;
          *(_QWORD *)(v40 + 4) = v56;
          ++*(_DWORD *)a4;
        }
      }
      else
      {
        v36 = *(_DWORD *)(a4 + 4);
        v37 = -1;
        v38 = v36 + 12;
        if ( v36 + 12 >= v36 )
          v37 = v36 + 12;
        v8 = v38 < v36 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v37;
        if ( v38 >= v36 )
        {
          ++*(_DWORD *)a4;
LABEL_75:
          v42 = *(_QWORD *)(a4 + 8);
          if ( !v42 )
          {
            v43 = *(_DWORD *)(a4 + 4);
            v44 = -1;
            v45 = v43 + 2052;
            if ( v43 + 2052 >= v43 )
              v44 = v43 + 2052;
            v8 = v45 < v43 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v44;
            if ( v45 >= v43 )
            {
              ++*(_DWORD *)a4;
              goto LABEL_89;
            }
LABEL_88:
            if ( v8 < 0 )
              goto LABEL_103;
LABEL_89:
            v49 = *(_QWORD *)(a4 + 8);
            if ( !v49 )
            {
              v50 = *(_DWORD *)(a4 + 4);
              v51 = v50 + 8;
              if ( v50 + 8 >= v50 )
                v28 = v50 + 8;
              v8 = v51 < v50 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v28;
              if ( v51 >= v50 )
              {
                ++*(_DWORD *)a4;
                v8 = 0;
              }
              goto LABEL_103;
            }
            v52 = 0;
            for ( k = *(_DWORD **)(a4 + 8); v52 < *(_DWORD *)a4; k = (_DWORD *)((char *)k + v54) )
            {
              v54 = *k + 4;
              if ( *k >= 0xFFFFFFFC || (_DWORD *)((char *)k + v54) < k )
                goto LABEL_102;
              ++v52;
            }
            if ( k + 1 >= k )
            {
              v8 = 0;
              if ( (unsigned __int64)(k + 2) <= v49 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *k = 4;
                k[1] = 2048;
                ++*(_DWORD *)a4;
                goto LABEL_103;
              }
              goto LABEL_58;
            }
LABEL_102:
            v8 = -1073741675;
            goto LABEL_103;
          }
          v46 = 0;
          v47 = *(_DWORD **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v48 = *v47 + 4;
              if ( *v47 >= 0xFFFFFFFC )
                break;
              if ( (_DWORD *)((char *)v47 + v48) < v47 )
                goto LABEL_102;
              ++v46;
              v47 = (_DWORD *)((char *)v47 + v48);
              if ( v46 >= *(_DWORD *)a4 )
                goto LABEL_85;
            }
            v8 = -1073741675;
            goto LABEL_88;
          }
LABEL_85:
          if ( v47 + 1 < v47 )
            goto LABEL_102;
          v8 = 0;
          if ( (unsigned __int64)(v47 + 513) <= v42 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v47 = 2048;
            memmove(v47 + 1, PoolWithTag, 0x800uLL);
            ++*(_DWORD *)a4;
            goto LABEL_88;
          }
LABEL_58:
          v8 = -1073741789;
          goto LABEL_103;
        }
      }
      if ( v8 < 0 )
        goto LABEL_103;
      goto LABEL_75;
    }
  }
  return (unsigned int)v8;
}
