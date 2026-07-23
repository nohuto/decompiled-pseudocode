/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x140097DE0
 * Callers:
 *     MiConvertContiguousPages @ 0x1400117AC (MiConvertContiguousPages.c)
 *     MiWaitForInPageComplete @ 0x14001B7E0 (MiWaitForInPageComplete.c)
 *     MiGet64KPage @ 0x14002B8B0 (MiGet64KPage.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140036320 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400646F0 (MiUnlinkNodeLargePageHelper.c)
 *     MiLockCode @ 0x1400974E0 (MiLockCode.c)
 *     MiTradePage @ 0x14009C030 (MiTradePage.c)
 *     MiSlistGetFreePage @ 0x1400EB3E4 (MiSlistGetFreePage.c)
 *     MiStealPage @ 0x1400EBFC4 (MiStealPage.c)
 *     MiGetPageSlist @ 0x14010CD20 (MiGetPageSlist.c)
 *     MiTradeTransitionPage @ 0x14011819C (MiTradeTransitionPage.c)
 *     MiReplacePageTablePage @ 0x14011BEFC (MiReplacePageTablePage.c)
 *     MiLargeFreePageToMdl @ 0x14012B9B8 (MiLargeFreePageToMdl.c)
 *     MiSwapStackPageNoDpc @ 0x14012D744 (MiSwapStackPageNoDpc.c)
 *     MiFinalizeImageHeaderPage @ 0x14012DE80 (MiFinalizeImageHeaderPage.c)
 *     MiCreateUltraThreadContextHelper @ 0x14013CC4C (MiCreateUltraThreadContextHelper.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140152020 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiReplaceLockedPage @ 0x14018B174 (MiReplaceLockedPage.c)
 *     MiFindLargeNodePage @ 0x1402A91F4 (MiFindLargeNodePage.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBDF4 (MiCompleteSecureProcessFault.c)
 *     MiReuseStandbyPage @ 0x1402C1190 (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402C2DF0 (MiReInitializeFreeSlabPfn.c)
 *     MiGetFastLargePage @ 0x14085E68C (MiGetFastLargePage.c)
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
    result = qword_14043B180;
    v2 = 128LL;
    if ( qword_14043B180 )
    {
      if ( (qword_14043B180 & 0x80u) != 0LL )
        v2 = 144LL;
      else
        v2 = qword_14043B180 | 0x80;
    }
    *a1 = v2;
  }
  return result;
}
