/*
 * XREFs of PspUnlockProcessSecurityShared @ 0x140307B04
 * Callers:
 *     PspAssignPrimaryToken @ 0x140780184 (PspAssignPrimaryToken.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 */

_QWORD *__fastcall PspUnlockProcessSecurityShared(__int64 a1, __int64 a2)
{
  signed __int64 *v2; // rbx

  v2 = (signed __int64 *)(a1 + 736);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 736), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return KeLeaveCriticalRegionThread(a2);
}
