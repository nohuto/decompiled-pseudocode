/*
 * XREFs of PspIsValidJobSessionId @ 0x1400E6AD8
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsValidJobSessionId(unsigned int a1)
{
  return a1 <= 0xFFFFFFFD;
}
