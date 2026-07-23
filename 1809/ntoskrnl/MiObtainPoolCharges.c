/*
 * XREFs of MiObtainPoolCharges @ 0x140109864
 * Callers:
 *     MiCommitPoolMemory @ 0x1400994D0 (MiCommitPoolMemory.c)
 *     MiGetPoolPages @ 0x1400CB2A0 (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     MiExpandNonPagedPool @ 0x1401627E8 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D30 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_14043F868 )
    return 1LL;
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, a1, 1u) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL) )
    {
      v4 = &qword_14043C0C0;
      if ( a2 )
        v4 = &qword_14043C0C8;
      _InterlockedExchangeAdd64(v4, a1);
      return 1LL;
    }
    ++dword_140439B78;
    MiReturnCommit((__int64)&MiSystemPartition, a1);
  }
  else
  {
    ++dword_140439B7C;
  }
  return 0LL;
}
