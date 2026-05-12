/*
 * XREFs of RaidUnitPoFxIdleComponent @ 0x1C00065D8
 * Callers:
 *     RaUnitStoragePowerIdle @ 0x1C00019D4 (RaUnitStoragePowerIdle.c)
 *     RaUnitScsiMiniportIoctl @ 0x1C0005DB8 (RaUnitScsiMiniportIoctl.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C0010CB8 (StorPortUnitPoFxD0Completion.c)
 *     RaidPnPPassToMiniPort @ 0x1C0016918 (RaidPnPPassToMiniPort.c)
 *     RaUnitDeregisterFromIdleDetection @ 0x1C0019D8C (RaUnitDeregisterFromIdleDetection.c)
 *     RaidUnitPoFxIdleComponentFromMiniport @ 0x1C00388B4 (RaidUnitPoFxIdleComponentFromMiniport.c)
 *     RaidUnitEndMaintenanceTime @ 0x1C0040FB0 (RaidUnitEndMaintenanceTime.c)
 *     StorPortUnitPowerRequiredStep2 @ 0x1C0042608 (StorPortUnitPowerRequiredStep2.c)
 *     RaidUnitEndDeviceBusy @ 0x1C004884C (RaidUnitEndDeviceBusy.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C006C240 (RaUnitQueryCapabilitiesIrp.c)
 *     RaWmiPassToMiniPort @ 0x1C006FAE8 (RaWmiPassToMiniPort.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000955C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001FB94 (RaidAdapterPoFxIdleComponent.c)
 */

bool __fastcall RaidUnitPoFxIdleComponent(__int64 a1, unsigned int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v4; // rbp
  char v5; // r15
  bool v6; // di
  bool v10; // bl
  int v12; // edi
  char v13; // cl

  v4 = *(_QWORD *)(a1 + 24);
  v5 = 0;
  v6 = 0;
  v10 = 1;
  if ( !a4 || (v10 = (*a4 & 2) != 0, (*a4 & 1) != 0) )
  {
    if ( (unsigned __int8)RaidUnitCheckAndAcquirePoFx(a1) )
    {
      PoFxIdleComponent(**(_QWORD **)(a1 + 1744), a2, a3);
      v5 = 1;
      v12 = *(_DWORD *)(*(_QWORD *)(a1 + 1744) + 32LL);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1736));
      v6 = (v12 & 2) == 0;
    }
  }
  if ( v10 )
  {
    if ( *(_QWORD *)(v4 + 5024) )
    {
      v13 = RaidAdapterPoFxIdleComponent(v4, 0LL, a3);
      if ( !v5 )
        return v13;
    }
  }
  return v6;
}
