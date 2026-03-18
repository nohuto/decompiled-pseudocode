/*
 * XREFs of sub_14091F638 @ 0x14091F638
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x1400D5CD0 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14091F638(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  void *v7; // r12
  signed int v8; // ebx
  unsigned int *v9; // rcx
  unsigned int *v10; // rax
  unsigned int i; // edx
  __int64 v12; // r9
  unsigned int *v13; // r8
  unsigned int v14; // r8d
  unsigned int *v15; // rdx
  unsigned int *v16; // rax
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
  size_t v27; // rdx
  const wchar_t *v28; // r11
  unsigned int *v29; // rax
  __int64 v30; // rsi
  size_t v31; // r11
  unsigned int v32; // eax
  size_t v33; // rsi
  PVOID PoolWithTag; // rax
  PVOID v35; // rbx
  unsigned int m; // ecx
  __int64 v37; // r8
  unsigned int *v38; // rdx
  size_t v39; // rcx
  const wchar_t *v40; // r11
  unsigned int *v41; // rcx
  __int64 v42; // rsi
  size_t v43; // r11
  unsigned int v44; // eax
  size_t v45; // rsi
  PVOID v46; // rax
  PVOID v47; // rbx
  unsigned int v48; // r10d
  unsigned int v49; // edx
  unsigned int *v50; // rax
  __int64 v51; // r9
  unsigned int *v52; // r8
  unsigned int v53; // esi
  unsigned int *v54; // rbx
  unsigned int *v55; // rax
  unsigned int n; // edx
  __int64 v57; // r9
  unsigned int *v58; // r8
  unsigned int v59; // r11d
  unsigned int *v60; // r9
  unsigned int ii; // edx
  __int64 v62; // rax
  unsigned int *v63; // r8
  unsigned int v64; // edx
  unsigned int *v65; // rax
  unsigned int *v66; // rcx
  int v67; // edi
  int v68; // edx
  unsigned int v69; // ecx
  _DWORD *v70; // rax
  int v71; // edi
  unsigned int v72; // r8d
  __int64 v73; // r9
  unsigned int v74; // edx
  int v75; // eax
  unsigned int v76; // ecx
  unsigned __int64 v77; // rdx
  unsigned int v78; // ecx
  unsigned int v79; // eax
  PVOID P; // [rsp+50h] [rbp-20h]
  size_t pcbLength; // [rsp+58h] [rbp-18h] BYREF
  __int64 v83; // [rsp+60h] [rbp-10h]
  unsigned int v84; // [rsp+B8h] [rbp+48h]
  __int64 v85; // [rsp+B8h] [rbp+48h]

  v7 = 0LL;
  if ( !a2 || !a4 )
    return (unsigned int)-1073741811;
  v9 = *(unsigned int **)(a1 + 8);
  if ( v9 && *(_DWORD *)a1 > 3u )
  {
    v10 = v9;
    for ( i = 0; i < 3; ++i )
    {
      v12 = *v10;
      v13 = v10 + 1;
      if ( v10 + 1 < v10 )
        goto LABEL_17;
      v10 = (unsigned int *)((char *)v13 + v12);
      if ( (unsigned int *)((char *)v13 + v12) < v13 )
        goto LABEL_17;
    }
    v14 = *v10;
    v15 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
LABEL_17:
      v8 = -1073741675;
    }
    else
    {
      v16 = 0LL;
      if ( v14 )
        v16 = v15;
      v8 = 0;
      if ( v14 != 8 )
        return (unsigned int)-1073741789;
      v83 = *(_QWORD *)v16;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( v9 && *(_DWORD *)a1 > 4u )
  {
    v17 = v9;
    for ( j = 0; j < 4; ++j )
    {
      v19 = *v17;
      v20 = v17 + 1;
      if ( v17 + 1 < v17 )
        goto LABEL_31;
      v17 = (unsigned int *)((char *)v20 + v19);
      if ( (unsigned int *)((char *)v20 + v19) < v20 )
        goto LABEL_31;
    }
    v21 = *v17;
    v22 = v17 + 1;
    if ( v17 + 1 < v17 )
    {
LABEL_31:
      v8 = -1073741675;
    }
    else
    {
      v23 = 0LL;
      if ( v21 )
        v23 = v22;
      v8 = 0;
      if ( v21 != 4 )
        return (unsigned int)-1073741789;
      v84 = *v23;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  if ( v9 && *(_DWORD *)a1 > 5u )
  {
    for ( k = 0; k < 5; ++k )
    {
      v25 = *v9;
      v26 = v9 + 1;
      if ( v9 + 1 < v9 )
        goto LABEL_54;
      v9 = (unsigned int *)((char *)v26 + v25);
      if ( (unsigned int *)((char *)v26 + v25) < v26 )
        goto LABEL_54;
    }
    v27 = *v9;
    if ( v9 + 1 < v9 )
    {
LABEL_54:
      v8 = -1073741675;
    }
    else
    {
      v28 = 0LL;
      if ( (_DWORD)v27 )
        v28 = (const wchar_t *)(v9 + 1);
      v8 = 0;
      if ( !(_DWORD)v27 )
        return (unsigned int)-1073741762;
      if ( (v27 & 1) != 0 )
        return (unsigned int)-1073741762;
      v30 = *v9;
      if ( v28[(v27 >> 1) - 1] )
        return (unsigned int)-1073741762;
      if ( StringCbLengthW(v28, v27, &pcbLength) < 0 || pcbLength + 2 != v30 )
        return (unsigned int)-1073741762;
      a3 = pcbLength >> 1;
      pcbLength = v31;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    return (unsigned int)v8;
  v32 = 2 * a3 + 2;
  if ( 2 * a3 == -2 )
    return (unsigned int)-1073741762;
  v33 = v32;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v32, 0x20534C53u);
  v35 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  memmove(PoolWithTag, (const void *)pcbLength, v33);
  P = v35;
  v29 = *(unsigned int **)(a1 + 8);
  if ( v29 && *(_DWORD *)a1 > 6u )
  {
    for ( m = 0; m < 6; ++m )
    {
      v37 = *v29;
      v38 = v29 + 1;
      if ( v29 + 1 < v29 )
        goto LABEL_78;
      v29 = (unsigned int *)((char *)v38 + v37);
      if ( (unsigned int *)((char *)v38 + v37) < v38 )
        goto LABEL_78;
    }
    v39 = *v29;
    if ( v29 + 1 < v29 )
    {
LABEL_78:
      v8 = -1073741675;
    }
    else
    {
      v40 = 0LL;
      if ( (_DWORD)v39 )
        v40 = (const wchar_t *)(v29 + 1);
      v8 = 0;
      if ( !(_DWORD)v39 )
        goto LABEL_69;
      if ( (v39 & 1) != 0 )
        goto LABEL_69;
      v42 = *v29;
      if ( v40[(v39 >> 1) - 1] || StringCbLengthW(v40, v39, &pcbLength) < 0 || pcbLength + 2 != v42 )
        goto LABEL_69;
      a3 = pcbLength >> 1;
      pcbLength = v43;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
    goto LABEL_134;
  v44 = 2 * a3 + 2;
  if ( 2 * a3 == -2 )
  {
LABEL_69:
    v8 = -1073741762;
    goto LABEL_134;
  }
  v45 = v44;
  v46 = ExAllocatePoolWithTag(PagedPool, v44, 0x20534C53u);
  v47 = v46;
  if ( !v46 )
  {
    v8 = -1073741801;
    goto LABEL_134;
  }
  memmove(v46, (const void *)pcbLength, v45);
  v7 = v47;
  v41 = *(unsigned int **)(a1 + 8);
  if ( v41 )
  {
    v48 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 7u )
    {
      v49 = 0;
      v50 = *(unsigned int **)(a1 + 8);
      do
      {
        v51 = *v50;
        v52 = v50 + 1;
        if ( v50 + 1 < v50 )
          goto LABEL_133;
        v50 = (unsigned int *)((char *)v52 + v51);
        if ( (unsigned int *)((char *)v52 + v51) < v52 )
          goto LABEL_133;
        ++v49;
      }
      while ( v49 < 7 );
      v53 = *v50;
      if ( v50 + 1 < v50 )
        goto LABEL_133;
      v54 = 0LL;
      if ( v53 )
        v54 = v50 + 1;
      if ( v48 > 8 )
      {
        v55 = *(unsigned int **)(a1 + 8);
        for ( n = 0; n < 8; ++n )
        {
          v57 = *v55;
          v58 = v55 + 1;
          if ( v55 + 1 < v55 )
            goto LABEL_133;
          v55 = (unsigned int *)((char *)v58 + v57);
          if ( (unsigned int *)((char *)v58 + v57) < v58 )
            goto LABEL_133;
        }
        v59 = *v55;
        if ( v55 + 1 < v55 )
          goto LABEL_133;
        v60 = 0LL;
        if ( v59 )
          v60 = v55 + 1;
        if ( v48 > 9 )
        {
          for ( ii = 0; ii < 9; ++ii )
          {
            v62 = *v41;
            v63 = v41 + 1;
            if ( v41 + 1 < v41 )
              goto LABEL_133;
            v41 = (unsigned int *)((char *)v63 + v62);
            if ( (unsigned int *)((char *)v63 + v62) < v63 )
              goto LABEL_133;
          }
          v64 = *v41;
          v65 = v41 + 1;
          if ( v41 + 1 < v41 )
            goto LABEL_133;
          v66 = 0LL;
          if ( v64 )
            v66 = v65;
          if ( qword_1409AD478 )
            v67 = qword_1409AD478(v84, P, v7, v54, v53, v60, v59, v66, v64);
          else
            v67 = -1073741637;
          v8 = v67;
          if ( v67 < 0 )
            goto LABEL_134;
          v68 = *(_DWORD *)(a2 + 32);
          if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFD0 )
          {
            v69 = *(_DWORD *)(a2 + 16) + 52;
            if ( v69 >= *(_DWORD *)(a2 + 16) + 48 )
            {
              v8 = v69 + v68 < v69 ? 0xC0000095 : 0;
              if ( v69 + v68 < v69 )
                goto LABEL_134;
              *(_DWORD *)(a4 + 4) = 20;
              v70 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
              if ( !v70 )
              {
                v8 = -1073741801;
                goto LABEL_134;
              }
              *(_QWORD *)(a4 + 8) = v70;
              *(_DWORD *)a4 = 0;
              v71 = v67 | 0x10000000;
              if ( v70 + 1 >= v70 )
              {
                if ( v70 + 2 > (_DWORD *)((char *)v70 + *(unsigned int *)(a4 + 4)) )
                  goto LABEL_119;
                *v70 = 4;
                v70[1] = v71;
                v72 = ++*(_DWORD *)a4;
                v73 = *(_QWORD *)(a4 + 8);
                v85 = v83;
                if ( !v73 )
                {
                  v74 = *(_DWORD *)(a4 + 4);
                  v75 = -1;
                  v76 = v74 + 12;
                  if ( v74 + 12 >= v74 )
                    v75 = v74 + 12;
                  v8 = v76 < v74 ? 0xC0000095 : 0;
                  *(_DWORD *)(a4 + 4) = v75;
                  if ( v76 >= v74 )
                  {
                    v8 = 0;
                    *(_DWORD *)a4 = v72 + 1;
                  }
                  goto LABEL_134;
                }
                v77 = *(_QWORD *)(a4 + 8);
                v78 = 0;
                if ( v72 )
                {
                  while ( 1 )
                  {
                    v79 = *(_DWORD *)v77 + 4;
                    if ( *(_DWORD *)v77 >= 0xFFFFFFFC || v77 + v79 < v77 )
                      break;
                    ++v78;
                    v77 += v79;
                    if ( v78 >= v72 )
                      goto LABEL_129;
                  }
                }
                else
                {
LABEL_129:
                  if ( v77 + 4 >= v77 )
                  {
                    v8 = 0;
                    if ( v77 + 12 <= v73 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    {
                      *(_DWORD *)v77 = 8;
                      *(_QWORD *)(v77 + 4) = v85;
                      ++*(_DWORD *)a4;
                      goto LABEL_134;
                    }
LABEL_119:
                    v8 = -1073741789;
                    goto LABEL_134;
                  }
                }
              }
              v8 = -1073741675;
              goto LABEL_134;
            }
          }
LABEL_133:
          v8 = -1073741675;
          goto LABEL_134;
        }
      }
    }
  }
  v8 = -1073741811;
LABEL_134:
  if ( P )
    ExFreePoolWithTag(P, 0x20534C53u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x20534C53u);
  return (unsigned int)v8;
}
