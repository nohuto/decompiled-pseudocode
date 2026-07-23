/*
 * XREFs of __isascii @ 0x14019603C
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140166A20 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1402F3630 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1402F3770 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1402F3950 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1402F3D70 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
