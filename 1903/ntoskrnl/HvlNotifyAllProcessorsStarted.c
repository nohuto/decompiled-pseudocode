/*
 * XREFs of HvlNotifyAllProcessorsStarted @ 0x140288AF0
 * Callers:
 *     HvlStartBootLogicalProcessors @ 0x140185480 (HvlStartBootLogicalProcessors.c)
 * Callees:
 *     HvcallpNoHypervisorPresent @ 0x14013E580 (HvcallpNoHypervisorPresent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlpAcquireHypercallPage @ 0x14028582C (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x140286458 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x14028D8C8 (HvlpHvToNtStatus.c)
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
