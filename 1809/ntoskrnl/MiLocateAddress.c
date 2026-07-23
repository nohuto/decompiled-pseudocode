/*
 * XREFs of MiLocateAddress @ 0x140087850
 * Callers:
 *     MiProcessCommitIntact @ 0x140001C74 (MiProcessCommitIntact.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiResolveMappedFileFault @ 0x14002BE50 (MiResolveMappedFileFault.c)
 *     MiComputeFaultNode @ 0x14002C918 (MiComputeFaultNode.c)
 *     MiImagePageOk @ 0x14002CFA8 (MiImagePageOk.c)
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x14003C640 (MiMigratePfn.c)
 *     MiProbeLockFrame @ 0x140041950 (MiProbeLockFrame.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiDispatchFault @ 0x140045FD0 (MiDispatchFault.c)
 *     MiResolveDemandZeroFault @ 0x140046D50 (MiResolveDemandZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x14004A4B0 (MiCompleteProtoPteFault.c)
 *     MiInitializeReadInProgressPfn @ 0x1400656D0 (MiInitializeReadInProgressPfn.c)
 *     MiReservePageFileSpace @ 0x140081310 (MiReservePageFileSpace.c)
 *     MiCrcStillIntact @ 0x140082C44 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1400846D0 (MiSharePages.c)
 *     MiObtainReferencedSecureVad @ 0x1400861C0 (MiObtainReferencedSecureVad.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     MiCombinePte @ 0x140088F00 (MiCombinePte.c)
 *     MiWsleFlush @ 0x1400B3250 (MiWsleFlush.c)
 *     NtUnlockVirtualMemory @ 0x1400B3CD0 (NtUnlockVirtualMemory.c)
 *     MiCopyOnWrite @ 0x1400B4520 (MiCopyOnWrite.c)
 *     MiUpdatePrefetchPriority @ 0x1400B7100 (MiUpdatePrefetchPriority.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB48C (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1400EDC94 (MiLockStealUserVm.c)
 *     MiSharedVaToPartition @ 0x14010982C (MiSharedVaToPartition.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401257AC (MiCaptureWriteWatchDirtyBit.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 *     MmStoreDecommitVirtualMemory @ 0x1401580BC (MmStoreDecommitVirtualMemory.c)
 *     MiComputeMaximumFaultCluster @ 0x140168D38 (MiComputeMaximumFaultCluster.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x1401B4EC4 (MiAdvanceToLastUntrimmableVa.c)
 *     MiWriteAwePtes @ 0x1402B2468 (MiWriteAwePtes.c)
 *     MiCanGrantExecute @ 0x1402BBD50 (MiCanGrantExecute.c)
 *     MiFindPlaceholderVadToReplace @ 0x1402C4F38 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CBC80 (MmOutSwapVirtualAddresses.c)
 *     MiUnlockVadRange @ 0x140605A50 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140605B60 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x140852C58 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x140859E44 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x14085FB14 (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8

  Process = KeGetCurrentThread()->ApcState.Process;
  result = Process[2].Affinity.Bitmap[5];
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (*(unsigned int *)(result + 24) | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32))
    || v3 > (*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) )
  {
    result = Process[2].Affinity.Bitmap[4];
    while ( result )
    {
      if ( v3 > (*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) )
      {
        result = *(_QWORD *)(result + 8);
      }
      else
      {
        if ( v3 >= (*(unsigned int *)(result + 24) | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32)) )
        {
          Process[2].Affinity.Bitmap[5] = result;
          return result;
        }
        result = *(_QWORD *)result;
      }
    }
    return 0LL;
  }
  return result;
}
