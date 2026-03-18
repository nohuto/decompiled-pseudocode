/*
 * XREFs of ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474
 * Callers:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0003AA0 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0011338 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C00114C4 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C001161C (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchDestroyDeviceSyncObject @ 0x1C00116D0 (VidSchDestroyDeviceSyncObject.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0011874 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchConfirmToken @ 0x1C0016C10 (VidSchConfirmToken.c)
 *     VidSchExitIndependentFlip @ 0x1C0016D20 (VidSchExitIndependentFlip.c)
 *     VidSchTimeoutSyncObject @ 0x1C0018260 (VidSchTimeoutSyncObject.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C001843C (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002B418 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002DC20 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiExecutePostPresentAtPassiveLevel @ 0x1C002DFD0 (VidSchiExecutePostPresentAtPassiveLevel.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002E404 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C002EA14 (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C002EE60 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0030B0C (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0030E3C (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031430 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031554 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C00322D0 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0032CB0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0035098 (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00352D0 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037360 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0037C30 (VidSchiCreateNodeSchedulingLog.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C0037E50 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C0037EB0 (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C0038778 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0038814 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C003907C (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C003951C (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003957C (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireSpinLock::Release(AcquireSpinLock *this)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rcx

  if ( *((_BYTE *)this + 32) )
  {
    v2 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
    if ( *((_BYTE *)this + 33) )
      KeReleaseInStackQueuedSpinLockFromDpcLevel(v2);
    else
      KeReleaseInStackQueuedSpinLock(v2);
    *((_BYTE *)this + 32) = 0;
  }
}
