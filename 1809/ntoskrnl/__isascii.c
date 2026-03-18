/*
 * XREFs of __isascii @ 0x140195EDC
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140166900 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1402F3340 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1402F3480 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1402F3660 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1402F3A80 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
