/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x1400730C0
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiMakeSystemAddressValid @ 0x140021A20 (MiMakeSystemAddressValid.c)
 *     MiFreePhysicalView @ 0x1400576D0 (MiFreePhysicalView.c)
 *     MiInsertPrivateVad @ 0x140071540 (MiInsertPrivateVad.c)
 *     MiInsertVadEvent @ 0x140072A6C (MiInsertVadEvent.c)
 *     MiGetWsAndInsertVad @ 0x140072C30 (MiGetWsAndInsertVad.c)
 *     MiRemoveSecureEntry @ 0x140073C60 (MiRemoveSecureEntry.c)
 *     MiSystemFault @ 0x140075390 (MiSystemFault.c)
 *     MiBeginProcessClean @ 0x14008CD24 (MiBeginProcessClean.c)
 *     MiDeleteProcessShadow @ 0x14008EB30 (MiDeleteProcessShadow.c)
 *     MiInsertInSystemSpace @ 0x140095820 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x140097494 (MiRemoveFromSystemSpace.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiUserFault @ 0x1400AAC70 (MiUserFault.c)
 *     MiReleaseFaultState @ 0x1400C4718 (MiReleaseFaultState.c)
 *     MiOutSwapWorkingSet @ 0x1400D987C (MiOutSwapWorkingSet.c)
 *     MiDeletePartialVad @ 0x1400E74B8 (MiDeletePartialVad.c)
 *     MiDeletePagablePteRange @ 0x1400E8030 (MiDeletePagablePteRange.c)
 *     MmEnforceWorkingSetLimit @ 0x1400EAB6C (MmEnforceWorkingSetLimit.c)
 *     MiRotateComplete @ 0x1400F6FAC (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1400F74E8 (MiDeleteRotateAndStopFaults.c)
 *     MiReleaseWalkLocks @ 0x140117AF0 (MiReleaseWalkLocks.c)
 *     MiSetTrimWhileAgingState @ 0x140123428 (MiSetTrimWhileAgingState.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012DF0C (MmAdjustWorkingSetSizeEx.c)
 *     MiCleanWorkingSet @ 0x14012FDD4 (MiCleanWorkingSet.c)
 *     MiDeleteCloneZombies @ 0x140134D94 (MiDeleteCloneZombies.c)
 *     MiWaitForRotateToComplete @ 0x14013B138 (MiWaitForRotateToComplete.c)
 *     MiMakeSecureExclusive @ 0x140159818 (MiMakeSecureExclusive.c)
 *     MiInsertVad @ 0x14015AE70 (MiInsertVad.c)
 *     MiDeleteSessionAddressSpace @ 0x140165F60 (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x140168214 (MiSessionRemoveImage.c)
 *     MiCountSystemImageCommitment @ 0x14017ACE4 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14017FD04 (MiSessionInsertImage.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x140185FB0 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteBootRange @ 0x14018B138 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x14018D3E0 (MiMapWithLargePages.c)
 *     MmStealTopLevelPage @ 0x14018F434 (MmStealTopLevelPage.c)
 *     MiClearCommitReleaseState @ 0x1402BAE94 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBCC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402BBEB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC064 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1402BC5F0 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC654 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402BC874 (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x1402C7A10 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x1402CF3EC (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402CF828 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x1402CFE8C (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1402D8B78 (MiLockWorkingSetForLargeMapping.c)
 *     MiUnlockFaultWorkingSet @ 0x1402D8CD8 (MiUnlockFaultWorkingSet.c)
 *     MiRemovePlaceholderVad @ 0x1402DEB4C (MiRemovePlaceholderVad.c)
 *     MiInsertLargeUserMapping @ 0x1402DFBE4 (MiInsertLargeUserMapping.c)
 *     MiBuildForkPte @ 0x1402E1BC0 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402E2C0C (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402E33A4 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1402E3608 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402E3994 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3A90 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402E41B8 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x1402E4A0C (MiLockDownWorkingSet.c)
 *     MiCreateInitialSystemWsles @ 0x1409EF438 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14005D6D0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400AC920 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1400ACA20 (MiCheckProcessShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402E391C (MiDeleteDeferredCloneDescriptors.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033AC78 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v4; // bp
  int v6; // esi
  _QWORD *v7; // r14
  LONG *v8; // rbx
  _KPROCESS *Process; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v12; // eax
  struct _KPRCB *v13; // rcx
  _QWORD *v14; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v16; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v6 = 0;
  v7 = 0LL;
  v16 = *(_DWORD *)(a1 + 184);
  if ( (v16 & 7) == 2 )
    v8 = &dword_140466F00;
  else
    v8 = (LONG *)(a1 + 192);
  if ( (v16 & 7) == 0 )
  {
    if ( *(_QWORD *)(a1 + 16) )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( *(_WORD *)(*(_QWORD *)&Process[1].IdealNode[14] + 368LL) )
        v7 = (_QWORD *)MiDeleteDeferredCloneDescriptors(Process, a2, a3, a4);
    }
  }
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
    v6 = 1;
  MiCheckProcessShadow(a1, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8, retaddr);
  else
    *v8 = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v12 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v12;
      if ( !v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    v13 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v13->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v13);
  }
  __writecr8(v4);
  if ( v7 )
  {
    do
    {
      v14 = (_QWORD *)*v7;
      ExFreePoolWithTag(v7, 0);
      v7 = v14;
    }
    while ( v14 );
  }
  if ( !v6 && ((v16 & 0x8000000) != 0 || (v16 & 0x4000000) != 0 || (v16 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(a1);
    MiUnlockWorkingSetShared(a1, v4);
  }
}
