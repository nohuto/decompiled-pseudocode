/*
 * XREFs of islower @ 0x1401A0E30
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x14016D5B0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1403119E0 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x140311B20 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x140312120 (RtlIpv6StringToAddressExA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return _initiallocinfo.pctype[v1] & 2;
}
