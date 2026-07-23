/*
 * XREFs of sub_1408DEEF8 @ 0x1408DEEF8
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1408DEEF8(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v7; // r13
  signed int v8; // r8d
  unsigned __int64 v9; // r9
  __int64 v10; // rsi
  unsigned __int64 v11; // r10
  unsigned int i; // r14d
  unsigned __int64 v13; // r15
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
  unsigned int v50; // edx
  int v51; // eax
  unsigned int v52; // ecx
  char *v53; // r9
  int v54; // r11d
  unsigned int v55; // eax
  unsigned int v56; // r12d
  char *v57; // rcx
  char *v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // r10
  unsigned int v62; // ecx
  unsigned int v63; // eax
  char *v64; // r9
  unsigned int v65; // eax
  unsigned int v66; // r11d
  char *v67; // rcx
  char *v68; // rdx
  __int64 v69; // rax
  __int64 v71; // [rsp+58h] [rbp-9h]
  _QWORD *v72; // [rsp+60h] [rbp-1h]
  _OWORD v74[2]; // [rsp+70h] [rbp+Fh] BYREF

  v4 = 0;
  v71 = 0LL;
  v7 = 0LL;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v9 = *(_QWORD *)(a1 + 8);
  v10 = -1LL;
  if ( v9 && *(_DWORD *)a1 > 3u )
  {
    v11 = *(_QWORD *)(a1 + 8);
    for ( i = 0; i < 3; ++i )
    {
      v13 = -1LL;
      if ( v11 + 4 >= v11 )
        v13 = v11 + 4;
      v8 = v11 + 4 < v11 ? 0xC0000095 : 0;
      if ( v11 + 4 < v11 )
        goto LABEL_22;
      v14 = v13 + *(unsigned int *)v11;
      v11 = -1LL;
      if ( v14 >= v13 )
        v11 = v14;
      v8 = v14 < v13 ? 0xC0000095 : 0;
      if ( v14 < v13 )
        goto LABEL_22;
    }
    v15 = *(_DWORD *)v11;
    v16 = -1LL;
    if ( v11 + 4 >= v11 )
      v16 = v11 + 4;
    v8 = v11 + 4 < v11 ? 0xC0000095 : 0;
    if ( v11 + 4 < v11 )
    {
LABEL_22:
      v15 = 0;
      v17 = v72;
      goto LABEL_23;
    }
    v17 = 0LL;
    if ( v15 )
      v17 = (_QWORD *)v16;
LABEL_23:
    if ( v8 < 0 )
      return (unsigned int)v8;
    if ( v15 != 8 )
      return (unsigned int)-1073741789;
    v72 = (_QWORD *)*v17;
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( !v9 )
    return (unsigned int)-1073741811;
  v18 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v19 = v9;
  for ( j = 0; j < 4; ++j )
  {
    v21 = -1LL;
    if ( v19 + 4 >= v19 )
      v21 = v19 + 4;
    v8 = v19 + 4 < v19 ? 0xC0000095 : 0;
    if ( v19 + 4 < v19 )
      goto LABEL_44;
    v22 = v21 + *(unsigned int *)v19;
    v19 = -1LL;
    if ( v22 >= v21 )
      v19 = v22;
    v8 = v22 < v21 ? 0xC0000095 : 0;
    if ( v22 < v21 )
      goto LABEL_44;
  }
  v23 = *(_DWORD *)v19;
  v24 = -1LL;
  if ( v19 + 4 >= v19 )
    v24 = v19 + 4;
  v8 = v19 + 4 < v19 ? 0xC0000095 : 0;
  if ( v19 + 4 < v19 )
  {
LABEL_44:
    v23 = 0;
    goto LABEL_45;
  }
  v25 = 0LL;
  if ( v23 )
    v25 = v24;
  v71 = v25;
LABEL_45:
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( v18 <= 5 )
    return (unsigned int)-1073741811;
  v26 = v9;
  for ( k = 0; k < 5; ++k )
  {
    v28 = -1LL;
    if ( v26 + 4 >= v26 )
      v28 = v26 + 4;
    v8 = v26 + 4 < v26 ? 0xC0000095 : 0;
    if ( v26 + 4 < v26 )
      goto LABEL_61;
    v29 = v28 + *(unsigned int *)v26;
    v26 = -1LL;
    if ( v29 >= v28 )
      v26 = v29;
    v8 = v29 < v28 ? 0xC0000095 : 0;
    if ( v29 < v28 )
      goto LABEL_61;
  }
  v30 = *(_DWORD *)v26;
  v31 = -1LL;
  if ( v26 + 4 >= v26 )
    v31 = v26 + 4;
  v8 = v26 + 4 < v26 ? 0xC0000095 : 0;
  if ( v26 + 4 < v26 )
  {
LABEL_61:
    v30 = v71;
    v32 = 0LL;
    goto LABEL_62;
  }
  v32 = 0LL;
  if ( v30 )
    v32 = v31;
LABEL_62:
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( v18 <= 6 )
    return (unsigned int)-1073741811;
  for ( m = 0; m < 6; ++m )
  {
    v34 = -1LL;
    if ( v9 + 4 >= v9 )
      v34 = v9 + 4;
    v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
      goto LABEL_78;
    v35 = v34 + *(unsigned int *)v9;
    v9 = -1LL;
    if ( v35 >= v34 )
      v9 = v35;
    v8 = v35 < v34 ? 0xC0000095 : 0;
    if ( v35 < v34 )
      goto LABEL_78;
  }
  v36 = *(_DWORD *)v9;
  v37 = -1LL;
  if ( v9 + 4 >= v9 )
    v37 = v9 + 4;
  v8 = v9 + 4 < v9 ? 0xC0000095 : 0;
  if ( v9 + 4 < v9 )
  {
LABEL_78:
    v36 = v71;
    goto LABEL_79;
  }
  if ( v36 )
    v7 = v37;
LABEL_79:
  if ( v8 < 0 )
    return (unsigned int)v8;
  v38 = qword_14096E3C0
      ? ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD, __int64, int, _OWORD *, int))qword_14096E430)(
          v71,
          v23,
          v32,
          v30,
          v7,
          v36,
          v74,
          32)
      : -1073741637;
  v8 = v38;
  if ( v38 < 0 )
    return (unsigned int)v8;
  v39 = -1;
  v40 = -1;
  if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
    v40 = *(_DWORD *)(a2 + 16) + 80;
  v8 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0 ? 0xC0000095 : 0;
  if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 80) >= 0x50 )
  {
    v41 = v40 + 4;
    v42 = -1;
    if ( v40 + 4 >= v40 )
      v42 = v40 + 4;
    v8 = v41 < v40 ? 0xC0000095 : 0;
    if ( v41 >= v40 )
      v8 = v42 + *(_DWORD *)(a2 + 32) < v42 ? 0xC0000095 : 0;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
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
  v8 = v46 < v44 ? 0xC0000095 : 0;
  if ( v46 >= v44 )
  {
    if ( v44 + 8 > &v44[*(unsigned int *)(a4 + 4)] )
      return (unsigned int)-1073741789;
    *(_DWORD *)v44 = 4;
    *(_DWORD *)v47 = v45;
    v48 = ++*(_DWORD *)a4;
  }
  if ( v46 < v44 )
    return (unsigned int)v8;
  v49 = *(_QWORD *)(a4 + 8);
  if ( v49 )
  {
    v53 = *(char **)(a4 + 8);
    v54 = 0;
    if ( v48 )
    {
      while ( 1 )
      {
        v55 = -1;
        if ( *(_DWORD *)v53 < 0xFFFFFFFC )
          v55 = *(_DWORD *)v53 + 4;
        v8 = *(_DWORD *)v53 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v53 + 4) < 4 )
          break;
        v56 = v55;
        v57 = v53;
        v58 = &v53[v55];
        v59 = -1LL;
        if ( v58 >= v53 )
          v59 = (__int64)&v53[v56];
        v53 = (char *)v59;
        v8 = v58 < v57 ? 0xC0000095 : 0;
        if ( v58 < v57 )
          break;
        if ( ++v54 >= v48 )
          goto LABEL_113;
      }
    }
    else
    {
LABEL_113:
      v60 = -1LL;
      if ( v53 + 4 >= v53 )
        v60 = (__int64)(v53 + 4);
      v8 = v53 + 4 < v53 ? 0xC0000095 : 0;
      if ( v53 + 4 >= v53 )
      {
        if ( (unsigned __int64)(v53 + 12) > v49 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *(_DWORD *)v53 = 8;
        *(_QWORD *)v60 = v72;
        ++*(_DWORD *)a4;
      }
    }
  }
  else
  {
    v50 = *(_DWORD *)(a4 + 4);
    v51 = -1;
    v52 = v50 + 12;
    if ( v50 + 12 >= v50 )
      v51 = v50 + 12;
    v8 = v52 < v50 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v51;
    if ( v52 >= v50 )
    {
      *(_DWORD *)a4 = v48 + 1;
      goto LABEL_119;
    }
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
LABEL_119:
  v61 = *(_QWORD *)(a4 + 8);
  if ( v61 )
  {
    v64 = *(char **)(a4 + 8);
    if ( *(_DWORD *)a4 )
    {
      while ( 1 )
      {
        v65 = -1;
        if ( *(_DWORD *)v64 < 0xFFFFFFFC )
          v65 = *(_DWORD *)v64 + 4;
        v8 = *(_DWORD *)v64 >= 0xFFFFFFFC ? 0xC0000095 : 0;
        if ( (unsigned int)(*(_DWORD *)v64 + 4) < 4 )
          break;
        v66 = v65;
        v67 = v64;
        v68 = &v64[v65];
        v69 = -1LL;
        if ( v68 >= v64 )
          v69 = (__int64)&v64[v66];
        v64 = (char *)v69;
        v8 = v68 < v67 ? 0xC0000095 : 0;
        if ( v68 < v67 )
          break;
        if ( (unsigned int)++v4 >= *(_DWORD *)a4 )
          goto LABEL_132;
      }
      return (unsigned int)v8;
    }
LABEL_132:
    if ( v64 + 4 >= v64 )
      v10 = (__int64)(v64 + 4);
    v8 = v64 + 4 < v64 ? 0xC0000095 : 0;
    if ( v64 + 4 < v64 )
      return (unsigned int)v8;
    if ( (unsigned __int64)(v64 + 36) <= v61 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v64 = 32;
      *(_OWORD *)v10 = v74[0];
      *(_OWORD *)(v10 + 16) = v74[1];
      goto LABEL_138;
    }
    return (unsigned int)-1073741789;
  }
  v62 = *(_DWORD *)(a4 + 4);
  v63 = v62 + 36;
  if ( v62 + 36 >= v62 )
    v39 = v62 + 36;
  v8 = v63 < v62 ? 0xC0000095 : 0;
  *(_DWORD *)(a4 + 4) = v39;
  if ( v63 >= v62 )
  {
    v8 = 0;
LABEL_138:
    ++*(_DWORD *)a4;
  }
  return (unsigned int)v8;
}
