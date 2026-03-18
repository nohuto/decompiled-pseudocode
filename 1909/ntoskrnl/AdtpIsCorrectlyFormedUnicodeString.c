/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x140133B7C
 * Callers:
 *     AdtpPackageParameters @ 0x1401335A8 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
