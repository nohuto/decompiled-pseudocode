/*
 * XREFs of SPCallServerHandleIsAppLicensed @ 0x1406860FC
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     StringCbLengthW @ 0x1400FD170 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleIsAppLicensed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r13
  unsigned __int64 v7; // r8
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  unsigned int i; // r9d
  unsigned __int64 v11; // r10
  signed int v12; // ebx
  unsigned __int64 v13; // rcx
  unsigned int v14; // ecx
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned int j; // r9d
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  unsigned int v21; // ecx
  __int64 v22; // r9
  unsigned int *v23; // rax
  unsigned int k; // edx
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // rcx
  unsigned int v27; // ecx
  __int64 v28; // rdx
  const wchar_t *v29; // r11
  __int64 v30; // r14
  void *v31; // r11
  unsigned int v32; // r14d
  PVOID PoolWithTag; // rax
  void *v34; // rbx
  unsigned __int64 v35; // rdx
  unsigned int m; // r8d
  unsigned __int64 v37; // r9
  unsigned __int64 v38; // rcx
  unsigned int v39; // ecx
  __int64 v40; // r8
  const wchar_t *v41; // r11
  unsigned __int64 v42; // r14
  void *v43; // r11
  unsigned int v44; // r14d
  PVOID v45; // rax
  void *v46; // rbx
  unsigned __int64 v47; // rdx
  unsigned __int64 v48; // r8
  unsigned int n; // r9d
  unsigned __int64 v50; // r10
  unsigned __int64 v51; // rcx
  unsigned int v52; // r14d
  __int64 v53; // rcx
  unsigned int ii; // r8d
  unsigned __int64 v55; // r9
  unsigned __int64 v56; // rcx
  unsigned int v57; // ecx
  __int64 v58; // r8
  int *v59; // rax
  int v60; // eax
  int v61; // r14d
  int v62; // edi
  unsigned int v63; // ecx
  unsigned int v64; // eax
  unsigned int v65; // edx
  char *v66; // rax
  int v67; // r10d
  char *v68; // rdx
  int v69; // r14d
  char *v70; // rax
  __int64 v71; // r8
  unsigned int v72; // r9d
  __int64 v73; // r11
  char *v74; // r8
  unsigned int v75; // eax
  unsigned int v76; // r14d
  char *v77; // rcx
  char *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // r9
  char *v82; // r8
  unsigned int v83; // eax
  unsigned int v84; // r11d
  char *v85; // rcx
  char *v86; // rdx
  __int64 v87; // rax
  unsigned int v89; // edx
  int v90; // eax
  unsigned int v91; // ecx
  unsigned int v92; // ecx
  unsigned int v93; // eax
  unsigned int v94; // [rsp+48h] [rbp-19h]
  _QWORD *v95; // [rsp+50h] [rbp-11h]
  size_t pcbLength; // [rsp+58h] [rbp-9h] BYREF
  void *Src; // [rsp+60h] [rbp-1h] BYREF
  PVOID P; // [rsp+68h] [rbp+7h]
  PVOID v99; // [rsp+70h] [rbp+Fh]
  __int64 v100; // [rsp+78h] [rbp+17h]
  __int128 v101; // [rsp+80h] [rbp+1Fh] BYREF

  v100 = a2;
  P = 0LL;
  v99 = 0LL;
  v101 = 0uLL;
  v6 = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = -1LL;
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v9 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v11 = -1LL;
      if ( v9 + 4 >= v9 )
        v11 = v9 + 4;
      v12 = v9 + 4 < v9 ? 0xC0000095 : 0;
      if ( v9 + 4 < v9 )
        goto LABEL_182;
      v13 = v11 + *(unsigned int *)v9;
      v9 = -1LL;
      if ( v13 >= v11 )
        v9 = v13;
      v12 = v13 < v11 ? 0xC0000095 : 0;
      if ( v13 < v11 )
        goto LABEL_182;
    }
    v14 = *(_DWORD *)v9;
    v15 = -1LL;
    if ( v9 + 4 >= v9 )
      v15 = v9 + 4;
    v12 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
    {
LABEL_182:
      v14 = v94;
      v16 = v95;
      goto LABEL_18;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_18:
    if ( v12 < 0 )
      return (unsigned int)v12;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v95 = (_QWORD *)*v16;
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v12 < 0 )
    return (unsigned int)v12;
  if ( !v7 || *(_DWORD *)a1 <= 4u )
  {
    v12 = -1073741811;
    goto LABEL_40;
  }
  v17 = v7;
  for ( j = 0; j < 4; ++j )
  {
    v19 = -1LL;
    if ( v17 + 4 >= v17 )
      v19 = v17 + 4;
    v12 = v17 + 4 < v17 ? 0xC0000095 : 0;
    if ( v17 + 4 < v17 )
      goto LABEL_185;
    v20 = v19 + *(unsigned int *)v17;
    v17 = -1LL;
    if ( v20 >= v19 )
      v17 = v20;
    v12 = v20 < v19 ? 0xC0000095 : 0;
    if ( v20 < v19 )
      goto LABEL_185;
  }
  v21 = *(_DWORD *)v17;
  v22 = -1LL;
  if ( v17 + 4 >= v17 )
    v22 = v17 + 4;
  v12 = v17 + 4 < v17 ? 0xC0000095 : 0;
  if ( v17 + 4 < v17 )
  {
LABEL_185:
    v21 = v94;
    v23 = (unsigned int *)v95;
    goto LABEL_37;
  }
  v23 = 0LL;
  if ( v21 )
    v23 = (unsigned int *)v22;
LABEL_37:
  if ( v12 < 0 )
    return (unsigned int)v12;
  if ( v21 != 4 )
    return (unsigned int)-1073741789;
  v94 = *v23;
LABEL_40:
  if ( v12 < 0 )
    return (unsigned int)v12;
  if ( !v7 || *(_DWORD *)a1 <= 5u )
  {
    v12 = -1073741811;
    goto LABEL_63;
  }
  for ( k = 0; k < 5; ++k )
  {
    v25 = -1LL;
    if ( v7 + 4 >= v7 )
      v25 = v7 + 4;
    v12 = v7 + 4 < v7 ? 0xC0000095 : 0;
    if ( v7 + 4 < v7 )
      goto LABEL_187;
    v26 = v25 + *(unsigned int *)v7;
    v7 = -1LL;
    if ( v26 >= v25 )
      v7 = v26;
    v12 = v26 < v25 ? 0xC0000095 : 0;
    if ( v26 < v25 )
      goto LABEL_187;
  }
  v27 = *(_DWORD *)v7;
  v28 = -1LL;
  if ( v7 + 4 >= v7 )
    v28 = v7 + 4;
  v12 = v7 + 4 < v7 ? 0xC0000095 : 0;
  if ( v7 + 4 < v7 )
  {
LABEL_187:
    v27 = v94;
    v29 = (const wchar_t *)v95;
    goto LABEL_56;
  }
  v29 = 0LL;
  if ( v27 )
    v29 = (const wchar_t *)v28;
LABEL_56:
  if ( v12 >= 0 )
  {
    if ( !v27 )
      return (unsigned int)-1073741762;
    if ( (v27 & 1) != 0 )
      return (unsigned int)-1073741762;
    v30 = v27;
    if ( v29[((unsigned __int64)v27 >> 1) - 1] || StringCbLengthW(v29, v27, &pcbLength) < 0 || pcbLength + 2 != v30 )
      return (unsigned int)-1073741762;
    LODWORD(pcbLength) = pcbLength >> 1;
    Src = v31;
LABEL_63:
    if ( v12 < 0 )
      return (unsigned int)v12;
    if ( 2 * (_DWORD)pcbLength != -2 )
    {
      v32 = 2 * pcbLength + 2;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v32, 0x20534C53u);
      v34 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, Src, v32);
      P = v34;
      v35 = *(_QWORD *)(a1 + 8);
      if ( v35 && *(_DWORD *)a1 > 6u )
      {
        for ( m = 0; m < 6; ++m )
        {
          v37 = -1LL;
          if ( v35 + 4 >= v35 )
            v37 = v35 + 4;
          v12 = v35 + 4 < v35 ? 0xC0000095 : 0;
          if ( v35 + 4 < v35 )
            goto LABEL_191;
          v38 = v37 + *(unsigned int *)v35;
          v35 = -1LL;
          if ( v38 >= v37 )
            v35 = v38;
          v12 = v38 < v37 ? 0xC0000095 : 0;
          if ( v38 < v37 )
            goto LABEL_191;
        }
        v39 = *(_DWORD *)v35;
        v40 = -1LL;
        if ( v35 + 4 >= v35 )
          v40 = v35 + 4;
        v12 = v35 + 4 < v35 ? 0xC0000095 : 0;
        if ( v35 + 4 < v35 )
        {
LABEL_191:
          v39 = v94;
          v41 = (const wchar_t *)v95;
          goto LABEL_81;
        }
        v41 = 0LL;
        if ( v39 )
          v41 = (const wchar_t *)v40;
LABEL_81:
        if ( v12 < 0 )
          goto LABEL_173;
        if ( !v39 )
          goto LABEL_192;
        if ( (v39 & 1) != 0 )
          goto LABEL_192;
        v42 = v39;
        if ( v41[((unsigned __int64)v39 >> 1) - 1]
          || StringCbLengthW(v41, v39, (size_t *)&Src) < 0
          || (char *)Src + 2 != (void *)v42 )
        {
          goto LABEL_192;
        }
        LODWORD(pcbLength) = (unsigned __int64)Src >> 1;
        Src = v43;
      }
      else
      {
        v12 = -1073741811;
      }
      if ( v12 < 0 )
        goto LABEL_173;
      if ( 2 * (_DWORD)pcbLength != -2 )
      {
        v44 = 2 * pcbLength + 2;
        v45 = ExAllocatePoolWithTag(PagedPool, v44, 0x20534C53u);
        v46 = v45;
        if ( !v45 )
        {
          v12 = -1073741801;
          goto LABEL_173;
        }
        memmove(v45, Src, v44);
        v99 = v46;
        v47 = *(_QWORD *)(a1 + 8);
        if ( !v47 || *(_DWORD *)a1 <= 7u )
        {
          v12 = -1073741811;
          goto LABEL_173;
        }
        v48 = *(_QWORD *)(a1 + 8);
        for ( n = 0; n < 7; ++n )
        {
          v50 = -1LL;
          if ( v48 + 4 >= v48 )
            v50 = v48 + 4;
          v12 = v48 + 4 < v48 ? 0xC0000095 : 0;
          if ( v48 + 4 < v48 )
            goto LABEL_194;
          v51 = v50 + *(unsigned int *)v48;
          v48 = -1LL;
          if ( v51 >= v50 )
            v48 = v51;
          v12 = v51 < v50 ? 0xC0000095 : 0;
          if ( v51 < v50 )
            goto LABEL_194;
        }
        v52 = *(_DWORD *)v48;
        v53 = -1LL;
        if ( v48 + 4 >= v48 )
          v53 = v48 + 4;
        v12 = v48 + 4 < v48 ? 0xC0000095 : 0;
        if ( v48 + 4 < v48 )
        {
LABEL_194:
          v52 = v94;
          goto LABEL_106;
        }
        if ( v52 )
          v6 = v53;
LABEL_106:
        if ( v12 < 0 )
          goto LABEL_173;
        if ( *(_DWORD *)a1 <= 8u )
        {
          v12 = -1073741811;
        }
        else
        {
          for ( ii = 0; ii < 8; ++ii )
          {
            v55 = -1LL;
            if ( v47 + 4 >= v47 )
              v55 = v47 + 4;
            v12 = v47 + 4 < v47 ? 0xC0000095 : 0;
            if ( v47 + 4 < v47 )
              goto LABEL_197;
            v56 = v55 + *(unsigned int *)v47;
            v47 = -1LL;
            if ( v56 >= v55 )
              v47 = v56;
            v12 = v56 < v55 ? 0xC0000095 : 0;
            if ( v56 < v55 )
              goto LABEL_197;
          }
          v57 = *(_DWORD *)v47;
          v58 = -1LL;
          if ( v47 + 4 >= v47 )
            v58 = v47 + 4;
          v12 = v47 + 4 < v47 ? 0xC0000095 : 0;
          if ( v47 + 4 < v47 )
          {
LABEL_197:
            v57 = v94;
            v59 = (int *)v95;
            goto LABEL_121;
          }
          v59 = 0LL;
          if ( v57 )
            v59 = (int *)v58;
LABEL_121:
          if ( v12 >= 0 )
          {
            if ( v57 != 4 )
              goto LABEL_179;
            v60 = *v59;
LABEL_124:
            if ( v12 < 0 )
              goto LABEL_173;
            if ( qword_14096E388 )
              v61 = ((__int64 (__fastcall *)(_QWORD, PVOID, PVOID, __int64, unsigned int, int, __int128 *))qword_14096E388)(
                      v94,
                      P,
                      v99,
                      v6,
                      v52,
                      v60,
                      &v101);
            else
              v61 = -1073700223;
            v62 = -1;
            v63 = -1;
            if ( *(_DWORD *)(v100 + 16) < 0xFFFFFFC0 )
              v63 = *(_DWORD *)(v100 + 16) + 64;
            v12 = *(_DWORD *)(v100 + 16) >= 0xFFFFFFC0 ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)(v100 + 16) + 64) >= 0x40 )
            {
              v64 = v63 + 4;
              v65 = -1;
              if ( v63 + 4 >= v63 )
                v65 = v63 + 4;
              v12 = v64 < v63 ? 0xC0000095 : 0;
              if ( v64 >= v63 )
                v12 = v65 + *(_DWORD *)(v100 + 32) < v65 ? 0xC0000095 : 0;
            }
            if ( v12 < 0 )
              goto LABEL_173;
            *(_DWORD *)(a4 + 4) = 40;
            v66 = (char *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20534C53u);
            v67 = 0;
            v68 = v66;
            if ( !v66 )
            {
              v12 = -1073741801;
              goto LABEL_173;
            }
            *(_QWORD *)(a4 + 8) = v66;
            *(_DWORD *)a4 = 0;
            v69 = v61 | 0x10000000;
            v70 = v66 + 4;
            v71 = -1LL;
            v72 = 0;
            if ( v70 >= v68 )
              v71 = (__int64)v70;
            v12 = v70 < v68 ? 0xC0000095 : 0;
            if ( v70 >= v68 )
            {
              if ( v68 + 8 > &v68[*(unsigned int *)(a4 + 4)] )
                goto LABEL_179;
              *(_DWORD *)v68 = 4;
              *(_DWORD *)v71 = v69;
              v72 = ++*(_DWORD *)a4;
            }
            if ( v70 < v68 )
              goto LABEL_173;
            v73 = *(_QWORD *)(a4 + 8);
            if ( v73 )
            {
              v74 = *(char **)(a4 + 8);
              if ( v72 )
              {
                while ( 1 )
                {
                  v75 = -1;
                  if ( *(_DWORD *)v74 < 0xFFFFFFFC )
                    v75 = *(_DWORD *)v74 + 4;
                  v12 = *(_DWORD *)v74 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                  if ( (unsigned int)(*(_DWORD *)v74 + 4) < 4 )
                    break;
                  v76 = v75;
                  v77 = v74;
                  v78 = &v74[v75];
                  v79 = -1LL;
                  if ( v78 >= v74 )
                    v79 = (__int64)&v74[v76];
                  v74 = (char *)v79;
                  v12 = v78 < v77 ? 0xC0000095 : 0;
                  if ( v78 < v77 )
                    break;
                  if ( ++v67 >= v72 )
                    goto LABEL_151;
                }
              }
              else
              {
LABEL_151:
                v80 = -1LL;
                if ( v74 + 4 >= v74 )
                  v80 = (__int64)(v74 + 4);
                v12 = v74 + 4 < v74 ? 0xC0000095 : 0;
                if ( v74 + 4 >= v74 )
                {
                  if ( (unsigned __int64)(v74 + 12) > v73 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_179;
                  *(_DWORD *)v74 = 8;
                  *(_QWORD *)v80 = v95;
                  ++*(_DWORD *)a4;
                }
              }
              v67 = 0;
            }
            else
            {
              v89 = *(_DWORD *)(a4 + 4);
              v90 = -1;
              v91 = v89 + 12;
              if ( v89 + 12 >= v89 )
                v90 = v89 + 12;
              v12 = v91 < v89 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v90;
              if ( v91 >= v89 )
              {
                *(_DWORD *)a4 = v72 + 1;
LABEL_158:
                v81 = *(_QWORD *)(a4 + 8);
                if ( !v81 )
                {
                  v92 = *(_DWORD *)(a4 + 4);
                  v93 = v92 + 20;
                  if ( v92 + 20 >= v92 )
                    v62 = v92 + 20;
                  v12 = v93 < v92 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v62;
                  if ( v93 < v92 )
                    goto LABEL_173;
                  v12 = 0;
                  goto LABEL_172;
                }
                v82 = *(char **)(a4 + 8);
                if ( *(_DWORD *)a4 )
                {
                  do
                  {
                    v83 = -1;
                    if ( *(_DWORD *)v82 < 0xFFFFFFFC )
                      v83 = *(_DWORD *)v82 + 4;
                    v12 = *(_DWORD *)v82 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                    if ( (unsigned int)(*(_DWORD *)v82 + 4) < 4 )
                      goto LABEL_173;
                    v84 = v83;
                    v85 = v82;
                    v86 = &v82[v83];
                    v87 = -1LL;
                    if ( v86 >= v82 )
                      v87 = (__int64)&v82[v84];
                    v82 = (char *)v87;
                    v12 = v86 < v85 ? 0xC0000095 : 0;
                    if ( v86 < v85 )
                      goto LABEL_173;
                  }
                  while ( (unsigned int)++v67 < *(_DWORD *)a4 );
                }
                if ( v82 + 4 >= v82 )
                  v8 = (__int64)(v82 + 4);
                v12 = v82 + 4 < v82 ? 0xC0000095 : 0;
                if ( v82 + 4 >= v82 )
                {
                  if ( (unsigned __int64)(v82 + 20) <= v81 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    *(_DWORD *)v82 = 16;
                    *(_OWORD *)v8 = v101;
LABEL_172:
                    ++*(_DWORD *)a4;
                    goto LABEL_173;
                  }
LABEL_179:
                  v12 = -1073741789;
                }
LABEL_173:
                if ( P )
                  ExFreePoolWithTag(P, 0x20534C53u);
                if ( v99 )
                  ExFreePoolWithTag(v99, 0x20534C53u);
                return (unsigned int)v12;
              }
            }
            if ( v12 < 0 )
              goto LABEL_173;
            goto LABEL_158;
          }
        }
        v60 = pcbLength;
        goto LABEL_124;
      }
LABEL_192:
      v12 = -1073741762;
      goto LABEL_173;
    }
    return (unsigned int)-1073741762;
  }
  return (unsigned int)v12;
}
