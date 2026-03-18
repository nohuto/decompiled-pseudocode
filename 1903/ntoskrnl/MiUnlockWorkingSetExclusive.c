/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x140072E50
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiMakeSystemAddressValid @ 0x140021630 (MiMakeSystemAddressValid.c)
 *     MiFreePhysicalView @ 0x140057630 (MiFreePhysicalView.c)
 *     MiInsertPrivateVad @ 0x1400712D0 (MiInsertPrivateVad.c)
 *     MiInsertVadEvent @ 0x1400727FC (MiInsertVadEvent.c)
 *     MiGetWsAndInsertVad @ 0x1400729C0 (MiGetWsAndInsertVad.c)
 *     MiRemoveSecureEntry @ 0x1400739F0 (MiRemoveSecureEntry.c)
 *     MiSystemFault @ 0x140075120 (MiSystemFault.c)
 *     MiBeginProcessClean @ 0x14008BA24 (MiBeginProcessClean.c)
 *     MiReleaseFaultState @ 0x1400A1624 (MiReleaseFaultState.c)
 *     MiInsertInSystemSpace @ 0x1400A82A0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400A8C3C (MiRemoveFromSystemSpace.c)
 *     MiDeletePartialVad @ 0x1400ABFA8 (MiDeletePartialVad.c)
 *     MiDeletePagablePteRange @ 0x1400ACB20 (MiDeletePagablePteRange.c)
 *     MiDeleteProcessShadow @ 0x1400AD220 (MiDeleteProcessShadow.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiUserFault @ 0x1400CADF0 (MiUserFault.c)
 *     MmEnforceWorkingSetLimit @ 0x1400E5BCC (MmEnforceWorkingSetLimit.c)
 *     MiOutSwapWorkingSet @ 0x1400F44E8 (MiOutSwapWorkingSet.c)
 *     MiSetTrimWhileAgingState @ 0x1400F9F54 (MiSetTrimWhileAgingState.c)
 *     MiRotateComplete @ 0x140118E8C (MiRotateComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x1401193C8 (MiDeleteRotateAndStopFaults.c)
 *     MiReleaseWalkLocks @ 0x140119A60 (MiReleaseWalkLocks.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14012D4BC (MmAdjustWorkingSetSizeEx.c)
 *     MiCleanWorkingSet @ 0x14012F3E4 (MiCleanWorkingSet.c)
 *     MiDeleteCloneZombies @ 0x140134494 (MiDeleteCloneZombies.c)
 *     MiWaitForRotateToComplete @ 0x14013ACE8 (MiWaitForRotateToComplete.c)
 *     MiMakeSecureExclusive @ 0x140159178 (MiMakeSecureExclusive.c)
 *     MiInsertVad @ 0x14015A7D0 (MiInsertVad.c)
 *     MiDeleteSessionAddressSpace @ 0x140166510 (MiDeleteSessionAddressSpace.c)
 *     MiSessionRemoveImage @ 0x1401687C4 (MiSessionRemoveImage.c)
 *     MiCountSystemImageCommitment @ 0x14017A5F4 (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14017F614 (MiSessionInsertImage.c)
 *     MiFreeUnusedPfnPagesDpc @ 0x140185A00 (MiFreeUnusedPfnPagesDpc.c)
 *     MiDeleteBootRange @ 0x14018A7A8 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x14018CB60 (MiMapWithLargePages.c)
 *     MmStealTopLevelPage @ 0x14018EB24 (MmStealTopLevelPage.c)
 *     MiClearCommitReleaseState @ 0x1402BB134 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402BBF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402BC154 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402BC304 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1402BC890 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402BC8F4 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402BCB14 (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x1402C7CB0 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x1402CF68C (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402CFAC8 (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x1402D012C (MiCloneCaptureVadCommit.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1402D8E18 (MiLockWorkingSetForLargeMapping.c)
 *     MiUnlockFaultWorkingSet @ 0x1402D8F78 (MiUnlockFaultWorkingSet.c)
 *     MiRemovePlaceholderVad @ 0x1402DEDEC (MiRemovePlaceholderVad.c)
 *     MiInsertLargeUserMapping @ 0x1402DFE84 (MiInsertLargeUserMapping.c)
 *     MiBuildForkPte @ 0x1402E1E60 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402E2EAC (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402E3644 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1402E38A8 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402E3C34 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x1402E3D30 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402E4458 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x1402E4CAC (MiLockDownWorkingSet.c)
 *     MiCreateInitialSystemWsles @ 0x1409EF520 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x1400CCBA0 (MiCheckProcessShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402E3BBC (MiDeleteDeferredCloneDescriptors.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14033B218 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
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
    v8 = &dword_140467200;
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
