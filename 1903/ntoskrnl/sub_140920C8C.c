/*
 * XREFs of sub_140920C8C @ 0x140920C8C
 * Callers:
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x1401078A0 (StringCbLengthW.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140920C8C(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  signed int v6; // ebx
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r9
  unsigned int *v11; // r8
  unsigned int v12; // r8d
  unsigned int *v13; // rdx
  unsigned int *v14; // rax
  unsigned int j; // edx
  __int64 v16; // rax
  unsigned int *v17; // r8
  size_t v18; // rdx
  const wchar_t *v19; // r11
  unsigned int *v20; // rax
  int v21; // esi
  __int64 v22; // rsi
  size_t v23; // r11
  unsigned int v24; // eax
  size_t v25; // rsi
  PVOID PoolWithTag; // rax
  size_t v27; // rbx
  unsigned int k; // ecx
  __int64 v29; // r8
  unsigned int *v30; // rdx
  size_t v31; // rcx
  const wchar_t *v32; // r11
  size_t v33; // rdi
  int v34; // ebx
  __int64 v35; // rdi
  size_t v36; // r11
  unsigned int v37; // eax
  size_t v38; // rdi
  PVOID v39; // rax
  size_t v40; // rbx
  _DWORD *v41; // rax
  int v42; // ebx
  unsigned int v43; // r8d
  __int64 v44; // r9
  unsigned int v45; // edx
  int v46; // eax
  unsigned int v47; // ecx
  unsigned __int64 v48; // rdx
  unsigned int m; // ecx
  unsigned int v50; // eax
  __int64 v51; // xmm0_8
  size_t v53; // [rsp+30h] [rbp-10h] BYREF
  __int64 v54; // [rsp+38h] [rbp-8h]
  size_t pcbLength; // [rsp+80h] [rbp+40h] BYREF
  int v56; // [rsp+90h] [rbp+50h]

  v56 = a3;
  if ( !a1 || !a2 || !a4 )
  {
    v6 = -1073741811;
    goto LABEL_91;
  }
  v7 = *(unsigned int **)(a1 + 8);
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    v8 = v7;
    for ( i = 0; i < 3; ++i )
    {
      v10 = *v8;
      v11 = v8 + 1;
      if ( v8 + 1 < v8 )
        goto LABEL_18;
      v8 = (unsigned int *)((char *)v11 + v10);
      if ( (unsigned int *)((char *)v11 + v10) < v11 )
        goto LABEL_18;
    }
    v12 = *v8;
    v13 = v8 + 1;
    if ( v8 + 1 < v8 )
    {
LABEL_18:
      v6 = -1073741675;
      goto LABEL_19;
    }
    v14 = 0LL;
    if ( v12 )
      v14 = v13;
    v6 = 0;
    if ( v12 == 8 )
    {
      v54 = *(_QWORD *)v14;
      goto LABEL_19;
    }
    goto LABEL_16;
  }
  v6 = -1073741811;
LABEL_19:
  if ( v6 >= 0 )
  {
    if ( v7 && *(_DWORD *)a1 > 4u )
    {
      for ( j = 0; j < 4; ++j )
      {
        v16 = *v7;
        v17 = v7 + 1;
        if ( v7 + 1 < v7 )
          goto LABEL_40;
        v7 = (unsigned int *)((char *)v17 + v16);
        if ( (unsigned int *)((char *)v17 + v16) < v17 )
          goto LABEL_40;
      }
      v18 = *v7;
      if ( v7 + 1 < v7 )
      {
LABEL_40:
        v6 = -1073741675;
        goto LABEL_41;
      }
      v19 = 0LL;
      if ( (_DWORD)v18 )
        v19 = (const wchar_t *)(v7 + 1);
      v6 = 0;
      if ( (_DWORD)v18 )
      {
        if ( (v18 & 1) == 0 )
        {
          v22 = *v7;
          if ( !v19[(v18 >> 1) - 1] && StringCbLengthW(v19, v18, &pcbLength) >= 0 && pcbLength + 2 == v22 )
          {
            v56 = pcbLength >> 1;
            pcbLength = v23;
            goto LABEL_41;
          }
        }
      }
      goto LABEL_31;
    }
    v6 = -1073741811;
LABEL_41:
    if ( v6 >= 0 )
    {
      v24 = 2 * v56 + 2;
      if ( 2 * v56 == -2 )
      {
LABEL_31:
        v6 = -1073741762;
        goto LABEL_91;
      }
      v25 = v24;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v24, 0x20534C53u);
      v27 = (size_t)PoolWithTag;
      if ( !PoolWithTag )
      {
        v6 = -1073741801;
        goto LABEL_91;
      }
      memmove(PoolWithTag, (const void *)pcbLength, v25);
      pcbLength = v27;
      v20 = *(unsigned int **)(a1 + 8);
      v21 = v56;
      if ( v20 && *(_DWORD *)a1 > 5u )
      {
        for ( k = 0; k < 5; ++k )
        {
          v29 = *v20;
          v30 = v20 + 1;
          if ( v20 + 1 < v20 )
            goto LABEL_65;
          v20 = (unsigned int *)((char *)v30 + v29);
          if ( (unsigned int *)((char *)v30 + v29) < v30 )
            goto LABEL_65;
        }
        v31 = *v20;
        if ( v20 + 1 < v20 )
        {
LABEL_65:
          v6 = -1073741675;
          goto LABEL_66;
        }
        v32 = 0LL;
        if ( (_DWORD)v31 )
          v32 = (const wchar_t *)(v20 + 1);
        v6 = 0;
        if ( (_DWORD)v31 )
        {
          if ( (v31 & 1) == 0 )
          {
            v35 = *v20;
            if ( !v32[(v31 >> 1) - 1] && StringCbLengthW(v32, v31, &v53) >= 0 && v53 + 2 == v35 )
            {
              v56 = v53 >> 1;
              v53 = v36;
              goto LABEL_66;
            }
          }
        }
        goto LABEL_55;
      }
      v6 = -1073741811;
LABEL_66:
      if ( v6 >= 0 )
      {
        v37 = 2 * v56 + 2;
        if ( 2 * v56 == -2 )
        {
LABEL_55:
          v6 = -1073741762;
          goto LABEL_91;
        }
        v38 = v37;
        v39 = ExAllocatePoolWithTag(PagedPool, v37, 0x20534C53u);
        v40 = (size_t)v39;
        if ( !v39 )
        {
          v6 = -1073741801;
          goto LABEL_91;
        }
        memmove(v39, (const void *)v53, v38);
        v53 = v40;
        v33 = pcbLength;
        v34 = ((__int64 (__fastcall *)(_QWORD, size_t, _QWORD, size_t))qword_1409AD4D8)(
                (unsigned int)(2 * v21 + 2),
                pcbLength,
                (unsigned int)(2 * v56 + 2),
                v53);
        if ( v34 >= 0 )
        {
          v34 = qword_1409AD480 ? qword_1409AD480(v33) : -1073741637;
          if ( v34 == -1073741198 )
            v34 = 0;
        }
        *(_DWORD *)(a4 + 4) = 20;
        v41 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20534C53u);
        if ( !v41 )
        {
          v6 = -1073741801;
          goto LABEL_91;
        }
        *(_QWORD *)(a4 + 8) = v41;
        *(_DWORD *)a4 = 0;
        v42 = v34 | 0x10000000;
        if ( v41 + 1 >= v41 )
        {
          if ( v41 + 2 > (_DWORD *)((char *)v41 + *(unsigned int *)(a4 + 4)) )
            goto LABEL_16;
          *v41 = 4;
          v41[1] = v42;
          v43 = ++*(_DWORD *)a4;
          v44 = *(_QWORD *)(a4 + 8);
          if ( !v44 )
          {
            v45 = *(_DWORD *)(a4 + 4);
            v46 = -1;
            v47 = v45 + 12;
            if ( v45 + 12 >= v45 )
              v46 = v45 + 12;
            v6 = v47 < v45 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v46;
            if ( v47 >= v45 )
            {
              v6 = 0;
              *(_DWORD *)a4 = v43 + 1;
            }
            goto LABEL_91;
          }
          v48 = *(_QWORD *)(a4 + 8);
          for ( m = 0; m < v43; v48 += v50 )
          {
            v50 = *(_DWORD *)v48 + 4;
            if ( *(_DWORD *)v48 >= 0xFFFFFFFC || v48 + v50 < v48 )
              goto LABEL_90;
            ++m;
          }
          if ( v48 + 4 >= v48 )
          {
            v6 = 0;
            if ( v48 + 12 <= v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              v51 = v54;
              *(_DWORD *)v48 = 8;
              *(_QWORD *)(v48 + 4) = v51;
              ++*(_DWORD *)a4;
              goto LABEL_91;
            }
LABEL_16:
            v6 = -1073741789;
            goto LABEL_91;
          }
        }
LABEL_90:
        v6 = -1073741675;
      }
    }
  }
LABEL_91:
  if ( pcbLength )
    ExFreePoolWithTag((PVOID)pcbLength, 0x20534C53u);
  if ( v53 )
    ExFreePoolWithTag((PVOID)v53, 0x20534C53u);
  return (unsigned int)v6;
}
