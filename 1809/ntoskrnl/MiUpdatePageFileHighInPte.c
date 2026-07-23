/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14003D770
 * Callers:
 *     MiConvertContiguousPages @ 0x1400117AC (MiConvertContiguousPages.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiOutSwapWorkingSetPte @ 0x14003DD60 (MiOutSwapWorkingSetPte.c)
 *     MiDecommitPages @ 0x140068940 (MiDecommitPages.c)
 *     MiReservePageFileSpace @ 0x140081310 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x1400817F0 (MiReservePageFileSpaceForPage.c)
 *     MiTransferSoftwarePte @ 0x140081D88 (MiTransferSoftwarePte.c)
 *     MI_CLEAR_RESET_PTE @ 0x140093824 (MI_CLEAR_RESET_PTE.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiLargePageFreeToZero @ 0x14009B420 (MiLargePageFreeToZero.c)
 *     MiDrainZeroLookasides @ 0x14011AD10 (MiDrainZeroLookasides.c)
 *     MiLargeFreePageToMdl @ 0x14012B9B8 (MiLargeFreePageToMdl.c)
 *     MiStoreWriteModifiedPages @ 0x14014CCA0 (MiStoreWriteModifiedPages.c)
 *     MiMapPageFileHash @ 0x14014FDD8 (MiMapPageFileHash.c)
 *     MiBuildReservationCluster @ 0x1401501BC (MiBuildReservationCluster.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140152020 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 *     MiClearPageFileHash @ 0x140156988 (MiClearPageFileHash.c)
 *     MiEnableNewPfns @ 0x1402A6418 (MiEnableNewPfns.c)
 *     MiExpandSpecialPool @ 0x1402AC64C (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1402ACAC0 (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x1402ACD54 (MmAllocateSpecialPool.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8C60 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiFreeReservationRun @ 0x1406BA134 (MiFreeReservationRun.c)
 *     MiInitializeBlankPfns @ 0x1409BC160 (MiInitializeBlankPfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_14043B180 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_14043B180 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_14043B180 )
  {
    if ( (qword_14043B180 & result) != 0 )
      return result | 0x10;
    else
      return qword_14043B180 | result;
  }
  return result;
}
