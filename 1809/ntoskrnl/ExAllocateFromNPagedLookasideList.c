/*
 * XREFs of ExAllocateFromNPagedLookasideList @ 0x140018B38
 * Callers:
 *     IoSetOplockPrivateFoExt @ 0x140018830 (IoSetOplockPrivateFoExt.c)
 *     FsRtlPrivateLock @ 0x14008C8F0 (FsRtlPrivateLock.c)
 *     FsRtlPrivateInsertLock @ 0x14008D14C (FsRtlPrivateInsertLock.c)
 *     FsRtlPrivateInsertSharedLock @ 0x14008D22C (FsRtlPrivateInsertSharedLock.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1400924D0 (FsRtlInitializeBaseMcbEx.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400E1664 (LZNT1DecompressChunkNewThread.c)
 *     VfAvlReserveNode @ 0x1400F5830 (VfAvlReserveNode.c)
 *     FsRtlTruncateBaseMcb @ 0x140110410 (FsRtlTruncateBaseMcb.c)
 *     CcAllocateVacbLevels @ 0x14012CF28 (CcAllocateVacbLevels.c)
 *     FsRtlSplitLocks @ 0x14012EFD4 (FsRtlSplitLocks.c)
 *     FsRtlInitializeLargeMcb @ 0x1401333B0 (FsRtlInitializeLargeMcb.c)
 *     FsRtlPrivateInitializeFileLock @ 0x140136C88 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlAllocateFileLock @ 0x140139390 (FsRtlAllocateFileLock.c)
 *     IoSetOplockKeyContext @ 0x140166BE4 (IoSetOplockKeyContext.c)
 *     WmipAllocRegEntry @ 0x14016B5A8 (WmipAllocRegEntry.c)
 *     PopAllocateIrp @ 0x14017271C (PopAllocateIrp.c)
 *     PopCreateDynamicIrpWorker @ 0x1401763A0 (PopCreateDynamicIrpWorker.c)
 *     MiAddMdlTracker @ 0x1402A7EDC (MiAddMdlTracker.c)
 *     FsRtlAddToTunnelCacheEx @ 0x1405819D0 (FsRtlAddToTunnelCacheEx.c)
 *     ObWaitForMultipleObjects @ 0x14058A3E0 (ObWaitForMultipleObjects.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x1405DC500 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     AlpcpInitializePort @ 0x140614CD0 (AlpcpInitializePort.c)
 *     AlpcpAllocateBlob @ 0x14061849C (AlpcpAllocateBlob.c)
 *     AlpcInitializeHandleTable @ 0x140619C84 (AlpcInitializeHandleTable.c)
 *     WmipAllocEntry @ 0x1407083CC (WmipAllocEntry.c)
 *     RtlpCreateRangeListEntry @ 0x140738864 (RtlpCreateRangeListEntry.c)
 *     RtlpCopyRangeListEntry @ 0x140738BA0 (RtlpCopyRangeListEntry.c)
 *     ViAllocateContextTable @ 0x140927CD8 (ViAllocateContextTable.c)
 *     ViIoCallbackSnapState @ 0x140929144 (ViIoCallbackSnapState.c)
 *     VfAllocateAdapterChannel @ 0x140929AE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140929D10 (VfAllocateAdapterChannelEx.c)
 *     VfBuildScatterGatherList @ 0x14092A430 (VfBuildScatterGatherList.c)
 *     VfGetScatterGatherList @ 0x14092B360 (VfGetScatterGatherList.c)
 *     VfIrpAllocateCallDriverData @ 0x1409304D4 (VfIrpAllocateCallDriverData.c)
 *     ViDeadlockAllocate @ 0x14093CA4C (ViDeadlockAllocate.c)
 *     ViDeadlockPopulateLookasideCache @ 0x14093D6B0 (ViDeadlockPopulateLookasideCache.c)
 *     ViWdBeforeCallDriver @ 0x14093E7A0 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x14093F264 (IovpSessionDataCreate.c)
 *     VfPacketCreateAndLock @ 0x14093F3F8 (VfPacketCreateAndLock.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x1401C53B0 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
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
