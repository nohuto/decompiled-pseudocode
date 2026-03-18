/*
 * XREFs of SPCallServerHandleClepKdf @ 0x1406E71B8
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleClepKdf(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned int v15; // r10d
  unsigned int *v16; // rax
  unsigned int j; // r8d
  __int64 v18; // r11
  unsigned int *v19; // r9
  unsigned int v20; // r14d
  unsigned int *v21; // rsi
  _DWORD *v22; // rax
  unsigned int k; // r8d
  __int64 v24; // r11
  _DWORD *v25; // r9
  _DWORD *v26; // rdi
  unsigned int m; // ecx
  __int64 v28; // rax
  unsigned int *v29; // r8
  int v30; // edi
  int v31; // edx
  unsigned int v32; // ecx
  _DWORD *PoolWithTag; // rax
  int v34; // edi
  __int64 v35; // r10
  unsigned int v36; // ecx
  unsigned __int64 n; // rdx
  unsigned int v38; // eax
  unsigned int v40; // ecx
  unsigned __int64 v41; // rdx
  unsigned int v42; // eax
  unsigned int v43; // r9d
  __int64 v44; // r10
  int v45; // r11d
  unsigned int v46; // edx
  int v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // eax
  __int64 v51; // [rsp+50h] [rbp-48h]
  __int128 v52; // [rsp+58h] [rbp-40h]
  __int128 v53; // [rsp+68h] [rbp-30h]

  if ( a1 && a2 && a4 )
  {
    v6 = *(unsigned int **)(a1 + 8);
    if ( v6 && *(_DWORD *)a1 > 3u )
    {
      v7 = *(unsigned int **)(a1 + 8);
      for ( i = 0; i < 3; ++i )
      {
        v9 = *v7;
        v10 = v7 + 1;
        if ( v7 + 1 < v7 )
          goto LABEL_71;
        v7 = (unsigned int *)((char *)v10 + v9);
        if ( (unsigned int *)((char *)v10 + v9) < v10 )
          goto LABEL_71;
      }
      v11 = *v7;
      v12 = v7 + 1;
      if ( v7 + 1 < v7 )
      {
LABEL_71:
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
        v51 = *(_QWORD *)v13;
      }
    }
    else
    {
      v14 = -1073741811;
    }
    if ( (v14 & 0x80000000) == 0 )
    {
      if ( !v6 )
        return (unsigned int)-1073741811;
      v15 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 <= 4u )
        return (unsigned int)-1073741811;
      v16 = *(unsigned int **)(a1 + 8);
      for ( j = 0; j < 4; ++j )
      {
        v18 = *v16;
        v19 = v16 + 1;
        if ( v16 + 1 < v16 )
          return (unsigned int)-1073741675;
        v16 = (unsigned int *)((char *)v19 + v18);
        if ( (unsigned int *)((char *)v19 + v18) < v19 )
          return (unsigned int)-1073741675;
      }
      v20 = *v16;
      if ( v16 + 1 >= v16 )
      {
        v21 = 0LL;
        if ( v20 )
          v21 = v16 + 1;
        if ( v15 <= 5 )
          return (unsigned int)-1073741811;
        v22 = *(_DWORD **)(a1 + 8);
        for ( k = 0; k < 5; ++k )
        {
          v24 = (unsigned int)*v22;
          v25 = v22 + 1;
          if ( v22 + 1 < v22 )
            return (unsigned int)-1073741675;
          v22 = (_DWORD *)((char *)v25 + v24);
          if ( (_DWORD *)((char *)v25 + v24) < v25 )
            return (unsigned int)-1073741675;
        }
        if ( v22 + 1 >= v22 )
        {
          v26 = 0LL;
          if ( *v22 )
            v26 = v22 + 1;
          if ( v15 > 6 )
          {
            for ( m = 0; m < 6; ++m )
            {
              v28 = *v6;
              v29 = v6 + 1;
              if ( v6 + 1 < v6 )
                return (unsigned int)-1073741675;
              v6 = (unsigned int *)((char *)v29 + v28);
              if ( (unsigned int *)((char *)v29 + v28) < v29 )
                return (unsigned int)-1073741675;
            }
            if ( v6 + 1 < v6 )
              return (unsigned int)-1073741675;
            if ( qword_1409AD450 )
              v30 = qword_1409AD450(v21, v20, v26);
            else
              v30 = -1073741637;
            v14 = v30;
            if ( v30 < 0 )
              return v14;
            v31 = *(_DWORD *)(a2 + 32);
            if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0 )
              return (unsigned int)-1073741675;
            v32 = *(_DWORD *)(a2 + 16) + 84;
            if ( v32 < *(_DWORD *)(a2 + 16) + 80 )
              return (unsigned int)-1073741675;
            v14 = v32 + v31 < v32 ? 0xC0000095 : 0;
            if ( v32 + v31 < v32 )
              return v14;
            *(_DWORD *)(a4 + 4) = 56;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20534C53u);
            if ( !PoolWithTag )
              return (unsigned int)-1073741801;
            *(_QWORD *)(a4 + 8) = PoolWithTag;
            *(_DWORD *)a4 = 0;
            v34 = v30 | 0x10000000;
            if ( PoolWithTag + 1 < PoolWithTag )
              return (unsigned int)-1073741675;
            if ( PoolWithTag + 2 <= (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
            {
              *PoolWithTag = 4;
              PoolWithTag[1] = v34;
              v43 = ++*(_DWORD *)a4;
              v44 = *(_QWORD *)(a4 + 8);
              v45 = -1;
              if ( v44 )
              {
                v40 = 0;
                v41 = *(_QWORD *)(a4 + 8);
                if ( v43 )
                {
                  while ( 1 )
                  {
                    v42 = *(_DWORD *)v41 + 4;
                    if ( *(_DWORD *)v41 >= 0xFFFFFFFC )
                      break;
                    if ( v41 + v42 < v41 )
                      return (unsigned int)-1073741675;
                    ++v40;
                    v41 += v42;
                    if ( v40 >= v43 )
                      goto LABEL_61;
                  }
                  v14 = -1073741675;
                }
                else
                {
LABEL_61:
                  if ( v41 + 4 < v41 )
                    return (unsigned int)-1073741675;
                  v14 = 0;
                  if ( v41 + 12 > v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    return (unsigned int)-1073741789;
                  *(_DWORD *)v41 = 8;
                  *(_QWORD *)(v41 + 4) = v51;
                  ++*(_DWORD *)a4;
                }
              }
              else
              {
                v46 = *(_DWORD *)(a4 + 4);
                v47 = -1;
                v48 = v46 + 12;
                if ( v46 + 12 >= v46 )
                  v47 = v46 + 12;
                v14 = v48 < v46 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v47;
                if ( v48 >= v46 )
                {
                  *(_DWORD *)a4 = v43 + 1;
LABEL_50:
                  v35 = *(_QWORD *)(a4 + 8);
                  if ( !v35 )
                  {
                    v49 = *(_DWORD *)(a4 + 4);
                    v50 = v49 + 36;
                    if ( v49 + 36 >= v49 )
                      v45 = v49 + 36;
                    v14 = v50 < v49 ? 0xC0000095 : 0;
                    *(_DWORD *)(a4 + 4) = v45;
                    if ( v50 >= v49 )
                    {
                      ++*(_DWORD *)a4;
                      return 0;
                    }
                    return v14;
                  }
                  v36 = 0;
                  for ( n = *(_QWORD *)(a4 + 8); v36 < *(_DWORD *)a4; n += v38 )
                  {
                    v38 = *(_DWORD *)n + 4;
                    if ( *(_DWORD *)n >= 0xFFFFFFFC || n + v38 < n )
                      return (unsigned int)-1073741675;
                    ++v36;
                  }
                  if ( n + 4 < n )
                    return (unsigned int)-1073741675;
                  v14 = 0;
                  if ( n + 36 <= v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *(_DWORD *)n = 32;
                    *(_OWORD *)(n + 4) = v52;
                    *(_OWORD *)(n + 20) = v53;
                    ++*(_DWORD *)a4;
                    return v14;
                  }
                  return (unsigned int)-1073741789;
                }
              }
              if ( (v14 & 0x80000000) != 0 )
                return v14;
              goto LABEL_50;
            }
            return (unsigned int)-1073741789;
          }
          return (unsigned int)-1073741811;
        }
      }
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v14;
}
