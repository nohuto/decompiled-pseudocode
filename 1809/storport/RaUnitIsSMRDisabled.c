/*
 * XREFs of RaUnitIsSMRDisabled @ 0x1C00144B8
 * Callers:
 *     RaidUnitGetCompatibleIds @ 0x1C001D800 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C001DAA8 (RaidUnitGetHardwareIds.c)
 *     RaUnitQueryPnpDeviceStateIrp @ 0x1C006A980 (RaUnitQueryPnpDeviceStateIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006A9D0 (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaUnitIsSMRDisabled(__int64 a1)
{
  __int64 result; // rax

  if ( (**(_BYTE **)(a1 + 104) & 0x1F) != 0x14 )
    return 0LL;
  result = 1LL;
  if ( IsSMREnabled )
  {
    if ( *(int *)(*(_QWORD *)(a1 + 24) + 4808LL) <= 1 && (*(_BYTE *)(a1 + 450) & 0x20) == 0 )
      return 0LL;
  }
  return result;
}
