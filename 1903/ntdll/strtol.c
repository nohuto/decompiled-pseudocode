/*
 * XREFs of strtol @ 0x180091C40
 * Callers:
 *     RtlIpv6StringToAddressA @ 0x18007A930 (RtlIpv6StringToAddressA.c)
 * Callees:
 *     sub_180091A10 @ 0x180091A10 (sub_180091A10.c)
 */

int __cdecl strtol(const char *String, char **EndPtr, int Radix)
{
  return sub_180091A10((__int64)&off_180118AE8, (unsigned __int8 *)String, (unsigned __int8 **)EndPtr, Radix, 0, 0);
}
