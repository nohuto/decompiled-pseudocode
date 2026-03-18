/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x140615754
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1406AF6C0 (PspChangeJobMemoryUsageByProcess.c)
 *     PspJobClose @ 0x1406E0DB0 (PspJobClose.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 */

char __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rbx
  char result; // al

  if ( a1 != a2 )
  {
    v4 = a1 + 1032;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1032), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1032));
    result = KeAbPostRelease(v4);
  }
  if ( a3 )
    return KiLeaveGuardedRegionUnsafe(a3);
  return result;
}
