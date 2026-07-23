/*
 * XREFs of RtlUpcaseUnicodeChar @ 0x180060F40
 * Callers:
 *     towupper @ 0x180092260 (towupper.c)
 * Callees:
 *     <none>
 */

WCHAR __cdecl RtlUpcaseUnicodeChar(WCHAR SourceCharacter)
{
  if ( SourceCharacter < 0x61u )
    return SourceCharacter;
  if ( SourceCharacter <= 0x7Au )
    return SourceCharacter - 32;
  if ( !qword_180166510 || SourceCharacter < 0xC0u )
    return SourceCharacter;
  return SourceCharacter
       + *(_WORD *)(qword_180166510
                  + 2LL
                  * ((SourceCharacter & 0xF)
                   + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                       + 2LL
                                                       * (((SourceCharacter >> 4) & 0xF)
                                                        + (unsigned int)*(unsigned __int16 *)(qword_180166510
                                                                                            + 2
                                                                                            * ((unsigned __int64)SourceCharacter >> 8))))));
}
