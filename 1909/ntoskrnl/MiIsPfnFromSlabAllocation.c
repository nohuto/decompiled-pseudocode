/*
 * XREFs of MiIsPfnFromSlabAllocation @ 0x1400B9B40
 * Callers:
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiResolveProtoPteFault @ 0x1400B1440 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1400B2FD0 (MiHandleTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400B6670 (MmCheckCachedPageStates.c)
 *     MiDeleteClusterSection @ 0x1400B8CD0 (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x1400B9240 (MiTradePage.c)
 *     MiUnlinkStandbyBatch @ 0x1400B9840 (MiUnlinkStandbyBatch.c)
 *     MiActivePageClaimCandidate @ 0x1400BA8C0 (MiActivePageClaimCandidate.c)
 *     MiLockStealUserVm @ 0x1400C2478 (MiLockStealUserVm.c)
 *     MiReplaceTransitionPage @ 0x1400C2CE8 (MiReplaceTransitionPage.c)
 *     MiTradeTransitionPage @ 0x1400C32D4 (MiTradeTransitionPage.c)
 *     MiLockCode @ 0x1400F93D0 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400FABE4 (MiMakeDriverPagesPrivate.c)
 *     MiImagePageOk @ 0x140109BA4 (MiImagePageOk.c)
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 *     MiLockStealSystemVm @ 0x14012CDC0 (MiLockStealSystemVm.c)
 *     MiFinalizeImageHeaderPage @ 0x14012FFD0 (MiFinalizeImageHeaderPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161160 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x140188C8C (MiFreeLargeInitializationCodePages.c)
 *     MiCompleteSecureProcessFault @ 0x1402D20F8 (MiCompleteSecureProcessFault.c)
 *     MiIsFreeSlabPage @ 0x1402DC7BC (MiIsFreeSlabPage.c)
 *     MiPurgeSlabEntries @ 0x1402DC7F4 (MiPurgeSlabEntries.c)
 *     MmFreeSecureKernelPages @ 0x1402DD10C (MmFreeSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x14064E070 (MiPfPrepareReadList.c)
 *     MiHandleBootImage @ 0x1409EF61C (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A15380 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFromSlabAllocation(__int64 a1)
{
  return byte_14046945E
      && _bittest64((const signed __int64 *)qword_140469D80, (unsigned __int64)((a1 + 0x58000000000LL) / 48) >> 9);
}
