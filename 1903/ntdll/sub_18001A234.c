/*
 * XREFs of sub_18001A234 @ 0x18001A234
 * Callers:
 *     sub_180018A84 @ 0x180018A84 (sub_180018A84.c)
 *     sub_180019D38 @ 0x180019D38 (sub_180019D38.c)
 *     RtlCompareUnicodeString @ 0x180019EE0 (RtlCompareUnicodeString.c)
 *     RtlPrefixUnicodeString @ 0x180019FB0 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeStrings @ 0x18001A040 (RtlCompareUnicodeStrings.c)
 *     sub_18001A0D8 @ 0x18001A0D8 (sub_18001A0D8.c)
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_18005B680 @ 0x18005B680 (sub_18005B680.c)
 *     sub_18006206C @ 0x18006206C (sub_18006206C.c)
 *     RtlFindUnicodeSubstring @ 0x1800860B0 (RtlFindUnicodeSubstring.c)
 *     sub_1800DD010 @ 0x1800DD010 (sub_1800DD010.c)
 *     RtlUpcaseUnicodeToCustomCPN @ 0x1800E3BF0 (RtlUpcaseUnicodeToCustomCPN.c)
 *     sub_1800E3D40 @ 0x1800E3D40 (sub_1800E3D40.c)
 *     sub_1800E3E40 @ 0x1800E3E40 (sub_1800E3E40.c)
 *     sub_1800F5584 @ 0x1800F5584 (sub_1800F5584.c)
 *     sub_1800F6920 @ 0x1800F6920 (sub_1800F6920.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall sub_18001A234(unsigned __int16 a1)
{
  if ( a1 < 0x61u )
    return a1;
  if ( a1 <= 0x7Au )
    return a1 - 32;
  if ( !qword_180166510 || a1 < 0xC0u )
    return a1;
  return a1
       + *(_WORD *)(qword_180166510
                  + 2LL
                  * ((a1 & 0xF)
                   + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                       + 2LL
                                                       * (((unsigned __int8)a1 >> 4)
                                                        + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                                            + 2
                                                                                            * ((unsigned __int64)a1 >> 8))))));
}
