/*
 * XREFs of MiChargeCommit @ 0x1400521D0
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140022864 (MiInitializePoolCommitPacket.c)
 *     MiDeletePteRun @ 0x140027C60 (MiDeletePteRun.c)
 *     MiSetProtectionOnSection @ 0x14004E5E0 (MiSetProtectionOnSection.c)
 *     MiFlushSectionInternal @ 0x140051530 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x140053790 (MiObtainFaultCharges.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x140054900 (MiCheckProtoPtePageState.c)
 *     MiCopyOnWrite @ 0x140059090 (MiCopyOnWrite.c)
 *     MiMakePageAvoidRead @ 0x14006C650 (MiMakePageAvoidRead.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x14008F080 (MiProbeLockFrame.c)
 *     MiFinishHardFault @ 0x140090EC0 (MiFinishHardFault.c)
 *     MiObtainSystemCharges @ 0x1400A459C (MiObtainSystemCharges.c)
 *     MiChargeForWriteInProgressPage @ 0x1400A7440 (MiChargeForWriteInProgressPage.c)
 *     MiChargeForLockedPage @ 0x1400A74D0 (MiChargeForLockedPage.c)
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MmCreateKernelStack @ 0x1400C3CE0 (MmCreateKernelStack.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiAcquireNonPagedResources @ 0x1400E3D00 (MiAcquireNonPagedResources.c)
 *     MiObtainMdlCharges @ 0x1400EFA14 (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x1400F0C58 (MiObtainPoolCharges.c)
 *     MmChargeResources @ 0x140107B9C (MmChargeResources.c)
 *     MiPurgeImageSection @ 0x14015C138 (MiPurgeImageSection.c)
 *     MiGetFileHashPage @ 0x140169168 (MiGetFileHashPage.c)
 *     MiSessionInsertImage @ 0x14017F614 (MiSessionInsertImage.c)
 *     MiStoreChargeReservedPages @ 0x140188434 (MiStoreChargeReservedPages.c)
 *     MiInitializeCommitment @ 0x14019292C (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiAcquireNonPagedResourcesForce @ 0x1402BD938 (MiAcquireNonPagedResourcesForce.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MiAttemptPageFileReductionApc @ 0x1402CD8B0 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x1402DE9C8 (MiGetSubsectionCharges.c)
 *     MiCreateLargePfnList @ 0x1402DF1E8 (MiCreateLargePfnList.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402E4ECC (MiReferenceCloneProto.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402E6530 (MiGetCrossPartitionCombineCharges.c)
 *     MiMakePageBad @ 0x1402EC458 (MiMakePageBad.c)
 *     MiChargeFullProcessCommitment @ 0x140603B80 (MiChargeFullProcessCommitment.c)
 *     MiChargeSegmentCommit @ 0x14066ED20 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x140688794 (MiCreatePagingFileMap.c)
 *     MiCreateImageFileMap @ 0x14068AE6C (MiCreateImageFileMap.c)
 *     MiRelocateImage @ 0x14068C010 (MiRelocateImage.c)
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 *     MmRotatePhysicalView @ 0x1406BFCA0 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x1406E8AF8 (MiAllocatePerSessionProtos.c)
 *     MiChargeSystemImageCommitment @ 0x140710A34 (MiChargeSystemImageCommitment.c)
 *     MiSessionCreate @ 0x14073FA18 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x14074050C (MiSessionCreateInternal.c)
 *     MiCreatePagingFile @ 0x140770618 (MiCreatePagingFile.c)
 *     MiInitializeGapFrames @ 0x1409F4590 (MiInitializeGapFrames.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A14BE0 (MiInitializeBootLoadedDriverPfns.c)
 *     MiAllocateDummyPage @ 0x140A1AEB0 (MiAllocateDummyPage.c)
 * Callees:
 *     MiReplenishLocalCommit @ 0x140125370 (MiReplenishLocalCommit.c)
 *     MiSyncCommitSignals @ 0x140192C24 (MiSyncCommitSignals.c)
 *     MiFreeExcessSegments @ 0x1402B99CC (MiFreeExcessSegments.c)
 *     MiIssuePageExtendRequest @ 0x1402CE6CC (MiIssuePageExtendRequest.c)
 *     MiApplyCommitDelay @ 0x1402D997C (MiApplyCommitDelay.c)
 *     MiCauseOverCommitPopup @ 0x1402D9B0C (MiCauseOverCommitPopup.c)
 *     MiPulseCommitSignal @ 0x1402D9B78 (MiPulseCommitSignal.c)
 */

