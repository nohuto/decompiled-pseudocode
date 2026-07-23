/*
 * XREFs of sub_1408E3AB8 @ 0x1408E3AB8
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408E3AB8(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v4; // r8
  __int64 v5; // r15
  int v6; // edi
  signed int v10; // ebx
  unsigned __int64 v11; // rdx
  unsigned int i; // r9d
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  int v15; // ecx
  __int64 v16; // r9
  _QWORD *v17; // rax
  unsigned int j; // r9d
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rcx
  int v21; // ecx
  __int64 v22; // rdx
  int *v23; // rax
  int v24; // r14d
  int v25; // r12d
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // edx
  void *v29; // r13
  PVOID PoolWithTag; // rax
  __int64 v32; // r10
  int v33; // r14d
  unsigned int v34; // edx
  int v35; // eax
  unsigned int v36; // ecx
  char *v37; // r8
  int v38; // r9d
  unsigned int v39; // eax
  unsigned int v40; // r13d
  char *v41; // rcx
  char *v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // r9
  unsigned int v46; // edx
  int v47; // eax
  unsigned int v48; // ecx
  char *v49; // r8
  int v50; // r10d
  unsigned int v51; // eax
  unsigned int v52; // r14d
  char *v53; // rcx
  char *v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r9
  unsigned int v58; // edx
  int v59; // eax
  unsigned int v60; // ecx
  char *v61; // r8
  int v62; // r10d
  unsigned int v63; // eax
  unsigned int v64; // r11d
  char *v65; // rcx
  char *v66; // rdx
  __int64 v67; // rax
  __int64 v68; // r10
  __int64 v69; // r9
  unsigned int v70; // ecx
  unsigned int v71; // eax
  char *v72; // r8
  unsigned int v73; // eax
  unsigned int v74; // r10d
  char *v75; // rcx
  char *v76; // rdx
  __int64 v77; // rax
  PVOID P; // [rsp+20h] [rbp-20h]
  _QWORD *v79; // [rsp+30h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = -1LL;
  v6 = 0;
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
    v11 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v13 = -1LL;
      if ( v11 + 4 >= v11 )
        v13 = v11 + 4;
      v10 = v11 + 4 < v11 ? 0xC0000095 : 0;
      if ( v11 + 4 < v11 )
        goto LABEL_18;
      v14 = v13 + *(unsigned int *)v11;
      v11 = -1LL;
      if ( v14 >= v13 )
        v11 = v14;
      v10 = v14 < v13 ? 0xC0000095 : 0;
      if ( v14 < v13 )
        goto LABEL_18;
    }
    v15 = *(_DWORD *)v11;
    v16 = -1LL;
    if ( v11 + 4 >= v11 )
      v16 = v11 + 4;
    v10 = v11 + 4 < v11 ? 0xC0000095 : 0;
    if ( v11 + 4 < v11 )
    {
LABEL_18:
      v15 = a3;
      v17 = v79;
      goto LABEL_19;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_19:
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v79 = (_QWORD *)*v17;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 < 0 )
    return (unsigned int)v10;
  if ( !v4 || *(_DWORD *)a1 <= 4u )
  {
    v10 = -1073741811;
    goto LABEL_45;
  }
  for ( j = 0; j < 4; ++j )
  {
    v19 = -1LL;
    if ( v4 + 4 >= v4 )
      v19 = v4 + 4;
    v10 = v4 + 4 < v4 ? 0xC0000095 : 0;
    if ( v4 + 4 < v4 )
      goto LABEL_41;
    v20 = v19 + *(unsigned int *)v4;
    v4 = -1LL;
    if ( v20 >= v19 )
      v4 = v20;
    v10 = v20 < v19 ? 0xC0000095 : 0;
    if ( v20 < v19 )
      goto LABEL_41;
  }
  v21 = *(_DWORD *)v4;
  v22 = -1LL;
  if ( v4 + 4 >= v4 )
    v22 = v4 + 4;
  v10 = v4 + 4 < v4 ? 0xC0000095 : 0;
  if ( v4 + 4 < v4 )
  {
LABEL_41:
    v21 = a3;
    v23 = (int *)v79;
    goto LABEL_42;
  }
  v23 = 0LL;
  if ( v21 )
    v23 = (int *)v22;
LABEL_42:
  if ( v10 >= 0 )
  {
    if ( v21 != 4 )
      return (unsigned int)-1073741789;
    a3 = *v23;
LABEL_45:
    if ( v10 < 0 )
      return (unsigned int)v10;
    if ( a3 != 4104 )
      return (unsigned int)-1073741762;
    P = ExAllocatePoolWithTag(PagedPool, 0x1008uLL, 0x20534C53u);
    if ( !P )
      return (unsigned int)-1073741801;
    if ( qword_14096E338 )
      v24 = qword_14096E338(P);
    else
      v24 = -1073741637;
    v10 = v24;
    if ( v24 < 0 )
      goto LABEL_64;
    v25 = -1;
    v26 = -1;
    if ( *(_DWORD *)(a2 + 16) < 0xFFFFEFC0 )
      v26 = *(_DWORD *)(a2 + 16) + 4160;
    v10 = *(_DWORD *)(a2 + 16) >= 0xFFFFEFC0 ? 0xC0000095 : 0;
    if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 4160) >= 0x1040 )
    {
      v27 = v26 + 4;
      v28 = -1;
      if ( v26 + 4 >= v26 )
        v28 = v26 + 4;
      v10 = v27 < v26 ? 0xC0000095 : 0;
      if ( v27 >= v26 )
        v10 = v28 + *(_DWORD *)(a2 + 32) < v28 ? 0xC0000095 : 0;
    }
    if ( v10 < 0 )
      goto LABEL_64;
    if ( !a4 )
    {
      v10 = -1073741811;
LABEL_64:
      v29 = P;
      goto LABEL_65;
    }
    *(_DWORD *)(a4 + 4) = 4136;
    v10 = 0;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1028uLL, 0x20534C53u);
    if ( PoolWithTag )
    {
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v10 = -1073741801;
    }
    if ( v10 < 0 )
      goto LABEL_64;
    v32 = *(_QWORD *)(a4 + 8);
    v33 = v24 | 0x10000000;
    if ( v32 )
    {
      v37 = *(char **)(a4 + 8);
      v38 = 0;
      if ( *(_DWORD *)a4 )
      {
        while ( 1 )
        {
          v39 = -1;
          if ( *(_DWORD *)v37 < 0xFFFFFFFC )
            v39 = *(_DWORD *)v37 + 4;
          v10 = *(_DWORD *)v37 >= 0xFFFFFFFC ? 0xC0000095 : 0;
          if ( (unsigned int)(*(_DWORD *)v37 + 4) < 4 )
            break;
          v40 = v39;
          v41 = v37;
          v42 = &v37[v39];
          v43 = -1LL;
          if ( v42 >= v37 )
            v43 = (__int64)&v37[v40];
          v37 = (char *)v43;
          v10 = v42 < v41 ? 0xC0000095 : 0;
          if ( v42 < v41 )
            break;
          if ( (unsigned int)++v38 >= *(_DWORD *)a4 )
            goto LABEL_84;
        }
      }
      else
      {
LABEL_84:
        v44 = -1LL;
        if ( v37 + 4 >= v37 )
          v44 = (__int64)(v37 + 4);
        v10 = v37 + 4 < v37 ? 0xC0000095 : 0;
        if ( v37 + 4 >= v37 )
        {
          if ( (unsigned __int64)(v37 + 8) > v32 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_88;
          *(_DWORD *)v37 = 4;
          *(_DWORD *)v44 = v33;
          ++*(_DWORD *)a4;
        }
      }
    }
    else
    {
      v34 = *(_DWORD *)(a4 + 4);
      v35 = -1;
      v36 = v34 + 8;
      if ( v34 + 8 >= v34 )
        v35 = v34 + 8;
      v10 = v36 < v34 ? 0xC0000095 : 0;
      *(_DWORD *)(a4 + 4) = v35;
      if ( v36 >= v34 )
      {
        ++*(_DWORD *)a4;
LABEL_91:
        v45 = *(_QWORD *)(a4 + 8);
        if ( !v45 )
        {
          v46 = *(_DWORD *)(a4 + 4);
          v47 = -1;
          v48 = v46 + 12;
          if ( v46 + 12 >= v46 )
            v47 = v46 + 12;
          v10 = v48 < v46 ? 0xC0000095 : 0;
          *(_DWORD *)(a4 + 4) = v47;
          if ( v48 >= v46 )
          {
            ++*(_DWORD *)a4;
            goto LABEL_110;
          }
LABEL_109:
          if ( v10 < 0 )
            goto LABEL_64;
LABEL_110:
          v57 = *(_QWORD *)(a4 + 8);
          if ( v57 )
          {
            v61 = *(char **)(a4 + 8);
            v62 = 0;
            if ( *(_DWORD *)a4 )
            {
              while ( 1 )
              {
                v63 = -1;
                if ( *(_DWORD *)v61 < 0xFFFFFFFC )
                  v63 = *(_DWORD *)v61 + 4;
                v10 = *(_DWORD *)v61 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v61 + 4) < 4 )
                  break;
                v64 = v63;
                v65 = v61;
                v66 = &v61[v63];
                v67 = -1LL;
                if ( v66 >= v61 )
                  v67 = (__int64)&v61[v64];
                v61 = (char *)v67;
                v10 = v66 < v65 ? 0xC0000095 : 0;
                if ( v66 < v65 )
                  break;
                if ( (unsigned int)++v62 >= *(_DWORD *)a4 )
                  goto LABEL_123;
              }
              v29 = P;
            }
            else
            {
LABEL_123:
              v29 = P;
              v68 = -1LL;
              if ( v61 + 4 >= v61 )
                v68 = (__int64)(v61 + 4);
              v10 = v61 + 4 < v61 ? 0xC0000095 : 0;
              if ( v61 + 4 >= v61 )
              {
                if ( (unsigned __int64)(v61 + 4108) > v57 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_127;
                *(_DWORD *)v61 = 4104;
                memmove((void *)v68, P, 0x1008uLL);
                ++*(_DWORD *)a4;
              }
            }
          }
          else
          {
            v58 = *(_DWORD *)(a4 + 4);
            v59 = -1;
            v29 = P;
            v60 = v58 + 4108;
            if ( v58 + 4108 >= v58 )
              v59 = v58 + 4108;
            v10 = v60 < v58 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v59;
            if ( v60 >= v58 )
            {
              ++*(_DWORD *)a4;
LABEL_131:
              v69 = *(_QWORD *)(a4 + 8);
              if ( !v69 )
              {
                v70 = *(_DWORD *)(a4 + 4);
                v71 = v70 + 8;
                if ( v70 + 8 >= v70 )
                  v25 = v70 + 8;
                v10 = v71 < v70 ? 0xC0000095 : 0;
                *(_DWORD *)(a4 + 4) = v25;
                if ( v71 >= v70 )
                {
                  ++*(_DWORD *)a4;
                  v10 = 0;
                }
                goto LABEL_65;
              }
              v72 = *(char **)(a4 + 8);
              if ( *(_DWORD *)a4 )
              {
                do
                {
                  v73 = -1;
                  if ( *(_DWORD *)v72 < 0xFFFFFFFC )
                    v73 = *(_DWORD *)v72 + 4;
                  v10 = *(_DWORD *)v72 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v72 + 4) < 4 )
                    goto LABEL_65;
                  v74 = v73;
                  v75 = v72;
                  v76 = &v72[v73];
                  v77 = -1LL;
                  if ( v76 >= v72 )
                    v77 = (__int64)&v72[v74];
                  v72 = (char *)v77;
                  v10 = v76 < v75 ? 0xC0000095 : 0;
                  if ( v76 < v75 )
                    goto LABEL_65;
                }
                while ( (unsigned int)++v6 < *(_DWORD *)a4 );
              }
              if ( v72 + 4 >= v72 )
                v5 = (__int64)(v72 + 4);
              v10 = v72 + 4 < v72 ? 0xC0000095 : 0;
              if ( v72 + 4 < v72 )
              {
LABEL_65:
                ExFreePoolWithTag(v29, 0x20534C53u);
                return (unsigned int)v10;
              }
              if ( (unsigned __int64)(v72 + 8) <= v69 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v72 = 4;
                *(_DWORD *)v5 = 4104;
                ++*(_DWORD *)a4;
                goto LABEL_65;
              }
LABEL_127:
              v10 = -1073741789;
              goto LABEL_65;
            }
          }
          if ( v10 < 0 )
            goto LABEL_65;
          goto LABEL_131;
        }
        v49 = *(char **)(a4 + 8);
        v50 = 0;
        if ( *(_DWORD *)a4 )
        {
          do
          {
            v51 = -1;
            if ( *(_DWORD *)v49 < 0xFFFFFFFC )
              v51 = *(_DWORD *)v49 + 4;
            v10 = *(_DWORD *)v49 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v49 + 4) < 4 )
              goto LABEL_109;
            v52 = v51;
            v53 = v49;
            v54 = &v49[v51];
            v55 = -1LL;
            if ( v54 >= v49 )
              v55 = (__int64)&v49[v52];
            v49 = (char *)v55;
            v10 = v54 < v53 ? 0xC0000095 : 0;
            if ( v54 < v53 )
              goto LABEL_109;
          }
          while ( (unsigned int)++v50 < *(_DWORD *)a4 );
        }
        v56 = -1LL;
        if ( v49 + 4 >= v49 )
          v56 = (__int64)(v49 + 4);
        v10 = v49 + 4 < v49 ? 0xC0000095 : 0;
        if ( v49 + 4 < v49 )
          goto LABEL_109;
        if ( (unsigned __int64)(v49 + 12) <= v45 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v49 = 8;
          *(_QWORD *)v56 = v79;
          ++*(_DWORD *)a4;
          goto LABEL_109;
        }
LABEL_88:
        v10 = -1073741789;
        goto LABEL_64;
      }
    }
    if ( v10 < 0 )
      goto LABEL_64;
    goto LABEL_91;
  }
  return (unsigned int)v10;
}
