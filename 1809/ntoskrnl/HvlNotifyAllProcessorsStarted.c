/*
 * XREFs of HvlNotifyAllProcessorsStarted @ 0x140274A64
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x14017EA90 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E6A0 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     HvlpAcquireHypercallPage @ 0x140271864 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140272384 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x140279580 (HvlpHvToNtStatus.c)
 */

__int64 HvlNotifyAllProcessorsStarted()
{
  unsigned __int16 v0; // bx
  PHYSICAL_ADDRESS v2[3]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v3[16]; // [rsp+40h] [rbp-28h] BYREF

  *(_DWORD *)HvlpAcquireHypercallPage(v2, 1, (__int64)v3, 8LL) = 4;
  v0 = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v2);
  return HvlpHvToNtStatus(v0);
}
