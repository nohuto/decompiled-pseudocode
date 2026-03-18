/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x1400770D0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1400102C0 (FsRtlpRequestShareableOplock.c)
 *     IopCheckVpbMounted @ 0x140044190 (IopCheckVpbMounted.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     CcGetVacbMiss @ 0x140076EB0 (CcGetVacbMiss.c)
 *     IopInterlockedIncrementUlong @ 0x14007AAB4 (IopInterlockedIncrementUlong.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400887D0 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400889DC (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x140088A70 (IopGetDevicePDO.c)
 *     FsRtlUninitializeOplock @ 0x140089820 (FsRtlUninitializeOplock.c)
 *     CcGetVirtualAddress @ 0x1400B6060 (CcGetVirtualAddress.c)
 *     RawInitiateDeleteVolume @ 0x1400D4F78 (RawInitiateDeleteVolume.c)
 *     IoBoostThreadIoPriority @ 0x1400EB18C (IoBoostThreadIoPriority.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1400ED890 (IoGetAttachedDeviceReferenceWithTag.c)
 *     PnpGetRelatedTargetDevice @ 0x1400ED9FC (PnpGetRelatedTargetDevice.c)
 *     IoDeleteDevice @ 0x1400F0E80 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1400F10C4 (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x1400F1280 (IopInsertRemoveDevice.c)
 *     IopQueryVpbFlagsSafe @ 0x1400F1654 (IopQueryVpbFlagsSafe.c)
 *     IoDetachDevice @ 0x1400F16B0 (IoDetachDevice.c)
 *     IopMountInitializeVpb @ 0x1400F1734 (IopMountInitializeVpb.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1401037BC (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140106834 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140107CD4 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlNotifySetCancelRoutine @ 0x140119A24 (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlCancelNotify @ 0x140119B30 (FsRtlCancelNotify.c)
 *     IopVerifyDeviceObjectOnStack @ 0x140123120 (IopVerifyDeviceObjectOnStack.c)
 *     IoCancelIrp @ 0x140128400 (IoCancelIrp.c)
 *     CcExtendVacbArray @ 0x140130794 (CcExtendVacbArray.c)
 *     FsRtlpOplockBreakToII @ 0x140130D2C (FsRtlpOplockBreakToII.c)
 *     IoReleaseVpbSpinLock @ 0x1401389F0 (IoReleaseVpbSpinLock.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x140139CDC (IoGetLowerDeviceObjectWithTag.c)
 *     IoGetDriverObjectExtension @ 0x140139E50 (IoGetDriverObjectExtension.c)
 *     FsRtlUninitializeFileLock @ 0x14013C1D0 (FsRtlUninitializeFileLock.c)
 *     WmipNotificationIrpCancel @ 0x14013C690 (WmipNotificationIrpCancel.c)
 *     IopCheckStackForTransactionSupport @ 0x14013CF28 (IopCheckStackForTransactionSupport.c)
 *     FsRtlpOplockBreakToNone @ 0x14013D710 (FsRtlpOplockBreakToNone.c)
 *     IopInterlockedRemoveHeadList @ 0x140154168 (IopInterlockedRemoveHeadList.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x140159274 (PpMarkDeviceStackExtensionFlag.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016FC40 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpMarkDeviceForRemove @ 0x140171030 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x14017111C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140171178 (PnpUnlockMountableDevice.c)
 *     IoGetDiskDeviceObject @ 0x1401713D0 (IoGetDiskDeviceObject.c)
 *     IopInterlockedDecrementUlong @ 0x140171DEC (IopInterlockedDecrementUlong.c)
 *     PnpIsChainDereferenced @ 0x140172DE8 (PnpIsChainDereferenced.c)
 *     PnpRemoveLockedDeviceNode @ 0x140173204 (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x14017355C (PnpFindMountableDevice.c)
 *     PopQueueQuerySetIrp @ 0x140173BA4 (PopQueueQuerySetIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1401748C4 (FsRtlpRequestExclusiveOplock.c)
 *     IopSetFsRegistrationInProgress @ 0x14017738C (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x140177C20 (IoEnumerateDeviceObjectList.c)
 *     IopCsqCancelRoutine @ 0x1401805B0 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x140181EB4 (IopResurrectDriver.c)
 *     IopCheckUnloadDriver @ 0x14018E1D8 (IopCheckUnloadDriver.c)
 *     CcInitializePartitionVacbs @ 0x1401912B8 (CcInitializePartitionVacbs.c)
 *     CcAllocateInitializeVacbArray @ 0x140191460 (CcAllocateInitializeVacbArray.c)
 *     IopInterlockedInsertHeadList @ 0x1401965FC (IopInterlockedInsertHeadList.c)
 *     IoAllocateDriverObjectExtension @ 0x140197CC0 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedInsertTailList @ 0x140199E2C (IopInterlockedInsertTailList.c)
 *     CcDereferenceVacbArray @ 0x14027DE0C (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x14027DEB4 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E314 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x14027F010 (CcUninitializePartitionVacbs.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140282BB0 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140283268 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1402835B0 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x140283690 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x14028377C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140283A1C (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140283B1C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140283BBC (FsRtlpWaitOnIrp.c)
 *     IopDisassociateThreadIrp @ 0x140293210 (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x140293620 (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x140293A34 (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x140297F30 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x140298B60 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x140298ED4 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacket @ 0x1402991F8 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x1402992B8 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14029E0D8 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x14029EA10 (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x14029ED80 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x1402A0CC0 (PiSwIrpCancelStartCreate.c)
 *     IopEliminateBogusConflict @ 0x1402A17DC (IopEliminateBogusConflict.c)
 *     RawCheckForDeleteVolume @ 0x14030A468 (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x14030A500 (RawVerifyVolume.c)
 *     IoUnregisterShutdownNotification @ 0x1405A7BA0 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140974ABC (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140974B20 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140974B78 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x140974C20 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140974C84 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x140974D98 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x140974DF8 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x14007AE50 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A7228 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall KeReleaseQueuedSpinLock(KSPIN_LOCK_QUEUE_NUMBER Number, KIRQL OldIrql)
{
  volatile signed __int64 **v3; // rbx
  __int64 v4; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v7; // eax
  struct _KPRCB *v8; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 16 * Number);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v3, retaddr);
    goto LABEL_4;
  }
  _m_prefetchw(v3);
  v4 = (__int64)*v3;
  if ( *v3 )
    goto LABEL_8;
  if ( v3 != (volatile signed __int64 **)_InterlockedCompareExchange64(v3[1], 0LL, (signed __int64)v3) )
  {
    v4 = KxWaitForLockChainValid(v3);
LABEL_8:
    *v3 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v4 + 8), 1uLL);
  }
LABEL_4:
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v7 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v7;
      if ( !v7 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && OldIrql < 2u )
  {
    v8 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v8->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v8);
  }
  __writecr8(OldIrql);
}
