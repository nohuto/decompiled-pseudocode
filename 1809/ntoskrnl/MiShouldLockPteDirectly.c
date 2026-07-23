/*
 * XREFs of MiShouldLockPteDirectly @ 0x140098600
 * Callers:
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiUnlockNestedPageTableWritePte @ 0x140098414 (MiUnlockNestedPageTableWritePte.c)
 *     MiIsPageTableLocked @ 0x14012DAEC (MiIsPageTableLocked.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiShouldLockPteDirectly(__int64 a1, unsigned __int64 a2)
{
  return (*(_BYTE *)(a1 + 184) & 7) == 0 || a2 < 0xFFFFF6FB7DBED000uLL || a2 > 0xFFFFF6FB7DBEDFFFuLL;
}
