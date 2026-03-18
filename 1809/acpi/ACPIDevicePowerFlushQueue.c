/*
 * XREFs of ACPIDevicePowerFlushQueue @ 0x1C001C00C
 * Callers:
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C00102F0 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C00103C0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIDetectFilterDevices @ 0x1C0018C64 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C0018F84 (ACPIDetectPdoDevices.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C002C4A4 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002D8F4 (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPITableUnload @ 0x1C005D7C0 (ACPITableUnload.c)
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C001C204 (ACPIDeviceInternalSynchronizeRequest.c)
 */

__int64 __fastcall ACPIDevicePowerFlushQueue(__int64 a1)
{
  unsigned int v2; // ebx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v2 = ACPIDeviceInternalSynchronizeRequest(a1, &ACPIInitPowerRequestCompletion, &Event);
  if ( v2 == 259 )
  {
    v2 = 0;
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return v2;
}
