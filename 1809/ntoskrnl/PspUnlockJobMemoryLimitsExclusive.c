/*
 * XREFs of PspUnlockJobMemoryLimitsExclusive @ 0x140604450
 * Callers:
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1406075F0 (PspJobClose.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14068D8F0 (PspChangeJobMemoryUsageByProcess.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockJobMemoryLimitsExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG_PTR v4; // rbx
  __int64 result; // rax

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
