/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C01304C0
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C0122A10 (DxEngUnlockShareSem.c)
 */

void __fastcall W32kReleaseDynamicModeChangeLockShared(__int64 a1, __int64 a2, __int64 a3)
{
  DxEngUnlockShareSem(a1, a2, a3);
}
