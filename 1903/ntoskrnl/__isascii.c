/*
 * XREFs of __isascii @ 0x1401A06CC
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14016CEC0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x140311F90 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1403120D0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1403122B0 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1403126D0 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl _isascii(int C)
{
  return (unsigned int)C < 0x80;
}
