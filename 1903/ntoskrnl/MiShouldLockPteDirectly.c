/*
 * XREFs of MiShouldLockPteDirectly @ 0x14005E490
 * Callers:
 *     MiUnlockNestedPageTableWritePte @ 0x14005E2E0 (MiUnlockNestedPageTableWritePte.c)
 *     MiIsPageTableLocked @ 0x14012AC00 (MiIsPageTableLocked.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiShouldLockPteDirectly(__int64 a1, unsigned __int64 a2)
{
  return (*(_BYTE *)(a1 + 184) & 7) == 0 || a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL;
}
