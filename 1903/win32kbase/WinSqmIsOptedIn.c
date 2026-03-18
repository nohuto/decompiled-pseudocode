/*
 * XREFs of WinSqmIsOptedIn @ 0x1C0121060
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmIsOptedInEx @ 0x1C00A5780 (WinSqmIsOptedInEx.c)
 */

_BOOL8 WinSqmIsOptedIn()
{
  return WinSqmIsOptedInEx(1);
}
