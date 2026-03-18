/*
 * XREFs of PspUnlockProcessShared @ 0x14015A960
 * Callers:
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     NtSetInformationThread @ 0x1405F0AF0 (NtSetInformationThread.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockProcessShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx

  v2 = (signed __int64 *)(a1 + 736);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 736), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KeLeaveCriticalRegionThread(a2);
}
