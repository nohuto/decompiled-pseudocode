/*
 * XREFs of ?NDIS_COUNT_POWER_TRANSITION@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0010C04
 * Callers:
 *     ndisPowerSuspendRequestComplete @ 0x1C0074E30 (ndisPowerSuspendRequestComplete.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0076180 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisDevicePowerOn @ 0x1C010A1E0 (ndisDevicePowerOn.c)
 *     ndisDevicePowerDown @ 0x1C010ABF0 (ndisDevicePowerDown.c)
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
