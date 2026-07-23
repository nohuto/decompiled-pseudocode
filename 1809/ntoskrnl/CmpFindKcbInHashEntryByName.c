/*
 * XREFs of CmpFindKcbInHashEntryByName @ 0x1405D739C
 * Callers:
 *     CmpWalkOneLevel @ 0x1405D5560 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1405D6EB0 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x1407EECF4 (CmRenameKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x1407FB7AC (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x1408065F0 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmpCompareCompressedName @ 0x1405D6D90 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x1406B7838 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByName(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  int v11; // eax
  _WORD v13[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v5 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1640)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1648) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v9 = *(_QWORD *)(i + 64);
      v10 = *(_WORD *)(v9 + 24);
      if ( (*(_DWORD *)v9 & 1) != 0 )
      {
        v11 = CmpCompareCompressedName(a4, (unsigned __int8 *)(v9 + 26), v10, 2);
      }
      else
      {
        v14 = v9 + 26;
        v13[0] = v10;
        v13[1] = v10;
        v11 = CmpCompareUnicodeString(a4, v13, 2LL);
      }
      if ( !v11 )
        return i - 8;
    }
  }
  return v5;
}
