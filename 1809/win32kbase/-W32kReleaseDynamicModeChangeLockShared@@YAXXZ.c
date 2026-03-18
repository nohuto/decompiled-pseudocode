/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C00FD5D0
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C00FD680 (DxEngUnlockShareSem.c)
 */

void W32kReleaseDynamicModeChangeLockShared(void)
{
  DxEngUnlockShareSem();
}
