/*
 * XREFs of MiReturnPoolCharges @ 0x14011103C
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140022864 (MiInitializePoolCommitPacket.c)
 *     MiReturnExcessPoolCommit @ 0x140023110 (MiReturnExcessPoolCommit.c)
 *     MiGetPoolPages @ 0x14007BDAC (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14010DB20 (MmFreeIndependentPages.c)
 *     MiReturnPhysicalPoolPages @ 0x140110E34 (MiReturnPhysicalPoolPages.c)
 *     MiDecommitLargePoolVa @ 0x1401464F0 (MiDecommitLargePoolVa.c)
 * Callees:
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x140091BF0 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnPoolCharges(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // rax

  if ( qword_14046A5E8 )
  {
    MiReturnResidentAvailable(*a1);
    MiReturnCommit((__int64)&MiSystemPartition, a1[3] - a1[1]);
    if ( a2 != 2 )
    {
      v4 = -(__int64)a1[3];
      if ( a2 )
        _InterlockedExchangeAdd64(&qword_140466A28, v4);
      else
        _InterlockedExchangeAdd64(&qword_140466A20, v4);
    }
  }
}
