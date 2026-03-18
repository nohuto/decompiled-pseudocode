/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x1400CA44C
 * Callers:
 *     FsRtlPrivateLock @ 0x140006870 (FsRtlPrivateLock.c)
 *     IoSetOplockPrivateFoExt @ 0x140010CA0 (IoSetOplockPrivateFoExt.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1400CA3E0 (FsRtlInitializeBaseMcbEx.c)
 *     CcAllocateVacbLevels @ 0x1400EE0A4 (CcAllocateVacbLevels.c)
 *     FsRtlInitializeLargeMcb @ 0x1400EE670 (FsRtlInitializeLargeMcb.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400EE8B8 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlPrivateInsertLock @ 0x140106EF0 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140106FD0 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlSplitLocks @ 0x140107D28 (FsRtlSplitLocks.c)
 *     FsRtlTruncateBaseMcb @ 0x14010B570 (FsRtlTruncateBaseMcb.c)
 *     FsRtlPrivateInitializeFileLock @ 0x14013A454 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAllocateFileLock @ 0x14013BE20 (FsRtlAllocateFileLock.c)
 *     VfAvlReserveNode @ 0x140154E84 (VfAvlReserveNode.c)
 *     IoSetOplockKeyContext @ 0x14016D4D4 (IoSetOplockKeyContext.c)
 *     PopAllocateIrp @ 0x140173844 (PopAllocateIrp.c)
 *     WmipAllocRegEntry @ 0x140175FB8 (WmipAllocRegEntry.c)
 *     PopCreateDynamicIrpWorker @ 0x140180430 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x1402BF5AC (MiAddMdlTracker.c)
 *     ObWaitForMultipleObjects @ 0x14060CA50 (ObWaitForMultipleObjects.c)
 *     AlpcpInitializePort @ 0x14065C694 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x14065CED0 (AlpcInitializeHandleTable.c)
 *     AlpcpAllocateBlob @ 0x14065F634 (AlpcpAllocateBlob.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x140698800 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406B53F0 (FsRtlAddToTunnelCacheEx.c)
 *     WmipAllocEntry @ 0x1407354F4 (WmipAllocEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140766814 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140766B50 (RtlpCopyRangeListEntry.c)
 *     ViAllocateContextTable @ 0x1409661F8 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x1409677C4 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x140968160 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140968390 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x140968B50 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x140969BD0 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x14096ED50 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x14097BE90 (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x14097CB00 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x14097E034 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x14097EB0C (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x14097ECA0 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401CC570 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

PVOID __stdcall ExAllocateFromNPagedLookasideList(PNPAGED_LOOKASIDE_LIST Lookaside)
{
  PVOID result; // rax

  ++Lookaside->L.TotalAllocates;
  result = RtlpInterlockedPopEntrySList(&Lookaside->L.ListHead);
  if ( !result )
  {
    ++Lookaside->L.AllocateMisses;
    return (PVOID)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))Lookaside->L.AllocateEx)(
                    (unsigned int)Lookaside->L.Type,
                    Lookaside->L.Size,
                    Lookaside->L.Tag);
  }
  return result;
}
