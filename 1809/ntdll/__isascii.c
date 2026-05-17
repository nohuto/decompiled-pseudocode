/*
 * XREFs of __isascii @ 0x180090520
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007FE90 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007FF60 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x180080300 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x180080390 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800F7F00 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
