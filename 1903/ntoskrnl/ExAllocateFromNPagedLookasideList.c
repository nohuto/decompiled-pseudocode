/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x14008D57C
 * Callers:
 *     FsRtlPrivateLock @ 0x1400067E0 (FsRtlPrivateLock.c)
 *     IoSetOplockPrivateFoExt @ 0x140010A70 (IoSetOplockPrivateFoExt.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14008D510 (FsRtlInitializeBaseMcbEx.c)
 *     CcAllocateVacbLevels @ 0x14009A458 (CcAllocateVacbLevels.c)
 *     FsRtlInitializeLargeMcb @ 0x14009AA20 (FsRtlInitializeLargeMcb.c)
 *     LZNT1DecompressChunkNewThread @ 0x14009AC68 (LZNT1DecompressChunkNewThread.c)
 *     FsRtlPrivateInsertLock @ 0x140103650 (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x140103730 (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlSplitLocks @ 0x140104488 (FsRtlSplitLocks.c)
 *     FsRtlTruncateBaseMcb @ 0x14010BCC0 (FsRtlTruncateBaseMcb.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140139D74 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAllocateFileLock @ 0x14013B800 (FsRtlAllocateFileLock.c)
 *     VfAvlReserveNode @ 0x1401547E4 (VfAvlReserveNode.c)
 *     IoSetOplockKeyContext @ 0x14016CDE4 (IoSetOplockKeyContext.c)
 *     PopAllocateIrp @ 0x140173114 (PopAllocateIrp.c)
 *     WmipAllocRegEntry @ 0x140175888 (WmipAllocRegEntry.c)
 *     PopCreateDynamicIrpWorker @ 0x14017FD40 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x1402BF84C (MiAddMdlTracker.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     AlpcpInitializePort @ 0x140648A24 (AlpcpInitializePort.c)
 *     AlpcInitializeHandleTable @ 0x140649260 (AlpcInitializeHandleTable.c)
 *     AlpcpAllocateBlob @ 0x14064B994 (AlpcpAllocateBlob.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14066B930 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1406B2450 (FsRtlAddToTunnelCacheEx.c)
 *     WmipAllocEntry @ 0x140733294 (WmipAllocEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140761E04 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140762140 (RtlpCopyRangeListEntry.c)
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
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
