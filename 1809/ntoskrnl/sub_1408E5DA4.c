/*
 * XREFs of sub_1408E5DA4 @ 0x1408E5DA4
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     StringCbLengthW @ 0x1400FD170 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1408E5DA4(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  signed int v6; // ebx
  unsigned __int64 v7; // rdx
  __int64 v8; // r12
  unsigned __int64 v9; // r8
  unsigned int i; // r9d
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  unsigned int v13; // ecx
  __int64 v14; // r9
  __int64 *v15; // rax
  size_t v16; // rsi
  unsigned int v17; // eax
  size_t v18; // r15
  PVOID PoolWithTag; // rax
  size_t v20; // rbx
  unsigned int j; // r8d
  unsigned __int64 v22; // r9
  unsigned __int64 v23; // rcx
  unsigned int v24; // ecx
  __int64 v25; // r8
  const wchar_t *v26; // r11
  unsigned __int64 v27; // rdx
  size_t v28; // rdi
  unsigned int v29; // eax
  size_t v30; // r15
  PVOID v31; // rax
  size_t v32; // rbx
  __int64 v33; // r15
  size_t v34; // r11
  unsigned int k; // r8d
  unsigned __int64 v36; // r9
  unsigned __int64 v37; // rcx
  unsigned int v38; // ecx
  __int64 v39; // r8
  const wchar_t *v40; // r11
  __int64 v41; // rcx
  size_t v42; // rsi
  int v43; // edi
  __int64 v44; // r15
  size_t v45; // r11
  char *v46; // rax
  char *v47; // rdx
  int v48; // edi
  char *v49; // rax
  __int64 v50; // r8
  unsigned int v51; // r10d
  __int64 v52; // r11
  unsigned int v53; // ecx
  int v54; // r9d
  unsigned int v55; // eax
  char *v56; // r8
  int v57; // edi
  unsigned int v58; // eax
  unsigned int v59; // esi
  char *v60; // rcx
  char *v61; // rdx
  __int64 v62; // rax
  __int64 v63; // xmm0_8
  size_t v65; // [rsp+30h] [rbp-10h] BYREF
  __int64 v66; // [rsp+38h] [rbp-8h]
  size_t pcbLength; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v68; // [rsp+90h] [rbp+50h]

  v68 = a3;
  if ( !a1 || !a2 || !a4 )
  {
    v6 = -1073741811;
    goto LABEL_128;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = -1LL;
  if ( !v7 || *(_DWORD *)a1 <= 3u )
  {
    v6 = -1073741811;
    goto LABEL_26;
  }
  v9 = *(_QWORD *)(a1 + 8);
  for ( i = 0; i < 3; ++i )
  {
    v11 = -1LL;
    if ( v9 + 4 >= v9 )
      v11 = v9 + 4;
    v6 = v9 + 4 < v9 ? 0xC0000095 : 0;
    if ( v9 + 4 < v9 )
      goto LABEL_22;
    v12 = v11 + *(unsigned int *)v9;
    v9 = -1LL;
    if ( v12 >= v11 )
      v9 = v12;
    v6 = v12 < v11 ? 0xC0000095 : 0;
    if ( v12 < v11 )
      goto LABEL_22;
  }
  v13 = *(_DWORD *)v9;
  v14 = -1LL;
  if ( v9 + 4 >= v9 )
    v14 = v9 + 4;
  v6 = v9 + 4 < v9 ? 0xC0000095 : 0;
  if ( v9 + 4 < v9 )
  {
LABEL_22:
    v13 = v68;
    v15 = (__int64 *)pcbLength;
    goto LABEL_23;
  }
  v15 = 0LL;
  if ( v13 )
    v15 = (__int64 *)v14;
LABEL_23:
  if ( v6 >= 0 )
  {
    if ( v13 != 8 )
      goto LABEL_126;
    v66 = *v15;
LABEL_26:
    if ( v6 < 0 )
      goto LABEL_128;
    if ( v7 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v22 = -1LL;
        if ( v7 + 4 >= v7 )
          v22 = v7 + 4;
        v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
        if ( v7 + 4 < v7 )
          goto LABEL_49;
        v23 = v22 + *(unsigned int *)v7;
        v7 = -1LL;
        if ( v23 >= v22 )
          v7 = v23;
        v6 = v23 < v22 ? 0xC0000095 : 0;
        if ( v23 < v22 )
          goto LABEL_49;
      }
      v24 = *(_DWORD *)v7;
      v25 = -1LL;
      if ( v7 + 4 >= v7 )
        v25 = v7 + 4;
      v6 = v7 + 4 < v7 ? 0xC0000095 : 0;
      if ( v7 + 4 < v7 )
      {
LABEL_49:
        v24 = v68;
        v26 = (const wchar_t *)pcbLength;
        goto LABEL_50;
      }
      v26 = 0LL;
      if ( v24 )
        v26 = (const wchar_t *)v25;
LABEL_50:
      if ( v6 >= 0 )
      {
        if ( !v24 || (v24 & 1) != 0 )
          goto LABEL_52;
        v33 = v24;
        if ( v26[((unsigned __int64)v24 >> 1) - 1] )
        {
          v6 = -1073741762;
          goto LABEL_128;
        }
        if ( StringCbLengthW(v26, v24, &pcbLength) < 0 || pcbLength + 2 != v33 )
        {
          v6 = -1073741762;
          goto LABEL_128;
        }
        v16 = pcbLength >> 1;
        pcbLength = v34;
LABEL_30:
        if ( v6 < 0 )
          goto LABEL_128;
        v17 = 2 * v16 + 2;
        if ( 2 * (_DWORD)v16 != -2 )
        {
          v18 = v17;
          PoolWithTag = ExAllocatePoolWithTag(PagedPool, v17, 0x20534C53u);
          v20 = (size_t)PoolWithTag;
          if ( !PoolWithTag )
          {
            v6 = -1073741801;
            goto LABEL_128;
          }
          memmove(PoolWithTag, (const void *)pcbLength, v18);
          pcbLength = v20;
          v27 = *(_QWORD *)(a1 + 8);
          if ( v27 )
          {
            if ( *(_DWORD *)a1 > 5u )
            {
              for ( k = 0; k < 5; ++k )
              {
                v36 = -1LL;
                if ( v27 + 4 >= v27 )
                  v36 = v27 + 4;
                v6 = v27 + 4 < v27 ? 0xC0000095 : 0;
                if ( v27 + 4 < v27 )
                  goto LABEL_84;
                v37 = v36 + *(unsigned int *)v27;
                v27 = -1LL;
                if ( v37 >= v36 )
                  v27 = v37;
                v6 = v37 < v36 ? 0xC0000095 : 0;
                if ( v37 < v36 )
                  goto LABEL_84;
              }
              v38 = *(_DWORD *)v27;
              v39 = -1LL;
              if ( v27 + 4 >= v27 )
                v39 = v27 + 4;
              v6 = v27 + 4 < v27 ? 0xC0000095 : 0;
              if ( v27 + 4 < v27 )
              {
LABEL_84:
                v38 = v68;
                v40 = (const wchar_t *)pcbLength;
                goto LABEL_85;
              }
              v40 = 0LL;
              if ( v38 )
                v40 = (const wchar_t *)v39;
LABEL_85:
              if ( v6 >= 0 )
              {
                if ( !v38 || (v38 & 1) != 0 )
                  goto LABEL_87;
                v44 = v38;
                if ( v40[((unsigned __int64)v38 >> 1) - 1] || StringCbLengthW(v40, v38, &v65) < 0 || v65 + 2 != v44 )
                {
                  v6 = -1073741762;
                  goto LABEL_128;
                }
                v28 = v65 >> 1;
                v65 = v45;
LABEL_56:
                if ( v6 < 0 )
                  goto LABEL_128;
                v29 = 2 * v28 + 2;
                if ( 2 * (_DWORD)v28 != -2 )
                {
                  v30 = v29;
                  v31 = ExAllocatePoolWithTag(PagedPool, v29, 0x20534C53u);
                  v32 = (size_t)v31;
                  if ( !v31 )
                  {
                    v6 = -1073741801;
                    goto LABEL_128;
                  }
                  memmove(v31, (const void *)v65, v30);
                  v65 = v32;
                  v41 = (unsigned int)(2 * v16 + 2);
                  v42 = pcbLength;
                  v43 = ((__int64 (__fastcall *)(__int64, size_t, _QWORD, size_t))qword_14096E448)(
                          v41,
                          pcbLength,
                          (unsigned int)(2 * v28 + 2),
                          v65);
                  if ( v43 >= 0 )
                  {
                    v43 = qword_14096E3F0 ? qword_14096E3F0(v42) : -1073741637;
                    if ( v43 == -1073741198 )
                      v43 = 0;
                  }
                  *(_DWORD *)(a4 + 4) = 20;
                  v46 = (char *)ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
                  v47 = v46;
                  if ( !v46 )
                  {
                    v6 = -1073741801;
                    goto LABEL_128;
                  }
                  *(_QWORD *)(a4 + 8) = v46;
                  *(_DWORD *)a4 = 0;
                  v48 = v43 | 0x10000000;
                  v49 = v46 + 4;
                  v50 = -1LL;
                  v51 = 0;
                  if ( v49 >= v47 )
                    v50 = (__int64)v49;
                  v6 = v49 < v47 ? 0xC0000095 : 0;
                  if ( v49 >= v47 )
                  {
                    if ( v47 + 8 > &v47[*(unsigned int *)(a4 + 4)] )
                      goto LABEL_126;
                    *(_DWORD *)v47 = 4;
                    *(_DWORD *)v50 = v48;
                    v51 = ++*(_DWORD *)a4;
                  }
                  if ( v49 < v47 )
                    goto LABEL_128;
                  v52 = *(_QWORD *)(a4 + 8);
                  if ( !v52 )
                  {
                    v53 = *(_DWORD *)(a4 + 4);
                    v54 = -1;
                    v55 = v53 + 12;
                    if ( v53 + 12 >= v53 )
                      v54 = v53 + 12;
                    v6 = v55 < v53 ? 0xC0000095 : 0;
                    *(_DWORD *)(a4 + 4) = v54;
                    if ( v55 >= v53 )
                    {
                      v6 = 0;
                      *(_DWORD *)a4 = v51 + 1;
                    }
                    goto LABEL_128;
                  }
                  v56 = *(char **)(a4 + 8);
                  v57 = 0;
                  if ( v51 )
                  {
                    do
                    {
                      v58 = -1;
                      if ( *(_DWORD *)v56 < 0xFFFFFFFC )
                        v58 = *(_DWORD *)v56 + 4;
                      v6 = *(_DWORD *)v56 >= 0xFFFFFFFC ? 0xC0000095 : 0;
                      if ( (unsigned int)(*(_DWORD *)v56 + 4) < 4 )
                        goto LABEL_128;
                      v59 = v58;
                      v60 = v56;
                      v61 = &v56[v58];
                      v62 = -1LL;
                      if ( v61 >= v56 )
                        v62 = (__int64)&v56[v59];
                      v56 = (char *)v62;
                      v6 = v61 < v60 ? 0xC0000095 : 0;
                      if ( v61 < v60 )
                        goto LABEL_128;
                    }
                    while ( ++v57 < v51 );
                  }
                  if ( v56 + 4 >= v56 )
                    v8 = (__int64)(v56 + 4);
                  v6 = v56 + 4 < v56 ? 0xC0000095 : 0;
                  if ( v56 + 4 < v56 )
                    goto LABEL_128;
                  if ( (unsigned __int64)(v56 + 12) <= v52 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  {
                    v63 = v66;
                    *(_DWORD *)v56 = 8;
                    *(_QWORD *)v8 = v63;
                    ++*(_DWORD *)a4;
                    goto LABEL_128;
                  }
LABEL_126:
                  v6 = -1073741789;
                  goto LABEL_128;
                }
LABEL_87:
                v6 = -1073741762;
                goto LABEL_128;
              }
            }
            else
            {
              v6 = -1073741811;
            }
          }
          else
          {
            v6 = -1073741811;
          }
          LODWORD(v28) = v68;
          goto LABEL_56;
        }
LABEL_52:
        v6 = -1073741762;
        goto LABEL_128;
      }
    }
    else
    {
      v6 = -1073741811;
    }
    LODWORD(v16) = v68;
    goto LABEL_30;
  }
LABEL_128:
  if ( pcbLength )
    ExFreePoolWithTag((PVOID)pcbLength, 0x20534C53u);
  if ( v65 )
    ExFreePoolWithTag((PVOID)v65, 0x20534C53u);
  return (unsigned int)v6;
}
