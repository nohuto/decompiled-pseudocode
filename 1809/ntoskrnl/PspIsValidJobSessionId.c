/*
 * XREFs of PspIsValidJobSessionId @ 0x14013B648
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 * Callees:
 *     <none>
 */

bool __fastcall PspIsValidJobSessionId(unsigned int a1)
{
  return a1 <= 0xFFFFFFFD;
}
