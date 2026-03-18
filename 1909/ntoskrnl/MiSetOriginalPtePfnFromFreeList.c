/*
 * XREFs of MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8
 * Callers:
 *     MiWaitForInPageComplete @ 0x140006C70 (MiWaitForInPageComplete.c)
 *     MiInsertLargePageInFreeOrZeroList @ 0x140027960 (MiInsertLargePageInFreeOrZeroList.c)
 *     MiCoalesceFreePages @ 0x14002BB50 (MiCoalesceFreePages.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiGetLargePage @ 0x140096E20 (MiGetLargePage.c)
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 *     MiTradeTransitionPage @ 0x1400C32D4 (MiTradeTransitionPage.c)
 *     MiStealPage @ 0x1400C3928 (MiStealPage.c)
 *     MiConvertContiguousPages @ 0x1400C4818 (MiConvertContiguousPages.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1400F8050 (MiUnlinkNodeLargePageHelper.c)
 *     MiCreateUltraThreadContextHelper @ 0x1400F8DA8 (MiCreateUltraThreadContextHelper.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiSlistGetFreePage @ 0x140116E5C (MiSlistGetFreePage.c)
 *     MiReplacePageTablePage @ 0x140122280 (MiReplacePageTablePage.c)
 *     MiFinalizeImageHeaderPage @ 0x14012FFD0 (MiFinalizeImageHeaderPage.c)
 *     MiSwapStackPageNoDpc @ 0x140135188 (MiSwapStackPageNoDpc.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161160 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiLargeFreePageToMdl @ 0x14017C02C (MiLargeFreePageToMdl.c)
 *     MiFreeLargeInitializationCodePages @ 0x140188C8C (MiFreeLargeInitializationCodePages.c)
 *     MiFindLargeNodePage @ 0x1402C0618 (MiFindLargeNodePage.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     MiReplaceLockedPage @ 0x1402CA310 (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1402D20F8 (MiCompleteSecureProcessFault.c)
 *     MiReuseStandbyPage @ 0x1402DA660 (MiReuseStandbyPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA6D0 (MiSwapNumaStandbyPage.c)
 *     MiReInitializeFreeSlabPfn @ 0x1402DCB60 (MiReInitializeFreeSlabPfn.c)
 *     MiFreeLargePageSubPageAsSmall @ 0x1402DF514 (MiFreeLargePageSubPageAsSmall.c)
 *     MiGetFastLargePage @ 0x1408997F8 (MiGetFastLargePage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x140076660 (MiSwizzleInvalidPte.c)
 */

unsigned __int64 __fastcall MiSetOriginalPtePfnFromFreeList(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v2; // rdx

  if ( *a1 )
  {
    result = *a1 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
    *a1 = result;
  }
  else
  {
    result = MiSwizzleInvalidPte(128LL);
    *v2 = result;
  }
  return result;
}
