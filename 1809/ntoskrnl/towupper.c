/*
 * XREFs of towupper @ 0x140197590
 * Callers:
 *     PfSnParametersVerify @ 0x140752990 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405D5C10 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
