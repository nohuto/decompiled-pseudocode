/*
 * XREFs of sub_14091B9E8 @ 0x14091B9E8
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14091B9E8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned int v35; // r9d
  __int64 v36; // r10
  int v37; // r11d
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned __int64 v42; // rdx
  unsigned int v43; // eax
  __int64 v44; // r10
  unsigned int v45; // ecx
  unsigned int v46; // eax
  unsigned int v47; // ecx
  unsigned __int64 n; // rdx
  unsigned int v49; // eax
  __int64 v51; // [rsp+50h] [rbp-48h]
  __int128 v52; // [rsp+58h] [rbp-40h]
  __int128 v53; // [rsp+68h] [rbp-30h]

  if ( a1 && a2 && a4 )
  {
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
        v51 = *(_QWORD *)v14;
      }
    }
    else
    {
      v6 = -1073741811;
    }
    if ( (v6 & 0x80000000) != 0 )
      return v6;
    if ( v7 )
    {
      v15 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 > 4u )
      {
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
        if ( v16 + 1 < v16 )
          return (unsigned int)-1073741675;
        v21 = 0LL;
        if ( v20 )
          v21 = v16 + 1;
        if ( v15 > 5 )
        {
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
          if ( v22 + 1 < v22 )
            return (unsigned int)-1073741675;
          v26 = 0LL;
          if ( *v22 )
            v26 = v22 + 1;
          if ( v15 > 6 )
          {
            for ( m = 0; m < 6; ++m )
            {
              v28 = *v7;
              v29 = v7 + 1;
              if ( v7 + 1 < v7 )
                return (unsigned int)-1073741675;
              v7 = (unsigned int *)((char *)v29 + v28);
              if ( (unsigned int *)((char *)v29 + v28) < v29 )
                return (unsigned int)-1073741675;
            }
            if ( v7 + 1 < v7 )
              return (unsigned int)-1073741675;
            if ( qword_1409AD450 )
              v30 = ((__int64 (__fastcall *)(unsigned int *, _QWORD, _DWORD *))qword_1409AD4C0)(v21, v20, v26);
            else
              v30 = -1073741637;
            v6 = v30;
            if ( v30 < 0 )
              return v6;
            v31 = *(_DWORD *)(a2 + 32);
            if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
            {
              v32 = *(_DWORD *)(a2 + 16) + 84;
              if ( v32 >= *(_DWORD *)(a2 + 16) + 80 )
              {
                v6 = v32 + v31 < v32 ? 0xC0000095 : 0;
                if ( v32 + v31 < v32 )
                  return v6;
                *(_DWORD *)(a4 + 4) = 56;
                PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20534C53u);
                if ( !PoolWithTag )
                  return (unsigned int)-1073741801;
                *(_QWORD *)(a4 + 8) = PoolWithTag;
                *(_DWORD *)a4 = 0;
                v34 = v30 | 0x10000000;
                if ( PoolWithTag + 1 >= PoolWithTag )
                {
                  if ( PoolWithTag + 2 > (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
                    return (unsigned int)-1073741789;
                  *PoolWithTag = 4;
                  PoolWithTag[1] = v34;
                  v35 = ++*(_DWORD *)a4;
                  v36 = *(_QWORD *)(a4 + 8);
                  v37 = -1;
                  if ( v36 )
                  {
                    v41 = 0;
                    v42 = *(_QWORD *)(a4 + 8);
                    if ( v35 )
                    {
                      while ( 1 )
                      {
                        v43 = *(_DWORD *)v42 + 4;
                        if ( *(_DWORD *)v42 >= 0xFFFFFFFC )
                          break;
                        if ( v42 + v43 < v42 )
                          return (unsigned int)-1073741675;
                        ++v41;
                        v42 += v43;
                        if ( v41 >= v35 )
                          goto LABEL_64;
                      }
                      v6 = -1073741675;
                    }
                    else
                    {
LABEL_64:
                      if ( v42 + 4 < v42 )
                        return (unsigned int)-1073741675;
                      v6 = 0;
                      if ( v42 + 12 > v36 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                        return (unsigned int)-1073741789;
                      *(_DWORD *)v42 = 8;
                      *(_QWORD *)(v42 + 4) = v51;
                      ++*(_DWORD *)a4;
                    }
                  }
                  else
                  {
                    v38 = *(_DWORD *)(a4 + 4);
                    v39 = -1;
                    v40 = v38 + 12;
                    if ( v38 + 12 >= v38 )
                      v39 = v38 + 12;
                    v6 = v40 < v38 ? 0xC0000095 : 0;
                    *(_DWORD *)(a4 + 4) = v39;
                    if ( v40 >= v38 )
                    {
                      *(_DWORD *)a4 = v35 + 1;
LABEL_68:
                      v44 = *(_QWORD *)(a4 + 8);
                      if ( !v44 )
                      {
                        v45 = *(_DWORD *)(a4 + 4);
                        v46 = v45 + 36;
                        if ( v45 + 36 >= v45 )
                          v37 = v45 + 36;
                        v6 = v46 < v45 ? 0xC0000095 : 0;
                        *(_DWORD *)(a4 + 4) = v37;
                        if ( v46 >= v45 )
                        {
                          ++*(_DWORD *)a4;
                          return 0;
                        }
                        return v6;
                      }
                      v47 = 0;
                      for ( n = *(_QWORD *)(a4 + 8); v47 < *(_DWORD *)a4; n += v49 )
                      {
                        v49 = *(_DWORD *)n + 4;
                        if ( *(_DWORD *)n >= 0xFFFFFFFC || n + v49 < n )
                          return (unsigned int)-1073741675;
                        ++v47;
                      }
                      if ( n + 4 < n )
                        return (unsigned int)-1073741675;
                      v6 = 0;
                      if ( n + 36 <= v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      {
                        *(_DWORD *)n = 32;
                        *(_OWORD *)(n + 4) = v52;
                        *(_OWORD *)(n + 20) = v53;
                        ++*(_DWORD *)a4;
                        return v6;
                      }
                      return (unsigned int)-1073741789;
                    }
                  }
                  if ( (v6 & 0x80000000) != 0 )
                    return v6;
                  goto LABEL_68;
                }
              }
            }
            return (unsigned int)-1073741675;
          }
        }
      }
    }
    return (unsigned int)-1073741811;
  }
  return (unsigned int)-1073741811;
}
