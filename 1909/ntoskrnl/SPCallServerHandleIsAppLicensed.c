/*
 * XREFs of SPCallServerHandleIsAppLicensed @ 0x1406DE5C4
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x1400D5CD0 (StringCbLengthW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleIsAppLicensed(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v7; // r12
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r9
  unsigned int *v12; // r8
  unsigned int v13; // r8d
  unsigned int *v14; // rdx
  unsigned int *v15; // rax
  signed int v16; // ebx
  unsigned int *v17; // rax
  unsigned int j; // edx
  __int64 v19; // r9
  unsigned int *v20; // r8
  unsigned int v21; // r8d
  unsigned int *v22; // rdx
  unsigned int *v23; // rax
  unsigned int k; // edx
  __int64 v25; // rax
  unsigned int *v26; // r8
  const wchar_t *v27; // r11
  __int64 v28; // r14
  void *v29; // r11
  unsigned int v30; // r14d
  PVOID PoolWithTag; // rax
  void *v32; // rbx
  unsigned int *v33; // rax
  unsigned int m; // ecx
  __int64 v35; // r8
  unsigned int *v36; // rdx
  const wchar_t *v37; // r11
  char *v38; // r14
  void *v39; // r11
  unsigned int v40; // r14d
  PVOID v41; // rax
  PVOID v42; // rbx
  unsigned int *v43; // rcx
  unsigned int *v44; // rax
  unsigned int n; // edx
  __int64 v46; // r10
  unsigned int *v47; // r8
  unsigned int v48; // r11d
  unsigned int *v49; // r10
  unsigned int ii; // edx
  __int64 v51; // rax
  unsigned int *v52; // r8
  unsigned int v53; // r8d
  _DWORD *v54; // rax
  int v55; // edi
  int v56; // edx
  unsigned int v57; // ecx
  _DWORD *v58; // rax
  int v59; // edi
  size_t v60; // rdx
  size_t v61; // rcx
  __int64 v62; // r8
  unsigned __int64 v63; // rdx
  unsigned int jj; // ecx
  unsigned int v65; // eax
  unsigned int v67; // r8d
  __int64 v68; // r10
  int v69; // r11d
  unsigned __int64 v70; // rdx
  unsigned int v71; // ecx
  unsigned int v72; // eax
  __int64 v73; // xmm0_8
  unsigned int v74; // edx
  int v75; // eax
  unsigned int v76; // ecx
  unsigned int v77; // ecx
  unsigned int v78; // eax
  size_t pcbLength; // [rsp+40h] [rbp-40h] BYREF
  void *Src; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v81; // [rsp+50h] [rbp-30h]
  PVOID P; // [rsp+58h] [rbp-28h]
  __int64 v83; // [rsp+60h] [rbp-20h]
  __int128 v84; // [rsp+68h] [rbp-18h] BYREF

  P = 0LL;
  v84 = 0uLL;
  v7 = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( v8 && *(_DWORD *)a1 > 3u )
  {
    v9 = v8;
    for ( i = 0; i < 3; ++i )
    {
      v11 = *v9;
      v12 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_126;
      v9 = (unsigned int *)((char *)v12 + v11);
      if ( (unsigned int *)((char *)v12 + v11) < v12 )
        goto LABEL_126;
    }
    v13 = *v9;
    v14 = v9 + 1;
    if ( v9 + 1 < v9 )
    {
LABEL_126:
      v16 = -1073741675;
    }
    else
    {
      v15 = 0LL;
      if ( v13 )
        v15 = v14;
      v16 = 0;
      if ( v13 != 8 )
        return (unsigned int)-1073741789;
      v83 = *(_QWORD *)v15;
    }
  }
  else
  {
    v16 = -1073741811;
  }
  if ( v16 < 0 )
    return (unsigned int)v16;
  if ( v8 && *(_DWORD *)a1 > 4u )
  {
    v17 = v8;
    for ( j = 0; j < 4; ++j )
    {
      v19 = *v17;
      v20 = v17 + 1;
      if ( v17 + 1 < v17 )
        goto LABEL_128;
      v17 = (unsigned int *)((char *)v20 + v19);
      if ( (unsigned int *)((char *)v20 + v19) < v20 )
        goto LABEL_128;
    }
    v21 = *v17;
    v22 = v17 + 1;
    if ( v17 + 1 >= v17 )
    {
      v23 = 0LL;
      if ( v21 )
        v23 = v22;
      v16 = 0;
      if ( v21 == 4 )
      {
        v81 = *v23;
        goto LABEL_26;
      }
      return (unsigned int)-1073741789;
    }
LABEL_128:
    v16 = -1073741675;
  }
  else
  {
    v16 = -1073741811;
  }
LABEL_26:
  if ( v16 < 0 )
    return (unsigned int)v16;
  if ( v8 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v25 = *v8;
      v26 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_31;
      v8 = (unsigned int *)((char *)v26 + v25);
      if ( (unsigned int *)((char *)v26 + v25) < v26 )
        goto LABEL_31;
    }
    v60 = *v8;
    if ( v8 + 1 < v8 )
    {
LABEL_31:
      v16 = -1073741675;
    }
    else
    {
      v27 = 0LL;
      if ( (_DWORD)v60 )
        v27 = (const wchar_t *)(v8 + 1);
      v16 = 0;
      if ( !(_DWORD)v60 || (v60 & 1) != 0 )
        return (unsigned int)-1073741762;
      v28 = *v8;
      if ( v27[(v60 >> 1) - 1] )
        return (unsigned int)-1073741762;
      if ( StringCbLengthW(v27, v60, &pcbLength) < 0 || pcbLength + 2 != v28 )
        return (unsigned int)-1073741762;
      LODWORD(pcbLength) = pcbLength >> 1;
      Src = v29;
    }
  }
  else
  {
    v16 = -1073741811;
  }
  if ( v16 < 0 )
    return (unsigned int)v16;
  if ( 2 * (_DWORD)pcbLength == -2 )
    return (unsigned int)-1073741762;
  v30 = 2 * pcbLength + 2;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v30, 0x20534C53u);
  v32 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, Src, v30);
  P = v32;
  v33 = *(unsigned int **)(a1 + 8);
  if ( v33 && *(_DWORD *)a1 > 6u )
  {
    for ( m = 0; m < 6; ++m )
    {
      v35 = *v33;
      v36 = v33 + 1;
      if ( v33 + 1 < v33 )
        goto LABEL_47;
      v33 = (unsigned int *)((char *)v36 + v35);
      if ( (unsigned int *)((char *)v36 + v35) < v36 )
        goto LABEL_47;
    }
    v61 = *v33;
    if ( v33 + 1 < v33 )
    {
LABEL_47:
      v16 = -1073741675;
    }
    else
    {
      v37 = 0LL;
      if ( (_DWORD)v61 )
        v37 = (const wchar_t *)(v33 + 1);
      v16 = 0;
      if ( !(_DWORD)v61 || (v61 & 1) != 0 )
        goto LABEL_135;
      v38 = (char *)*v33;
      if ( v37[(v61 >> 1) - 1] || StringCbLengthW(v37, v61, (size_t *)&Src) < 0 || (char *)Src + 2 != v38 )
      {
        v16 = -1073741762;
        goto LABEL_105;
      }
      LODWORD(pcbLength) = (unsigned __int64)Src >> 1;
      Src = v39;
    }
  }
  else
  {
    v16 = -1073741811;
  }
  if ( v16 < 0 )
    goto LABEL_105;
  if ( 2 * (_DWORD)pcbLength == -2 )
  {
LABEL_135:
    v16 = -1073741762;
    goto LABEL_105;
  }
  v40 = 2 * pcbLength + 2;
  v41 = ExAllocatePoolWithTag(PagedPool, v40, 0x20534C53u);
  v42 = v41;
  if ( !v41 )
  {
    v16 = -1073741801;
    goto LABEL_105;
  }
  memmove(v41, Src, v40);
  v7 = v42;
  v43 = *(unsigned int **)(a1 + 8);
  if ( !v43 || *(_DWORD *)a1 <= 7u )
  {
    v16 = -1073741811;
    goto LABEL_105;
  }
  v44 = *(unsigned int **)(a1 + 8);
  for ( n = 0; n < 7; ++n )
  {
    v46 = *v44;
    v47 = v44 + 1;
    if ( v44 + 1 < v44 )
      goto LABEL_148;
    v44 = (unsigned int *)((char *)v47 + v46);
    if ( (unsigned int *)((char *)v47 + v46) < v47 )
      goto LABEL_148;
  }
  v48 = *v44;
  if ( v44 + 1 < v44 )
  {
LABEL_148:
    v16 = -1073741675;
    goto LABEL_105;
  }
  v49 = 0LL;
  if ( v48 )
    v49 = v44 + 1;
  if ( *(_DWORD *)a1 > 8u )
  {
    for ( ii = 0; ii < 8; ++ii )
    {
      v51 = *v43;
      v52 = v43 + 1;
      if ( v43 + 1 < v43 )
        goto LABEL_141;
      v43 = (unsigned int *)((char *)v52 + v51);
      if ( (unsigned int *)((char *)v52 + v51) < v52 )
        goto LABEL_141;
    }
    v53 = *v43;
    if ( v43 + 1 < v43 )
    {
LABEL_141:
      v16 = -1073741675;
      goto LABEL_78;
    }
    v54 = 0LL;
    if ( v53 )
      v54 = v43 + 1;
    v16 = 0;
    if ( v53 == 4 )
    {
      LODWORD(pcbLength) = *v54;
      goto LABEL_78;
    }
    goto LABEL_140;
  }
  v16 = -1073741811;
LABEL_78:
  if ( v16 < 0 )
    goto LABEL_105;
  if ( qword_1409AD418 )
    v55 = qword_1409AD418(v81, P, v7, v49, v48, pcbLength, &v84);
  else
    v55 = -1073700223;
  v56 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC0 )
    goto LABEL_86;
  v57 = *(_DWORD *)(a2 + 16) + 68;
  if ( v57 < *(_DWORD *)(a2 + 16) + 64 )
    goto LABEL_86;
  v16 = v57 + v56 < v57 ? 0xC0000095 : 0;
  if ( v57 + v56 < v57 )
    goto LABEL_105;
  *(_DWORD *)(a4 + 4) = 40;
  v58 = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20534C53u);
  if ( !v58 )
  {
    v16 = -1073741801;
    goto LABEL_105;
  }
  *(_QWORD *)(a4 + 8) = v58;
  *(_DWORD *)a4 = 0;
  v59 = v55 | 0x10000000;
  if ( v58 + 1 < v58 )
    goto LABEL_86;
  if ( v58 + 2 > (_DWORD *)((char *)v58 + *(unsigned int *)(a4 + 4)) )
    goto LABEL_140;
  *v58 = 4;
  v58[1] = v59;
  v67 = ++*(_DWORD *)a4;
  v68 = *(_QWORD *)(a4 + 8);
  v69 = -1;
  if ( v68 )
  {
    v70 = *(_QWORD *)(a4 + 8);
    v71 = 0;
    if ( v67 )
    {
      while ( 1 )
      {
        v72 = *(_DWORD *)v70 + 4;
        if ( *(_DWORD *)v70 >= 0xFFFFFFFC )
          break;
        if ( v70 + v72 < v70 )
          goto LABEL_86;
        ++v71;
        v70 += v72;
        if ( v71 >= v67 )
          goto LABEL_116;
      }
      v16 = -1073741675;
    }
    else
    {
LABEL_116:
      if ( v70 + 4 < v70 )
        goto LABEL_86;
      v16 = 0;
      if ( v70 + 12 > v68 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_140;
      v73 = v83;
      *(_DWORD *)v70 = 8;
      *(_QWORD *)(v70 + 4) = v73;
      ++*(_DWORD *)a4;
    }
  }
  else
  {
    v74 = *(_DWORD *)(a4 + 4);
    v75 = -1;
    v76 = v74 + 12;
    if ( v74 + 12 >= v74 )
      v75 = v74 + 12;
    v16 = v76 < v74 ? 0xC0000095 : 0;
    *(_DWORD *)(a4 + 4) = v75;
    if ( v76 >= v74 )
    {
      *(_DWORD *)a4 = v67 + 1;
LABEL_97:
      v62 = *(_QWORD *)(a4 + 8);
      if ( !v62 )
      {
        v77 = *(_DWORD *)(a4 + 4);
        v78 = v77 + 20;
        if ( v77 + 20 >= v77 )
          v69 = v77 + 20;
        v16 = v78 < v77 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v69;
        if ( v78 >= v77 )
        {
          ++*(_DWORD *)a4;
          v16 = 0;
        }
        goto LABEL_105;
      }
      v63 = *(_QWORD *)(a4 + 8);
      for ( jj = 0; jj < *(_DWORD *)a4; v63 += v65 )
      {
        v65 = *(_DWORD *)v63 + 4;
        if ( *(_DWORD *)v63 >= 0xFFFFFFFC || v63 + v65 < v63 )
          goto LABEL_86;
        ++jj;
      }
      if ( v63 + 4 < v63 )
      {
LABEL_86:
        v16 = -1073741675;
        goto LABEL_105;
      }
      v16 = 0;
      if ( v63 + 20 <= v62 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *(_DWORD *)v63 = 16;
        *(_OWORD *)(v63 + 4) = v84;
        ++*(_DWORD *)a4;
        goto LABEL_105;
      }
LABEL_140:
      v16 = -1073741789;
      goto LABEL_105;
    }
  }
  if ( v16 >= 0 )
    goto LABEL_97;
LABEL_105:
  if ( P )
    ExFreePoolWithTag(P, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v16;
}
