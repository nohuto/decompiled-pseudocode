/*
 * XREFs of sub_14091C62C @ 0x14091C62C
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14091C62C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // rax
  signed int v7; // ebx
  unsigned int i; // ecx
  __int64 v9; // r8
  unsigned int *v10; // rdx
  unsigned int v11; // edx
  unsigned int *v12; // rcx
  unsigned int *v13; // rax
  int v14; // esi
  int v15; // edx
  unsigned int v16; // ecx
  PVOID PoolWithTag; // rax
  __int64 v18; // r9
  int v19; // esi
  int v20; // r11d
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  _DWORD *v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // r9
  unsigned int v28; // ecx
  unsigned int v29; // eax
  unsigned int v30; // ecx
  unsigned __int64 v31; // rdx
  unsigned int v32; // eax
  __int64 v34; // [rsp+20h] [rbp-18h]

  v4 = *(unsigned int **)(a1 + 8);
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v9 = *v4;
      v10 = v4 + 1;
      if ( v4 + 1 < v4 )
        goto LABEL_14;
      v4 = (unsigned int *)((char *)v10 + v9);
      if ( (unsigned int *)((char *)v10 + v9) < v10 )
        goto LABEL_14;
    }
    v11 = *v4;
    v12 = v4 + 1;
    if ( v4 + 1 < v4 )
    {
LABEL_14:
      v7 = -1073741675;
      goto LABEL_15;
    }
    v13 = 0LL;
    if ( v11 )
      v13 = v12;
    v7 = 0;
    if ( v11 == 8 )
    {
      v34 = *(_QWORD *)v13;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v7 = -1073741811;
LABEL_15:
  if ( v7 >= 0 )
  {
    v14 = qword_1409AD3E0 ? qword_1409AD3E0() : -1073741637;
    v7 = v14;
    if ( v14 >= 0 )
    {
      v15 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
        return (unsigned int)-1073741675;
      v16 = *(_DWORD *)(a2 + 16) + 52;
      if ( v16 < *(_DWORD *)(a2 + 16) + 48 )
        return (unsigned int)-1073741675;
      v7 = v16 + v15 < v16 ? 0xC0000095 : 0;
      if ( v16 + v15 >= v16 )
      {
        if ( !a4 )
          return (unsigned int)-1073741811;
        *(_DWORD *)(a4 + 4) = 20;
        v7 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v7 = -1073741801;
        }
        if ( v7 >= 0 )
        {
          v18 = *(_QWORD *)(a4 + 8);
          v19 = v14 | 0x10000000;
          v20 = -1;
          if ( v18 )
          {
            v24 = 0;
            v25 = *(_DWORD **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v26 = *v25 + 4;
                if ( *v25 >= 0xFFFFFFFC )
                  break;
                if ( (_DWORD *)((char *)v25 + v26) < v25 )
                  return (unsigned int)-1073741675;
                ++v24;
                v25 = (_DWORD *)((char *)v25 + v26);
                if ( v24 >= *(_DWORD *)a4 )
                  goto LABEL_38;
              }
              v7 = -1073741675;
            }
            else
            {
LABEL_38:
              if ( v25 + 1 < v25 )
                return (unsigned int)-1073741675;
              v7 = 0;
              if ( (unsigned __int64)(v25 + 2) > v18 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                return (unsigned int)-1073741789;
              *v25 = 4;
              v25[1] = v19;
              ++*(_DWORD *)a4;
            }
          }
          else
          {
            v21 = *(_DWORD *)(a4 + 4);
            v22 = -1;
            v23 = v21 + 8;
            if ( v21 + 8 >= v21 )
              v22 = v21 + 8;
            v7 = v23 < v21 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v22;
            if ( v23 >= v21 )
            {
              ++*(_DWORD *)a4;
LABEL_42:
              v27 = *(_QWORD *)(a4 + 8);
              if ( !v27 )
              {
                v28 = *(_DWORD *)(a4 + 4);
                v29 = v28 + 12;
                if ( v28 + 12 >= v28 )
                  v20 = v28 + 12;
                v7 = v29 < v28 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v20;
                if ( v29 >= v28 )
                {
                  ++*(_DWORD *)a4;
                  return 0;
                }
                return (unsigned int)v7;
              }
              v30 = 0;
              v31 = *(_QWORD *)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v32 = *(_DWORD *)v31 + 4;
                  if ( *(_DWORD *)v31 >= 0xFFFFFFFC || v31 + v32 < v31 )
                    break;
                  ++v30;
                  v31 += v32;
                  if ( v30 >= *(_DWORD *)a4 )
                    goto LABEL_52;
                }
              }
              else
              {
LABEL_52:
                if ( v31 + 4 >= v31 )
                {
                  v7 = 0;
                  if ( v31 + 12 <= v27 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *(_DWORD *)v31 = 8;
                    *(_QWORD *)(v31 + 4) = v34;
                    ++*(_DWORD *)a4;
                    return (unsigned int)v7;
                  }
                  return (unsigned int)-1073741789;
                }
              }
              return (unsigned int)-1073741675;
            }
          }
          if ( v7 < 0 )
            return (unsigned int)v7;
          goto LABEL_42;
        }
      }
    }
  }
  return (unsigned int)v7;
}
