/*
 * XREFs of towupper @ 0x1401976F0
 * Callers:
 *     PfSnParametersVerify @ 0x140753B60 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1405D6C10 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
