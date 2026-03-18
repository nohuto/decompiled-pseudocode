/*
 * XREFs of ACPIDevicePowerFlushQueue @ 0x1C000EE90
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000CF60 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D28C (ACPIDetectPdoDevices.c)
 *     ACPIBuildSurpriseRemovedExtension @ 0x1C002B2CC (ACPIBuildSurpriseRemovedExtension.c)
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C002B5E0 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C002B6B0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C002CDF4 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C005F5F0 (ACPITableUnload.c)
 * Callees:
 *     ACPIDeviceInternalSynchronizeRequest @ 0x1C000EF0C (ACPIDeviceInternalSynchronizeRequest.c)
 */

__int64 __fastcall ACPIDevicePowerFlushQueue(__int64 a1)
{
  unsigned int v2; // ebx
  struct _KEVENT Object; // [rsp+30h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v2 = ACPIDeviceInternalSynchronizeRequest(a1, &ACPIInitPowerRequestCompletion, &Object);
  if ( v2 == 259 )
  {
    v2 = 0;
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  return v2;
}
