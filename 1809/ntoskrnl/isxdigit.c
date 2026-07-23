/*
 * XREFs of isxdigit @ 0x140196140
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140166A20 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1402F3630 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1402F3770 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1402F3950 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1402F3D70 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl isxdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return _initiallocinfo.pctype[v1] & 0x80;
}
