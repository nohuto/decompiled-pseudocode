/*
 * XREFs of islower @ 0x18008CFB0
 * Callers:
 *     RtlIpv6StringToAddressExA @ 0x18007A860 (RtlIpv6StringToAddressExA.c)
 *     RtlIpv4StringToAddressExA @ 0x18007AE50 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv4StringToAddressA @ 0x18007AEE0 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1800F5A60 (RtlEthernetStringToAddressA.c)
 * Callees:
 *     <none>
 */

int __cdecl islower(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_18015F150[v1] & 2;
}
