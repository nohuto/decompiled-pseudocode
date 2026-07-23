/*
 * XREFs of RtlDowncaseUnicodeChar_0 @ 0x180070AD4
 * Callers:
 *     RtlFindCharInUnicodeString @ 0x180028A80 (RtlFindCharInUnicodeString.c)
 *     RtlDowncaseUnicodeString @ 0x180070A30 (RtlDowncaseUnicodeString.c)
 *     RtlDowncaseUnicodeChar @ 0x1800E89E0 (RtlDowncaseUnicodeChar.c)
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlDowncaseUnicodeChar_0(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x41u )
    return SourceCharacter;
  if ( SourceCharacter <= 0x5Au )
    return SourceCharacter + 32;
  if ( !qword_180166520 || SourceCharacter < 0xC0u )
    return SourceCharacter;
  return SourceCharacter
       + *(_WORD *)(qword_180166520
                  + 2LL
                  * ((SourceCharacter & 0xF)
                   + (unsigned int)*(unsigned __int16 *)(qword_180166520
                                                       + 2LL
                                                       * (((unsigned __int8)SourceCharacter >> 4)
                                                        + (unsigned int)*(unsigned __int16 *)(qword_180166520
                                                                                            + 2
                                                                                            * ((unsigned __int64)SourceCharacter >> 8))))));
}
