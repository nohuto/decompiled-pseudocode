/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x140189400
 * Callers:
 *     AdtpPackageParameters @ 0x140188EDC (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
