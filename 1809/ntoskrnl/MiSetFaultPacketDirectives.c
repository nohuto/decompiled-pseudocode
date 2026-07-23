/*
 * XREFs of MiSetFaultPacketDirectives @ 0x1402BC930
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiValidFault @ 0x1400B6D30 (MiValidFault.c)
 *     MiValidVirtualizationFault @ 0x1402BC950 (MiValidVirtualizationFault.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetFaultPacketDirectives(__int64 a1, int a2)
{
  if ( a2 == -1073741801 )
  {
    *(_DWORD *)(a1 + 80) |= 2u;
  }
  else if ( a2 == -1073740748 )
  {
    *(_DWORD *)(a1 + 80) |= 4u;
  }
}
