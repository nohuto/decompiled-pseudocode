/*
 * XREFs of __isascii @ 0x1401A0DEC
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14016D5B0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1403119E0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140311B20 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x140311D00 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x140312120 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