__int64 __fastcall MiChargeCommit(__int64 a1, unsigned __int64 a2, unsigned int a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 CachedCommit; // rdx
  signed __int32 v7; // eax
  int v9; // r13d
  unsigned int v10; // ebp
  __int64 v11; // rcx
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r12
  signed __int64 v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  int v25; // eax
  bool v26; // cc
  unsigned __int64 v27; // r10
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // rdx
  __int64 v30; // [rsp+50h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    _m_prefetchw((const void *)&CurrentPrcb->CachedCommit);
    CachedCommit = CurrentPrcb->CachedCommit;
    if ( a2 <= CachedCommit )
    {
      do
      {
        v7 = _InterlockedCompareExchange(
               (volatile signed __int32 *)&CurrentPrcb->CachedCommit,
               CachedCommit - a2,
               CachedCommit);
        if ( v7 == CachedCommit )
          return 1LL;
        CachedCommit = v7;
      }
      while ( a2 <= v7 );
    }
  }
  v9 = 0;
  v10 = a3 | 2;
  if ( (a3 & 4) == 0 )
    v10 = a3;
  if ( (v10 & 8) == 0 )
  {
    if ( (v10 & 7) != 0 )
      v11 = 0LL;
    else
      v11 = *(_QWORD *)(a1 + 7216);
    goto LABEL_11;
  }
  v10 |= 2u;
  if ( (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 2) != 0
    && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    v10 |= 4u;
    v11 = 0LL;
LABEL_11:
    v30 = v11;
    goto LABEL_12;
  }
  v11 = 64LL;
  v30 = 64LL;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition && *(_QWORD *)(a1 + 7888) >> 6 < 0x40uLL )
  {
    v11 = *(_QWORD *)(a1 + 7888) >> 6;
    v30 = v11;
  }
  do
  {
    while ( 1 )
    {
LABEL_12:
      v12 = *(_QWORD *)(a1 + 8424);
      v13 = v12 + a2;
      if ( v12 + a2 <= v12 || v13 + v11 < v13 )
      {
        if ( (v10 & 4) == 0 )
        {
          if ( (v10 & 2) == 0 )
          {
            ++*(_DWORD *)(a1 + 8612);
            if ( (v10 & 1) == 0 )
              MiCauseOverCommitPopup(a1);
            MiPulseCommitSignal(a1);
          }
          return 0LL;
        }
        if ( !v11 )
          ++dword_140466300;
        goto LABEL_60;
      }
      v14 = *(_QWORD *)(a1 + 8552);
      if ( v13 + v11 <= v14 )
      {
        if ( !v9 && v13 >= 95 * (v14 / 0x64) )
        {
          MiApplyCommitDelay(a1, v10, *(_QWORD *)(a1 + 8552));
          v11 = v30;
          v9 = 1;
        }
        goto LABEL_18;
      }
      v24 = *(_QWORD *)(a1 + 7200);
      if ( v13 >= v24 && v12 < v24 )
      {
        MiPulseCommitSignal(a1);
        v11 = v30;
      }
      if ( (v10 & 4) != 0 )
      {
        if ( !v11 )
          ++dword_1404662FC;
LABEL_60:
        if ( a2 )
        {
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7232), a2);
          return 1LL;
        }
        goto LABEL_18;
      }
      if ( (v10 & 2) != 0 )
        return 0LL;
      if ( v14 == *(_QWORD *)(a1 + 7176) )
        break;
      if ( (v10 & 1) != 0 )
      {
        ++*(_DWORD *)(a1 + 8608);
        MiIssuePageExtendRequest(a1, 4096LL, 2LL);
        return 0LL;
      }
      if ( !(unsigned int)MiIssuePageExtendRequest(a1, a2, 0LL) )
      {
        ++*(_DWORD *)(a1 + 8600);
        MiCauseOverCommitPopup(a1);
        return 0LL;
      }
      v11 = v30;
    }
    ++*(_DWORD *)(a1 + 8604);
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      return 0LL;
    v25 = MiIssuePageExtendRequest(a1, a2, 2 * (v10 & 1) + 8);
    if ( (v10 & 1) != 0 )
      return 0LL;
    if ( !v25 )
    {
      MiCauseOverCommitPopup(a1);
      return 0LL;
    }
    v11 = v30;
LABEL_18:
    v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 8424), v13, v12);
  }
  while ( v12 != v15 );
  v16 = *(_QWORD *)(a1 + 7200);
  v17 = a2 + v15;
  if ( v17 >= v16 && v12 < v16 || (v18 = *(_QWORD *)(a1 + 7192), v17 >= v18) && v12 < v18 )
  {
    MiSyncCommitSignals(a1, 0LL);
    v11 = v30;
  }
  if ( v17 > *(_QWORD *)(a1 + 7168) )
    *(_QWORD *)(a1 + 7168) = v17;
  if ( (v10 & 2) == 0 )
  {
    v19 = *(_QWORD *)(a1 + 8552);
    v20 = v19 / 0xA;
    if ( v17 < 9 * (v19 / 0xA) )
      goto LABEL_25;
    v26 = v17 <= v19;
    if ( v17 >= v19 )
    {
LABEL_72:
      if ( v26 )
      {
        v27 = *(_QWORD *)(a1 + 7176);
        if ( v19 < v27 && v17 < v27 )
        {
          if ( v20 > 0x40000 )
            v20 = 0x40000LL;
          v28 = v27 - v19;
          v29 = v20 - v17;
          if ( v29 + v19 <= v28 )
            v28 = v29 + v19;
          MiIssuePageExtendRequest(a1, v28, 2LL);
          v11 = v30;
        }
      }
      goto LABEL_25;
    }
    if ( v19 - v17 < 0x400000 )
    {
      v26 = v17 <= v19;
      goto LABEL_72;
    }
LABEL_25:
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
    {
      if ( (v10 & 1) == 0 && v17 >= *(_QWORD *)(a1 + 7200) && v19 == *(_QWORD *)(a1 + 7176) )
      {
        MiFreeExcessSegments(v11);
        v11 = v30;
      }
      v21 = CurrentPrcb->CachedCommit;
      if ( v21 < 0x80 )
      {
        v22 = 256 - v21 + v17;
        if ( v22 > v17 )
        {
          v23 = v22 + v11;
          if ( v23 > v17 && v23 <= v19 )
          {
            MiReplenishLocalCommit(a1, CurrentPrcb, v17);
            return 1LL;
          }
        }
      }
    }
  }
  return 1LL;
}
