/*
 * XREFs of MiUnlockWorkingSetExclusive @ 0x140063CE0
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
 *     MiGetWsAndInsertVad @ 0x140063E20 (MiGetWsAndInsertVad.c)
 *     MiDeletePagablePteRange @ 0x140067FE0 (MiDeletePagablePteRange.c)
 *     MiFreePhysicalView @ 0x1400684E8 (MiFreePhysicalView.c)
 *     MiDeleteProcessShadow @ 0x1400686D0 (MiDeleteProcessShadow.c)
 *     MiMakeHyperRangeAccessible @ 0x14006E3D0 (MiMakeHyperRangeAccessible.c)
 *     MiWalkPageTablesRecursively @ 0x14006EE80 (MiWalkPageTablesRecursively.c)
 *     MiInsertPrivateVad @ 0x1400767F0 (MiInsertPrivateVad.c)
 *     MiRemoveSecureEntry @ 0x1400860C0 (MiRemoveSecureEntry.c)
 *     MiInsertVadEvent @ 0x140087B30 (MiInsertVadEvent.c)
 *     MiMakeSystemAddressValid @ 0x140088180 (MiMakeSystemAddressValid.c)
 *     MmEnforceWorkingSetLimit @ 0x14008FB50 (MmEnforceWorkingSetLimit.c)
 *     MiOutSwapWorkingSet @ 0x1400E57C8 (MiOutSwapWorkingSet.c)
 *     MiSystemFault @ 0x1400E88E0 (MiSystemFault.c)
 *     MiInsertVad @ 0x14011014C (MiInsertVad.c)
 *     MiSetTrimWhileAgingState @ 0x140120300 (MiSetTrimWhileAgingState.c)
 *     MiReleaseWalkLocks @ 0x140122778 (MiReleaseWalkLocks.c)
 *     MiDeleteCloneZombies @ 0x140132CA0 (MiDeleteCloneZombies.c)
 *     MiWaitForRotateToComplete @ 0x140139BEC (MiWaitForRotateToComplete.c)
 *     MiDeleteRotateAndStopFaults @ 0x14013A0D0 (MiDeleteRotateAndStopFaults.c)
 *     MiRotateComplete @ 0x14013A64C (MiRotateComplete.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14013C044 (MmAdjustWorkingSetSizeEx.c)
 *     MiDeleteSessionAddressSpace @ 0x1401542A0 (MiDeleteSessionAddressSpace.c)
 *     MiMakeSecureExclusive @ 0x14015601C (MiMakeSecureExclusive.c)
 *     MiSessionRemoveImage @ 0x1401580E0 (MiSessionRemoveImage.c)
 *     MmStealTopLevelPage @ 0x14015DE64 (MmStealTopLevelPage.c)
 *     MiCountSystemImageCommitment @ 0x14017341C (MiCountSystemImageCommitment.c)
 *     MiSessionInsertImage @ 0x14017600C (MiSessionInsertImage.c)
 *     MiDeleteBootRange @ 0x1401810E0 (MiDeleteBootRange.c)
 *     MiMapWithLargePages @ 0x140183440 (MiMapWithLargePages.c)
 *     MiFreeUnusedPfnPages @ 0x140183FC0 (MiFreeUnusedPfnPages.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1401B57E0 (MiLockWorkingSetForLargeMapping.c)
 *     MiClearCommitReleaseState @ 0x1402A3C78 (MiClearCommitReleaseState.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1402A4AD4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1402A4CC4 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1402A4E74 (MiReleaseOutSwappedProcessCommit.c)
 *     MmEnableProcessSvm @ 0x1402A5400 (MmEnableProcessSvm.c)
 *     MmReleaseCommitForMemResetPages @ 0x1402A5484 (MmReleaseCommitForMemResetPages.c)
 *     MmSetCommitReleaseEligibility @ 0x1402A5698 (MmSetCommitReleaseEligibility.c)
 *     MiRemoveVadEvent @ 0x1402AFD68 (MiRemoveVadEvent.c)
 *     MiBeginHoldingDirtyFaults @ 0x1402B90C0 (MiBeginHoldingDirtyFaults.c)
 *     MiFinishHoldingDirtyFaults @ 0x1402B94EC (MiFinishHoldingDirtyFaults.c)
 *     MiCloneCaptureVadCommit @ 0x1402B9E18 (MiCloneCaptureVadCommit.c)
 *     MiUnlockFaultWorkingSet @ 0x1402BF5C4 (MiUnlockFaultWorkingSet.c)
 *     MiRemovePlaceholderVad @ 0x1402C4DBC (MiRemovePlaceholderVad.c)
 *     MiInsertLargeUserMapping @ 0x1402C56F0 (MiInsertLargeUserMapping.c)
 *     MiBuildForkPte @ 0x1402C7AF0 (MiBuildForkPte.c)
 *     MiCloneVads @ 0x1402C8A68 (MiCloneVads.c)
 *     MiCreateCloneChain @ 0x1402C91F0 (MiCreateCloneChain.c)
 *     MiCreateForkWsles @ 0x1402C9454 (MiCreateForkWsles.c)
 *     MiDoneWithThisPageGetAnother @ 0x1402C97E0 (MiDoneWithThisPageGetAnother.c)
 *     MiDuplicateCloneLeaf @ 0x1402C98D8 (MiDuplicateCloneLeaf.c)
 *     MiHandleForkTransitionPte @ 0x1402CA018 (MiHandleForkTransitionPte.c)
 *     MiLockDownWorkingSet @ 0x1402CA860 (MiLockDownWorkingSet.c)
 *     MiCreateInitialSystemWsles @ 0x1409B7B7C (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiCheckProcessShadow @ 0x140046A70 (MiCheckProcessShadow.c)
 *     MiLockWorkingSetShared @ 0x140076050 (MiLockWorkingSetShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AD8 (KiRemoveSystemWorkPriorityKick.c)
 *     MiDeleteDeferredCloneDescriptors @ 0x1402C9768 (MiDeleteDeferredCloneDescriptors.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C178 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
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
    v8 = &dword_14043B700;
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
