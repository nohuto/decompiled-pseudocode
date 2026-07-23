/*
 * XREFs of sub_1408E0220 @ 0x1408E0220
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408E0220(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v8; // r15
  signed int v9; // r8d
  unsigned __int64 v10; // r9
  __int64 v11; // rsi
  unsigned __int64 v12; // r10
  unsigned int i; // ebp
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rcx
  int v16; // ecx
  __int64 v17; // rbp
  _QWORD *v18; // rax
  unsigned int j; // edx
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // ebp
  int v25; // r14d
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edx
  char *PoolWithTag; // rax
  char *v30; // rdx
  int v31; // ebp
  char *v32; // rax
  __int64 v33; // r9
  unsigned int v34; // r10d
  __int64 v35; // rbp
  unsigned int v36; // edx
  int v37; // eax
  unsigned int v38; // ecx
  char *v39; // r9
  int v40; // r11d
  unsigned int v41; // eax
  unsigned int v42; // r15d
  char *v43; // rcx
  char *v44; // rdx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // r10
  unsigned int v48; // ecx
  unsigned int v49; // eax
  char *v50; // r9
  unsigned int v51; // eax
  unsigned int v52; // r11d
  char *v53; // rcx
  char *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  _OWORD *v57; // rcx
  __int128 v58; // xmm1
  _QWORD *v60; // [rsp+30h] [rbp-148h]
  _BYTE v61[256]; // [rsp+40h] [rbp-138h] BYREF

  v4 = 0;
  v8 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v10 = *(_QWORD *)(a1 + 8);
  v11 = -1LL;
  if ( v10 && *(_DWORD *)a1 > 3u )
  {
    v12 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v14 = -1LL;
      if ( v12 + 4 >= v12 )
        v14 = v12 + 4;
      v9 = v12 + 4 < v12 ? 0xC0000095 : 0;
      if ( v12 + 4 < v12 )
        goto LABEL_22;
      v15 = v14 + *(unsigned int *)v12;
      v12 = -1LL;
      if ( v15 >= v14 )
        v12 = v15;
      v9 = v15 < v14 ? 0xC0000095 : 0;
      if ( v15 < v14 )
        goto LABEL_22;
    }
    v16 = *(_DWORD *)v12;
    v17 = -1LL;
    if ( v12 + 4 >= v12 )
      v17 = v12 + 4;
    v9 = v12 + 4 < v12 ? 0xC0000095 : 0;
    if ( v12 + 4 < v12 )
    {
LABEL_22:
      v16 = (int)v60;
      v18 = v60;
      goto LABEL_23;
    }
    v18 = 0LL;
    if ( v16 )
      v18 = (_QWORD *)v17;
LABEL_23:
    if ( v9 < 0 )
      return (unsigned int)v9;
    if ( v16 != 8 )
      return (unsigned int)-1073741789;
    v60 = (_QWORD *)*v18;
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v9 >= 0 )
  {
    if ( !v10 || *(_DWORD *)a1 <= 4u )
      return (unsigned int)-1073741811;
    for ( j = 0; j < 4; ++j )
    {
      v20 = -1LL;
      if ( v10 + 4 >= v10 )
        v20 = v10 + 4;
      v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
      if ( v10 + 4 < v10 )
        goto LABEL_44;
      v21 = v20 + *(unsigned int *)v10;
      v10 = -1LL;
      if ( v21 >= v20 )
        v10 = v21;
      v9 = v21 < v20 ? 0xC0000095 : 0;
      if ( v21 < v20 )
        goto LABEL_44;
    }
    v22 = *(unsigned int *)v10;
    v23 = -1LL;
    if ( v10 + 4 >= v10 )
      v23 = v10 + 4;
    v9 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_44:
      v22 = (unsigned int)v60;
      goto LABEL_45;
    }
    if ( (_DWORD)v22 )
      v8 = v23;
LABEL_45:
    if ( v9 >= 0 )
    {
      v24 = qword_14096E3B8 ? qword_14096E3B8(v8, v22, v61, 256LL) : -1073741637;
      v9 = v24;
      if ( v24 >= 0 )
      {
        v25 = -1;
        v26 = -1;
        if ( *(_DWORD *)(a2 + 16) < 0xFFFFFED0 )
          v26 = *(_DWORD *)(a2 + 16) + 304;
        v9 = *(_DWORD *)(a2 + 16) >= 0xFFFFFED0 ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 304) >= 0x130 )
        {
          v27 = v26 + 4;
          v28 = -1;
          if ( v26 + 4 >= v26 )
            v28 = v26 + 4;
          v9 = v27 < v26 ? 0xC0000095 : 0;
          if ( v27 >= v26 )
            v9 = v28 + *(_DWORD *)(a2 + 32) < v28 ? 0xC0000095 : 0;
        }
        if ( v9 >= 0 )
        {
          *(_DWORD *)(a4 + 4) = 280;
          PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x118uLL, 0x20534C53u);
          v30 = PoolWithTag;
          if ( !PoolWithTag )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a4 + 8) = PoolWithTag;
          *(_DWORD *)a4 = 0;
          v31 = v24 | 0x10000000;
          v32 = PoolWithTag + 4;
          v33 = -1LL;
          v34 = 0;
          if ( v32 >= v30 )
            v33 = (__int64)v32;
          v9 = v32 < v30 ? 0xC0000095 : 0;
          if ( v32 >= v30 )
          {
            if ( v30 + 8 > &v30[*(unsigned int *)(a4 + 4)] )
              return (unsigned int)-1073741789;
            *(_DWORD *)v30 = 4;
            *(_DWORD *)v33 = v31;
            v34 = ++*(_DWORD *)a4;
          }
          if ( v32 < v30 )
            return (unsigned int)v9;
          v35 = *(_QWORD *)(a4 + 8);
          if ( v35 )
          {
            v39 = *(char **)(a4 + 8);
            v40 = 0;
            if ( v34 )
            {
              while ( 1 )
              {
                v41 = -1;
                if ( *(_DWORD *)v39 < 0xFFFFFFFC )
                  v41 = *(_DWORD *)v39 + 4;
                v9 = *(_DWORD *)v39 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v39 + 4) < 4 )
                  break;
                v42 = v41;
                v43 = v39;
                v44 = &v39[v41];
                v45 = -1LL;
                if ( v44 >= v39 )
                  v45 = (__int64)&v39[v42];
                v39 = (char *)v45;
                v9 = v44 < v43 ? 0xC0000095 : 0;
                if ( v44 < v43 )
                  break;
                if ( ++v40 >= v34 )
                  goto LABEL_79;
              }
            }
            else
            {
LABEL_79:
              v46 = -1LL;
              if ( v39 + 4 >= v39 )
                v46 = (__int64)(v39 + 4);
              v9 = v39 + 4 < v39 ? 0xC0000095 : 0;
              if ( v39 + 4 >= v39 )
              {
                if ( (unsigned __int64)(v39 + 12) > v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  return (unsigned int)-1073741789;
                *(_DWORD *)v39 = 8;
                *(_QWORD *)v46 = v60;
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v36 = *(_DWORD *)(a4 + 4);
            v37 = -1;
            v38 = v36 + 12;
            if ( v36 + 12 >= v36 )
              v37 = v36 + 12;
            v9 = v38 < v36 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v37;
            if ( v38 >= v36 )
            {
              *(_DWORD *)a4 = v34 + 1;
LABEL_85:
              v47 = *(_QWORD *)(a4 + 8);
              if ( !v47 )
              {
                v48 = *(_DWORD *)(a4 + 4);
                v49 = v48 + 260;
                if ( v48 + 260 >= v48 )
                  v25 = v48 + 260;
                v9 = v49 < v48 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v25;
                if ( v49 >= v48 )
                {
                  v9 = 0;
LABEL_105:
                  ++*(_DWORD *)a4;
                  return (unsigned int)v9;
                }
                return (unsigned int)v9;
              }
              v50 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                while ( 1 )
                {
                  v51 = -1;
                  if ( *(_DWORD *)v50 < 0xFFFFFFFC )
                    v51 = *(_DWORD *)v50 + 4;
                  v9 = *(_DWORD *)v50 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v50 + 4) < 4 )
                    break;
                  v52 = v51;
                  v53 = v50;
                  v54 = &v50[v51];
                  v55 = -1LL;
                  if ( v54 >= v50 )
                    v55 = (__int64)&v50[v52];
                  v50 = (char *)v55;
                  v9 = v54 < v53 ? 0xC0000095 : 0;
                  if ( v54 < v53 )
                    break;
                  if ( (unsigned int)++v4 >= *(_DWORD *)a4 )
                    goto LABEL_98;
                }
                return (unsigned int)v9;
              }
LABEL_98:
              if ( v50 + 4 >= v50 )
                v11 = (__int64)(v50 + 4);
              v9 = v50 + 4 < v50 ? 0xC0000095 : 0;
              if ( v50 + 4 < v50 )
                return (unsigned int)v9;
              if ( (unsigned __int64)(v50 + 260) <= v47 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                v56 = 2LL;
                *(_DWORD *)v50 = 256;
                v57 = v61;
                do
                {
                  *(_OWORD *)v11 = *v57;
                  *(_OWORD *)(v11 + 16) = v57[1];
                  *(_OWORD *)(v11 + 32) = v57[2];
                  *(_OWORD *)(v11 + 48) = v57[3];
                  *(_OWORD *)(v11 + 64) = v57[4];
                  *(_OWORD *)(v11 + 80) = v57[5];
                  *(_OWORD *)(v11 + 96) = v57[6];
                  v11 += 128LL;
                  v58 = v57[7];
                  v57 += 8;
                  *(_OWORD *)(v11 - 16) = v58;
                  --v56;
                }
                while ( v56 );
                goto LABEL_105;
              }
              return (unsigned int)-1073741789;
            }
          }
          if ( v9 < 0 )
            return (unsigned int)v9;
          goto LABEL_85;
        }
      }
    }
  }
  return (unsigned int)v9;
}
