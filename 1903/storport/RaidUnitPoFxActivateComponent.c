/*
 * XREFs of RaidUnitPoFxActivateComponent @ 0x1C0009408
 * Callers:
 *     RaUnitStoragePowerActive @ 0x1C0001844 (RaUnitStoragePowerActive.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0005D68 (RaUnitScsiMiniportIoctl.c)
 *     RaidUnitStartDeviceBusy @ 0x1C00093C4 (RaidUnitStartDeviceBusy.c)
 *     RaidPnPPassToMiniPort @ 0x1C00169C8 (RaidPnPPassToMiniPort.c)
 *     RaidUnitPoFxActivateComponentFromMiniport @ 0x1C003A4EC (RaidUnitPoFxActivateComponentFromMiniport.c)
 *     RaidUnitMaintenanceTime @ 0x1C003FD44 (RaidUnitMaintenanceTime.c)
 *     StorPortUnitPoFxWaitWakeCompletion @ 0x1C0040C00 (StorPortUnitPoFxWaitWakeCompletion.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006B340 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C006E888 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000950C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001ED80 (RaidAdapterPoFxActivateComponent.c)
 */

char __fastcall RaidUnitPoFxActivateComponent(__int64 a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // rbp
  unsigned int v6; // r14d
  char v9; // si
  __int64 v10; // rcx

  v4 = *(_QWORD *)(a1 + 24);
  v6 = a3;
  v9 = 1;
  if ( a4 )
    *a4 &= 0xFCu;
  if ( *(_QWORD *)(v4 + 5024) )
  {
    v9 = RaidAdapterPoFxActivateComponent(v4, 0LL, a3);
    if ( a4 )
      *a4 |= 2u;
  }
  if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
  {
    if ( *(char *)(v4 + 108) < 0 )
    {
      _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1784));
      if ( (*(_BYTE *)(v4 + 109) & 1) != 0 )
        _InterlockedIncrement64((volatile signed __int64 *)(a1 + 1792));
    }
    v10 = *(_QWORD *)(a1 + 1488);
    if ( (*(_DWORD *)(v10 + 140) & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 136));
      v10 = *(_QWORD *)(a1 + 1488);
    }
    if ( *(_DWORD *)(a1 + 684) && (v6 & 1) != 0 )
      v6 |= 4u;
    PoFxActivateComponent(*(_QWORD *)v10, a2, v6);
    v9 = (*(_DWORD *)(*(_QWORD *)(a1 + 1488) + 32LL) & 2) != 0;
    if ( a4 )
      *a4 |= 1u;
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1480));
  }
  return v9;
}
