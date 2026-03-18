/*
 * XREFs of PspUnlockQuotaListShared @ 0x1400DD0F0
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x14065A154 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x14065A320 (PspLookupProcessQuotaBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 */

_QWORD *__fastcall PspUnlockQuotaListShared(__int64 a1, signed __int64 *a2)
{
  if ( _InterlockedCompareExchange64(a2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(a2);
  KeAbPostRelease((ULONG_PTR)a2);
  return KiLeaveCriticalRegionUnsafe(a1);
}
