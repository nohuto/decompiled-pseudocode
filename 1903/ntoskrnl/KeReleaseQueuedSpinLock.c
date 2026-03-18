/*
 * XREFs of KeReleaseQueuedSpinLock @ 0x140076E60
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x140010090 (FsRtlpRequestShareableOplock.c)
 *     IopCheckVpbMounted @ 0x1400440F0 (IopCheckVpbMounted.c)
 *     IopfCompleteRequest @ 0x1400668F0 (IopfCompleteRequest.c)
 *     CcGetVacbMiss @ 0x140076C40 (CcGetVacbMiss.c)
 *     IopInterlockedIncrementUlong @ 0x14007A6F4 (IopInterlockedIncrementUlong.c)
 *     FsRtlUninitializeOplock @ 0x140088520 (FsRtlUninitializeOplock.c)
 *     PnpGetRelatedTargetDevice @ 0x1400996E0 (PnpGetRelatedTargetDevice.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140099A40 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoDeleteDevice @ 0x1400B3E60 (IoDeleteDevice.c)
 *     IopCompleteUnloadOrDelete @ 0x1400B40A4 (IopCompleteUnloadOrDelete.c)
 *     IopInsertRemoveDevice @ 0x1400B4260 (IopInsertRemoveDevice.c)
 *     IopQueryVpbFlagsSafe @ 0x1400B5838 (IopQueryVpbFlagsSafe.c)
 *     IoDetachDevice @ 0x1400B5890 (IoDetachDevice.c)
 *     IopMountInitializeVpb @ 0x1400B5914 (IopMountInitializeVpb.c)
 *     RawInitiateDeleteVolume @ 0x1400B59C8 (RawInitiateDeleteVolume.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400B6CDC (FsRtlpCancelOplockRHIrp.c)
 *     CcGetVirtualAddress @ 0x1400D61E0 (CcGetVirtualAddress.c)
 *     IoBoostThreadIoPriority @ 0x1400E61EC (IoBoostThreadIoPriority.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400EBD70 (IopAttachDeviceToDeviceStackSafe.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x1400EBF7C (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IopGetDevicePDO @ 0x1400EC010 (IopGetDevicePDO.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140102F94 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140104434 (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlNotifySetCancelRoutine @ 0x14011B5F4 (FsRtlNotifySetCancelRoutine.c)
 *     FsRtlCancelNotify @ 0x14011B700 (FsRtlCancelNotify.c)
 *     IopVerifyDeviceObjectOnStack @ 0x1401222D0 (IopVerifyDeviceObjectOnStack.c)
 *     IoCancelIrp @ 0x1401279E0 (IoCancelIrp.c)
 *     CcExtendVacbArray @ 0x14012FC04 (CcExtendVacbArray.c)
 *     FsRtlpOplockBreakToII @ 0x14013019C (FsRtlpOplockBreakToII.c)
 *     IoReleaseVpbSpinLock @ 0x1401383A0 (IoReleaseVpbSpinLock.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x14013963C (IoGetLowerDeviceObjectWithTag.c)
 *     IoGetDriverObjectExtension @ 0x1401397B0 (IoGetDriverObjectExtension.c)
 *     FsRtlUninitializeFileLock @ 0x14013BBB0 (FsRtlUninitializeFileLock.c)
 *     WmipNotificationIrpCancel @ 0x14013C070 (WmipNotificationIrpCancel.c)
 *     IopCheckStackForTransactionSupport @ 0x14013C948 (IopCheckStackForTransactionSupport.c)
 *     FsRtlpOplockBreakToNone @ 0x14013D200 (FsRtlpOplockBreakToNone.c)
 *     IopInterlockedRemoveHeadList @ 0x140153AC8 (IopInterlockedRemoveHeadList.c)
 *     PpMarkDeviceStackExtensionFlag @ 0x140158BD4 (PpMarkDeviceStackExtensionFlag.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14016F550 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PnpMarkDeviceForRemove @ 0x140170940 (PnpMarkDeviceForRemove.c)
 *     PnpLockMountableDevice @ 0x140170A2C (PnpLockMountableDevice.c)
 *     PnpUnlockMountableDevice @ 0x140170A88 (PnpUnlockMountableDevice.c)
 *     IoGetDiskDeviceObject @ 0x140170CE0 (IoGetDiskDeviceObject.c)
 *     IopInterlockedDecrementUlong @ 0x1401716FC (IopInterlockedDecrementUlong.c)
 *     PnpIsChainDereferenced @ 0x1401726B8 (PnpIsChainDereferenced.c)
 *     PnpRemoveLockedDeviceNode @ 0x140172AD4 (PnpRemoveLockedDeviceNode.c)
 *     PnpFindMountableDevice @ 0x140172E2C (PnpFindMountableDevice.c)
 *     PopQueueQuerySetIrp @ 0x140173474 (PopQueueQuerySetIrp.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140174194 (FsRtlpRequestExclusiveOplock.c)
 *     IopSetFsRegistrationInProgress @ 0x140176C5C (IopSetFsRegistrationInProgress.c)
 *     IoEnumerateDeviceObjectList @ 0x140177530 (IoEnumerateDeviceObjectList.c)
 *     IopCsqCancelRoutine @ 0x14017FEC0 (IopCsqCancelRoutine.c)
 *     IopResurrectDriver @ 0x1401817C4 (IopResurrectDriver.c)
 *     IopCheckUnloadDriver @ 0x14018D8C8 (IopCheckUnloadDriver.c)
 *     CcInitializePartitionVacbs @ 0x140190C48 (CcInitializePartitionVacbs.c)
 *     CcAllocateInitializeVacbArray @ 0x140190DF0 (CcAllocateInitializeVacbArray.c)
 *     IopInterlockedInsertHeadList @ 0x140195E1C (IopInterlockedInsertHeadList.c)
 *     IoAllocateDriverObjectExtension @ 0x140197660 (IoAllocateDriverObjectExtension.c)
 *     IopInterlockedInsertTailList @ 0x1401997CC (IopInterlockedInsertTailList.c)
 *     CcDereferenceVacbArray @ 0x14027E0AC (CcDereferenceVacbArray.c)
 *     CcGetRandomVacbArrayWithReference @ 0x14027E154 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x14027E5B4 (CcUnmapInactiveViewsInternal.c)
 *     CcUninitializePartitionVacbs @ 0x14027F2B0 (CcUninitializePartitionVacbs.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x140282E50 (FsRtlPrivateCancelFileLockIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x140283508 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x140283850 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x140283930 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x140283A1C (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x140283CBC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x140283DBC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpWaitOnIrp @ 0x140283E5C (FsRtlpWaitOnIrp.c)
 *     IopDisassociateThreadIrp @ 0x1402934B0 (IopDisassociateThreadIrp.c)
 *     IopGetDriverPathInformation @ 0x1402938C0 (IopGetDriverPathInformation.c)
 *     IopReferenceVerifyVpb @ 0x140293CD4 (IopReferenceVerifyVpb.c)
 *     IoAdjustStackSizeForRedirection @ 0x1402981D0 (IoAdjustStackSizeForRedirection.c)
 *     IoStartPacket @ 0x140298E00 (IoStartPacket.c)
 *     IopGetFsRegistrationInProgress @ 0x140299174 (IopGetFsRegistrationInProgress.c)
 *     IopStartNextPacket @ 0x140299498 (IopStartNextPacket.c)
 *     IopStartNextPacketByKey @ 0x140299558 (IopStartNextPacketByKey.c)
 *     PnpHandleEnumerateHandlesAgainstPdoStack @ 0x14029E378 (PnpHandleEnumerateHandlesAgainstPdoStack.c)
 *     IopSetLegacyResourcesFlag @ 0x14029ECB0 (IopSetLegacyResourcesFlag.c)
 *     PiDqIrpCancel @ 0x14029F020 (PiDqIrpCancel.c)
 *     PiSwIrpCancelStartCreate @ 0x1402A0F60 (PiSwIrpCancelStartCreate.c)
 *     IopEliminateBogusConflict @ 0x1402A1A7C (IopEliminateBogusConflict.c)
 *     RawCheckForDeleteVolume @ 0x14030A9B8 (RawCheckForDeleteVolume.c)
 *     RawVerifyVolume @ 0x14030AA50 (RawVerifyVolume.c)
 *     IoUnregisterShutdownNotification @ 0x1405A7BC0 (IoUnregisterShutdownNotification.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140974ABC (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140974B20 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilGetUpperDeviceObjectWithTag @ 0x140974B78 (IovUtilGetUpperDeviceObjectWithTag.c)
 *     IovUtilIsInFdoStack @ 0x140974C20 (IovUtilIsInFdoStack.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140974C84 (IovUtilIsVerifiedDeviceStack.c)
 *     IovUtilMultipleDevicesSameDriver @ 0x140974D98 (IovUtilMultipleDevicesSameDriver.c)
 *     IovUtilRelateDeviceObjects @ 0x140974DF8 (IovUtilRelateDeviceObjects.c)
 * Callees:
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
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
