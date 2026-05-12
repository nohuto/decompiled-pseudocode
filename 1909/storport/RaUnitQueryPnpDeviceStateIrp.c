/*
 * XREFs of RaUnitQueryPnpDeviceStateIrp @ 0x1C006C1DC
 * Callers:
 *     RaUnitPnpIrp @ 0x1C0006B30 (RaUnitPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 */

__int64 __fastcall RaUnitQueryPnpDeviceStateIrp(__int64 a1, __int64 a2)
{
  if ( *(_DWORD *)(a1 + 940) || *(_DWORD *)(a1 + 944) || *(_DWORD *)(a1 + 948) )
    *(_DWORD *)(a2 + 56) |= 0x20u;
  if ( (**(_BYTE **)(a1 + 104) & 0x1F) == 0x14 && !IsSMREnabled )
    *(_DWORD *)(a2 + 56) |= 2u;
  if ( (*(_BYTE *)(a1 + 450) & 0x20) != 0 )
    *(_DWORD *)(a2 + 56) |= 4u;
  return RaidCompleteRequestEx((PIRP)a2, 0, 0);
}
