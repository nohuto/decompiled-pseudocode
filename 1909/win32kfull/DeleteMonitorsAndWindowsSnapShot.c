/*
 * XREFs of DeleteMonitorsAndWindowsSnapShot @ 0x1C01DA240
 * Callers:
 *     <none>
 * Callees:
 *     CleanMonitorsAndWindowsSnapshot @ 0x1C01DA1B4 (CleanMonitorsAndWindowsSnapshot.c)
 */

__int64 __fastcall DeleteMonitorsAndWindowsSnapShot(__int64 a1)
{
  CleanMonitorsAndWindowsSnapshot(a1);
  return Win32FreePool(a1);
}
