/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x140097EA0
 * Callers:
 *     MiConvertContiguousPages @ 0x1400117AC (MiConvertContiguousPages.c)
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140064700 (MiUnlinkNodeLargePageHelper.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiTradePage @ 0x14009C0F0 (MiTradePage.c)
 *     MiSlistGetFreePage @ 0x1400EB364 (MiSlistGetFreePage.c)
 *     MiStealPage @ 0x1400EBF44 (MiStealPage.c)
 *     MiGetPageSlist @ 0x14010CCA0 (MiGetPageSlist.c)
 *     MiTradeTransitionPage @ 0x14011812C (MiTradeTransitionPage.c)
 *     MiReplacePageTablePage @ 0x14011BE8C (MiReplacePageTablePage.c)
 *     MiLargeFreePageToMdl @ 0x14012B8E8 (MiLargeFreePageToMdl.c)
 *     MiSwapStackPageNoDpc @ 0x14012D674 (MiSwapStackPageNoDpc.c)
 *     MiFinalizeImageHeaderPage @ 0x14012DDB0 (MiFinalizeImageHeaderPage.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013CB4C (MiCreateUltraThreadContextHelper.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140151F20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceLockedPage @ 0x14018B034 (MiReplaceLockedPage.c)
 *     MiFindLargeNodePage @ 0x1402A9004 (MiFindLargeNodePage.c)
 *     MiSwitchToTransition @ 0x1402AF640 (MiSwitchToTransition.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBC04 (MiCompleteSecureProcessFault.c)
 *     MiReuseStandbyPage @ 0x1402C0FA0 (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1010 (MiSwapNumaStandbyPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402C2C00 (MiReInitializeFreeSlabPfn.c)
 *     MiGetFastLargePage @ 0x14085D42C (MiGetFastLargePage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetOriginalPtePfnFromFreeList(_QWORD *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rdx

  if ( *a1 )
  {
    result = *a1 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    *a1 = result;
  }
  else
  {
    result = qword_14043A0C0;
    v2 = 128LL;
    if ( qword_14043A0C0 )
    {
      if ( (qword_14043A0C0 & 0x80u) != 0LL )
        v2 = 144LL;
      else
        v2 = qword_14043A0C0 | 0x80;
    }
    *a1 = v2;
  }
  return result;
}
