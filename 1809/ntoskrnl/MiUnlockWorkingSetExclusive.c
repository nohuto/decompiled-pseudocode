/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x140063CD0
 * Callers:
 *     MiCleanWorkingSet @ 0x14000FEA4 (MiCleanWorkingSet.c)
 *     MiBeginProcessClean @ 0x140011D68 (MiBeginProcessClean.c)
 *     MiReleaseFaultState @ 0x14001AED0 (MiReleaseFaultState.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiDeletePartialVad @ 0x140025850 (MiDeletePartialVad.c)
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiInsertInSystemSpace @ 0x1400273C0 (MiInsertInSystemSpace.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiUserFault @ 0x140044870 (MiUserFault.c)
 *     MiGetWsAndInsertVad @ 0x140063E10 (MiGetWsAndInsertVad.c)
 *     MiDeletePagablePteRange @ 0x140067FD0 (MiDeletePagablePteRange.c)
 *     MiFreePhysicalView @ 0x1400684D8 (MiFreePhysicalView.c)
 *     MiDeleteProcessShadow @ 0x1400686C0 (MiDeleteProcessShadow.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3C0 (MiMakeHyperRangeAccessible.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE70 (MiWalkPageTablesRecursively.c)
 *     MiInsertPrivateVad @ 0x1400767E0 (MiInsertPrivateVad.c)
 *     MiRemoveSecureEntry @ 0x1400860B0 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x140087B20 (MiInsertVadEvent.c)
 *     MiMakeSystemAddressValid @ 0x140088170 (MiMakeSystemAddressValid.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FA70 (MmEnforceWorkingSetLimit.c)
 *     MiOutSwapWorkingSet @ 0x1400E5868 (MiOutSwapWorkingSet.c)
 *     MiSystemFault @ 0x1400E8980 (MiSystemFault.c)
 *     MiInsertVad @ 0x1401101EC (MiInsertVad.c)
 *     MiSetTrimWhileAgingState @ 0x140120390 (MiSetTrimWhileAgingState.c)
 *     MiReleaseWalkLocks @ 0x140122868 (MiReleaseWalkLocks.c)
 *     MiDeleteCloneZombies @ 0x140132D90 (MiDeleteCloneZombies.c)
 *     MiWaitForRotateToComplete @ 0x140139D0C (MiWaitForRotateToComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x14013A1F0 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x14013A76C (MiRotateComplete.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C164 (MmAdjustWorkingSetSizeEx.c)
 *     MiDeleteSessionAddressSpace @ 0x1401543C0 (MiDeleteSessionAddressSpace.c)
 *     MiMakeSecureExclusive @ 0x14015613C (MiMakeSecureExclusive.c)
 *     MiSessionRemoveImage @ 0x140158200 (MiSessionRemoveImage.c)
 *     MmStealTopLevelPage @ 0x14015DF84 (MmStealTopLevelPage.c)
 *     MiCountSystemImageCommitment @ 0x14017353C (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14017612C (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x140181240 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x1401835A0 (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x140184120 (MiFreeUnusedPfnPages.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1401B5940 (MiLockWorkingSetForLargeMapping.c)
 *     MiClearCommitReleaseState @ 0x1402A3F68 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4DC4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4FB4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A5164 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1402A56F0 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5774 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402A5988 (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x1402B0058 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x1402B93B0 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402B97DC (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x1402BA108 (MiCloneCaptureVadCommit.c)
 *     MiUnlockFaultWorkingSet @ 0x1402BF8B4 (MiUnlockFaultWorkingSet.c)
 *     MiRemovePlaceholderVad @ 0x1402C50AC (MiRemovePlaceholderVad.c)
 *     MiInsertLargeUserMapping @ 0x1402C59E0 (MiInsertLargeUserMapping.c)
 *     MiBuildForkPte @ 0x1402C7DE0 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402C8D58 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402C94E0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1402C9744 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402C9AD0 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x1402C9BC8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402CA308 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x1402CAB50 (MiLockDownWorkingSet.c)
 *     MiCreateInitialSystemWsles @ 0x1409B8B7C (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140076040 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402C9A58 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall MiUnlockWorkingSetExclusive(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  int v6; // esi
  _QWORD *v7; // r14
  LONG *v8; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  int v11; // eax
  struct _KPRCB *v12; // rcx
  _QWORD *v13; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]
  int v15; // [rsp+48h] [rbp+10h]

  v6 = 0;
  v7 = 0LL;
  v15 = *(_DWORD *)(a1 + 184);
  if ( (v15 & 7) == 2 )
    v8 = &dword_14043C7C0;
  else
    v8 = (LONG *)(a1 + 192);
  if ( (v15 & 7) == 0
    && *(_QWORD *)(a1 + 16)
    && *(_WORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 320LL) )
  {
    v7 = (_QWORD *)MiDeleteDeferredCloneDescriptors();
  }
  if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 0x400000) != 0 )
    v6 = 1;
  MiCheckProcessShadow(a1, 2u, a3, a4);
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
      v11 = SchedulerAssist[5] - 1;
      SchedulerAssist[5] = v11;
      if ( !v11 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a2 < 2u )
  {
    v12 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v12->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v12);
  }
  __writecr8(a2);
  if ( v7 )
  {
    do
    {
      v13 = (_QWORD *)*v7;
      ExFreePoolWithTag(v7, 0);
      v7 = v13;
    }
    while ( v13 );
  }
  if ( !v6 && ((v15 & 0x8000000) != 0 || (v15 & 0x4000000) != 0 || (v15 & 0x10000000) != 0) )
  {
    MiLockWorkingSetShared(a1);
    MiUnlockWorkingSetShared(a1, a2);
  }
}
