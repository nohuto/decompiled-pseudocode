/*
 * XREFs of strtol @ 0x1401A288C
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x1403122B0 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x1401A265C (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
