/*
 * XREFs of PspUnlockProcessListExclusive @ 0x140091DE0
 * Callers:
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     PspInsertProcess @ 0x1406093A8 (PspInsertProcess.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PspUnlockProcessListExclusive(__int64 a1)
{
  char v2; // al

  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PspActiveProcessLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PspActiveProcessLock);
  KeAbPostRelease((ULONG_PTR)&PspActiveProcessLock);
  return KiLeaveGuardedRegionUnsafe(a1);
}
