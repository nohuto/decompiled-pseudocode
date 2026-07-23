/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x140018B38
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140018830 (IoSetOplockPrivateFoExt.c)
 *     FsRtlPrivateLock @ 0x14008C8E0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x14008D08C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x14008D16C (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlInitializeBaseMcbEx @ 0x140092410 (FsRtlInitializeBaseMcbEx.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400E1704 (LZNT1DecompressChunkNewThread.c)
 *     VfAvlReserveNode @ 0x1400F58D0 (VfAvlReserveNode.c)
 *     FsRtlTruncateBaseMcb @ 0x1401104B0 (FsRtlTruncateBaseMcb.c)
 *     CcAllocateVacbLevels @ 0x14012D018 (CcAllocateVacbLevels.c)
 *     FsRtlSplitLocks @ 0x14012F0C4 (FsRtlSplitLocks.c)
 *     FsRtlInitializeLargeMcb @ 0x1401334A0 (FsRtlInitializeLargeMcb.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140136DA8 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAllocateFileLock @ 0x1401394B0 (FsRtlAllocateFileLock.c)
 *     IoSetOplockKeyContext @ 0x140166D04 (IoSetOplockKeyContext.c)
 *     WmipAllocRegEntry @ 0x14016B6C8 (WmipAllocRegEntry.c)
 *     PopAllocateIrp @ 0x14017283C (PopAllocateIrp.c)
 *     PopCreateDynamicIrpWorker @ 0x1401764C0 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x1402A81CC (MiAddMdlTracker.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1405829D0 (FsRtlAddToTunnelCacheEx.c)
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1405DD500 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     AlpcpInitializePort @ 0x140615CD0 (AlpcpInitializePort.c)
 *     AlpcpAllocateBlob @ 0x14061949C (AlpcpAllocateBlob.c)
 *     AlpcInitializeHandleTable @ 0x14061AC84 (AlpcInitializeHandleTable.c)
 *     WmipAllocEntry @ 0x14070964C (WmipAllocEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140739A34 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140739D70 (RtlpCopyRangeListEntry.c)
 *     ViAllocateContextTable @ 0x140928CD8 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x14092A144 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x14092AAE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x14092AD10 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x14092B430 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x14092C360 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x1409314D4 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x14093DA4C (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x14093E6B0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x14093F7A0 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x140940264 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x1409403F8 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401C5530 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
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
