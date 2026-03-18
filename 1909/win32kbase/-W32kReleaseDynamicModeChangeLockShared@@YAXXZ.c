/*
 * XREFs of ?W32kReleaseDynamicModeChangeLockShared@@YAXXZ @ 0x1C012DD10
 * Callers:
 *     <none>
 * Callees:
 *     DxEngUnlockShareSem @ 0x1C01200A0 (DxEngUnlockShareSem.c)
 */

void __fastcall W32kReleaseDynamicModeChangeLockShared(__int64 a1, __int64 a2, __int64 a3)
{
  DxEngUnlockShareSem(a1, a2, a3);
}
