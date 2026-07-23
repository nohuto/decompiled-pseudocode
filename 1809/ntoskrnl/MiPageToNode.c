/*
 * XREFs of MiPageToNode @ 0x14009CF50
 * Callers:
 *     MiFindContiguousPages @ 0x14009A050 (MiFindContiguousPages.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14009BA00 (MiInsertLargePageInNodeListHelper.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiTradeTransitionPage @ 0x14011819C (MiTradeTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 *     MiTryUnlinkNodeLargePage @ 0x14012BC80 (MiTryUnlinkNodeLargePage.c)
 *     MiSwapStackPage @ 0x14012D250 (MiSwapStackPage.c)
 *     MiDescribePageRun @ 0x14017F0C4 (MiDescribePageRun.c)
 *     MiInitializeUnusablePfns @ 0x14017F18C (MiInitializeUnusablePfns.c)
 *     MiReplaceLockedPage @ 0x14018B174 (MiReplaceLockedPage.c)
 *     MiIdealClusterPage @ 0x1402C6E04 (MiIdealClusterPage.c)
 *     MiSwitchToPfns @ 0x1409BB954 (MiSwitchToPfns.c)
 *     MxCreateFreePfns @ 0x1409BBD10 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x1409BC3A8 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x1409BC688 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x1409BCBFC (MxComputeFreeNodeDescriptorRequirements.c)
 *     MxCreatePfn @ 0x1409C1310 (MxCreatePfn.c)
 *     MiFreeBootPageTable @ 0x1409D4228 (MiFreeBootPageTable.c)
 *     MxSwitchDescriptors @ 0x1409F8CFC (MxSwitchDescriptors.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14009D090 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14009D700 (ExAcquireSpinLockShared.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiPageToNode(unsigned __int64 a1, int a2)
{
  KIRQL v3; // di
  unsigned int v4; // edx
  unsigned int i; // r9d
  unsigned int v6; // ebx
  struct _KPRCB *CurrentPrcb; // rcx

  if ( !qword_14043B120 )
    return 0LL;
  if ( qword_14043BA08 )
  {
    if ( a2 == 1 )
    {
      v3 = 17;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_140439E38);
    }
    else
    {
      v3 = ExAcquireSpinLockShared(&dword_140439E38);
    }
  }
  else
  {
    v3 = 18;
  }
  v4 = dword_14043B104;
  if ( a1 < *(_QWORD *)(qword_14043B120 + 16LL * (unsigned int)dword_14043B104) )
  {
    do
      --v4;
    while ( a1 < *(_QWORD *)(qword_14043B120 + 16LL * v4) );
  }
  else
  {
    for ( i = dword_14043B104 + 1; a1 >= *(_QWORD *)(qword_14043B120 + 16LL * i); ++v4 )
      ++i;
  }
  v6 = *(_DWORD *)(qword_14043B120 + 16LL * v4 + 8);
  dword_14043B104 = v4;
  if ( v3 != 18 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140439E38);
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
