/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x1400BBAB0
 * Callers:
 *     MiDeletePteList @ 0x140027380 (MiDeletePteList.c)
 *     MiCoalesceFreePages @ 0x14002BB50 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002C210 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReservePageFileSpaceForPage @ 0x14002D250 (MiReservePageFileSpaceForPage.c)
 *     MiReservePageFileSpace @ 0x14002F780 (MiReservePageFileSpace.c)
 *     MiOutSwapWorkingSetPte @ 0x1400A5050 (MiOutSwapWorkingSetPte.c)
 *     MiTransferSoftwarePte @ 0x1400BB884 (MiTransferSoftwarePte.c)
 *     MiWriteComplete @ 0x1400BDA10 (MiWriteComplete.c)
 *     MiActOnPte @ 0x1400BE5C0 (MiActOnPte.c)
 *     MiConvertContiguousPages @ 0x1400C4818 (MiConvertContiguousPages.c)
 *     MiLargePageFreeToZero @ 0x1400C4B30 (MiLargePageFreeToZero.c)
 *     MiDrainZeroLookasides @ 0x140127A1C (MiDrainZeroLookasides.c)
 *     MI_CLEAR_RESET_PTE @ 0x14012E6D0 (MI_CLEAR_RESET_PTE.c)
 *     MiStoreWriteModifiedPages @ 0x14014A668 (MiStoreWriteModifiedPages.c)
 *     MiMapPageFileHash @ 0x14014D76C (MiMapPageFileHash.c)
 *     MiClearPageFileHash @ 0x140159AE0 (MiClearPageFileHash.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161160 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140162A00 (MiBuildReservationCluster.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiLargeFreePageToMdl @ 0x14017C02C (MiLargeFreePageToMdl.c)
 *     MiCreatePfnTemplate @ 0x140189234 (MiCreatePfnTemplate.c)
 *     MiEnableNewPfns @ 0x1402BD6D0 (MiEnableNewPfns.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEB70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiFreeReservationRun @ 0x140633CE8 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140465800 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140465800 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140465800 )
  {
    if ( (qword_140465800 & result) != 0 )
      return result | 0x10;
    else
      return qword_140465800 | result;
  }
  return result;
}
