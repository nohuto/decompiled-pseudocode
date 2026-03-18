/*
 * XREFs of PdcReleaseRwLockExclusive @ 0x1408D92E0
 * Callers:
 *     PdcNotificationClientRegister @ 0x1408D8DE0 (PdcNotificationClientRegister.c)
 *     PdcNotificationClientUnregister @ 0x1408D8F08 (PdcNotificationClientUnregister.c)
 * Callees:
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExfReleasePushLock @ 0x1400C61F0 (ExfReleasePushLock.c)
 */

_QWORD *__fastcall PdcReleaseRwLockExclusive(signed __int64 *BugCheckParameter2)
{
  signed __int64 v2; // rax
  unsigned __int64 v3; // rdx
  signed __int64 v4; // rcx

  BugCheckParameter2[1] = 0LL;
  _m_prefetchw(BugCheckParameter2);
  v2 = *BugCheckParameter2;
  v3 = *BugCheckParameter2 & 0xFFFFFFFFFFFFFFF0uLL;
  v4 = *BugCheckParameter2 - 16;
  if ( v3 <= 0x10 )
    v4 = 0LL;
  if ( (v2 & 2) != 0 || v2 != _InterlockedCompareExchange64(BugCheckParameter2, v4, v2) )
    ExfReleasePushLock(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
