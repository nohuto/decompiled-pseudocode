/*
 * XREFs of sub_1800D4678 @ 0x1800D4678
 * Callers:
 *     sub_1800D4744 @ 0x1800D4744 (sub_1800D4744.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x18001A040 (RtlCompareUnicodeStrings.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 */

__int64 __fastcall sub_1800D4678(unsigned __int16 *a1, __int16 *a2)
{
  unsigned int v2; // ebx
  unsigned __int16 v5; // ax
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  _WORD *i; // rsi

  v2 = 0;
  if ( (dword_18015FAB0 & 5) != 0 )
    sub_1800CE318(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      7095,
      (unsigned int)"LdrpIsSubstringFound",
      2,
      "Searching for \"%wZ\" in \"%wZ\"\n",
      a2,
      a1);
  v5 = *a2;
  if ( *a1 >= (unsigned __int16)*a2 )
  {
    v6 = *((_QWORD *)a2 + 1);
    v7 = (*a1 - (unsigned __int64)v5) >> 1;
    v8 = (unsigned __int64)v5 >> 1;
    for ( i = (_WORD *)(*((_QWORD *)a1 + 1) + 2 * v7); (unsigned int)RtlCompareUnicodeStrings(i, v8, v6, v8, 1); --i )
    {
      if ( !v7 )
        return v2;
      --v7;
    }
    return 1;
  }
  return v2;
}
