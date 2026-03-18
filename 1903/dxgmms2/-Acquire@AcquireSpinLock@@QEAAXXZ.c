/*
 * XREFs of ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011290
 * Callers:
 *     VidSchMarkDeviceAsError @ 0x1C0001010 (VidSchMarkDeviceAsError.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0004C60 (VidSchSignalSyncObjectsFromGpu.c)
 *     ?VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z @ 0x1C0010E78 (-VidSchiSuspendResumeHwContexts@@YAXPEAU_VIDSCH_DEVICE@@_N@Z.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0010FD4 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_DEVICE@@@@YAJPEAU_VIDSCH_DEVICE@@PEAU_VIDSCH_GLOBAL@@W4.c)
 *     VidSchiCleanupDeferredWaiterContext @ 0x1C001113C (VidSchiCleanupDeferredWaiterContext.c)
 *     VidSchDestroyDeviceSyncObject @ 0x1C00111C0 (VidSchDestroyDeviceSyncObject.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0011350 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_CONTEXT@@@@YAJPEAU_VIDSCH_CONTEXT@@PEAU_VIDSCH_GLOBAL@@.c)
 *     VidSchConfirmToken @ 0x1C0015FE0 (VidSchConfirmToken.c)
 *     VidSchExitIndependentFlip @ 0x1C00160F0 (VidSchExitIndependentFlip.c)
 *     VidSchTimeoutSyncObject @ 0x1C0016F7C (VidSchTimeoutSyncObject.c)
 *     ?VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z @ 0x1C00178EC (-VidSchFlushQueuePacketsInternal@@YAXPEAU_VIDSCH_GLOBAL@@W4_VIDSCH_FLUSH_PACKET_TYPE@@IE_N@Z.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002BAFC (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002E490 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 *     VidSchiProcessCrossAdapterSignaledSyncObjects @ 0x1C002EBA0 (VidSchiProcessCrossAdapterSignaledSyncObjects.c)
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1C002F1BC (VidSchiProcessPeriodicNotificationCookie.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C002F844 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C003133C (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0031670 (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031C70 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031D9C (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C0032B20 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchSetMonitorPowerState @ 0x1C00332C0 (VidSchSetMonitorPowerState.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C00336D0 (VidSchSignalSyncObjectsFromCpu.c)
 *     ?VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z @ 0x1C0035A9C (-VidSchiIsDeviceSuspended@@YA_NPEAU_VIDSCH_DEVICE@@@Z.c)
 *     ?VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035CE0 (-VidSchiRemoveHwQueueFromSyncPoints@@YAXPEAUVIDSCH_HW_QUEUE@@@Z.c)
 *     ?VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0035FDC (-VidSchiRundownHardwareScheduledContexts@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0037DA0 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0038660 (VidSchiCreateNodeSchedulingLog.c)
 *     VidSchiProcessGpuEngineTimeoutDpc @ 0x1C0038884 (VidSchiProcessGpuEngineTimeoutDpc.c)
 *     VidSchiProcessHwQueuePageFaultedDpc @ 0x1C00388EC (VidSchiProcessHwQueuePageFaultedDpc.c)
 *     VidSchiProcessMonitoredFenceSignaledDpc @ 0x1C00391B8 (VidSchiProcessMonitoredFenceSignaledDpc.c)
 *     VidSchiProcessSuspendContextCompletedDpc @ 0x1C0039260 (VidSchiProcessSuspendContextCompletedDpc.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x1C0039AC0 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C0039F6C (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C0039FD4 (VidSchiCompleteAllPendingCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall AcquireSpinLock::Acquire(Acquire *this)
{
  struct _KLOCK_QUEUE_HANDLE *v2; // rdx
  KSPIN_LOCK *v3; // rcx

  v2 = (struct _KLOCK_QUEUE_HANDLE *)((char *)this + 8);
  v3 = *(KSPIN_LOCK **)this;
  if ( *((_BYTE *)this + 33) )
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v3, v2);
  else
    KeAcquireInStackQueuedSpinLock(v3, v2);
  *((_BYTE *)this + 32) = 1;
}
