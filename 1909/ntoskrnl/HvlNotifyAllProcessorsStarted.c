/*
 * XREFs of HvlNotifyAllProcessorsStarted @ 0x140288850
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140185A30 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013EC10 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028558C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1402861B8 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14028D628 (HvlpHvToNtStatus.c)
 */

__int64 HvlNotifyAllProcessorsStarted()
{
  unsigned __int16 v0; // bx
  PHYSICAL_ADDRESS v2[4]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v3[16]; // [rsp+40h] [rbp-28h] BYREF

  memset(v2, 0, sizeof(v2));
  *(_DWORD *)HvlpAcquireHypercallPage(v2, 1, (__int64)v3, 8LL) = 4;
  v0 = HvcallCodeVa();
  HvlpReleaseHypercallPage((unsigned int *)v2);
  return HvlpHvToNtStatus(v0);
}
