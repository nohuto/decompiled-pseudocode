/*
 * XREFs of PopSetCleanShutdownMarker @ 0x14086629C
 * Callers:
 *     PopGracefulShutdown @ 0x14057C9C0 (PopGracefulShutdown.c)
 * Callees:
 *     PopAcquireRwLockExclusive @ 0x140003970 (PopAcquireRwLockExclusive.c)
 *     PopReleaseRwLock @ 0x140005EC4 (PopReleaseRwLock.c)
 *     PopWriteBsdPowerTransition @ 0x14071C488 (PopWriteBsdPowerTransition.c)
 */

void PopSetCleanShutdownMarker()
{
  PopAcquireRwLockExclusive((ULONG_PTR)&PopBsdUpdateLock);
  BYTE8(PopBsdPowerTransition) &= ~1u;
  PopWriteBsdPowerTransition();
  PopReleaseRwLock((ULONG_PTR)&PopBsdUpdateLock);
}
