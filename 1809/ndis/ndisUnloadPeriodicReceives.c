/*
 * XREFs of ndisUnloadPeriodicReceives @ 0x1C0129F60
 * Callers:
 *     ndisInitializePeriodicReceives @ 0x1C0126C84 (ndisInitializePeriodicReceives.c)
 * Callees:
 *     NdisReleaseRWLock @ 0x1C0005F00 (NdisReleaseRWLock.c)
 *     NdisAcquireRWLockWrite @ 0x1C0006370 (NdisAcquireRWLockWrite.c)
 *     NdisFreeNetBufferListPool @ 0x1C00132E0 (NdisFreeNetBufferListPool.c)
 *     NdisFreeRWLock @ 0x1C00255E0 (NdisFreeRWLock.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

void ndisUnloadPeriodicReceives()
{
  void *v0; // rbx
  void *SystemArgument1; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  if ( WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink )
  {
    NdisAcquireRWLockWrite((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState, 0);
    SystemArgument1 = WPP_MAIN_CB.Dpc.SystemArgument1;
    if ( WPP_MAIN_CB.Dpc.SystemArgument1 )
    {
      WPP_MAIN_CB.Dpc.SystemArgument1 = 0LL;
      v0 = SystemArgument1;
    }
    if ( LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) == 1 )
    {
      LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) = 0;
      ExDeleteNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead);
      ExDeleteNPagedLookasideList(&Lookaside);
      memset(&WPP_MAIN_CB.DeviceLock.Header.WaitListHead, 0, 0x100uLL);
    }
    NdisReleaseRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, &LockState);
    NdisFreeRWLock((PNDIS_RW_LOCK_EX)WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink);
    if ( v0 )
      NdisFreeNetBufferListPool(v0);
  }
  if ( ndisPerCpuPoisonPills )
  {
    ExFreePoolWithTag(ndisPerCpuPoisonPills, 0);
    ndisPerCpuPoisonPills = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.Dpc.DeferredContext, 0);
    WPP_MAIN_CB.Dpc.DeferredContext = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.DeferredRoutine )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.Dpc.DeferredRoutine, 0);
    WPP_MAIN_CB.Dpc.DeferredRoutine = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.ProcessorHistory )
  {
    ExFreePoolWithTag((PVOID)WPP_MAIN_CB.Dpc.ProcessorHistory, 0);
    WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
  }
  if ( WPP_MAIN_CB.Dpc.DpcListEntry.Next )
  {
    ExFreePoolWithTag(WPP_MAIN_CB.Dpc.DpcListEntry.Next, 0);
    WPP_MAIN_CB.Dpc.DpcListEntry.Next = 0LL;
  }
}
