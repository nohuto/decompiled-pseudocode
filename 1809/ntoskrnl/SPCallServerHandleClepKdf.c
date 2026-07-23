/*
 * XREFs of SPCallServerHandleClepKdf @ 0x140685B64
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleClepKdf(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v7; // r13
  unsigned __int64 v8; // r9
  __int64 v9; // rsi
  unsigned __int64 v10; // r10
  unsigned int i; // r14d
  unsigned __int64 v12; // r15
  signed int v13; // r8d
  unsigned __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // r14
  _QWORD *v17; // rax
  unsigned int v18; // r15d
  unsigned __int64 v19; // r10
  unsigned int j; // r11d
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // rcx
  unsigned int v23; // r12d
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int64 v26; // r10
  unsigned int k; // r11d
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // rcx
  unsigned int v30; // r11d
  __int64 v31; // rcx
  __int64 v32; // r14
  unsigned int m; // edx
  unsigned __int64 v34; // r10
  unsigned __int64 v35; // rcx
  int v36; // ecx
  __int64 v37; // rdx
  int v38; // r14d
  int v39; // r15d
  unsigned int v40; // ecx
  unsigned int v41; // eax
  unsigned int v42; // edx
  char *PoolWithTag; // rax
  char *v44; // rdx
  int v45; // r14d
  char *v46; // rax
  __int64 v47; // r9
  unsigned int v48; // r10d
  __int64 v49; // r14
  char *v50; // r9
  int v51; // r11d
  unsigned int v52; // eax
  unsigned int v53; // r12d
  char *v54; // rcx
  char *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // r10
  char *v59; // r9
  unsigned int v60; // eax
  unsigned int v61; // r11d
  char *v62; // rcx
  char *v63; // rdx
  __int64 v64; // rax
  unsigned int v66; // edx
  int v67; // eax
  unsigned int v68; // ecx
  unsigned int v69; // ecx
  unsigned int v70; // eax
  __int64 v71; // [rsp+58h] [rbp-9h]
  _QWORD *v72; // [rsp+60h] [rbp-1h]
  _OWORD v74[2]; // [rsp+70h] [rbp+Fh] BYREF

  v4 = 0;
  v71 = 0LL;
  v7 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a1 + 8);
  v9 = -1LL;
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v10 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v12 = -1LL;
      if ( v10 + 4 >= v10 )
        v12 = v10 + 4;
      v13 = v10 + 4 < v10 ? 0xC0000095 : 0;
      if ( v10 + 4 < v10 )
        goto LABEL_123;
      v14 = v12 + *(unsigned int *)v10;
      v10 = -1LL;
      if ( v14 >= v12 )
        v10 = v14;
      v13 = v14 < v12 ? 0xC0000095 : 0;
      if ( v14 < v12 )
        goto LABEL_123;
    }
    v15 = *(_DWORD *)v10;
    v16 = -1LL;
    if ( v10 + 4 >= v10 )
      v16 = v10 + 4;
    v13 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_123:
      v15 = 0;
      v17 = v72;
      goto LABEL_19;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_19:
    if ( v13 < 0 )
      return (unsigned int)v13;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v72 = (_QWORD *)*v17;
  }
  else
  {
    v13 = -1073741811;
  }
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( !v8 )
    return (unsigned int)-1073741811;
  v18 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v19 = v8;
  for ( j = 0; j < 4; ++j )
  {
    v21 = -1LL;
    if ( v19 + 4 >= v19 )
      v21 = v19 + 4;
    v13 = v19 + 4 < v19 ? 0xC0000095 : 0;
    if ( v19 + 4 < v19 )
      goto LABEL_124;
    v22 = v21 + *(unsigned int *)v19;
    v19 = -1LL;
    if ( v22 >= v21 )
      v19 = v22;
    v13 = v22 < v21 ? 0xC0000095 : 0;
    if ( v22 < v21 )
      goto LABEL_124;
  }
  v23 = *(_DWORD *)v19;
  v24 = -1LL;
  if ( v19 + 4 >= v19 )
    v24 = v19 + 4;
  v13 = v19 + 4 < v19 ? 0xC0000095 : 0;
  if ( v19 + 4 < v19 )
  {
LABEL_124:
    v23 = 0;
    goto LABEL_39;
  }
  v25 = 0LL;
  if ( v23 )
    v25 = v24;
  v71 = v25;
LABEL_39:
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( v18 <= 5 )
    return (unsigned int)-1073741811;
  v26 = v8;
  for ( k = 0; k < 5; ++k )
  {
    v28 = -1LL;
    if ( v26 + 4 >= v26 )
      v28 = v26 + 4;
    v13 = v26 + 4 < v26 ? 0xC0000095 : 0;
    if ( v26 + 4 < v26 )
      goto LABEL_125;
    v29 = v28 + *(unsigned int *)v26;
    v26 = -1LL;
    if ( v29 >= v28 )
      v26 = v29;
    v13 = v29 < v28 ? 0xC0000095 : 0;
    if ( v29 < v28 )
      goto LABEL_125;
  }
  v30 = *(_DWORD *)v26;
  v31 = -1LL;
  if ( v26 + 4 >= v26 )
    v31 = v26 + 4;
  v13 = v26 + 4 < v26 ? 0xC0000095 : 0;
  if ( v26 + 4 < v26 )
  {
LABEL_125:
    v30 = v71;
    v32 = 0LL;
    goto LABEL_54;
  }
  v32 = 0LL;
  if ( v30 )
    v32 = v31;
LABEL_54:
  if ( v13 < 0 )
    return (unsigned int)v13;
  if ( v18 <= 6 )
    return (unsigned int)-1073741811;
  for ( m = 0; m < 6; ++m )
  {
    v34 = -1LL;
    if ( v8 + 4 >= v8 )
      v34 = v8 + 4;
    v13 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
      goto LABEL_126;
    v35 = v34 + *(unsigned int *)v8;
    v8 = -1LL;
    if ( v35 >= v34 )
      v8 = v35;
    v13 = v35 < v34 ? 0xC0000095 : 0;
    if ( v35 < v34 )
      goto LABEL_126;
  }
  v36 = *(_DWORD *)v8;
  v37 = -1LL;
  if ( v8 + 4 >= v8 )
    v37 = v8 + 4;
  v13 = v8 + 4 < v8 ? 0xC0000095 : 0;
  if ( v8 + 4 < v8 )
  {
LABEL_126:
    v36 = v71;
    goto LABEL_69;
  }
  if ( v36 )
    v7 = v37;
LABEL_69:
  if ( v13 >= 0 )
  {
    v38 = qword_14096E3C0 ? qword_14096E3C0(v71, v23, v32, v30, v7, v36, v74, 32) : -1073741637;
    v13 = v38;
    if ( v38 >= 0 )
    {
      v39 = -1;
      v40 = -1;
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
        v40 = *(_DWORD *)(a2 + 16) + 80;
      v13 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 80) >= 0x50 )
      {
        v41 = v40 + 4;
        v42 = -1;
        if ( v40 + 4 >= v40 )
          v42 = v40 + 4;
        v13 = v41 < v40 ? 0xC0000095 : 0;
        if ( v41 >= v40 )
          v13 = v42 + *(_DWORD *)(a2 + 32) < v42 ? 0xC0000095 : 0;
      }
      if ( v13 >= 0 )
      {
        *(_DWORD *)(a4 + 4) = 56;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x20534C53u);
        v44 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741801;
        *(_QWORD *)(a4 + 8) = PoolWithTag;
        *(_DWORD *)a4 = 0;
        v45 = v38 | 0x10000000;
        v46 = PoolWithTag + 4;
        v47 = -1LL;
        v48 = 0;
        if ( v46 >= v44 )
          v47 = (__int64)v46;
        v13 = v46 < v44 ? 0xC0000095 : 0;
        if ( v46 >= v44 )
        {
          if ( v44 + 8 > &v44[*(unsigned int *)(a4 + 4)] )
            return (unsigned int)-1073741789;
          *(_DWORD *)v44 = 4;
          *(_DWORD *)v47 = v45;
          v48 = ++*(_DWORD *)a4;
        }
        if ( v46 < v44 )
          return (unsigned int)v13;
        v49 = *(_QWORD *)(a4 + 8);
        if ( v49 )
        {
          v50 = *(char **)(a4 + 8);
          v51 = 0;
          if ( v48 )
          {
            while ( 1 )
            {
              v52 = -1;
              if ( *(_DWORD *)v50 < 0xFFFFFFFC )
                v52 = *(_DWORD *)v50 + 4;
              v13 = *(_DWORD *)v50 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v50 + 4) < 4 )
                break;
              v53 = v52;
              v54 = v50;
              v55 = &v50[v52];
              v56 = -1LL;
              if ( v55 >= v50 )
                v56 = (__int64)&v50[v53];
              v50 = (char *)v56;
              v13 = v55 < v54 ? 0xC0000095 : 0;
              if ( v55 < v54 )
                break;
              if ( ++v51 >= v48 )
                goto LABEL_97;
            }
          }
          else
          {
LABEL_97:
            v57 = -1LL;
            if ( v50 + 4 >= v50 )
              v57 = (__int64)(v50 + 4);
            v13 = v50 + 4 < v50 ? 0xC0000095 : 0;
            if ( v50 + 4 >= v50 )
            {
              if ( (unsigned __int64)(v50 + 12) > v49 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                return (unsigned int)-1073741789;
              *(_DWORD *)v50 = 8;
              *(_QWORD *)v57 = v72;
              ++*(_DWORD *)a4;
            }
          }
        }
        else
        {
          v66 = *(_DWORD *)(a4 + 4);
          v67 = -1;
          v68 = v66 + 12;
          if ( v66 + 12 >= v66 )
            v67 = v66 + 12;
          v13 = v68 < v66 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v67;
          if ( v68 >= v66 )
          {
            *(_DWORD *)a4 = v48 + 1;
LABEL_103:
            v58 = *(_QWORD *)(a4 + 8);
            if ( !v58 )
            {
              v69 = *(_DWORD *)(a4 + 4);
              v70 = v69 + 36;
              if ( v69 + 36 >= v69 )
                v39 = v69 + 36;
              v13 = v70 < v69 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v39;
              if ( v70 < v69 )
                return (unsigned int)v13;
              v13 = 0;
LABEL_117:
              ++*(_DWORD *)a4;
              return (unsigned int)v13;
            }
            v59 = *(char **)(a4 + 8);
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v60 = -1;
                if ( *(_DWORD *)v59 < 0xFFFFFFFC )
                  v60 = *(_DWORD *)v59 + 4;
                v13 = *(_DWORD *)v59 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v59 + 4) < 4 )
                  break;
                v61 = v60;
                v62 = v59;
                v63 = &v59[v60];
                v64 = -1LL;
                if ( v63 >= v59 )
                  v64 = (__int64)&v59[v61];
                v59 = (char *)v64;
                v13 = v63 < v62 ? 0xC0000095 : 0;
                if ( v63 < v62 )
                  break;
                if ( (unsigned int)++v4 >= *(_DWORD *)a4 )
                  goto LABEL_112;
              }
              return (unsigned int)v13;
            }
LABEL_112:
            if ( v59 + 4 >= v59 )
              v9 = (__int64)(v59 + 4);
            v13 = v59 + 4 < v59 ? 0xC0000095 : 0;
            if ( v59 + 4 < v59 )
              return (unsigned int)v13;
            if ( (unsigned __int64)(v59 + 36) <= v58 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *(_DWORD *)v59 = 32;
              *(_OWORD *)v9 = v74[0];
              *(_OWORD *)(v9 + 16) = v74[1];
              goto LABEL_117;
            }
            return (unsigned int)-1073741789;
          }
        }
        if ( v13 < 0 )
          return (unsigned int)v13;
        goto LABEL_103;
      }
    }
  }
  return (unsigned int)v13;
}
