/*
 * XREFs of towupper @ 0x1401A24D0
 * Callers:
 *     PfSnParametersVerify @ 0x14077B6BC (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x14066A820 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
