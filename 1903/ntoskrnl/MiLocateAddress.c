/*
 * XREFs of MiLocateAddress @ 0x140073CF0
 * Callers:
 *     MiProcessCommitIntact @ 0x140001AA8 (MiProcessCommitIntact.c)
 *     MiReservePageFileSpace @ 0x14002F390 (MiReservePageFileSpace.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiComputeFaultNode @ 0x14005A620 (MiComputeFaultNode.c)
 *     MiObtainReferencedSecureVad @ 0x140073B10 (MiObtainReferencedSecureVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073C40 (MiCaptureWriteWatchDirtyBit.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x14008F080 (MiProbeLockFrame.c)
 *     MiInitializeReadInProgressPfn @ 0x1400A5280 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1400A5990 (MiResolveMappedFileFault.c)
 *     NtUnlockVirtualMemory @ 0x1400C4230 (NtUnlockVirtualMemory.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 *     MiDispatchFault @ 0x1400CBFD0 (MiDispatchFault.c)
 *     MiResolveDemandZeroFault @ 0x1400CCE70 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x1400CD960 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1400D04D0 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1400D3150 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1400D3F30 (MiMigratePfn.c)
 *     MiTrimSharedPageFromViews @ 0x1400E1260 (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 *     MiSharedVaToPartition @ 0x1400F042C (MiSharedVaToPartition.c)
 *     MiImagePageOk @ 0x14010255C (MiImagePageOk.c)
 *     MiUpdatePrefetchPriority @ 0x14010A9B0 (MiUpdatePrefetchPriority.c)
 *     MiCrcStillIntact @ 0x14013E6D0 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     MmOutSwapVirtualAddresses @ 0x14014389C (MmOutSwapVirtualAddresses.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MmStoreDecommitVirtualMemory @ 0x140167DE4 (MmStoreDecommitVirtualMemory.c)
 *     MiComputeMaximumFaultCluster @ 0x140170328 (MiComputeMaximumFaultCluster.c)
 *     MiCanGrantExecute @ 0x1402D22EC (MiCanGrantExecute.c)
 *     MiWriteAwePtes @ 0x1402D7E08 (MiWriteAwePtes.c)
 *     MiFindPlaceholderVadToReplace @ 0x1402DEC7C (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MiUnlockVadRange @ 0x140694D90 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140694EA0 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x14088B470 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x14089287C (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x14089B788 (MiMapChildLargePageVads.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiLocateAddress(unsigned __int64 a1)
{
  _KPROCESS *Process; // r9
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8
  unsigned __int64 v4; // rdx

  Process = KeGetCurrentThread()->ApcState.Process;
  result = Process[2].Affinity.Bitmap[9];
  if ( !result )
    return 0LL;
  v3 = a1 >> 12;
  if ( a1 >> 12 < (*(unsigned int *)(result + 24) | ((unsigned __int64)*(unsigned __int8 *)(result + 32) << 32))
    || v3 > (*(unsigned int *)(result + 28) | ((unsigned __int64)*(unsigned __int8 *)(result + 33) << 32)) )
  {
    v4 = Process[2].Affinity.Bitmap[8];
    if ( v4 )
    {
      while ( 1 )
      {
        if ( v3 > (*(unsigned int *)(v4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 33) << 32)) )
        {
          v4 = *(_QWORD *)(v4 + 8);
        }
        else
        {
          if ( v3 >= (*(unsigned int *)(v4 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v4 + 32) << 32)) )
          {
            Process[2].Affinity.Bitmap[9] = v4;
            return v4;
          }
          v4 = *(_QWORD *)v4;
        }
        if ( !v4 )
          return 0LL;
      }
    }
    return 0LL;
  }
  return result;
}
