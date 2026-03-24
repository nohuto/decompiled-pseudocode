/*
 * XREFs of __isascii @ 0x140195EFC
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140166920 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1402F3440 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1402F3580 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1402F3760 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1402F3B80 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
