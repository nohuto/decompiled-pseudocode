/*
 * XREFs of MiSufficientAvailablePages @ 0x14007D060
 * Callers:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002AEF0 (MiInsertPageInFreeOrZeroedList.c)
 *     MmEnoughMemoryForWrite @ 0x14007BCC0 (MmEnoughMemoryForWrite.c)
 *     MiGetPoolPages @ 0x14007BDAC (MiGetPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x14007BFF8 (MiRetryNonPagedAllocation.c)
 *     MiWaitForFreePagesToZero @ 0x14007C090 (MiWaitForFreePagesToZero.c)
 *     MiComputeZeroClusterMaximum @ 0x14007D620 (MiComputeZeroClusterMaximum.c)
 *     MiGetPageTablePages @ 0x1400A3A30 (MiGetPageTablePages.c)
 *     MiPickClusterForMappedFileFault @ 0x1400A66A0 (MiPickClusterForMappedFileFault.c)
 *     CcCanIWrite @ 0x1400B4600 (CcCanIWrite.c)
 *     MmAccessFault @ 0x1400CA7B0 (MmAccessFault.c)
 *     MiFindContiguousPages @ 0x1400D9FE0 (MiFindContiguousPages.c)
 *     MiScanPagefiles @ 0x1400F23A0 (MiScanPagefiles.c)
 *     MiStoreWriteModifiedPages @ 0x140149FC8 (MiStoreWriteModifiedPages.c)
 *     MiFillNoReservationCluster @ 0x14014D9A4 (MiFillNoReservationCluster.c)
 *     MiStoreSetEvictPageFile @ 0x140158808 (MiStoreSetEvictPageFile.c)
 *     MiResolvePageFileFault @ 0x140163A68 (MiResolvePageFileFault.c)
 *     MiNoPagesLastChance @ 0x1402D9E6C (MiNoPagesLastChance.c)
 *     MiCreateLargePfnList @ 0x1402DF1E8 (MiCreateLargePfnList.c)
 *     MiWaitForFreePage @ 0x1402E5A00 (MiWaitForFreePage.c)
 *     MiFindLargePageMemory @ 0x140899CB0 (MiFindLargePageMemory.c)
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
      if ( dword_140465AB4 )
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
      if ( v7 >= dword_140465AB4 )
        goto LABEL_7;
    }
  }
  return 1LL;
}
