/*
 * XREFs of sub_1800957D8 @ 0x1800957D8
 * Callers:
 *     mbstowcs @ 0x180090450 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180063760 (RtlAnsiCharToUnicodeChar.c)
 */

UCHAR *__fastcall sub_1800957D8(UCHAR *a1)
{
  PUCHAR SourceCharacter; // [rsp+30h] [rbp+8h] BYREF

  SourceCharacter = a1;
  while ( RtlAnsiCharToUnicodeChar(&SourceCharacter) )
    ;
  return (UCHAR *)(SourceCharacter - a1 - 1);
}
