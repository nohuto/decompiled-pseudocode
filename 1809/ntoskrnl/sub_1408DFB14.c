/*
 * XREFs of sub_1408DFB14 @ 0x1408DFB14
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408DFB14(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v6; // edi
  signed int v7; // ebx
  unsigned __int64 v8; // rdx
  __int64 v9; // r15
  int v10; // r9d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 *v14; // rax
  int v15; // r12d
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // edx
  PVOID PoolWithTag; // rax
  __int64 v20; // r9
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // eax
  char *v24; // r8
  int v25; // r10d
  unsigned int v26; // eax
  unsigned int v27; // r13d
  char *v28; // rcx
  char *v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r9
  unsigned int v33; // ecx
  unsigned int v34; // eax
  char *v35; // r8
  unsigned int v36; // eax
  unsigned int v37; // r10d
  char *v38; // rcx
  char *v39; // rdx
  __int64 v40; // rax
  __int64 *v42; // [rsp+40h] [rbp-58h]
  __int64 v43; // [rsp+48h] [rbp-50h]

  v6 = 0;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v10 = 0;
    while ( 1 )
    {
      v11 = -1LL;
      if ( v8 + 4 >= v8 )
        v11 = v8 + 4;
      v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
      if ( v8 + 4 < v8 )
        break;
      v12 = v11 + *(unsigned int *)v8;
      v8 = -1LL;
      if ( v12 >= v11 )
        v8 = v12;
      v7 = v12 < v11 ? 0xC0000095 : 0;
      if ( v12 < v11 )
        break;
      if ( (unsigned int)++v10 >= 3 )
      {
        v13 = -1LL;
        if ( v8 + 4 >= v8 )
          v13 = v8 + 4;
        v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
        if ( v8 + 4 >= v8 )
        {
          a3 = *(_DWORD *)v8;
          v14 = 0LL;
          if ( *(_DWORD *)v8 )
            v14 = (__int64 *)v13;
          v42 = v14;
        }
        break;
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    if ( a3 == 8 )
      v43 = *v42;
    else
      v7 = -1073741789;
    if ( v7 >= 0 )
    {
      KeReleaseMutex(&stru_140407480, 0);
      v15 = -1;
      v16 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v16 = *(_DWORD *)(a2 + 16) + 48;
      v7 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v17 = v16 + 4;
        v18 = -1;
        if ( v16 + 4 >= v16 )
          v18 = v16 + 4;
        v7 = v17 < v16 ? 0xC0000095 : 0;
        if ( v17 >= v16 )
          v7 = v18 + *(_DWORD *)(a2 + 32) < v18 ? 0xC0000095 : 0;
      }
      if ( v7 >= 0 )
      {
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
          v20 = *(_QWORD *)(a4 + 8);
          if ( v20 )
          {
            v24 = *(char **)(a4 + 8);
            v25 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v26 = -1;
                if ( *(_DWORD *)v24 < 0xFFFFFFFC )
                  v26 = *(_DWORD *)v24 + 4;
                v7 = *(_DWORD *)v24 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v24 + 4) < 4 )
                  break;
                v27 = v26;
                v28 = v24;
                v29 = &v24[v26];
                v30 = -1LL;
                if ( v29 >= v24 )
                  v30 = (__int64)&v24[v27];
                v24 = (char *)v30;
                v7 = v29 < v28 ? 0xC0000095 : 0;
                if ( v29 < v28 )
                  break;
                if ( (unsigned int)++v25 >= *(_DWORD *)a4 )
                  goto LABEL_52;
              }
            }
            else
            {
LABEL_52:
              v31 = -1LL;
              if ( v24 + 4 >= v24 )
                v31 = (__int64)(v24 + 4);
              v7 = v24 + 4 < v24 ? 0xC0000095 : 0;
              if ( v24 + 4 >= v24 )
              {
                if ( (unsigned __int64)(v24 + 8) > v20 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  v7 = -1073741789;
                  goto LABEL_59;
                }
                *(_DWORD *)v24 = 4;
                *(_DWORD *)v31 = 0;
                goto LABEL_58;
              }
            }
          }
          else
          {
            v21 = *(_DWORD *)(a4 + 4);
            v22 = v21 + 8;
            v23 = -1;
            if ( v21 + 8 >= v21 )
              v23 = v21 + 8;
            *(_DWORD *)(a4 + 4) = v23;
            v7 = v22 < v21 ? 0xC0000095 : 0;
            if ( v22 >= v21 )
            {
              v7 = 0;
LABEL_58:
              ++*(_DWORD *)a4;
            }
          }
LABEL_59:
          if ( v7 >= 0 )
          {
            v32 = *(_QWORD *)(a4 + 8);
            if ( v32 )
            {
              v35 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v36 = -1;
                  if ( *(_DWORD *)v35 < 0xFFFFFFFC )
                    v36 = *(_DWORD *)v35 + 4;
                  v7 = *(_DWORD *)v35 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v35 + 4) < 4 )
                    break;
                  v37 = v36;
                  v38 = v35;
                  v39 = &v35[v36];
                  v40 = -1LL;
                  if ( v39 >= v35 )
                    v40 = (__int64)&v35[v37];
                  v35 = (char *)v40;
                  v7 = v39 < v38 ? 0xC0000095 : 0;
                  if ( v39 < v38 )
                    break;
                  if ( (unsigned int)++v6 >= *(_DWORD *)a4 )
                    goto LABEL_73;
                }
              }
              else
              {
LABEL_73:
                if ( v35 + 4 >= v35 )
                  v9 = (__int64)(v35 + 4);
                v7 = v35 + 4 < v35 ? 0xC0000095 : 0;
                if ( v35 + 4 >= v35 )
                {
                  if ( (unsigned __int64)(v35 + 12) <= v32 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *(_DWORD *)v35 = 8;
                    *(_QWORD *)v9 = v43;
                    goto LABEL_79;
                  }
                  return (unsigned int)-1073741789;
                }
              }
            }
            else
            {
              v33 = *(_DWORD *)(a4 + 4);
              v34 = v33 + 12;
              if ( v33 + 12 >= v33 )
                v15 = v33 + 12;
              *(_DWORD *)(a4 + 4) = v15;
              v7 = v34 < v33 ? 0xC0000095 : 0;
              if ( v34 >= v33 )
              {
                v7 = 0;
LABEL_79:
                ++*(_DWORD *)a4;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v7;
}
