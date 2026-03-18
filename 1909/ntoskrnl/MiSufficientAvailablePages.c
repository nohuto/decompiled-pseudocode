/*
 * XREFs of MiSufficientAvailablePages @ 0x14007D460
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     MmEnoughMemoryForWrite @ 0x14007C0C0 (MmEnoughMemoryForWrite.c)
 *     MiGetPoolPages @ 0x14007C1AC (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x14007C3F8 (MiRetryNonPagedAllocation.c)
 *     MiWaitForFreePagesToZero @ 0x14007C490 (MiWaitForFreePagesToZero.c)
 *     MiComputeZeroClusterMaximum @ 0x14007DA20 (MiComputeZeroClusterMaximum.c)
 *     MiPickClusterForMappedFileFault @ 0x140093ED0 (MiPickClusterForMappedFileFault.c)
 *     MiGetPageTablePages @ 0x140096860 (MiGetPageTablePages.c)
 *     MmAccessFault @ 0x1400AA630 (MmAccessFault.c)
 *     MiFindContiguousPages @ 0x1400B9E60 (MiFindContiguousPages.c)
 *     MiScanPagefiles @ 0x1400DA8E0 (MiScanPagefiles.c)
 *     CcCanIWrite @ 0x1400F2E80 (CcCanIWrite.c)
 *     MiStoreWriteModifiedPages @ 0x14014A668 (MiStoreWriteModifiedPages.c)
 *     MiFillNoReservationCluster @ 0x14014E044 (MiFillNoReservationCluster.c)
 *     MiStoreSetEvictPageFile @ 0x140158EA8 (MiStoreSetEvictPageFile.c)
 *     MiResolvePageFileFault @ 0x1401634B8 (MiResolvePageFileFault.c)
 *     MiNoPagesLastChance @ 0x1402D9BCC (MiNoPagesLastChance.c)
 *     MiCreateLargePfnList @ 0x1402DEF48 (MiCreateLargePfnList.c)
 *     MiWaitForFreePage @ 0x1402E5760 (MiWaitForFreePage.c)
 *     MiFindLargePageMemory @ 0x1408994D0 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSufficientAvailablePages(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int16 **v4; // rbx
  __int64 v5; // r11
  unsigned __int16 *v6; // r8
  unsigned int v7; // r9d

  v2 = *(_QWORD *)(a1 + 8064);
  if ( v2 < a2 )
  {
    v4 = (unsigned __int16 **)(a1 + 4136);
    v5 = 0LL;
    while ( 1 )
    {
      v6 = *v4;
      v7 = 0;
      if ( dword_1404657B4 )
        break;
LABEL_7:
      ++v5;
      ++v4;
      if ( v5 > 1 )
        return 0LL;
    }
    while ( 1 )
    {
      v2 += *v6;
      if ( v2 >= a2 )
        break;
      ++v7;
      v6 += 8;
      if ( v7 >= dword_1404657B4 )
        goto LABEL_7;
    }
  }
  return 1LL;
}
