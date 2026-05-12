/*
 * XREFs of RaidAcquireAdapterRemoveLock @ 0x1C00062A4
 * Callers:
 *     StorpLogPerAdapterStatistics @ 0x1C00028A4 (StorpLogPerAdapterStatistics.c)
 *     StorpLogStatistics @ 0x1C0002A08 (StorpLogStatistics.c)
 *     RaidAdapterDeviceControlIrp @ 0x1C0003014 (RaidAdapterDeviceControlIrp.c)
 *     RaidpAdapterTimerDpcRoutine @ 0x1C00032C0 (RaidpAdapterTimerDpcRoutine.c)
 *     RaidAdapterQuerySystemPowerIrp @ 0x1C0013464 (RaidAdapterQuerySystemPowerIrp.c)
 *     RaidAdapterSetSystemPowerIrp @ 0x1C001369C (RaidAdapterSetSystemPowerIrp.c)
 *     RaidAdapterPowerUpDevice @ 0x1C0013770 (RaidAdapterPowerUpDevice.c)
 *     RaidAdapterPowerIrp @ 0x1C0013F68 (RaidAdapterPowerIrp.c)
 *     RaidAdapterPowerDownDevice @ 0x1C001420C (RaidAdapterPowerDownDevice.c)
 *     RaidAdapterPnpIrp @ 0x1C0016FAC (RaidAdapterPnpIrp.c)
 *     McGenControlCallbackV2 @ 0x1C00232E0 (McGenControlCallbackV2.c)
 *     RaSqmLogAdapterStatistics @ 0x1C003C3D8 (RaSqmLogAdapterStatistics.c)
 *     StorpQueueWorkItem @ 0x1C00411D8 (StorpQueueWorkItem.c)
 *     RaWmiDispatchIrp @ 0x1C006FC94 (RaWmiDispatchIrp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidAcquireAdapterRemoveLock(__int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !ExAcquireRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 272)) )
    return (unsigned int)-1073741738;
  return v1;
}
