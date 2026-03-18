/*
 * XREFs of MiLocateAddress @ 0x140073F60
 * Callers:
 *     MiProcessCommitIntact @ 0x140001AA8 (MiProcessCommitIntact.c)
 *     MiReservePageFileSpace @ 0x14002F780 (MiReservePageFileSpace.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiComputeFaultNode @ 0x14005A6C0 (MiComputeFaultNode.c)
 *     MiObtainReferencedSecureVad @ 0x140073D80 (MiObtainReferencedSecureVad.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x140073EB0 (MiCaptureWriteWatchDirtyBit.c)
 *     MiInitializeReadInProgressPfn @ 0x140092AB0 (MiInitializeReadInProgressPfn.c)
 *     MiResolveMappedFileFault @ 0x1400931C0 (MiResolveMappedFileFault.c)
 *     NtUnlockVirtualMemory @ 0x1400A40B0 (NtUnlockVirtualMemory.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiDispatchFault @ 0x1400ABE50 (MiDispatchFault.c)
 *     MiResolveDemandZeroFault @ 0x1400ACCF0 (MiResolveDemandZeroFault.c)
 *     MiCompletePrivateZeroFault @ 0x1400AD7E0 (MiCompletePrivateZeroFault.c)
 *     MiCompleteProtoPteFault @ 0x1400B0350 (MiCompleteProtoPteFault.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1400B2FD0 (MiHandleTransitionFault.c)
 *     MiMigratePfn @ 0x1400B3DB0 (MiMigratePfn.c)
 *     MiTrimSharedPageFromViews @ 0x1400C10E0 (MiTrimSharedPageFromViews.c)
 *     MiLockStealUserVm @ 0x1400C2478 (MiLockStealUserVm.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x1400CC670 (MiProbeLockFrame.c)
 *     MiSharedVaToPartition @ 0x1400DDB3C (MiSharedVaToPartition.c)
 *     MiImagePageOk @ 0x140109BA4 (MiImagePageOk.c)
 *     MiUpdatePrefetchPriority @ 0x14010A580 (MiUpdatePrefetchPriority.c)
 *     MiCrcStillIntact @ 0x14013ED60 (MiCrcStillIntact.c)
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     MmOutSwapVirtualAddresses @ 0x140143DDC (MmOutSwapVirtualAddresses.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MmStoreDecommitVirtualMemory @ 0x140167834 (MmStoreDecommitVirtualMemory.c)
 *     MiComputeMaximumFaultCluster @ 0x140170A18 (MiComputeMaximumFaultCluster.c)
 *     MiCanGrantExecute @ 0x1402D204C (MiCanGrantExecute.c)
 *     MiWriteAwePtes @ 0x1402D7B68 (MiWriteAwePtes.c)
 *     MiFindPlaceholderVadToReplace @ 0x1402DE9DC (MiFindPlaceholderVadToReplace.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MiUnlockVadRange @ 0x140688300 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x140688410 (MiLockVadRange.c)
 *     MiCoalescePlaceholderAllocations @ 0x14088AC90 (MiCoalescePlaceholderAllocations.c)
 *     MmCheckForSafeExecution @ 0x14089209C (MmCheckForSafeExecution.c)
 *     MiMapChildLargePageVads @ 0x14089AFA8 (MiMapChildLargePageVads.c)
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
