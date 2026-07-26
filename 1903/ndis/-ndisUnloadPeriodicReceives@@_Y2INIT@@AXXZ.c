/*
 * XREFs of ?ndisUnloadPeriodicReceives@@_Y2INIT@@AXXZ @ 0x1C0147FA0
 * Callers:
 *     ?ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ @ 0x1C0144608 (-ndisInitializePeriodicReceives@@_Y2INIT@@AHXZ.c)
 * Callees:
 *     NdisAcquireRWLockWrite @ 0x1C000E020 (NdisAcquireRWLockWrite.c)
 *     NdisReleaseRWLock @ 0x1C000EBE0 (NdisReleaseRWLock.c)
 *     NdisFreeNetBufferListPool @ 0x1C0021AA0 (NdisFreeNetBufferListPool.c)
 *     NdisFreeRWLock @ 0x1C003E2B0 (NdisFreeRWLock.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

void ndisUnloadPeriodicReceives(void)
{
  void *v0; // rbx
  void *SystemArgument1; // rax
  struct _LOCK_STATE_EX LockState; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  *(_WORD *)&LockState.OldIrql = 0;
  LockState.Flags = 0;
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
