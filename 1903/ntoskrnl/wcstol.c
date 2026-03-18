/*
 * XREFs of wcstol @ 0x1401A24A4
 * Callers:
 *     RtlIpv6StringToAddressW @ 0x140130460 (RtlIpv6StringToAddressW.c)
 *     DrvDbSplitDeviceIdDriverInfMatch @ 0x1406FAB04 (DrvDbSplitDeviceIdDriverInfMatch.c)
 * Callees:
 *     wcstoxlX @ 0x1401A228C (wcstoxlX.c)
 */

int __cdecl wcstol(const wchar_t *Str, wchar_t **EndPtr, int Radix)
{
  return wcstoxlX((__int64)&_initiallocalestructinfo, (wint_t *)Str, EndPtr, Radix, 0, 0);
}
