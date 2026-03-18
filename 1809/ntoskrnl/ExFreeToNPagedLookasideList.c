/*
 * XREFs of ExFreeToNPagedLookasideList @ 0x1400922D8
 * Callers:
 *     FsRtlEmptyFreePoolList @ 0x1400147C8 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x140014A04 (FsRtlFreeTunnelNode.c)
 *     IoSetOplockPrivateFoExt @ 0x140018830 (IoSetOplockPrivateFoExt.c)
 *     FsRtlFastUnlockSingleShared @ 0x14008C1C8 (FsRtlFastUnlockSingleShared.c)
 *     FsRtlFastUnlockSingleExclusive @ 0x14008C4D0 (FsRtlFastUnlockSingleExclusive.c)
 *     FsRtlPrivateInsertLock @ 0x14008D14C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x14008D22C (FsRtlPrivateInsertSharedLock.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1400920D0 (LZNT1DecompressChunkWorkItem.c)
 *     IopDeleteFileObjectExtension @ 0x140092150 (IopDeleteFileObjectExtension.c)
 *     FsRtlFreeFileLock @ 0x140110330 (FsRtlFreeFileLock.c)
 *     FsRtlAddEntry @ 0x140110F4C (FsRtlAddEntry.c)
 *     FsRtlUninitializeLargeMcb @ 0x140111150 (FsRtlUninitializeLargeMcb.c)
 *     FsRtlUninitializeBaseMcb @ 0x140111190 (FsRtlUninitializeBaseMcb.c)
 *     FsRtlUninitializeFileLock @ 0x1401111D0 (FsRtlUninitializeFileLock.c)
 *     CcDeleteMbcb @ 0x140125968 (CcDeleteMbcb.c)
 *     CcExtendVacbArray @ 0x14012C9A4 (CcExtendVacbArray.c)
 *     CcFreeUnusedVacbLevels @ 0x14012CE5C (CcFreeUnusedVacbLevels.c)
 *     CcDeallocateVacbLevel @ 0x14012D04C (CcDeallocateVacbLevel.c)
 *     FsRtlPrivateFastUnlockAll @ 0x14012EC44 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x14012EF80 (FsRtlPrivateCheckWaitingLocks.c)
 *     IoSetOplockKeyContext @ 0x140166BE4 (IoSetOplockKeyContext.c)
 *     WmipDeregisterRegEntry @ 0x14016A878 (WmipDeregisterRegEntry.c)
 *     VfTargetDriversRemove @ 0x14016C1C0 (VfTargetDriversRemove.c)
 *     PopFreeIrp @ 0x140170F60 (PopFreeIrp.c)
 *     PopIrpWorker @ 0x140171720 (PopIrpWorker.c)
 *     PopAllocateIrp @ 0x14017271C (PopAllocateIrp.c)
 *     PopCreateDynamicIrpWorker @ 0x1401763A0 (PopCreateDynamicIrpWorker.c)
 *     sub_1401A1720 @ 0x1401A1720 (sub_1401A1720.c)
 *     FsRtlPrivateCancelFileLockIrp @ 0x14026F370 (FsRtlPrivateCancelFileLockIrp.c)
 *     MiFreeMdlTracker @ 0x1402A8168 (MiFreeMdlTracker.c)
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14030A0B8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     ObWaitForMultipleObjects @ 0x14058A3E0 (ObWaitForMultipleObjects.c)
 *     WmipUnreferenceEntry @ 0x1405FC204 (WmipUnreferenceEntry.c)
 *     IopCreateFile @ 0x14060BAC0 (IopCreateFile.c)
 *     FsRtlFreeExtraCreateParameter @ 0x14060CFB0 (FsRtlFreeExtraCreateParameter.c)
 *     AlpcAddHandleTableEntry @ 0x140618DEC (AlpcAddHandleTableEntry.c)
 *     AlpcpDestroyPort @ 0x140619068 (AlpcpDestroyPort.c)
 *     AlpcConnectionDestroyProcedure @ 0x1406962B0 (AlpcConnectionDestroyProcedure.c)
 *     FsRtlDeleteTunnelCache @ 0x140700F70 (FsRtlDeleteTunnelCache.c)
 *     RtlpFreeRangeListEntry @ 0x140738F18 (RtlpFreeRangeListEntry.c)
 *     IovCallDriver @ 0x140923CD4 (IovCallDriver.c)
 *     ViFreeContextTable @ 0x140927D14 (ViFreeContextTable.c)
 *     VfFastIoCheckState @ 0x140928F74 (VfFastIoCheckState.c)
 *     VfIoCompletionCheckState @ 0x14092909C (VfIoCompletionCheckState.c)
 *     VfAllocateAdapterChannel @ 0x140929AE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140929D10 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x14092A430 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x14092A9A0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x14092AD60 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14092AE10 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x14092B040 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x14092B360 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x14092C170 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x14092C3B0 (ViAdapterCallback.c)
 *     ViDevObjRemove @ 0x1409343B8 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140934854 (ViRemLockDeleteFirstTreeNode.c)
 *     ViDeadlockFree @ 0x14093D4A8 (ViDeadlockFree.c)
 *     ViDeadlockPopulateLookasideCache @ 0x14093D6B0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdIrpBeforeCompletionRoutine @ 0x14093E924 (ViWdIrpBeforeCompletionRoutine.c)
 *     ViLookasideAdd @ 0x14093F00C (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x14093F12C (ViLookasideDelete.c)
 *     IovpSessionDataDereference @ 0x14093F370 (IovpSessionDataDereference.c)
 *     ViPacketNotificationCallback @ 0x14093F4C0 (ViPacketNotificationCallback.c)
 *     VerifierExDeleteResourceLite @ 0x14093F860 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x14093FC40 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x14093FECC (VfCheckForResource.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1401C53F0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
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
