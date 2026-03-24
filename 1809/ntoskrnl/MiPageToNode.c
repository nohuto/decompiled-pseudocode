/*
 * XREFs of MiPageToNode @ 0x14009D010
 * Callers:
 *     MiFindContiguousPages @ 0x14009A110 (MiFindContiguousPages.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BAC0 (MiInsertLargePageInNodeListHelper.c)
 *     MiStealPage @ 0x1400EBF44 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x14011812C (MiTradeTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x14011846C (MiReplaceTransitionPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x14012BBB0 (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x14012D180 (MiSwapStackPage.c)
 *     MiDescribePageRun @ 0x14017EF84 (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x14017F04C (MiInitializeUnusablePfns.c)
 *     MiReplaceLockedPage @ 0x14018B034 (MiReplaceLockedPage.c)
 *     MiIdealClusterPage @ 0x1402C6C14 (MiIdealClusterPage.c)
 *     MiSwitchToPfns @ 0x1409BA954 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x1409BAD10 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1409BB3A8 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x1409BB688 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1409BBBFC (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxCreatePfn @ 0x1409C0310 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x1409D3228 (MiFreeBootPageTable.c)
 *     MxSwitchDescriptors @ 0x1409F7CFC (MxSwitchDescriptors.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D110 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D150 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D7C0 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4AF8 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPageToNode(unsigned __int64 a1, int a2)
{
  KIRQL v3; // di
  unsigned int v4; // edx
  unsigned int i; // r9d
  unsigned int v6; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !qword_14043A060 )
    return 0LL;
  if ( qword_14043A948 )
  {
    if ( a2 == 1 )
    {
      v3 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_140438D78);
    }
    else
    {
      v3 = ExAcquireSpinLockShared(&dword_140438D78);
    }
  }
  else
  {
    v3 = 18;
  }
  v4 = dword_14043A044;
  if ( a1 < *(_QWORD *)(qword_14043A060 + 16LL * (unsigned int)dword_14043A044) )
  {
    do
      --v4;
    while ( a1 < *(_QWORD *)(qword_14043A060 + 16LL * v4) );
  }
  else
  {
    for ( i = dword_14043A044 + 1; a1 >= *(_QWORD *)(qword_14043A060 + 16LL * i); ++v4 )
      ++i;
  }
  v6 = *(_DWORD *)(qword_14043A060 + 16LL * v4 + 8);
  dword_14043A044 = v4;
  if ( v3 != 18 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140438D78);
    if ( v3 != 17 )
    {
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v3);
    }
  }
  return v6;
}
