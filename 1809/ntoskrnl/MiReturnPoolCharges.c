/*
 * XREFs of MiReturnPoolCharges @ 0x140023984
 * Callers:
 *     MmFreeIndependentPages @ 0x140001010 (MmFreeIndependentPages.c)
 *     MiReturnPhysicalPoolPages @ 0x140025380 (MiReturnPhysicalPoolPages.c)
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     MiGetPoolPages @ 0x1400CB2A0 (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     MiDecommitLargePoolVa @ 0x14015B3E0 (MiDecommitLargePoolVa.c)
 *     MiExpandNonPagedPool @ 0x1401627E8 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 */

void __fastcall MiReturnPoolCharges(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // rax

  if ( qword_14043F868 )
  {
    MiReturnResidentAvailable(*a1);
    MiReturnCommit(&MiSystemPartition, a1[3] - a1[1]);
    if ( a2 != 2 )
    {
      v4 = -(__int64)a1[3];
      if ( a2 )
        _InterlockedExchangeAdd64(&qword_14043C0C8, v4);
      else
        _InterlockedExchangeAdd64(&qword_14043C0C0, v4);
    }
  }
}
