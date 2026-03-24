/*
 * XREFs of MiUpdatePageFileHighInPte @ 0x14003D770
 * Callers:
 *     MiConvertContiguousPages @ 0x1400117AC (MiConvertContiguousPages.c)
 *     MiWriteComplete @ 0x140021DE0 (MiWriteComplete.c)
 *     MiCoalesceFreePages @ 0x1400390D0 (MiCoalesceFreePages.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140039AD0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiOutSwapWorkingSetPte @ 0x14003DD60 (MiOutSwapWorkingSetPte.c)
 *     MiDecommitPages @ 0x140068950 (MiDecommitPages.c)
 *     MiReservePageFileSpace @ 0x140081320 (MiReservePageFileSpace.c)
 *     MiReservePageFileSpaceForPage @ 0x140081800 (MiReservePageFileSpaceForPage.c)
 *     MiTransferSoftwarePte @ 0x140081D98 (MiTransferSoftwarePte.c)
 *     MI_CLEAR_RESET_PTE @ 0x1400938E4 (MI_CLEAR_RESET_PTE.c)
 *     MiActOnPte @ 0x14009410C (MiActOnPte.c)
 *     MiLargePageFreeToZero @ 0x14009B4E0 (MiLargePageFreeToZero.c)
 *     MiDrainZeroLookasides @ 0x14011ACA0 (MiDrainZeroLookasides.c)
 *     MiLargeFreePageToMdl @ 0x14012B8E8 (MiLargeFreePageToMdl.c)
 *     MiStoreWriteModifiedPages @ 0x14014CBA0 (MiStoreWriteModifiedPages.c)
 *     MiMapPageFileHash @ 0x14014FCD8 (MiMapPageFileHash.c)
 *     MiBuildReservationCluster @ 0x1401500BC (MiBuildReservationCluster.c)
 *     MiRemoveLowestPriorityStandbyPage @ 0x140151F20 (MiRemoveLowestPriorityStandbyPage.c)
 *     MiResolvePageFileFault @ 0x140154B44 (MiResolvePageFileFault.c)
 *     MiClearPageFileHash @ 0x140156888 (MiClearPageFileHash.c)
 *     MiEnableNewPfns @ 0x1402A6228 (MiEnableNewPfns.c)
 *     MiExpandSpecialPool @ 0x1402AC45C (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x1402AC8D0 (MiRemoveSpecialPoolRange.c)
 *     MmAllocateSpecialPool @ 0x1402ACB64 (MmAllocateSpecialPool.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1402B8A70 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiFreeReservationRun @ 0x1406B8E94 (MiFreeReservationRun.c)
 *     MiInitializeBlankPfns @ 0x1409BB160 (MiInitializeBlankPfns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdatePageFileHighInPte(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && qword_14043A0C0 )
  {
    if ( (a1 & 0x10) != 0 )
      LODWORD(a1) = a1 & 0xFFFFFFEF;
    else
      LODWORD(a1) = ~(_DWORD)qword_14043A0C0 & a1;
  }
  result = (a2 << 32) | (unsigned int)a1;
  if ( qword_14043A0C0 )
  {
    if ( (qword_14043A0C0 & result) != 0 )
      return result | 0x10;
    else
      return qword_14043A0C0 | result;
  }
  return result;
}
