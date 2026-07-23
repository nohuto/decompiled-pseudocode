/*
 * XREFs of CmpFindKcbInHashEntryByCompressedName @ 0x1407F2250
 * Callers:
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FB7AC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x1408065F0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmpCompareCompressedName @ 0x1405D6D90 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x1407FA9AC (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByCompressedName(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int16 a5)
{
  __int64 v6; // rsi
  __int64 i; // rdi
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  int v12; // eax
  _WORD v14[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]

  v6 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1640)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1648) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v10 = *(_QWORD *)(i + 64);
      v11 = *(_WORD *)(v10 + 24);
      if ( (*(_DWORD *)v10 & 1) != 0 )
      {
        v12 = CmpCompareTwoCompressedNames(a4, a5, v10 + 26, v11);
      }
      else
      {
        v15 = v10 + 26;
        v14[0] = v11;
        v14[1] = v11;
        v12 = CmpCompareCompressedName((__int64)v14, a4, a5, 1);
      }
      if ( !v12 )
        return i - 8;
    }
  }
  return v6;
}
