/*
 * XREFs of PspIsValidJobSessionId @ 0x1400EBA78
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsValidJobSessionId(unsigned int a1)
{
  return a1 <= 0xFFFFFFFD;
}
