/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x1400DBC30
 * Callers:
 *     MiDeletePteList @ 0x140026F90 (MiDeletePteList.c)
 *     MiCoalesceFreePages @ 0x14002B760 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14002BE20 (MiUnlinkFreeOrZeroedPage.c)
 *     MiReservePageFileSpaceForPage @ 0x14002CE60 (MiReservePageFileSpaceForPage.c)
 *     MiReservePageFileSpace @ 0x14002F390 (MiReservePageFileSpace.c)
 *     MiLargePageFreeToZero @ 0x14009FA50 (MiLargePageFreeToZero.c)
 *     MiConvertContiguousPages @ 0x1400A1890 (MiConvertContiguousPages.c)
 *     MiOutSwapWorkingSetPte @ 0x1400C51D0 (MiOutSwapWorkingSetPte.c)
 *     MiTransferSoftwarePte @ 0x1400DBA04 (MiTransferSoftwarePte.c)
 *     MiWriteComplete @ 0x1400DDB90 (MiWriteComplete.c)
 *     MiActOnPte @ 0x1400DE740 (MiActOnPte.c)
 *     MiDrainZeroLookasides @ 0x140126FFC (MiDrainZeroLookasides.c)
 *     MI_CLEAR_RESET_PTE @ 0x14012DE38 (MI_CLEAR_RESET_PTE.c)
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     MiMapPageFileHash @ 0x14014D0CC (MiMapPageFileHash.c)
 *     MiClearPageFileHash @ 0x140159440 (MiClearPageFileHash.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140161710 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiBuildReservationCluster @ 0x140162FB0 (MiBuildReservationCluster.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiLargeFreePageToMdl @ 0x14017B93C (MiLargeFreePageToMdl.c)
 *     MiCreatePfnTemplate @ 0x140188C84 (MiCreatePfnTemplate.c)
 *     MiEnableNewPfns @ 0x1402BD970 (MiEnableNewPfns.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402CEE10 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiFreeReservationRun @ 0x14062FE68 (MiFreeReservationRun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_140465B00 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_140465B00 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_140465B00 )
  {
    if ( (qword_140465B00 & result) != 0 )
      return result | 0x10;
    else
      return qword_140465B00 | result;
  }
  return result;
}
