/*
 * XREFs of _mbstrlen @ 0x1401997EC
 * Callers:
 *     mbstowcs @ 0x140196070 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x14068D610 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *Str)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = (PUCHAR)Str;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return SourceCharacter - (PUCHAR)Str - 1;
}
