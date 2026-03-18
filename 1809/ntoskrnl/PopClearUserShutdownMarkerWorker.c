/*
 * XREFs of PopClearUserShutdownMarkerWorker @ 0x1406E27D0
 * Callers:
 *     <none>
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopOkayToQueueNextWorkItem @ 0x14013BA20 (PopOkayToQueueNextWorkItem.c)
 *     PopWriteBsdPowerTransition @ 0x14071C488 (PopWriteBsdPowerTransition.c)
 */

void PopClearUserShutdownMarkerWorker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~4u;
  PopWriteBsdPowerTransition();
  PopOkayToQueueNextWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem);
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
