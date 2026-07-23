/*
 * XREFs of PopFxDisableWorkOrderWatchdog @ 0x1401007D0
 * Callers:
 *     PopFxPluginWork @ 0x1401006F0 (PopFxPluginWork.c)
 * Callees:
 *     KeCancelTimer @ 0x14001CEB0 (KeCancelTimer.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 */

void __fastcall PopFxDisableWorkOrderWatchdog(__int64 *BugCheckParameter2)
{
  __int64 *v2; // rcx
  __int64 **v3; // rax
  char v4; // al

  if ( BugCheckParameter2 )
  {
    if ( !KeCancelTimer((PKTIMER)(BugCheckParameter2 + 2)) )
      PopFxBugCheck(0x618uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter2[21], 0LL);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PopWorkOrderLock, 0LL);
    BugCheckParameter2[21] = 0LL;
    BugCheckParameter2[19] = 0LL;
    v2 = (__int64 *)*BugCheckParameter2;
    if ( *(__int64 **)(*BugCheckParameter2 + 8) != BugCheckParameter2
      || (v3 = (__int64 **)BugCheckParameter2[1], *v3 != BugCheckParameter2) )
    {
      __fastfail(3u);
    }
    *v3 = v2;
    v2[1] = (__int64)v3;
    v4 = _InterlockedExchangeAdd64((volatile signed __int64 *)&PopWorkOrderLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v4 & 2) != 0 && (v4 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PopWorkOrderLock);
    KeAbPostRelease((ULONG_PTR)&PopWorkOrderLock);
  }
}
