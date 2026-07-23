/*
 * XREFs of sub_1408E490C @ 0x1408E490C
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     StringCbLengthW @ 0x1400FD170 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408E490C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // r13
  signed int v7; // ebx
  unsigned __int64 v8; // r8
  __int64 v9; // r15
  unsigned __int64 v10; // rdx
  unsigned int i; // r9d
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned int v14; // ecx
  __int64 v15; // r9
  __int64 *v16; // rax
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
  unsigned __int64 v30; // rdx
  __int64 v31; // rsi
  size_t v32; // r11
  unsigned int v33; // eax
  size_t v34; // rsi
  PVOID PoolWithTag; // rax
  PVOID v36; // rbx
  unsigned int m; // r8d
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rcx
  unsigned int v40; // ecx
  __int64 v41; // r8
  const wchar_t *v42; // r11
  unsigned __int64 v43; // rdx
  __int64 v44; // rsi
  size_t v45; // r11
  unsigned int v46; // eax
  size_t v47; // rsi
  PVOID v48; // rax
  PVOID v49; // rbx
  unsigned int v50; // r11d
  unsigned __int64 v51; // r8
  unsigned int n; // r9d
  unsigned __int64 v53; // r10
  unsigned __int64 v54; // rcx
  unsigned int v55; // esi
  __int64 v56; // rcx
  __int64 v57; // r14
  unsigned __int64 v58; // r8
  unsigned int ii; // r9d
  unsigned __int64 v60; // r10
  unsigned __int64 v61; // rcx
  unsigned int v62; // r10d
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned int jj; // r8d
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // rcx
  unsigned int v68; // ecx
  __int64 v69; // r8
  int v70; // edi
  int v71; // esi
  unsigned int v72; // ecx
  unsigned int v73; // eax
  unsigned int v74; // edx
  char *v75; // rax
  char *v76; // rdx
  int v77; // edi
  char *v78; // rax
  __int64 v79; // r8
  unsigned int v80; // r9d
  __int64 v81; // r10
  unsigned int v82; // ecx
  unsigned int v83; // eax
  int v84; // r11d
  char *v85; // r8
  unsigned int v86; // eax
  unsigned int v87; // edi
  char *v88; // rcx
  char *v89; // rdx
  __int64 v90; // rax
  unsigned int v92; // [rsp+58h] [rbp-19h]
  PVOID P; // [rsp+60h] [rbp-11h]
  PVOID v94; // [rsp+68h] [rbp-9h]
  __int64 v95; // [rsp+70h] [rbp-1h]
  size_t pcbLength; // [rsp+78h] [rbp+7h] BYREF
  __int64 v97; // [rsp+80h] [rbp+Fh]
  __int64 v98; // [rsp+88h] [rbp+17h]
  __int64 v100; // [rsp+E0h] [rbp+6Fh]

  v94 = 0LL;
  v6 = 0LL;
  v97 = 0LL;
  v95 = 0LL;
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
      v14 = a3;
      v16 = (__int64 *)a2;
      goto LABEL_22;
    }
    v16 = 0LL;
    if ( v14 )
      v16 = (__int64 *)v15;
LABEL_22:
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v14 != 8 )
      return (unsigned int)-1073741789;
    v98 = *v16;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( v8 && *(_DWORD *)a1 > 4u )
  {
    v17 = v8;
    for ( j = 0; j < 4; ++j )
    {
      v19 = -1LL;
      if ( v17 + 4 >= v17 )
        v19 = v17 + 4;
      v7 = v17 + 4 < v17 ? 0xC0000095 : 0;
      if ( v17 + 4 < v17 )
        goto LABEL_44;
      v20 = v19 + *(unsigned int *)v17;
      v17 = -1LL;
      if ( v20 >= v19 )
        v17 = v20;
      v7 = v20 < v19 ? 0xC0000095 : 0;
      if ( v20 < v19 )
        goto LABEL_44;
    }
    v21 = *(_DWORD *)v17;
    v22 = -1LL;
    if ( v17 + 4 >= v17 )
      v22 = v17 + 4;
    v7 = v17 + 4 < v17 ? 0xC0000095 : 0;
    if ( v17 + 4 < v17 )
    {
LABEL_44:
      v21 = a3;
      v23 = (unsigned int *)a2;
      goto LABEL_45;
    }
    v23 = 0LL;
    if ( v21 )
      v23 = (unsigned int *)v22;
LABEL_45:
    if ( v7 < 0 )
      return (unsigned int)v7;
    if ( v21 != 4 )
      return (unsigned int)-1073741789;
    v92 = *v23;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( !v8 || *(_DWORD *)a1 <= 5u )
  {
    v7 = -1073741811;
    goto LABEL_78;
  }
  for ( k = 0; k < 5; ++k )
  {
    v25 = -1LL;
    if ( v8 + 4 >= v8 )
      v25 = v8 + 4;
    v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
    if ( v8 + 4 < v8 )
      goto LABEL_66;
    v26 = v25 + *(unsigned int *)v8;
    v8 = -1LL;
    if ( v26 >= v25 )
      v8 = v26;
    v7 = v26 < v25 ? 0xC0000095 : 0;
    if ( v26 < v25 )
      goto LABEL_66;
  }
  v27 = *(_DWORD *)v8;
  v28 = -1LL;
  if ( v8 + 4 >= v8 )
    v28 = v8 + 4;
  v7 = v8 + 4 < v8 ? 0xC0000095 : 0;
  if ( v8 + 4 < v8 )
  {
LABEL_66:
    v27 = a3;
    v29 = (const wchar_t *)a2;
    goto LABEL_67;
  }
  v29 = 0LL;
  if ( v27 )
    v29 = (const wchar_t *)v28;
LABEL_67:
  if ( v7 >= 0 )
  {
    if ( !v27 )
      return (unsigned int)-1073741762;
    if ( (v27 & 1) != 0 )
      return (unsigned int)-1073741762;
    v31 = v27;
    if ( v29[((unsigned __int64)v27 >> 1) - 1] || StringCbLengthW(v29, v27, &pcbLength) < 0 || pcbLength + 2 != v31 )
      return (unsigned int)-1073741762;
    a3 = pcbLength >> 1;
    pcbLength = v32;
LABEL_78:
    if ( v7 < 0 )
      return (unsigned int)v7;
    v33 = 2 * a3 + 2;
    if ( 2 * a3 != -2 )
    {
      v34 = v33;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v33, 0x20534C53u);
      v36 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, (const void *)pcbLength, v34);
      P = v36;
      v30 = *(_QWORD *)(a1 + 8);
      if ( v30 && *(_DWORD *)a1 > 6u )
      {
        for ( m = 0; m < 6; ++m )
        {
          v38 = -1LL;
          if ( v30 + 4 >= v30 )
            v38 = v30 + 4;
          v7 = v30 + 4 < v30 ? 0xC0000095 : 0;
          if ( v30 + 4 < v30 )
            goto LABEL_98;
          v39 = v38 + *(unsigned int *)v30;
          v30 = -1LL;
          if ( v39 >= v38 )
            v30 = v39;
          v7 = v39 < v38 ? 0xC0000095 : 0;
          if ( v39 < v38 )
            goto LABEL_98;
        }
        v40 = *(_DWORD *)v30;
        v41 = -1LL;
        if ( v30 + 4 >= v30 )
          v41 = v30 + 4;
        v7 = v30 + 4 < v30 ? 0xC0000095 : 0;
        if ( v30 + 4 < v30 )
        {
LABEL_98:
          v40 = a3;
          v42 = (const wchar_t *)a2;
          goto LABEL_99;
        }
        v42 = 0LL;
        if ( v40 )
          v42 = (const wchar_t *)v41;
LABEL_99:
        if ( v7 < 0 )
          goto LABEL_205;
        if ( !v40 )
          goto LABEL_101;
        if ( (v40 & 1) != 0 )
          goto LABEL_101;
        v44 = v40;
        if ( v42[((unsigned __int64)v40 >> 1) - 1] || StringCbLengthW(v42, v40, &pcbLength) < 0 || pcbLength + 2 != v44 )
          goto LABEL_101;
        a3 = pcbLength >> 1;
        pcbLength = v45;
      }
      else
      {
        v7 = -1073741811;
      }
      if ( v7 < 0 )
        goto LABEL_205;
      v46 = 2 * a3 + 2;
      if ( 2 * a3 != -2 )
      {
        v47 = v46;
        v48 = ExAllocatePoolWithTag(PagedPool, v46, 0x20534C53u);
        v49 = v48;
        if ( !v48 )
        {
          v7 = -1073741801;
          goto LABEL_205;
        }
        memmove(v48, (const void *)pcbLength, v47);
        v94 = v49;
        v43 = *(_QWORD *)(a1 + 8);
        if ( !v43 )
          goto LABEL_104;
        v50 = *(_DWORD *)a1;
        if ( *(_DWORD *)a1 <= 7u )
          goto LABEL_104;
        v51 = *(_QWORD *)(a1 + 8);
        for ( n = 0; n < 7; ++n )
        {
          v53 = -1LL;
          if ( v51 + 4 >= v51 )
            v53 = v51 + 4;
          v7 = v51 + 4 < v51 ? 0xC0000095 : 0;
          if ( v51 + 4 < v51 )
            goto LABEL_130;
          v54 = v53 + *(unsigned int *)v51;
          v51 = -1LL;
          if ( v54 >= v53 )
            v51 = v54;
          v7 = v54 < v53 ? 0xC0000095 : 0;
          if ( v54 < v53 )
            goto LABEL_130;
        }
        v55 = *(_DWORD *)v51;
        v56 = -1LL;
        if ( v51 + 4 >= v51 )
          v56 = v51 + 4;
        v7 = v51 + 4 < v51 ? 0xC0000095 : 0;
        if ( v51 + 4 < v51 )
        {
LABEL_130:
          v55 = a3;
          v57 = v97;
          goto LABEL_131;
        }
        v57 = 0LL;
        if ( v55 )
          v57 = v56;
LABEL_131:
        if ( v7 < 0 )
          goto LABEL_205;
        if ( v50 <= 8 )
          goto LABEL_104;
        v58 = v43;
        for ( ii = 0; ii < 8; ++ii )
        {
          v60 = -1LL;
          if ( v58 + 4 >= v58 )
            v60 = v58 + 4;
          v7 = v58 + 4 < v58 ? 0xC0000095 : 0;
          if ( v58 + 4 < v58 )
            goto LABEL_147;
          v61 = v60 + *(unsigned int *)v58;
          v58 = -1LL;
          if ( v61 >= v60 )
            v58 = v61;
          v7 = v61 < v60 ? 0xC0000095 : 0;
          if ( v61 < v60 )
            goto LABEL_147;
        }
        v62 = *(_DWORD *)v58;
        v63 = -1LL;
        if ( v58 + 4 >= v58 )
          v63 = v58 + 4;
        v7 = v58 + 4 < v58 ? 0xC0000095 : 0;
        if ( v58 + 4 < v58 )
        {
LABEL_147:
          v62 = a3;
          goto LABEL_148;
        }
        v64 = 0LL;
        if ( v62 )
          v64 = v63;
        v95 = v64;
LABEL_148:
        if ( v7 < 0 )
          goto LABEL_205;
        if ( v50 > 9 )
        {
          for ( jj = 0; jj < 9; ++jj )
          {
            v66 = -1LL;
            if ( v43 + 4 >= v43 )
              v66 = v43 + 4;
            v7 = v43 + 4 < v43 ? 0xC0000095 : 0;
            if ( v43 + 4 < v43 )
              goto LABEL_164;
            v67 = v66 + *(unsigned int *)v43;
            v43 = -1LL;
            if ( v67 >= v66 )
              v43 = v67;
            v7 = v67 < v66 ? 0xC0000095 : 0;
            if ( v67 < v66 )
              goto LABEL_164;
          }
          v68 = *(_DWORD *)v43;
          v69 = -1LL;
          if ( v43 + 4 >= v43 )
            v69 = v43 + 4;
          v7 = v43 + 4 < v43 ? 0xC0000095 : 0;
          if ( v43 + 4 < v43 )
          {
LABEL_164:
            v68 = a3;
            goto LABEL_165;
          }
          if ( v68 )
            v6 = v69;
LABEL_165:
          if ( v7 < 0 )
            goto LABEL_205;
          v70 = qword_14096E3E8 ? qword_14096E3E8(v92, P, v94, v57, v55, v95, v62, v6, v68) : -1073741637;
          v7 = v70;
          if ( v70 < 0 )
            goto LABEL_205;
          v71 = -1;
          v72 = -1;
          if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
            v72 = *(_DWORD *)(a2 + 16) + 48;
          v7 = *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 ? 0xC0000095 : 0;
          if ( (unsigned int)(*(_DWORD *)(a2 + 16) + 48) >= 0x30 )
          {
            v73 = v72 + 4;
            v74 = -1;
            if ( v72 + 4 >= v72 )
              v74 = v72 + 4;
            v7 = v73 < v72 ? 0xC0000095 : 0;
            if ( v73 >= v72 )
              v7 = v74 + *(_DWORD *)(a2 + 32) < v74 ? 0xC0000095 : 0;
          }
          if ( v7 < 0 )
            goto LABEL_205;
          *(_DWORD *)(a4 + 4) = 20;
          v75 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
          v76 = v75;
          if ( !v75 )
          {
            v7 = -1073741801;
            goto LABEL_205;
          }
          *(_QWORD *)(a4 + 8) = v75;
          *(_DWORD *)a4 = 0;
          v77 = v70 | 0x10000000;
          v78 = v75 + 4;
          v79 = -1LL;
          v80 = 0;
          if ( v78 >= v76 )
            v79 = (__int64)v78;
          v7 = v78 < v76 ? 0xC0000095 : 0;
          if ( v78 >= v76 )
          {
            if ( v76 + 8 > &v76[*(unsigned int *)(a4 + 4)] )
            {
LABEL_184:
              v7 = -1073741789;
              goto LABEL_205;
            }
            *(_DWORD *)v76 = 4;
            *(_DWORD *)v79 = v77;
            v80 = ++*(_DWORD *)a4;
          }
          if ( v78 >= v76 )
          {
            v81 = *(_QWORD *)(a4 + 8);
            v100 = v98;
            if ( !v81 )
            {
              v82 = *(_DWORD *)(a4 + 4);
              v83 = v82 + 12;
              if ( v82 + 12 >= v82 )
                v71 = v82 + 12;
              v7 = v83 < v82 ? 0xC0000095 : 0;
              *(_DWORD *)(a4 + 4) = v71;
              if ( v83 >= v82 )
              {
                v7 = 0;
                *(_DWORD *)a4 = v80 + 1;
              }
              goto LABEL_205;
            }
            v84 = 0;
            v85 = *(char **)(a4 + 8);
            if ( v80 )
            {
              do
              {
                v86 = -1;
                if ( *(_DWORD *)v85 < 0xFFFFFFFC )
                  v86 = *(_DWORD *)v85 + 4;
                v7 = *(_DWORD *)v85 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                if ( (unsigned int)(*(_DWORD *)v85 + 4) < 4 )
                  goto LABEL_205;
                v87 = v86;
                v88 = v85;
                v89 = &v85[v86];
                v90 = -1LL;
                if ( v89 >= v85 )
                  v90 = (__int64)&v85[v87];
                v85 = (char *)v90;
                v7 = v89 < v88 ? 0xC0000095 : 0;
                if ( v89 < v88 )
                  goto LABEL_205;
              }
              while ( ++v84 < v80 );
            }
            if ( v85 + 4 >= v85 )
              v9 = (__int64)(v85 + 4);
            v7 = v85 + 4 < v85 ? 0xC0000095 : 0;
            if ( v85 + 4 >= v85 )
            {
              if ( (unsigned __int64)(v85 + 12) <= v81 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v85 = 8;
                *(_QWORD *)v9 = v100;
                ++*(_DWORD *)a4;
                goto LABEL_205;
              }
              goto LABEL_184;
            }
          }
        }
        else
        {
LABEL_104:
          v7 = -1073741811;
        }
LABEL_205:
        if ( P )
          ExFreePoolWithTag(P, 0x20534C53u);
        if ( v94 )
          ExFreePoolWithTag(v94, 0x20534C53u);
        return (unsigned int)v7;
      }
LABEL_101:
      v7 = -1073741762;
      goto LABEL_205;
    }
    return (unsigned int)-1073741762;
  }
  return (unsigned int)v7;
}
