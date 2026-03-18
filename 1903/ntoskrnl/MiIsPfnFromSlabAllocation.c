/*
 * XREFs of MiIsPfnFromSlabAllocation @ 0x1400D9CC0
 * Callers:
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MiTradeTransitionPage @ 0x14009D6C8 (MiTradeTransitionPage.c)
 *     MiResolveProtoPteFault @ 0x1400D15C0 (MiResolveProtoPteFault.c)
 *     MiHandleTransitionFault @ 0x1400D3150 (MiHandleTransitionFault.c)
 *     MmCheckCachedPageStates @ 0x1400D67F0 (MmCheckCachedPageStates.c)
 *     MiDeleteClusterSection @ 0x1400D8E50 (MiDeleteClusterSection.c)
 *     MiTradePage @ 0x1400D93C0 (MiTradePage.c)
 *     MiUnlinkStandbyBatch @ 0x1400D99C0 (MiUnlinkStandbyBatch.c)
 *     MiActivePageClaimCandidate @ 0x1400DAA40 (MiActivePageClaimCandidate.c)
 *     MiLockStealUserVm @ 0x1400E22B4 (MiLockStealUserVm.c)
 *     MiLockCode @ 0x1400F5930 (MiLockCode.c)
 *     MiMakeDriverPagesPrivate @ 0x1400F7144 (MiMakeDriverPagesPrivate.c)
 *     MiImagePageOk @ 0x14010255C (MiImagePageOk.c)
 *     MmFreeIndependentPages @ 0x14010DB20 (MmFreeIndependentPages.c)
 *     MiLockStealSystemVm @ 0x14012C2F0 (MiLockStealSystemVm.c)
 *     MiFinalizeImageHeaderPage @ 0x14012F5E0 (MiFinalizeImageHeaderPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161710 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiFreeLargeInitializationCodePages @ 0x1401886DC (MiFreeLargeInitializationCodePages.c)
 *     MiCompleteSecureProcessFault @ 0x1402D2398 (MiCompleteSecureProcessFault.c)
 *     MiIsFreeSlabPage @ 0x1402DCA5C (MiIsFreeSlabPage.c)
 *     MiPurgeSlabEntries @ 0x1402DCA94 (MiPurgeSlabEntries.c)
 *     MmFreeSecureKernelPages @ 0x1402DD3AC (MmFreeSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x140687EA0 (MiPfPrepareReadList.c)
 *     MiHandleBootImage @ 0x1409EF704 (MiHandleBootImage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140A14BE0 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFromSlabAllocation(__int64 a1)
{
  return byte_14046971E
      && _bittest64((const signed __int64 *)qword_14046A040, (unsigned __int64)((a1 + 0x58000000000LL) / 48) >> 9);
}
