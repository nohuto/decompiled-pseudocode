/*
 * XREFs of WinSqmIsOptedIn @ 0x1C0091B00
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     WinSqmIsOptedInEx @ 0x1C0091B20 (WinSqmIsOptedInEx.c)
 */

__int64 WinSqmIsOptedIn()
{
  return WinSqmIsOptedInEx(1LL);
}
