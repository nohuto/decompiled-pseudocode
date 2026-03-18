/*
 * XREFs of ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck @ 0x1C002CDF4
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 * Callees:
 *     ACPIDevicePowerFlushQueue @ 0x1C000EE90 (ACPIDevicePowerFlushQueue.c)
 *     ACPIBuildScheduleDpc @ 0x1C0012064 (ACPIBuildScheduleDpc.c)
 *     ACPIBuildProcessDelayedDependencyShouldDelayRequest @ 0x1C002DE34 (ACPIBuildProcessDelayedDependencyShouldDelayRequest.c)
 *     ACPIBuildFlushQueue @ 0x1C0096E18 (ACPIBuildFlushQueue.c)
 */

void __fastcall ACPIBuildProcessDelayedDependencyExternalTriggerFilterPowerCheck(__int64 a1)
{
  char v2; // di
  KIRQL v3; // al
  __int64 *v4; // rbx
  KIRQL v5; // r14
  __int64 v6; // rdx
  __int64 *v7; // rsi

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&AcpiBuildQueueLock);
  v4 = (__int64 *)AcpiBuildDelayedDependencyList;
  v5 = v3;
  if ( (__int64 *)AcpiBuildDelayedDependencyList != &AcpiBuildDelayedDependencyList )
  {
    do
    {
      v7 = v4;
      v4 = (__int64 *)*v4;
      if ( v7[10] && !(unsigned __int8)ACPIBuildProcessDelayedDependencyShouldDelayRequest() )
      {
        _InterlockedCompareExchange((volatile signed __int32 *)v7 + 6, 4, 1);
        v2 = 1;
      }
    }
    while ( v4 != &AcpiBuildDelayedDependencyList );
    if ( v2 )
      ACPIBuildScheduleDpc();
  }
  KeReleaseSpinLock(&AcpiBuildQueueLock, v5);
  if ( v2 )
  {
    LOBYTE(v6) = 1;
    ACPIBuildFlushQueue(a1, v6);
    ACPIDevicePowerFlushQueue(a1);
  }
}
