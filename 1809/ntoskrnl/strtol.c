/*
 * XREFs of strtol @ 0x14019803C
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x1402F3760 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     strtoxlX @ 0x140197E0C (strtoxlX.c)
 */

int __cdecl strtol(const char *Str, char **EndPtr, int Radix)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, (unsigned __int8 *)Str, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
