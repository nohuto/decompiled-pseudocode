/*
 * XREFs of CmpKeyEnumStackEntryNotifyPromotion @ 0x1408008C4
 * Callers:
 *     CmpKeyEnumStackNotifyPromotion @ 0x140800AE4 (CmpKeyEnumStackNotifyPromotion.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     CmpDoFindSubKeyByNumber @ 0x1405D4470 (CmpDoFindSubKeyByNumber.c)
 */

__int64 __fastcall CmpKeyEnumStackEntryNotifyPromotion(_QWORD *a1)
{
  int v2; // edx
  __int64 v3; // r9
  _DWORD *v4; // rcx
  int v5; // r8d
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int16 *v9; // rax
  unsigned int SubKeyByNumber; // eax
  unsigned int v11; // ebx
  __int64 result; // rax

  v2 = 0;
  v3 = 0LL;
  v4 = a1 + 4;
  v5 = 2;
  while ( *v4 == *(_DWORD *)((char *)v4 + a1[1] - (_QWORD)a1 - 12) )
  {
    ++v2;
    ++v3;
    ++v4;
    if ( v3 >= 2 )
      goto LABEL_6;
  }
  v5 = v2;
LABEL_6:
  a1[15] = 0LL;
  *((_DWORD *)a1 + 28) = -1;
  v6 = v5;
  v7 = v5;
  if ( a1[v7 + 10] )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, &a1[v7 + 12]);
    a1[v6 + 10] = 0LL;
    *((_DWORD *)a1 + v6 + 18) = -1;
  }
  if ( a1[v6 + 5] )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD *))(*a1 + 16LL))(*a1, &a1[v7 + 7]);
    a1[v6 + 5] = 0LL;
  }
  v8 = a1[1];
  *((_DWORD *)a1 + v6 + 8) = *(_DWORD *)(v8 + 4 * v6 + 20);
  v9 = (__int16 *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*a1 + 8LL))(
                    *a1,
                    *(unsigned int *)(v8 + 4 * v6 + 28),
                    &a1[v7 + 7]);
  a1[v6 + 5] = v9;
  SubKeyByNumber = CmpDoFindSubKeyByNumber(*a1, v9, *((_DWORD *)a1 + v6 + 6));
  *((_DWORD *)a1 + v6 + 18) = SubKeyByNumber;
  v11 = SubKeyByNumber;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*a1 + 8LL))(*a1, SubKeyByNumber, &a1[v6 + 12]);
  a1[v6 + 10] = result;
  *((_DWORD *)a1 + 28) = v11;
  a1[15] = result;
  return result;
}
