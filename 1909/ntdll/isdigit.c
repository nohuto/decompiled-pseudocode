/*
 * XREFs of isdigit @ 0x18008D5F0
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007AF00 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x18007AFD0 (RtlIpv6StringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007B4F0 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007B580 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800F5B40 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl isdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_18015F150[v1] & 4;
}
