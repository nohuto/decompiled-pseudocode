/*
 * XREFs of PopReleaseAwaymodeLock @ 0x140595FF8
 * Callers:
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 *     PopAwayModePowerRequest @ 0x1408A20C0 (PopAwayModePowerRequest.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 */

_QWORD *PopReleaseAwaymodeLock()
{
  if ( (struct _KTHREAD *)PopAwaymodeLockExclusiveThread == KeGetCurrentThread() )
    PopAwaymodeLockExclusiveThread = 0LL;
  ExReleasePushLockEx((ULONG_PTR)&PopAwaymodeLock, 0LL);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
