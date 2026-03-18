/*
 * XREFs of PspUnlockProcessShared @ 0x140160EE4
 * Callers:
 *     NtQueryInformationProcess @ 0x14066DB90 (NtQueryInformationProcess.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockProcessShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx

  v2 = (signed __int64 *)(a1 + 728);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 728), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KeLeaveCriticalRegionThread(a2);
}
