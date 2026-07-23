/*
 * XREFs of CmpKeyEnumStackEntryBegin @ 0x140800684
 * Callers:
 *     CmpKeyEnumStackBeginEnumerationForKeyNodeStack @ 0x1408002C0 (CmpKeyEnumStackBeginEnumerationForKeyNodeStack.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x1405D4470 (CmpDoFindSubKeyByNumber.c)
 *     CmpCompareKeysByName @ 0x1407FA8E4 (CmpCompareKeysByName.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryBegin(__int64 *a1, unsigned int *a2, __int64 a3)
{
  __int64 *v5; // rsi
  unsigned int *v6; // rdi
  __int64 result; // rax
  _QWORD *v8; // rbp
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r15
  unsigned int v12; // edx
  unsigned int v13; // eax
  __int16 *v14; // rax
  unsigned int SubKeyByNumber; // eax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdx

  *a1 = *(_QWORD *)a2;
  a1[1] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)a2 + 8LL))(*(_QWORD *)a2, a2[2], a1 + 2);
  v5 = a1 + 10;
  v6 = (unsigned int *)(a1 + 3);
  result = -4LL - (_QWORD)a1;
  v8 = a1 + 12;
  v9 = a3 - (_QWORD)a1;
  v10 = 4LL - (_QWORD)a1;
  v11 = 2LL;
  do
  {
    v12 = *(unsigned int *)((char *)v6 + result + a1[1]);
    *(_DWORD *)((char *)a1 + (_QWORD)v6 + v9 - a3 + 8) = v12;
    if ( a3 )
      v13 = *(unsigned int *)((char *)v6 + v9 - 8);
    else
      v13 = 0;
    *v6 = v13;
    if ( v12 > v13 )
    {
      v14 = (__int16 *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*a1 + 8))(
                         *a1,
                         *(unsigned int *)((char *)v6 + v10 + a1[1]),
                         v8 - 5);
      *(v5 - 5) = (__int64)v14;
      SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1, v14, *v6);
      v6[12] = SubKeyByNumber;
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*a1 + 8))(*a1, SubKeyByNumber, v8);
      *v5 = v16;
      v17 = v16;
      v18 = a1[15];
      if ( !v18 || (int)CmpCompareKeysByName(v16, v18) < 0 )
      {
        a1[15] = v17;
        *((_DWORD *)a1 + 28) = v6[12];
      }
      v10 = 4LL - (_QWORD)a1;
      v9 = a3 - (_QWORD)a1;
    }
    result = -4LL - (_QWORD)a1;
    ++v8;
    ++v5;
    ++v6;
    --v11;
  }
  while ( v11 );
  return result;
}
