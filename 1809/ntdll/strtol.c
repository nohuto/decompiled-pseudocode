/*
 * XREFs of strtol @ 0x1800953A0
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x18007FF60 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x180095170 (strtoxlX.c)
 */

int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  return strtoxlX(
           (__int64)&_initiallocalestructinfo,
           (unsigned __int8 *)String,
           (unsigned __int8 **)EndPtr,
           Radix,
           0,
           0);
}
