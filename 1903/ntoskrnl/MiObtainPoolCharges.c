/*
 * XREFs of MiObtainPoolCharges @ 0x1400F0C58
 * Callers:
 *     MiInitializePoolCommitPacket @ 0x140022864 (MiInitializePoolCommitPacket.c)
 *     MiGetPoolPages @ 0x14007BDAC (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x1400EFC58 (MmAllocateIndependentPagesEx.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_14046A5E8 )
    return 1LL;
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, a1, 1u) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL) )
    {
      v4 = &qword_140466A20;
      if ( a2 )
        v4 = &qword_140466A28;
      _InterlockedExchangeAdd64(v4, a1);
      return 1LL;
    }
    MiReturnCommit((__int64)&MiSystemPartition, a1);
  }
  return 0LL;
}
