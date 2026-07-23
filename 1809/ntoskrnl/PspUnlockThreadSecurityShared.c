/*
 * XREFs of PspUnlockThreadSecurityShared @ 0x140136134
 * Callers:
 *     PsUnlockThreadNameShared @ 0x1401B5F30 (PsUnlockThreadNameShared.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400913F0 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockThreadSecurityShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx

  v2 = (signed __int64 *)(a1 + 1728);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1728), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KeLeaveCriticalRegionThread(a2);
}
