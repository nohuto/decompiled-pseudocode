/*
 * XREFs of PspUnlockQuotaListShared @ 0x1400EDB34
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x140694668 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140694848 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockQuotaListShared(__int64 a1, signed __int64 *a2)
{
  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KeLeaveCriticalRegionThread(a1);
}
