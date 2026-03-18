/*
 * XREFs of MiSufficientAvailablePages @ 0x140055A50
 * Callers:
 *     MmEnoughMemoryForWrite @ 0x140021608 (MmEnoughMemoryForWrite.c)
 *     MiGetPageTablePages @ 0x140026E90 (MiGetPageTablePages.c)
 *     MiPickClusterForMappedFileFault @ 0x14002A2B0 (MiPickClusterForMappedFileFault.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400387F0 (MiInsertPageInFreeOrZeroedList.c)
 *     MmAccessFault @ 0x140043DA0 (MmAccessFault.c)
 *     MiWaitForFreePagesToZero @ 0x140053280 (MiWaitForFreePagesToZero.c)
 *     MiFindContiguousPages @ 0x14009A110 (MiFindContiguousPages.c)
 *     MiGetPoolPages @ 0x1400CB1A0 (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x1400CB3EC (MiRetryNonPagedAllocation.c)
 *     MiScanPagefiles @ 0x1400F04A4 (MiScanPagefiles.c)
 *     CcCanIWrite @ 0x140104D00 (CcCanIWrite.c)
 *     MiComputeZeroClusterMaximum @ 0x14010FA64 (MiComputeZeroClusterMaximum.c)
 *     MiAllocateAccessLog @ 0x1401147F0 (MiAllocateAccessLog.c)
 *     MiStoreWriteModifiedPages @ 0x14014CB80 (MiStoreWriteModifiedPages.c)
 *     MiFillNoReservationCluster @ 0x140150D28 (MiFillNoReservationCluster.c)
 *     MiResolvePageFileFault @ 0x140154B24 (MiResolvePageFileFault.c)
 *     MiStoreSetEvictPageFile @ 0x1401560BC (MiStoreSetEvictPageFile.c)
 *     MiNoPagesLastChance @ 0x1402C0420 (MiNoPagesLastChance.c)
 *     MiWaitForFreePage @ 0x1402CB3A4 (MiWaitForFreePage.c)
 *     MiFindLargePageMemory @ 0x14085D1A0 (MiFindLargePageMemory.c)
 *     MiMapUserLargePages @ 0x14085D578 (MiMapUserLargePages.c)
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

  v2 = *(_QWORD *)(a1 + 7296);
  if ( v2 < a2 )
  {
    v4 = (unsigned __int16 **)(a1 + 4136);
    v5 = 0LL;
    while ( 1 )
    {
      v6 = *v4;
      v7 = 0;
      if ( dword_14043A08C )
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
      if ( v7 >= dword_14043A08C )
        goto LABEL_7;
    }
  }
  return 1LL;
}
