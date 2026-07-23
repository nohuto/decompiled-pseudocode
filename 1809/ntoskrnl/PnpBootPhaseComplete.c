/*
 * XREFs of PnpBootPhaseComplete @ 0x14073B5C0
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x1407467A4 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     PnpRequestDeviceAction @ 0x14015F104 (PnpRequestDeviceAction.c)
 *     PiDmaGuardInitialize @ 0x140181E28 (PiDmaGuardInitialize.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PpDevCfgProcessDevices @ 0x14073B67C (PpDevCfgProcessDevices.c)
 *     PiPnpRtlInit @ 0x14073B710 (PiPnpRtlInit.c)
 */

__int64 PnpBootPhaseComplete()
{
  int v0; // ebx
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax

  v0 = PiPnpRtlInit(2LL);
  if ( v0 >= 0 )
  {
    PnpBootMode = 0;
    v0 = PiDmaGuardInitialize(2);
    if ( v0 >= 0 )
    {
      PnpRequestDeviceAction(*(PVOID *)(IopRootDeviceNode + 32), 2, 0, 39LL, 0LL, 0LL, 0LL);
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
