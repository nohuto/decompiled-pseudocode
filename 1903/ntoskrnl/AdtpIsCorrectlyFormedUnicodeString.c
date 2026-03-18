/*
 * XREFs of AdtpIsCorrectlyFormedUnicodeString @ 0x14013308C
 * Callers:
 *     AdtpPackageParameters @ 0x140132AB8 (AdtpPackageParameters.c)
 * Callees:
 *     <none>
 */

bool __fastcall AdtpIsCorrectlyFormedUnicodeString(_WORD *a1)
{
  return !a1 || a1[1] >= *a1;
}
