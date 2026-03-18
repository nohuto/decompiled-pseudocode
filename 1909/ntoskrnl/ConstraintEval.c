/*
 * XREFs of ConstraintEval @ 0x1405B5F80
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B6594 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     memcmp @ 0x1401A1110 (memcmp.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SimplifyFilter @ 0x1405B5910 (SimplifyFilter.c)
 *     FilterEval @ 0x1405BB300 (FilterEval.c)
 */

__int64 __fastcall ConstraintEval(unsigned int a1, _DWORD *a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v6; // r15
  char *PoolWithTag; // rax
  char *v10; // r12
  int v11; // esi
  char *v12; // rdi
  int v13; // ebx
  __int64 v15; // rcx
  const wchar_t *v16; // rcx
  const wchar_t *v17; // rdx
  int v18; // ebx
  int v19; // ebx
  int v20; // ebx
  int v21; // eax
  unsigned int v22; // r14d
  char *v23; // rbx
  __int64 v24; // rcx
  const wchar_t *v25; // rcx
  const wchar_t *v26; // rdx
  int v27; // esi
  unsigned int v28; // eax
  void *v29; // rcx
  int v30; // [rsp+30h] [rbp-50h] BYREF
  int v31; // [rsp+34h] [rbp-4Ch] BYREF
  __int64 v32; // [rsp+38h] [rbp-48h] BYREF
  _OWORD *v33; // [rsp+40h] [rbp-40h]
  _OWORD v34[3]; // [rsp+48h] [rbp-38h] BYREF

  v6 = a1;
  memset(v34, 0, sizeof(v34));
  v30 = 0;
  v31 = 0;
  v32 = 0LL;
  v33 = 0LL;
  if ( (a4 & 0xFF00000) != 0 )
    return (unsigned int)-1073741811;
  if ( !(_DWORD)v6 )
    return (unsigned int)-1073741823;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 56 * v6, 0x52544C46u);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741801;
  if ( (*a2 & 0xFF00000) != 0 )
  {
    SimplifyFilter(v6, (__int64)a2, &v30, (__int64)PoolWithTag);
    LODWORD(v6) = v30;
  }
  else
  {
    memmove(PoolWithTag, a2, 56 * v6);
  }
  v11 = 0;
  if ( !(_DWORD)v6 )
    goto LABEL_9;
  while ( 1 )
  {
    v12 = &v10[56 * v11];
    if ( *((_DWORD *)v12 + 6) == *(_DWORD *)(a3 + 16) )
    {
      v15 = *((_QWORD *)v12 + 1) - *(_QWORD *)a3;
      if ( !v15 )
        v15 = *((_QWORD *)v12 + 2) - *(_QWORD *)(a3 + 8);
      if ( !v15 && *((_DWORD *)v12 + 7) == *(_DWORD *)(a3 + 20) )
      {
        v16 = (const wchar_t *)*((_QWORD *)v12 + 4);
        v17 = *(const wchar_t **)(a3 + 24);
        if ( (v16 == v17 || v16 && v17 && !wcsicmp(v16, v17)) && *(_DWORD *)v12 == a4 )
          break;
      }
    }
    if ( ++v11 >= (unsigned int)v6 )
      goto LABEL_9;
  }
  if ( !v12 )
    goto LABEL_9;
  v34[0] = *(_OWORD *)(v12 + 8);
  v34[1] = *(_OWORD *)(v12 + 24);
  v34[2] = *(_OWORD *)(v12 + 40);
  v18 = a4 - 1;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( v19 )
    {
      v20 = v19 - 0x10000;
      if ( v20 )
      {
        if ( v20 != 0x10000 )
          goto LABEL_9;
        v21 = *((_DWORD *)v12 + 10);
        if ( v21 != 18 && v21 != 25 && v21 != 8210 )
          goto LABEL_9;
      }
      else
      {
        if ( LODWORD(v34[2]) != 17 )
          goto LABEL_9;
        v29 = &unk_14050EB70;
        if ( **((_BYTE **)&v34[2] + 1) != 0xFF )
          v29 = &unk_14042BB00;
        *((_QWORD *)&v34[2] + 1) = v29;
      }
    }
  }
  else
  {
    *(_QWORD *)&v34[2] = 0x400000007LL;
    *((_QWORD *)&v34[2] + 1) = &unk_14050EB6C;
  }
  v22 = 0;
  do
  {
    v23 = &v10[56 * v22];
    if ( v23 != v12 && *((_DWORD *)v23 + 6) == *((_DWORD *)v12 + 6) )
    {
      v24 = *((_QWORD *)v23 + 1) - *((_QWORD *)v12 + 1);
      if ( !v24 )
        v24 = *((_QWORD *)v23 + 2) - *((_QWORD *)v12 + 2);
      if ( !v24 && *((_DWORD *)v23 + 7) == *((_DWORD *)v12 + 7) )
      {
        v25 = (const wchar_t *)*((_QWORD *)v23 + 4);
        v26 = (const wchar_t *)*((_QWORD *)v12 + 4);
        if ( v25 == v26 || v25 && v26 && !wcsicmp(v25, v26) )
        {
          v27 = *(_DWORD *)v23;
          if ( *(_DWORD *)v23 != *(_DWORD *)v12 )
            goto LABEL_9;
          if ( *((_DWORD *)v23 + 10) != *((_DWORD *)v12 + 10) )
            goto LABEL_9;
          v28 = *((_DWORD *)v23 + 11);
          if ( v28 != *((_DWORD *)v12 + 11) || memcmp(*((const void **)v23 + 6), *((const void **)v12 + 6), v28) )
            goto LABEL_9;
          *(_DWORD *)v23 = v27 ^ 0x10000;
        }
      }
    }
    ++v22;
  }
  while ( v22 < (unsigned int)v6 );
  *(_DWORD *)v12 ^= 0x10000u;
  v33 = v34;
  LODWORD(v32) = 1;
  v13 = FilterEval((unsigned int)GetPropertyFromPropArray, (unsigned int)&v32, v6, (_DWORD)v10, (__int64)&v31);
  if ( v13 < 0 )
    goto LABEL_10;
  if ( !v31 )
  {
    *(_OWORD *)a5 = *(_OWORD *)v12;
    *(_OWORD *)(a5 + 16) = *((_OWORD *)v12 + 1);
    *(_OWORD *)(a5 + 32) = *((_OWORD *)v12 + 2);
    *(_QWORD *)(a5 + 48) = *((_QWORD *)v12 + 6);
    *(_DWORD *)a5 ^= 0x10000u;
    goto LABEL_10;
  }
LABEL_9:
  v13 = -1073741823;
LABEL_10:
  ExFreePoolWithTag(v10, 0x52544C46u);
  return (unsigned int)v13;
}
