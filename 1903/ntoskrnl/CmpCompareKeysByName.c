/*
 * XREFs of CmpCompareKeysByName @ 0x140832B7C
 * Callers:
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14082CAC4 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x14083833C (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x140838718 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryBegin @ 0x14083881C (CmpKeyEnumStackEntryBegin.c)
 * Callees:
 *     CmpCompareCompressedName @ 0x140657160 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x1406CE020 (CmpCompareUnicodeString.c)
 *     CmpCompareTwoCompressedNames @ 0x140832C58 (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpCompareKeysByName(__int64 a1, __int64 a2)
{
  __int16 v2; // r9
  __int64 v3; // r10
  __int16 v4; // r9
  unsigned __int16 v5; // ax
  __int64 v6; // rdx
  unsigned __int16 v8; // r8
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  __int64 v10; // [rsp+28h] [rbp-18h]
  __int64 v11; // [rsp+30h] [rbp-10h] BYREF
  __int64 v12; // [rsp+38h] [rbp-8h]

  v2 = *(_WORD *)(a2 + 2);
  v3 = a2 + 76;
  v11 = 0LL;
  v4 = v2 & 0x20;
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    v5 = *(_WORD *)(a2 + 72);
    v6 = *(unsigned __int16 *)(a1 + 72);
    if ( v4 )
    {
      return CmpCompareTwoCompressedNames(a1 + 76, v6, v3, v5);
    }
    else
    {
      v10 = v3;
      LOWORD(v9) = v5;
      WORD1(v9) = v5;
      return (unsigned int)-CmpCompareCompressedName((__int64)&v9, (unsigned __int8 *)(a1 + 76), v6, 0);
    }
  }
  else
  {
    v12 = a1 + 76;
    if ( v4 )
    {
      v8 = *(_WORD *)(a2 + 72);
      LOWORD(v11) = *(_WORD *)(a1 + 72);
      WORD1(v11) = v11;
      return CmpCompareCompressedName((__int64)&v11, (unsigned __int8 *)(a2 + 76), v8, 0);
    }
    else
    {
      LOWORD(v9) = *(_WORD *)(a2 + 72);
      WORD1(v9) = v9;
      LOWORD(v11) = *(_WORD *)(a1 + 72);
      WORD1(v11) = v11;
      v10 = a2 + 76;
      return CmpCompareUnicodeString((__int64)&v11, (__int64)&v9, 0);
    }
  }
}
