/*
 * XREFs of HvlResetCoverageVector @ 0x140284DC8
 * Callers:
 *     ExpCovQueryHypervisorInformation @ 0x14091495C (ExpCovQueryHypervisorInformation.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 */

char HvlResetCoverageVector()
{
  _DWORD *v0; // rbx
  _QWORD v2[4]; // [rsp+20h] [rbp-8F8h] BYREF
  _QWORD v3[4]; // [rsp+40h] [rbp-8D8h] BYREF
  _BYTE v4[144]; // [rsp+60h] [rbp-8B8h] BYREF
  _BYTE v5[2064]; // [rsp+F0h] [rbp-828h] BYREF

  memset(v3, 0, sizeof(v3));
  memset(v2, 0, sizeof(v2));
  v0 = (_DWORD *)HvlpAcquireHypercallPage(v3, 1LL, v5, 1032LL);
  HvlpAcquireHypercallPage(v2, 2LL, v4, 72LL);
  *v0 = 3;
  LOBYTE(v0) = (unsigned __int16)HvcallCodeVa() == 0;
  HvlpReleaseHypercallPage(v2);
  HvlpReleaseHypercallPage(v3);
  return (char)v0;
}
