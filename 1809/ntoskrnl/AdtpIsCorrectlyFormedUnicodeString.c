/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x1401892A0
 * Callers:
 *     AdtpPackageParameters @ 0x140188D7C (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
