/*
 * XREFs of _mbstrlen @ 0x1401A4760
 * Callers:
 *     mbstowcs @ 0x1401A0FA0 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x140667210 (RtlAnsiCharToUnicodeChar.c)
 */

size_t __cdecl mbstrlen(const char *Str)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = (PUCHAR)Str;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return SourceCharacter - (PUCHAR)Str - 1;
}
