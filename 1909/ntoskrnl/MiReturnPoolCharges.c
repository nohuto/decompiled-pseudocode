/*
 * XREFs of MiReturnPoolCharges @ 0x14011072C
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140022C54 (MiInitializePoolCommitPacket.c)
 *     MiReturnExcessPoolCommit @ 0x140023500 (MiReturnExcessPoolCommit.c)
 *     MiGetPoolPages @ 0x14007C1AC (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x14010D210 (MmFreeIndependentPages.c)
 *     MiReturnPhysicalPoolPages @ 0x140110524 (MiReturnPhysicalPoolPages.c)
 *     MiDecommitLargePoolVa @ 0x140146B90 (MiDecommitLargePoolVa.c)
 * Callees:
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 */

void __fastcall MiReturnPoolCharges(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v4; // rax

  if ( qword_14046A328 )
  {
    MiReturnResidentAvailable(*a1);
    MiReturnCommit((__int64)&MiSystemPartition, a1[3] - a1[1]);
    if ( a2 != 2 )
    {
      v4 = -(__int64)a1[3];
      if ( a2 )
        _InterlockedExchangeAdd64(&qword_140466728, v4);
      else
        _InterlockedExchangeAdd64(&qword_140466720, v4);
    }
  }
}
