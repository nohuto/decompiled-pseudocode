/*
 * XREFs of PopSetUserShutdownMarkerWorker @ 0x1406E2810
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x14013BA20 (PopOkayToQueueNextWorkItem.c)
 *     PopWriteBsdPowerTransition @ 0x14071C488 (PopWriteBsdPowerTransition.c)
 */

void PopSetUserShutdownMarkerWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) |= 4u;
  PopWriteBsdPowerTransition();
  PopOkayToQueueNextWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
