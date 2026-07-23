/*
 * XREFs of CmpKeyEnumStackEntryAdvance @ 0x140800580
 * Callers:
 *     CmpKeyEnumStackAdvanceInternal @ 0x140800140 (CmpKeyEnumStackAdvanceInternal.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x1405D4470 (CmpDoFindSubKeyByNumber.c)
 *     CmpCompareKeysByName @ 0x1407FA8E4 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryAdvance(__int64 *a1)
{
  __int64 v1; // r8
  int v3; // edx
  __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 result; // rax
  __int64 v7; // r14
  __int64 v8; // rsi
  __int64 *v9; // rbp
  int v10; // r8d
  unsigned int v11; // r8d
  unsigned int SubKeyByNumber; // eax
  unsigned int *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rdx

  v1 = a1[15];
  v3 = 0;
  v4 = 0LL;
  v5 = a1 + 10;
  result = (__int64)(a1 + 10);
  v7 = 2LL;
  while ( *(_QWORD *)result != v1 )
  {
    ++v3;
    ++v4;
    result += 8LL;
    if ( v4 >= 2 )
      goto LABEL_7;
  }
  v8 = v3;
  v9 = &a1[v3];
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*a1 + 16))(*a1, v9 + 12);
  a1[v8 + 10] = 0LL;
  v10 = *((_DWORD *)a1 + v8 + 6);
  *((_DWORD *)a1 + v8 + 18) = -1;
  v11 = v10 + 1;
  *((_DWORD *)a1 + v8 + 6) = v11;
  if ( v11 < *((_DWORD *)a1 + v8 + 8) )
  {
    SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1, (__int16 *)a1[v8 + 5], v11);
    *((_DWORD *)a1 + v8 + 18) = SubKeyByNumber;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*a1 + 8))(*a1, SubKeyByNumber, v9 + 12);
    a1[v8 + 10] = result;
  }
LABEL_7:
  a1[15] = 0LL;
  v13 = (unsigned int *)(a1 + 9);
  *((_DWORD *)a1 + 28) = -1;
  do
  {
    v14 = *v5;
    if ( *v5 )
    {
      v15 = a1[15];
      if ( !v15 || (result = CmpCompareKeysByName(*v5, v15), (int)result < 0) )
      {
        a1[15] = v14;
        result = *v13;
        *((_DWORD *)a1 + 28) = result;
      }
    }
    ++v5;
    ++v13;
    --v7;
  }
  while ( v7 );
  return result;
}
