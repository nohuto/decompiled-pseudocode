/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C00FD510
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C00FD640 (DxEngLockShareSem.c)
 */

void W32kAcquireDynamicModeChangeLockShared(void)
{
  DxEngLockShareSem();
}
