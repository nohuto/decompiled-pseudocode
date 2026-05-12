/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C0007118
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0006D64 (RaidAdapterDeviceControlIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0006F80 (RaidpAdapterTimerDpcRoutine.c)
 *     StorpLogStatistics @ 0x1C000C494 (StorpLogStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000E660 (StorpLogPerAdapterStatistics.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011990 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011BD0 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0012660 (RaidAdapterPnpIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0016F48 (RaidAdapterPowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C00171EC (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0017368 (RaidAdapterPowerUpDevice.c)
 *     McGenControlCallbackV2 @ 0x1C001F490 (McGenControlCallbackV2.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1C0045D3C (RaUnitStorageFreeDumpInfo.c)
 *     RaWmiDispatchIrp @ 0x1C006E524 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAcquireAdapterRemoveLock(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 256)) )
    return (unsigned int)-1073741738;
  return v1;
}
