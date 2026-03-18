/*
 * XREFs of PnpBootPhaseComplete @ 0x140754ED4
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140769A5C (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005B100 (ExQueueWorkItem.c)
 *     PnpRequestDeviceAction @ 0x14015D184 (PnpRequestDeviceAction.c)
 *     PiDmaGuardInitialize @ 0x140189734 (PiDmaGuardInitialize.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExSubscribeWnfStateChange @ 0x14063F220 (ExSubscribeWnfStateChange.c)
 *     PpDevCfgProcessDevices @ 0x140754F9C (PpDevCfgProcessDevices.c)
 *     PiPnpRtlInit @ 0x140755F28 (PiPnpRtlInit.c)
 */

__int64 PnpBootPhaseComplete()
{
  int v0; // ebx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  v0 = PiPnpRtlInit(2LL);
  if ( v0 >= 0 )
  {
    PnpBootMode = 0;
    if ( PnpSetupOOBEInProgress
      && (int)ExSubscribeWnfStateChange(
                (int)&PnpSetupWnfSubscription,
                (int)&WNF_DEP_OOBE_COMPLETE,
                1,
                0,
                (__int64)PipUpdateSetupOobeCompleteWnfCallback,
                0LL) < 0 )
    {
      PnpSetupOOBEInProgress = 0;
    }
    v0 = PiDmaGuardInitialize(2);
    if ( v0 >= 0 )
    {
      PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 2, 0, 39LL, 0LL, 0LL, 0LL);
      v0 = PpDevCfgProcessDevices();
      if ( v0 >= 0 )
      {
        PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x6E697050u);
        if ( PoolWithTag )
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = PipUpdateDeviceProducts;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, NormalWorkQueue);
        }
        else
        {
          return (unsigned int)-1073741670;
        }
      }
    }
  }
  return (unsigned int)v0;
}
