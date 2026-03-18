/*
 * XREFs of MiChargeCommit @ 0x140052270
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140022C54 (MiInitializePoolCommitPacket.c)
 *     MiDeletePteRun @ 0x140028050 (MiDeletePteRun.c)
 *     MiSetProtectionOnSection @ 0x14004E680 (MiSetProtectionOnSection.c)
 *     MiFlushSectionInternal @ 0x1400515D0 (MiFlushSectionInternal.c)
 *     MiObtainFaultCharges @ 0x140053830 (MiObtainFaultCharges.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x1400549A0 (MiCheckProtoPtePageState.c)
 *     MiCopyOnWrite @ 0x140059130 (MiCopyOnWrite.c)
 *     MiMakePageAvoidRead @ 0x14006C8C0 (MiMakePageAvoidRead.c)
 *     MiAcquireNonPagedResources @ 0x14008F414 (MiAcquireNonPagedResources.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiObtainSystemCharges @ 0x1400973CC (MiObtainSystemCharges.c)
 *     MmCreateKernelStack @ 0x1400A3B60 (MmCreateKernelStack.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiChargeForWriteInProgressPage @ 0x1400CAB48 (MiChargeForWriteInProgressPage.c)
 *     MiChargeForLockedPage @ 0x1400CABD8 (MiChargeForLockedPage.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiProbeLockFrame @ 0x1400CC670 (MiProbeLockFrame.c)
 *     MiFinishHardFault @ 0x1400CE220 (MiFinishHardFault.c)
 *     MmChargeResources @ 0x1400D7A78 (MmChargeResources.c)
 *     MiObtainMdlCharges @ 0x1400DD124 (MiObtainMdlCharges.c)
 *     MiObtainPoolCharges @ 0x1400DE368 (MiObtainPoolCharges.c)
 *     MiPurgeImageSection @ 0x14015C7D8 (MiPurgeImageSection.c)
 *     MiGetFileHashPage @ 0x140168BB8 (MiGetFileHashPage.c)
 *     MiSessionInsertImage @ 0x14017FD04 (MiSessionInsertImage.c)
 *     MiStoreChargeReservedPages @ 0x1401889E4 (MiStoreChargeReservedPages.c)
 *     MiInitializeCommitment @ 0x14019310C (MiInitializeCommitment.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBCC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiAcquireNonPagedResourcesForce @ 0x1402BD698 (MiAcquireNonPagedResourcesForce.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MiAttemptPageFileReductionApc @ 0x1402CD610 (MiAttemptPageFileReductionApc.c)
 *     MiGetSubsectionCharges @ 0x1402DE728 (MiGetSubsectionCharges.c)
 *     MiCreateLargePfnList @ 0x1402DEF48 (MiCreateLargePfnList.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiReferenceCloneProto @ 0x1402E4C2C (MiReferenceCloneProto.c)
 *     MiGetCrossPartitionCombineCharges @ 0x1402E6290 (MiGetCrossPartitionCombineCharges.c)
 *     MiMakePageBad @ 0x1402EC1B8 (MiMakePageBad.c)
 *     MiChargeFullProcessCommitment @ 0x140605690 (MiChargeFullProcessCommitment.c)
 *     MmCreateProcessAddressSpace @ 0x1406446B4 (MmCreateProcessAddressSpace.c)
 *     MiRelocateImage @ 0x140644A3C (MiRelocateImage.c)
 *     MiCreateImageFileMap @ 0x140645C84 (MiCreateImageFileMap.c)
 *     MiChargeSegmentCommit @ 0x140648780 (MiChargeSegmentCommit.c)
 *     MiCreatePagingFileMap @ 0x14064E964 (MiCreatePagingFileMap.c)
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 *     MiAllocatePerSessionProtos @ 0x1406E9D44 (MiAllocatePerSessionProtos.c)
 *     MiChargeSystemImageCommitment @ 0x140712814 (MiChargeSystemImageCommitment.c)
 *     MiSessionCreate @ 0x140741918 (MiSessionCreate.c)
 *     MiSessionCreateInternal @ 0x14074240C (MiSessionCreateInternal.c)
 *     MiCreatePagingFile @ 0x140773BF8 (MiCreatePagingFile.c)
 *     MiInitializeGapFrames @ 0x1409F44A0 (MiInitializeGapFrames.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A15380 (MiInitializeBootLoadedDriverPfns.c)
 *     MiAllocateDummyPage @ 0x140A1B128 (MiAllocateDummyPage.c)
 * Callees:
 *     MiReplenishLocalCommit @ 0x1401259E0 (MiReplenishLocalCommit.c)
 *     MiSyncCommitSignals @ 0x140193404 (MiSyncCommitSignals.c)
 *     MiFreeExcessSegments @ 0x1402B972C (MiFreeExcessSegments.c)
 *     MiIssuePageExtendRequest @ 0x1402CE42C (MiIssuePageExtendRequest.c)
 *     MiApplyCommitDelay @ 0x1402D96DC (MiApplyCommitDelay.c)
 *     MiCauseOverCommitPopup @ 0x1402D986C (MiCauseOverCommitPopup.c)
 *     MiPulseCommitSignal @ 0x1402D98D8 (MiPulseCommitSignal.c)
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
          ++dword_140466000;
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
          ++dword_140465FFC;
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
