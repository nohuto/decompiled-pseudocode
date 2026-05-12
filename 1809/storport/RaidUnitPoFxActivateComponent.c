/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x1C0007094
 * Callers:
 *     RaUnitScsiMiniportIoctl @ 0x1C0007610 (RaUnitScsiMiniportIoctl.c)
 *     RaidPnPPassToMiniPort @ 0x1C00144F4 (RaidPnPPassToMiniPort.c)
 *     RaidUnitStartDeviceBusy @ 0x1C003D4F0 (RaidUnitStartDeviceBusy.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C003DFA4 (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitMaintenanceTime @ 0x1C00430A4 (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0044220 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaUnitStoragePowerActive @ 0x1C0048A14 (RaUnitStoragePowerActive.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006A9D0 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C006FFF4 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0022598 (RaidAdapterPoFxActivateComponent.c)
 */

char __fastcall RaidUnitPoFxActivateComponent(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rbp
  char v9; // si
  __int64 v11; // rcx

  v4 = *(_QWORD *)(a1 + 24);
  v9 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 5152) )
  {
    v9 = RaidAdapterPoFxActivateComponent(v4, 0LL);
    if ( a4 )
      *a4 |= 2u;
  }
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( *(char *)(v4 + 108) < 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2040));
      if ( (*(_BYTE *)(v4 + 109) & 1) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 2048));
    }
    v11 = *(_QWORD *)(a1 + 1744);
    if ( (*(_DWORD *)(v11 + 140) & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 136));
      v11 = *(_QWORD *)(a1 + 1744);
    }
    if ( *(_DWORD *)(a1 + 916) && (a3 & 1) != 0 )
      a3 |= 4u;
    PoFxActivateComponent(*(_QWORD *)v11, a2, a3);
    v9 = (*(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL) & 2) != 0;
    if ( a4 )
      *a4 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
  }
  return v9;
}
