/*
 * XREFs of ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C00143F4
 * Callers:
 *     ndisWdfNotifyDevicePower @ 0x1C00A7114 (ndisWdfNotifyDevicePower.c)
 *     ndisPowerSuspendRequestComplete @ 0x1C00B8860 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C00B9D50 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisDevicePowerDown @ 0x1C012A1D0 (ndisDevicePowerDown.c)
 *     ndisDevicePowerOn @ 0x1C012A7C0 (ndisDevicePowerOn.c)
 * Callees:
 *     <none>
 */

void __fastcall NDIS_COUNT_POWER_TRANSITION(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  _NDIS_PHYSICAL_PERFORMANCE_COUNTERS *PhysicalPerformanceCounters; // r8

  PhysicalPerformanceCounters = a1->PhysicalPerformanceCounters;
  if ( PhysicalPerformanceCounters )
  {
    if ( a2 > 1 )
    {
      ++PhysicalPerformanceCounters->LowPowerTransitions;
      PhysicalPerformanceCounters = a1->PhysicalPerformanceCounters;
    }
    PhysicalPerformanceCounters->DevicePowerState = a2 - 1;
  }
}
