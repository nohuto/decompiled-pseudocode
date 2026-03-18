/*
 * XREFs of strtol @ 0x1401A2FAC
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x140311D00 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x1401A2D7C (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
