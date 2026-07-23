/*
 * XREFs of HvlResetCoverageVector @ 0x140271258
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x1408D898C (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E7A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271A54 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272574 (HvlpReleaseHypercallPage.c)
 */

char HvlResetCoverageVector()
{
  _DWORD *v0; // rbx
  _BYTE v2[24]; // [rsp+20h] [rbp-8F8h] BYREF
  _BYTE v3[24]; // [rsp+40h] [rbp-8D8h] BYREF
  _BYTE v4[144]; // [rsp+60h] [rbp-8B8h] BYREF
  _BYTE v5[2064]; // [rsp+F0h] [rbp-828h] BYREF

  v0 = (_DWORD *)HvlpAcquireHypercallPage(v3, 1LL, v5, 1032LL);
  HvlpAcquireHypercallPage(v2, 2LL, v4, 72LL);
  *v0 = 3;
  LOBYTE(v0) = (unsigned __int16)HvcallCodeVa() == 0;
  HvlpReleaseHypercallPage(v2);
  HvlpReleaseHypercallPage(v3);
  return (char)v0;
}
