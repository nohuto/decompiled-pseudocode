/*
 * XREFs of sub_14091BCEC @ 0x14091BCEC
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14091BCEC(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  signed int v6; // ebx
  unsigned __int64 v7; // rdx
  __int64 v8; // r14
  int v9; // r9d
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 *v13; // rax
  unsigned int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // edx
  PVOID PoolWithTag; // rax
  __int64 v18; // r8
  unsigned int v19; // eax
  char *v20; // rdx
  int v21; // r9d
  unsigned int v22; // r11d
  char *v23; // r15
  char *v24; // r12
  char *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r9
  __int64 v28; // r8
  unsigned int v29; // eax
  char *v30; // rdx
  int v31; // r9d
  unsigned int v32; // r11d
  char *v33; // r15
  char *v34; // r12
  char *v35; // rcx
  __int64 v36; // rax
  unsigned int v38; // [rsp+3Ch] [rbp-5Ch]
  __int64 *v39; // [rsp+40h] [rbp-58h]
  __int64 v40; // [rsp+48h] [rbp-50h]
  unsigned int v41; // [rsp+A0h] [rbp+8h]

  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 8);
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v9 = 0;
    v8 = -1LL;
    while ( 1 )
    {
      v10 = -1LL;
      if ( v7 + 4 >= v7 )
        v10 = v7 + 4;
      v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
      if ( v7 + 4 < v7 )
        break;
      v11 = v10 + *(unsigned int *)v7;
      v7 = -1LL;
      if ( v11 >= v10 )
        v7 = v11;
      v6 = v11 < v10 ? 0xC0000095 : 0;
      if ( v11 < v10 )
        break;
      if ( (unsigned int)++v9 >= 3 )
      {
        v12 = -1LL;
        if ( v7 + 4 >= v7 )
          v12 = v7 + 4;
        v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
        if ( v7 + 4 >= v7 )
        {
          a3 = *(_DWORD *)v7;
          v13 = 0LL;
          if ( *(_DWORD *)v7 )
            v13 = (__int64 *)v12;
          v39 = v13;
        }
        break;
      }
    }
  }
  else
  {
    v6 = -1073741811;
    v8 = -1LL;
  }
  if ( v6 >= 0 )
  {
    if ( a3 == 8 )
      v40 = *v39;
    else
      v6 = -1073741789;
    if ( v6 >= 0 )
    {
      KeReleaseMutex(&Mutex, 0);
      v14 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
        v14 = *(_DWORD *)(a2 + 16) + 48;
      v6 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
      {
        v15 = v14 + 4;
        v16 = -1;
        if ( v14 + 4 >= v14 )
          v16 = v14 + 4;
        v6 = v15 < v14 ? 0xC0000095 : 0;
        if ( v15 >= v14 )
          v6 = v16 + *(_DWORD *)(a2 + 32) < v16 ? 0xC0000095 : 0;
      }
      if ( v6 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 20;
        v6 = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        if ( PoolWithTag )
        {
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
        }
        else
        {
          v6 = -1073741801;
        }
        if ( v6 >= 0 )
        {
          v18 = *(_QWORD *)(a4 + 8);
          if ( !v18 )
          {
            v19 = *(_DWORD *)(a4 + 4);
            if ( v19 + 8 < v19 )
            {
              *(_DWORD *)(a4 + 4) = -1;
              v6 = -1073741675;
            }
            else
            {
              *(_DWORD *)(a4 + 4) = v19 + 8;
              v6 = 0;
            }
            if ( v6 < 0 )
              return (unsigned int)v6;
            ++*(_DWORD *)a4;
            v6 = 0;
            goto LABEL_61;
          }
          v20 = *(char **)(a4 + 8);
          v21 = 0;
          if ( !*(_DWORD *)a4 )
          {
LABEL_55:
            v27 = -1LL;
            if ( v20 + 4 >= v20 )
              v27 = (__int64)(v20 + 4);
            v6 = v20 + 4 < v20 ? 0xC0000095 : 0;
            if ( v20 + 4 >= v20 )
            {
              if ( (unsigned __int64)(v20 + 8) <= v18 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v20 = 4;
                *(_DWORD *)v27 = 0;
                ++*(_DWORD *)a4;
              }
              else
              {
                v6 = -1073741789;
              }
            }
LABEL_61:
            if ( v6 >= 0 )
            {
              v28 = *(_QWORD *)(a4 + 8);
              if ( v28 )
              {
                v30 = *(char **)(a4 + 8);
                v31 = 0;
                if ( *(_DWORD *)a4 )
                {
                  v32 = v38;
                  while ( 1 )
                  {
                    v33 = v30;
                    v34 = v30;
                    if ( *(_DWORD *)v30 >= 0xFFFFFFFC )
                    {
                      v6 = -1073741675;
                    }
                    else
                    {
                      v32 = *(_DWORD *)v30 + 4;
                      v6 = 0;
                    }
                    if ( v6 < 0 )
                      break;
                    v35 = &v30[v32];
                    v36 = -1LL;
                    if ( v35 >= v30 )
                      v36 = (__int64)&v30[v32];
                    v30 = (char *)v36;
                    v6 = v35 < v34 ? 0xC0000095 : 0;
                    if ( v35 < v33 )
                      break;
                    if ( (unsigned int)++v31 >= *(_DWORD *)a4 )
                      goto LABEL_78;
                  }
                }
                else
                {
LABEL_78:
                  if ( v30 + 4 >= v30 )
                    v8 = (__int64)(v30 + 4);
                  v6 = v30 + 4 < v30 ? 0xC0000095 : 0;
                  if ( v30 + 4 >= v30 )
                  {
                    if ( (unsigned __int64)(v30 + 12) <= v28 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    {
                      *(_DWORD *)v30 = 8;
                      *(_QWORD *)v8 = v40;
                      ++*(_DWORD *)a4;
                    }
                    else
                    {
                      return (unsigned int)-1073741789;
                    }
                  }
                }
              }
              else
              {
                v29 = *(_DWORD *)(a4 + 4);
                if ( v29 + 12 < v29 )
                {
                  *(_DWORD *)(a4 + 4) = -1;
                  v6 = -1073741675;
                }
                else
                {
                  *(_DWORD *)(a4 + 4) = v29 + 12;
                  v6 = 0;
                }
                if ( v6 >= 0 )
                {
                  ++*(_DWORD *)a4;
                  return 0;
                }
              }
            }
            return (unsigned int)v6;
          }
          v22 = v41;
          while ( 1 )
          {
            v23 = v20;
            v24 = v20;
            if ( *(_DWORD *)v20 >= 0xFFFFFFFC )
            {
              v6 = -1073741675;
            }
            else
            {
              v22 = *(_DWORD *)v20 + 4;
              v6 = 0;
            }
            if ( v6 < 0 )
              break;
            v25 = &v20[v22];
            v26 = -1LL;
            if ( v25 >= v20 )
              v26 = (__int64)&v20[v22];
            v20 = (char *)v26;
            v6 = v25 < v24 ? 0xC0000095 : 0;
            if ( v25 < v23 )
              goto LABEL_61;
            if ( (unsigned int)++v21 >= *(_DWORD *)a4 )
              goto LABEL_55;
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
