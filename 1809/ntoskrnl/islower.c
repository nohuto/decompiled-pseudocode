/*
 * XREFs of islower @ 0x140195F20
 * Callers:
 *     RtlIpv4StringToAddressA @ 0x140166900 (RtlIpv4StringToAddressA.c)
 *     RtlEthernetStringToAddressA @ 0x1402F3340 (RtlEthernetStringToAddressA.c)
 *     RtlIpv4StringToAddressExA @ 0x1402F3480 (RtlIpv4StringToAddressExA.c)
 *     RtlIpv6StringToAddressExA @ 0x1402F3A80 (RtlIpv6StringToAddressExA.c)
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
