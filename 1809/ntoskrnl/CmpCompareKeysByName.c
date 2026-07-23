/*
 * XREFs of CmpCompareKeysByName @ 0x1407FA8E4
 * Callers:
 *     CmpFindSubKeyByNumberFromMergedView @ 0x1407F40CC (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x140800140 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x140800580 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryBegin @ 0x140800684 (CmpKeyEnumStackEntryBegin.c)
 * Callees:
 *     CmpCompareCompressedName @ 0x1405D6D90 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x1406B7838 (CmpCompareUnicodeString.c)
 *     CmpCompareTwoCompressedNames @ 0x1407FA9AC (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpCompareKeysByName(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int16 v3; // r9
  unsigned __int16 v4; // ax
  __int64 v5; // rdx
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int16 v9; // [rsp+22h] [rbp-1Eh]
  __int64 v10; // [rsp+28h] [rbp-18h]
  __int16 v11; // [rsp+30h] [rbp-10h] BYREF
  __int16 v12; // [rsp+32h] [rbp-Eh]
  __int64 v13; // [rsp+38h] [rbp-8h]

  v2 = a2 + 76;
  v3 = *(_WORD *)(a2 + 2) & 0x20;
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    v4 = *(_WORD *)(a2 + 72);
    v5 = *(unsigned __int16 *)(a1 + 72);
    if ( v3 )
    {
      return CmpCompareTwoCompressedNames(a1 + 76, v5, v2, v4);
    }
    else
    {
      v10 = v2;
      v8 = v4;
      v9 = v4;
      return (unsigned int)-CmpCompareCompressedName((__int64)&v8, (unsigned __int8 *)(a1 + 76), v5, 0);
    }
  }
  else
  {
    v13 = a1 + 76;
    if ( v3 )
    {
      v7 = *(_WORD *)(a2 + 72);
      v11 = *(_WORD *)(a1 + 72);
      v12 = v11;
      return CmpCompareCompressedName((__int64)&v11, (unsigned __int8 *)(a2 + 76), v7, 0);
    }
    else
    {
      v8 = *(_WORD *)(a2 + 72);
      v9 = v8;
      v11 = *(_WORD *)(a1 + 72);
      v12 = v11;
      v10 = a2 + 76;
      return CmpCompareUnicodeString((__int64)&v11, (__int64)&v8, 0);
    }
  }
}
