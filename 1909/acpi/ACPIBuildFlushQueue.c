/*
 * XREFs of ACPIBuildFlushQueue @ 0x1C0096E18
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C000CF60 (ACPIDetectFilterDevices.c)
 *     ACPIDetectPdoDevices @ 0x1C000D28C (ACPIDetectPdoDevices.c)
 *     ACPIDispatchIrpDepFilterQueryID @ 0x1C002B5E0 (ACPIDispatchIrpDepFilterQueryID.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C002B6B0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C002CDF4 (ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck.c)
 *     ACPITableUnload @ 0x1C005F5F0 (ACPITableUnload.c)
 * Callees:
 *     ACPIBuildSpecialSynchronizationRequest @ 0x1C0010BC0 (ACPIBuildSpecialSynchronizationRequest.c)
 */

__int64 __fastcall ACPIBuildFlushQueue(__int64 a1, char a2)
{
  unsigned int v4; // ebx
  struct _KEVENT Object; // [rsp+30h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v4 = ACPIBuildSpecialSynchronizationRequest(
         a1,
         (__int64)ACPIInitPowerRequestCompletion,
         (__int64)&Object,
         a2 != 0 ? 255 : 127,
         1);
  if ( v4 == 259 )
  {
    v4 = 0;
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  return v4;
}
