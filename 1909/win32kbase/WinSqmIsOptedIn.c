/*
 * XREFs of WinSqmIsOptedIn @ 0x1C011E6F0
 * Callers:
 *     <none>
 * Callees:
 *     WinSqmIsOptedInEx @ 0x1C00A4730 (WinSqmIsOptedInEx.c)
 */

_BOOL8 WinSqmIsOptedIn()
{
  return WinSqmIsOptedInEx(1);
}
