/*
 * XREFs of sub_1800957D8 @ 0x1800957D8
 * Callers:
 *     mbstowcs @ 0x180090450 (mbstowcs.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x180063760 (RtlAnsiCharToUnicodeChar.c)
 */

char *__fastcall sub_1800957D8(char *a1)
{
  char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  while ( (unsigned __int16)RtlAnsiCharToUnicodeChar(&v3) )
    ;
  return (char *)(v3 - a1 - 1);
}
