/*
 * XREFs of CmpFindKcbInHashEntryByName @ 0x140667A54
 * Callers:
 *     CmpWalkOneLevel @ 0x140665590 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1406676D0 (CmpCreateKeyControlBlock.c)
 *     CmRenameKey @ 0x140827C5C (CmRenameKey.c)
 *     CmpSubtreeEnumeratorAdvance @ 0x140832F94 (CmpSubtreeEnumeratorAdvance.c)
 *     CmpPartialPromoteSubkeys @ 0x14083E220 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmpCompareCompressedName @ 0x14066A180 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x1406CCDC0 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByName(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rsi
  __int64 i; // rdi
  __int64 v9; // rax
  unsigned __int16 v10; // cx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v13 = 0LL;
  v14 = 0LL;
  v6 = 0LL;
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
        v11 = CmpCompareCompressedName(a4, v9 + 26, v10, 2LL);
      }
      else
      {
        v14 = v9 + 26;
        LOWORD(v13) = v10;
        WORD1(v13) = v10;
        v11 = CmpCompareUnicodeString(a4, &v13, 2LL);
      }
      if ( !v11 )
        return i - 16;
    }
  }
  return v6;
}
