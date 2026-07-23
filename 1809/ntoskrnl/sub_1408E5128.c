/*
 * XREFs of sub_1408E5128 @ 0x1408E5128
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

__int64 __fastcall sub_1408E5128(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r12
  signed int v7; // ebx
  unsigned __int64 v8; // rdx
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  unsigned int i; // r9d
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  int v14; // ecx
  __int64 v15; // r9
  _QWORD *v16; // rax
  unsigned int j; // r8d
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rcx
  unsigned int v20; // ecx
  __int64 v21; // r8
  const wchar_t *v22; // r11
  unsigned __int64 v23; // rdx
  __int64 v24; // r14
  void *v25; // r11
  unsigned int v26; // eax
  size_t v27; // r14
  PVOID PoolWithTag; // rax
  void *v29; // rbx
  void *v30; // r10
  unsigned int k; // r8d
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // esi
  int v37; // r14d
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned int v40; // edx
  char *v41; // rax
  char *v42; // rdx
  int v43; // esi
  char *v44; // rax
  __int64 v45; // r8
  unsigned int v46; // r9d
  __int64 v47; // r11
  unsigned int v48; // edx
  int v49; // eax
  unsigned int v50; // ecx
  char *v51; // r8
  int v52; // r10d
  unsigned int v53; // eax
  unsigned int v54; // esi
  char *v55; // rcx
  char *v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  _QWORD *v59; // xmm0_8
  __int64 v60; // r9
  unsigned int v61; // ecx
  unsigned int v62; // eax
  char *v63; // r8
  int v64; // r10d
  unsigned int v65; // eax
  unsigned int v66; // esi
  char *v67; // rcx
  char *v68; // rdx
  __int64 v69; // rax
  size_t pcbLength; // [rsp+30h] [rbp-40h] BYREF
  _QWORD *v72; // [rsp+38h] [rbp-38h]
  PVOID P; // [rsp+40h] [rbp-30h]
  void *Src; // [rsp+48h] [rbp-28h]
  __int64 v75; // [rsp+50h] [rbp-20h]
  __int128 v76; // [rsp+58h] [rbp-18h] BYREF

  v75 = a2;
  P = 0LL;
  v76 = 0uLL;
  v6 = 0LL;
  if ( !a2 || !a4 )
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
      v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
      if ( v10 + 4 < v10 )
        goto LABEL_21;
      v13 = v12 + *(unsigned int *)v10;
      v10 = -1LL;
      if ( v13 >= v12 )
        v10 = v13;
      v7 = v13 < v12 ? 0xC0000095 : 0;
      if ( v13 < v12 )
        goto LABEL_21;
    }
    v14 = *(_DWORD *)v10;
    v15 = -1LL;
    if ( v10 + 4 >= v10 )
      v15 = v10 + 4;
    v7 = v10 + 4 < v10 ? 0xC0000095 : 0;
    if ( v10 + 4 < v10 )
    {
LABEL_21:
      v14 = pcbLength;
      v16 = v72;
      goto LABEL_22;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (_QWORD *)v15;
LABEL_22:
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v72 = (_QWORD *)*v16;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( !v8 || *(_DWORD *)a1 <= 4u )
  {
    v7 = -1073741811;
    goto LABEL_55;
  }
  for ( j = 0; j < 4; ++j )
  {
    v18 = -1LL;
    if ( v8 + 4 >= v8 )
      v18 = v8 + 4;
    v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
      goto LABEL_44;
    v19 = v18 + *(unsigned int *)v8;
    v8 = -1LL;
    if ( v19 >= v18 )
      v8 = v19;
    v7 = v19 < v18 ? 0xC0000095 : 0;
    if ( v19 < v18 )
      goto LABEL_44;
  }
  v20 = *(_DWORD *)v8;
  v21 = -1LL;
  if ( v8 + 4 >= v8 )
    v21 = v8 + 4;
  v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
  if ( v8 + 4 < v8 )
  {
LABEL_44:
    v20 = pcbLength;
    v22 = (const wchar_t *)v72;
    goto LABEL_45;
  }
  v22 = 0LL;
  if ( v20 )
    v22 = (const wchar_t *)v21;
LABEL_45:
  if ( v7 >= 0 )
  {
    if ( !v20 )
      return (unsigned int)-1073741762;
    if ( (v20 & 1) != 0 )
      return (unsigned int)-1073741762;
    v24 = v20;
    if ( v22[((unsigned __int64)v20 >> 1) - 1] || StringCbLengthW(v22, v20, &pcbLength) < 0 || pcbLength + 2 != v24 )
      return (unsigned int)-1073741762;
    LODWORD(pcbLength) = pcbLength >> 1;
    Src = v25;
LABEL_55:
    if ( v7 < 0 )
      return (unsigned int)v7;
    v26 = 2 * pcbLength + 2;
    if ( 2 * (_DWORD)pcbLength != -2 )
    {
      v27 = v26;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v26, 0x20534C53u);
      v29 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, Src, v27);
      v30 = v29;
      P = v29;
      v23 = *(_QWORD *)(a1 + 8);
      if ( !v23 || *(_DWORD *)a1 <= 5u )
      {
        v7 = -1073741811;
        goto LABEL_135;
      }
      for ( k = 0; k < 5; ++k )
      {
        v32 = -1LL;
        if ( v23 + 4 >= v23 )
          v32 = v23 + 4;
        v7 = v23 + 4 < v23 ? 0xC0000095 : 0;
        if ( v23 + 4 < v23 )
          goto LABEL_75;
        v33 = v32 + *(unsigned int *)v23;
        v23 = -1LL;
        if ( v33 >= v32 )
          v23 = v33;
        v7 = v33 < v32 ? 0xC0000095 : 0;
        if ( v33 < v32 )
          goto LABEL_75;
      }
      v34 = *(unsigned int *)v23;
      v35 = -1LL;
      if ( v23 + 4 >= v23 )
        v35 = v23 + 4;
      v7 = v23 + 4 < v23 ? 0xC0000095 : 0;
      if ( v23 + 4 < v23 )
      {
LABEL_75:
        v34 = (unsigned int)pcbLength;
        goto LABEL_76;
      }
      if ( (_DWORD)v34 )
        v6 = v35;
LABEL_76:
      if ( v7 < 0 )
        goto LABEL_135;
      if ( qword_14096E3A0 )
        v36 = qword_14096E3A0(v30, v6, v34, &v76);
      else
        v36 = -1073700223;
      v37 = -1;
      v38 = -1;
      if ( *(_DWORD *)(v75 + 16) < 0xFFFFFFC0 )
        v38 = *(_DWORD *)(v75 + 16) + 64;
      v7 = *(_DWORD *)(v75 + 16) >= 0xFFFFFFC0 ? 0xC0000095 : 0;
      if ( (unsigned int)(*(_DWORD *)(v75 + 16) + 64) >= 0x40 )
      {
        v39 = v38 + 4;
        v40 = -1;
        if ( v38 + 4 >= v38 )
          v40 = v38 + 4;
        v7 = v39 < v38 ? 0xC0000095 : 0;
        if ( v39 >= v38 )
          v7 = v40 + *(_DWORD *)(v75 + 32) < v40 ? 0xC0000095 : 0;
      }
      if ( v7 < 0 )
        goto LABEL_135;
      *(_DWORD *)(a4 + 4) = 40;
      v41 = (char *)ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x20534C53u);
      v42 = v41;
      if ( !v41 )
      {
        v7 = -1073741801;
        goto LABEL_135;
      }
      *(_QWORD *)(a4 + 8) = v41;
      *(_DWORD *)a4 = 0;
      v43 = v36 | 0x10000000;
      v44 = v41 + 4;
      v45 = -1LL;
      v46 = 0;
      if ( v44 >= v42 )
        v45 = (__int64)v44;
      v7 = v44 < v42 ? 0xC0000095 : 0;
      if ( v44 >= v42 )
      {
        if ( v42 + 8 > &v42[*(unsigned int *)(a4 + 4)] )
          goto LABEL_132;
        *(_DWORD *)v42 = 4;
        *(_DWORD *)v45 = v43;
        v46 = ++*(_DWORD *)a4;
      }
      if ( v44 < v42 )
        goto LABEL_135;
      v47 = *(_QWORD *)(a4 + 8);
      if ( v47 )
      {
        v51 = *(char **)(a4 + 8);
        v52 = 0;
        if ( v46 )
        {
          while ( 1 )
          {
            v53 = -1;
            if ( *(_DWORD *)v51 < 0xFFFFFFFC )
              v53 = *(_DWORD *)v51 + 4;
            v7 = *(_DWORD *)v51 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v51 + 4) < 4 )
              break;
            v54 = v53;
            v55 = v51;
            v56 = &v51[v53];
            v57 = -1LL;
            if ( v56 >= v51 )
              v57 = (__int64)&v51[v54];
            v51 = (char *)v57;
            v7 = v56 < v55 ? 0xC0000095 : 0;
            if ( v56 < v55 )
              break;
            if ( ++v52 >= v46 )
              goto LABEL_109;
          }
        }
        else
        {
LABEL_109:
          v58 = -1LL;
          if ( v51 + 4 >= v51 )
            v58 = (__int64)(v51 + 4);
          v7 = v51 + 4 < v51 ? 0xC0000095 : 0;
          if ( v51 + 4 >= v51 )
          {
            if ( (unsigned __int64)(v51 + 12) > v47 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_132;
            v59 = v72;
            *(_DWORD *)v51 = 8;
            *(_QWORD *)v58 = v59;
            ++*(_DWORD *)a4;
          }
        }
      }
      else
      {
        v48 = *(_DWORD *)(a4 + 4);
        v49 = -1;
        v50 = v48 + 12;
        if ( v48 + 12 >= v48 )
          v49 = v48 + 12;
        v7 = v50 < v48 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v49;
        if ( v50 >= v48 )
        {
          *(_DWORD *)a4 = v46 + 1;
LABEL_115:
          v60 = *(_QWORD *)(a4 + 8);
          if ( !v60 )
          {
            v61 = *(_DWORD *)(a4 + 4);
            v62 = v61 + 20;
            if ( v61 + 20 >= v61 )
              v37 = v61 + 20;
            v7 = v62 < v61 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v37;
            if ( v62 < v61 )
              goto LABEL_135;
            v7 = 0;
            goto LABEL_134;
          }
          v63 = *(char **)(a4 + 8);
          v64 = 0;
          if ( *(_DWORD *)a4 )
          {
            do
            {
              v65 = -1;
              if ( *(_DWORD *)v63 < 0xFFFFFFFC )
                v65 = *(_DWORD *)v63 + 4;
              v7 = *(_DWORD *)v63 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v63 + 4) < 4 )
                goto LABEL_135;
              v66 = v65;
              v67 = v63;
              v68 = &v63[v65];
              v69 = -1LL;
              if ( v68 >= v63 )
                v69 = (__int64)&v63[v66];
              v63 = (char *)v69;
              v7 = v68 < v67 ? 0xC0000095 : 0;
              if ( v68 < v67 )
                goto LABEL_135;
            }
            while ( (unsigned int)++v64 < *(_DWORD *)a4 );
          }
          if ( v63 + 4 >= v63 )
            v9 = (__int64)(v63 + 4);
          v7 = v63 + 4 < v63 ? 0xC0000095 : 0;
          if ( v63 + 4 < v63 )
          {
LABEL_135:
            if ( P )
              ExFreePoolWithTag(P, 0x20534C53u);
            return (unsigned int)v7;
          }
          if ( (unsigned __int64)(v63 + 20) <= v60 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v63 = 16;
            *(_OWORD *)v9 = v76;
LABEL_134:
            ++*(_DWORD *)a4;
            goto LABEL_135;
          }
LABEL_132:
          v7 = -1073741789;
          goto LABEL_135;
        }
      }
      if ( v7 < 0 )
        goto LABEL_135;
      goto LABEL_115;
    }
    return (unsigned int)-1073741762;
  }
  return (unsigned int)v7;
}
