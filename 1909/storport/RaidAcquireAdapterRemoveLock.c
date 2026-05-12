/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C0007168
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0006DB4 (RaidAdapterDeviceControlIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C0006FD0 (RaidpAdapterTimerDpcRoutine.c)
 *     StorpLogStatistics @ 0x1C000C4E8 (StorpLogStatistics.c)
 *     StorpLogPerAdapterStatistics @ 0x1C000FC88 (StorpLogPerAdapterStatistics.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0011B30 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C0011D70 (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C00126FC (RaidAdapterPnpIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0016E98 (RaidAdapterPowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C001713C (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPowerUpDevice @ 0x1C00172B8 (RaidAdapterPowerUpDevice.c)
 *     McGenControlCallbackV2 @ 0x1C001FE70 (McGenControlCallbackV2.c)
 *     RaUnitStorageFreeDumpInfo @ 0x1C004712C (RaUnitStorageFreeDumpInfo.c)
 *     RaWmiDispatchIrp @ 0x1C006F784 (RaWmiDispatchIrp.c)
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
