/*
 * XREFs of CmpCompareCompressedName @ 0x1405D6D90
 * Callers:
 *     CmpFindNameInListCellWithStatus @ 0x1405D1720 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1405D6C70 (CmpDoCompareKeyName.c)
 *     CmpFindKcbInHashEntryByName @ 0x1405D739C (CmpFindKcbInHashEntryByName.c)
 *     CmpGetNameControlBlock @ 0x1405D7490 (CmpGetNameControlBlock.c)
 *     CmpCheckValueList @ 0x1405DA450 (CmpCheckValueList.c)
 *     CmpCheckLexicographicalOrder @ 0x1405DCCF0 (CmpCheckLexicographicalOrder.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x1407F2250 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpCompareKeysByName @ 0x1407FA8E4 (CmpCompareKeysByName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140801D00 (CmpSortedValueEnumStackValueCompareFunction.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareCompressedName(__int64 a1, unsigned __int8 *a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // di
  WCHAR *v7; // rsi
  WCHAR v9; // r14
  unsigned int v10; // r15d

  v5 = *(_WORD *)a1 >> 1;
  v7 = *(WCHAR **)(a1 + 8);
  if ( v5 )
  {
    while ( a3 )
    {
      v9 = *v7++;
      v10 = *a2++;
      if ( v9 != (_WORD)v10 )
      {
        if ( (a4 & 1) == 0 && v9 >= 0x61u )
        {
          if ( v9 > 0x7Au )
            v9 = RtlUpcaseUnicodeChar(v9);
          else
            v9 -= 32;
        }
        if ( (a4 & 2) == 0 && v10 >= 0x61 )
        {
          if ( v10 > 0x7A )
            LOWORD(v10) = RtlUpcaseUnicodeChar(v10);
          else
            LOWORD(v10) = v10 - 32;
        }
        if ( v9 != (unsigned __int16)v10 )
          return v9 - (unsigned int)(unsigned __int16)v10;
      }
      --a3;
      if ( !--v5 )
        return v5 - (unsigned int)a3;
    }
  }
  return v5 - (unsigned int)a3;
}
