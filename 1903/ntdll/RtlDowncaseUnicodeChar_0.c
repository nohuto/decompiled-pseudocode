/*
 * XREFs of RtlDowncaseUnicodeChar_0 @ 0x180070AD4
 * Callers:
 *     RtlFindCharInUnicodeString @ 0x180028A80 (RtlFindCharInUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x180070A30 (RtlDowncaseUnicodeString.c)
 *     RtlDowncaseUnicodeChar @ 0x1800E89E0 (RtlDowncaseUnicodeChar.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall RtlDowncaseUnicodeChar_0(unsigned __int16 a1)
{
  if ( a1 < 0x41u )
    return a1;
  if ( a1 <= 0x5Au )
    return a1 + 32;
  if ( !qword_180166520 || a1 < 0xC0u )
    return a1;
  return a1
       + *(_WORD *)(qword_180166520
                  + 2LL
                  * ((a1 & 0xF)
                   + (unsigned int)*(unsigned __int16 *)(qword_180166520
                                                       + 2LL
                                                       * (((unsigned __int8)a1 >> 4)
                                                        + (unsigned int)*(unsigned __int16 *)(qword_180166520
                                                                                            + 2
                                                                                            * ((unsigned __int64)a1 >> 8))))));
}
