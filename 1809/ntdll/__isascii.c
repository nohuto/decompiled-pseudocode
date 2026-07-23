/*
 * XREFs of __isascii @ 0x180090530
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007FEA0 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007FF70 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x180080310 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x1800803A0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800F7F00 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
