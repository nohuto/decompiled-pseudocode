/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x140092218
 * Callers:
 *     FsRtlEmptyFreePoolList @ 0x1400147C8 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x140014A04 (FsRtlFreeTunnelNode.c)
 *     IoSetOplockPrivateFoExt @ 0x140018830 (IoSetOplockPrivateFoExt.c)
 *     FsRtlFastUnlockSingleShared @ 0x14008C1B8 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14008C4C0 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateInsertLock @ 0x14008D08C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x14008D16C (FsRtlPrivateInsertSharedLock.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140092010 (LZNT1DecompressChunkWorkItem.c)
 *     IopDeleteFileObjectExtension @ 0x140092090 (IopDeleteFileObjectExtension.c)
 *     FsRtlFreeFileLock @ 0x1401103D0 (FsRtlFreeFileLock.c)
 *     FsRtlAddEntry @ 0x140110FE0 (FsRtlAddEntry.c)
 *     FsRtlUninitializeLargeMcb @ 0x1401111E0 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x140111220 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlUninitializeFileLock @ 0x140111260 (FsRtlUninitializeFileLock.c)
 *     CcDeleteMbcb @ 0x140125A58 (CcDeleteMbcb.c)
 *     CcExtendVacbArray @ 0x14012CA94 (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x14012CF4C (CcFreeUnusedVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x14012D13C (CcDeallocateVacbLevel.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14012ED34 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14012F070 (FsRtlPrivateCheckWaitingLocks.c)
 *     IoSetOplockKeyContext @ 0x140166D04 (IoSetOplockKeyContext.c)
 *     WmipDeregisterRegEntry @ 0x14016A998 (WmipDeregisterRegEntry.c)
 *     VfTargetDriversRemove @ 0x14016C2E0 (VfTargetDriversRemove.c)
 *     PopFreeIrp @ 0x140171080 (PopFreeIrp.c)
 *     PopIrpWorker @ 0x140171840 (PopIrpWorker.c)
 *     PopAllocateIrp @ 0x14017283C (PopAllocateIrp.c)
 *     PopCreateDynamicIrpWorker @ 0x1401764C0 (PopCreateDynamicIrpWorker.c)
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x14026F660 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x1402A8458 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14030A3A8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     IopCreateFile @ 0x14060CAC0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060DFB0 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcAddHandleTableEntry @ 0x140619DEC (AlpcAddHandleTableEntry.c)
 *     AlpcpDestroyPort @ 0x14061A068 (AlpcpDestroyPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x140697450 (AlpcConnectionDestroyProcedure.c)
 *     FsRtlDeleteTunnelCache @ 0x1407021F0 (FsRtlDeleteTunnelCache.c)
 *     RtlpFreeRangeListEntry @ 0x14073A0E8 (RtlpFreeRangeListEntry.c)
 *     IovCallDriver @ 0x140924CD4 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x140928D14 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x140929F74 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x14092A09C (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x14092AAE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14092AD10 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x14092B430 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x14092B9A0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x14092BD60 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14092BE10 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x14092C040 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x14092C360 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x14092D170 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x14092D3B0 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x1409353B8 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140935854 (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x14093E4A8 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x14093E6B0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14093F924 (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x14094000C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14094012C (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x140940370 (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x1409404C0 (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x140940860 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x140940C40 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x140940ECC (VfCheckForResource.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C5570 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

void __stdcall ExFreeToNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside, PVOID Entry)
{
  ++Lookaside->L.TotalFrees;
  if ( LOWORD(Lookaside->L.ListHead.Alignment) >= Lookaside->L.Depth )
  {
    ++Lookaside->L.FreeMisses;
    ((void (__fastcall *)(PVOID))Lookaside->L.FreeEx)(Entry);
  }
  else
  {
    RtlpInterlockedPushEntrySList(&Lookaside->L.ListHead, (PSLIST_ENTRY)Entry);
  }
}
