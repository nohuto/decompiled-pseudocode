/*
 * XREFs of ?W32kAcquireDynamicModeChangeLockShared@@YAXXZ @ 0x1C012DC50
 * Callers:
 *     <none>
 * Callees:
 *     DxEngLockShareSem @ 0x1C0120060 (DxEngLockShareSem.c)
 */

void __fastcall W32kAcquireDynamicModeChangeLockShared(__int64 a1, __int64 a2, __int64 a3)
{
  DxEngLockShareSem(a1, a2, a3);
}
