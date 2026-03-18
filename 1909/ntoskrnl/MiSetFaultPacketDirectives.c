/*
 * XREFs of MiSetFaultPacketDirectives @ 0x1402D2DE4
 * Callers:
 *     MiValidFault @ 0x1400A7010 (MiValidFault.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiValidVirtualizationFault @ 0x1402D2E04 (MiValidVirtualizationFault.c)
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
