/*
 * XREFs of CmpCompareTwoCompressedNames @ 0x1407FA9AC
 * Callers:
 *     CmpFindNameInListCellWithStatus @ 0x1405D1720 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1405D6C70 (CmpDoCompareKeyName.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x1407F2250 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpCompareKeysByName @ 0x1407FA8E4 (CmpCompareKeysByName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140801D00 (CmpSortedValueEnumStackValueCompareFunction.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareTwoCompressedNames(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        unsigned __int16 a4)
{
  unsigned __int16 v6; // si
  unsigned int v8; // ebx
  unsigned int v9; // edi

  v6 = a2;
  if ( a2 )
  {
    while ( a4 )
    {
      v8 = *a1++;
      v9 = *a3++;
      if ( (_WORD)v8 != (_WORD)v9 )
      {
        if ( v8 >= 0x61 )
        {
          if ( v8 <= 0x7A )
            LOWORD(v8) = v8 - 32;
          else
            LOWORD(v8) = RtlUpcaseUnicodeChar(v8);
        }
        if ( v9 >= 0x61 )
        {
          if ( v9 <= 0x7A )
            LOWORD(v9) = v9 - 32;
          else
            LOWORD(v9) = RtlUpcaseUnicodeChar(v9);
        }
        if ( (unsigned __int16)v8 != (unsigned __int16)v9 )
          return (unsigned __int16)v8 - (unsigned int)(unsigned __int16)v9;
      }
      --a4;
      if ( !--v6 )
        return v6 - (unsigned int)a4;
    }
  }
  return v6 - (unsigned int)a4;
}
