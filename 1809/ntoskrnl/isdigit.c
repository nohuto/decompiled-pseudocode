/*
 * XREFs of isdigit @ 0x140195EF0
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140166900 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1402F3340 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1402F3480 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressA @ 0x1402F3660 (RtlIpv6StringToAddressA.c)
 *     RtlIpv6StringToAddressExA @ 0x1402F3A80 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl isdigit(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return _initiallocinfo.pctype[v1] & 4;
}
