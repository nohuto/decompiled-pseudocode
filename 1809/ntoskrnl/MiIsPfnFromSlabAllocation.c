/*
 * XREFs of MiIsPfnFromSlabAllocation @ 0x14003120C
 * Callers:
 *     MmFreeIndependentPages @ 0x140001010 (MmFreeIndependentPages.c)
 *     MiGetHardFaultPages @ 0x140029BE0 (MiGetHardFaultPages.c)
 *     MiImagePageOk @ 0x14002CFA8 (MiImagePageOk.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiInsertPageInList @ 0x140039FD0 (MiInsertPageInList.c)
 *     MiHandleTransitionFault @ 0x14003B680 (MiHandleTransitionFault.c)
 *     MiResolveProtoPteFault @ 0x140042E60 (MiResolveProtoPteFault.c)
 *     MiLockCode @ 0x1400975A0 (MiLockCode.c)
 *     MiActivePageClaimCandidate @ 0x14009CA50 (MiActivePageClaimCandidate.c)
 *     MiMakeDriverPagesPrivate @ 0x1400DB3F0 (MiMakeDriverPagesPrivate.c)
 *     MiLockStealSystemVm @ 0x1400E9958 (MiLockStealSystemVm.c)
 *     MiLockStealUserVm @ 0x1400EDBF4 (MiLockStealUserVm.c)
 *     MiTradeTransitionPage @ 0x14011810C (MiTradeTransitionPage.c)
 *     MiReplaceTransitionPage @ 0x14011844C (MiReplaceTransitionPage.c)
 *     MiFinalizeImageHeaderPage @ 0x14012DD90 (MiFinalizeImageHeaderPage.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140151F00 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiIsFreeSlabPage @ 0x1401B5920 (MiIsFreeSlabPage.c)
 *     MiCompleteSecureProcessFault @ 0x1402BBB04 (MiCompleteSecureProcessFault.c)
 *     MmFreeSecureKernelPages @ 0x1402C3034 (MmFreeSecureKernelPages.c)
 *     MiPfPrepareReadList @ 0x1405DFDE0 (MiPfPrepareReadList.c)
 *     MiReloadBootLoadedDrivers @ 0x1409B7C6C (MiReloadBootLoadedDrivers.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x1409B8BD8 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiIsPfnFromSlabAllocation(__int64 a1)
{
  return byte_14043DBDE
      && _bittest64((const signed __int64 *)qword_14043E218, (unsigned __int64)((a1 + 0x58000000000LL) / 48) >> 9);
}
