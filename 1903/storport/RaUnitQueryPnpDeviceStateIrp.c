/*
 * XREFs of RaUnitQueryPnpDeviceStateIrp @ 0x1C006B2DC
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006AE0 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A830 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQueryPnpDeviceStateIrp(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 684) || *(_DWORD *)(a1 + 688) || *(_DWORD *)(a1 + 692) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (**(_BYTE **)(a1 + 104) & 0x1F) == 0x14 && !IsSMREnabled )
    *(_DWORD *)(a2 + 56) |= 2u;
  if ( (*(_BYTE *)(a1 + 162) & 0x20) != 0 )
    *(_DWORD *)(a2 + 56) |= 4u;
  return RaidCompleteRequestEx((PIRP)a2, 0, 0);
}
