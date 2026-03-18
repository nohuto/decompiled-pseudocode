/*
 * XREFs of MiObtainPoolCharges @ 0x1400DE368
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140022C54 (MiInitializePoolCommitPacket.c)
 *     MiGetPoolPages @ 0x14007C1AC (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_14046A328 )
    return 1LL;
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, a1, 1u) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL) )
    {
      v4 = &qword_140466720;
      if ( a2 )
        v4 = &qword_140466728;
      _InterlockedExchangeAdd64(v4, a1);
      return 1LL;
    }
    MiReturnCommit((__int64)&MiSystemPartition, a1);
  }
  return 0LL;
}
