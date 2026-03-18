/*
 * XREFs of MiLocateAddress @ 0x140087860
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
 *     MiInitializeReadInProgressPfn @ 0x1400656E0 (MiInitializeReadInProgressPfn.c)
 *     MiReservePageFileSpace @ 0x140081320 (MiReservePageFileSpace.c)
 *     MiCrcStillIntact @ 0x140082C54 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x1400846E0 (MiSharePages.c)
 *     MiObtainReferencedSecureVad @ 0x1400861D0 (MiObtainReferencedSecureVad.c)
 *     NtGetWriteWatch @ 0x140086AD0 (NtGetWriteWatch.c)
 *     MiCombinePte @ 0x140088F10 (MiCombinePte.c)
 *     MiWsleFlush @ 0x1400B32F0 (MiWsleFlush.c)
 *     NtUnlockVirtualMemory @ 0x1400B3D70 (NtUnlockVirtualMemory.c)
 *     MiCopyOnWrite @ 0x1400B45C0 (MiCopyOnWrite.c)
 *     MiUpdatePrefetchPriority @ 0x1400B71A0 (MiUpdatePrefetchPriority.c)
 *     MiTrimSharedPageFromViews @ 0x1400EB3EC (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1400EDBF4 (MiLockStealUserVm.c)
 *     MiSharedVaToPartition @ 0x14010978C (MiSharedVaToPartition.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x1401256BC (MiCaptureWriteWatchDirtyBit.c)
 *     MiResolvePageFileFault @ 0x140154B24 (MiResolvePageFileFault.c)
 *     MmStoreDecommitVirtualMemory @ 0x140157F9C (MmStoreDecommitVirtualMemory.c)
 *     MiComputeMaximumFaultCluster @ 0x140168C18 (MiComputeMaximumFaultCluster.c)
 *     MiAdvanceToLastUntrimmableVa @ 0x1401B4D64 (MiAdvanceToLastUntrimmableVa.c)
 *     MiWriteAwePtes @ 0x1402B2178 (MiWriteAwePtes.c)
 *     MiCanGrantExecute @ 0x1402BBA60 (MiCanGrantExecute.c)
 *     MiFindPlaceholderVadToReplace @ 0x1402C4C48 (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x1402C8A68 (MiCloneVads.c)
 *     MmOutSwapVirtualAddresses @ 0x1402CB990 (MmOutSwapVirtualAddresses.c)
 *     MiUnlockVadRange @ 0x140604A50 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140604B60 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x140851A18 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x140858C04 (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x14085E8D4 (MiMapChildLargePageVads.c)
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
