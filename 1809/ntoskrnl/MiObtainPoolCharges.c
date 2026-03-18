/*
 * XREFs of MiObtainPoolCharges @ 0x1401097C4
 * Callers:
 *     MiCommitPoolMemory @ 0x140099590 (MiCommitPoolMemory.c)
 *     MiGetPoolPages @ 0x1400CB1A0 (MiGetPoolPages.c)
 *     MmAllocateIndependentPagesEx @ 0x140108F9C (MmAllocateIndependentPagesEx.c)
 *     MiExpandNonPagedPool @ 0x1401626C8 (MiExpandNonPagedPool.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 */

__int64 __fastcall MiObtainPoolCharges(unsigned __int64 a1, int a2)
{
  volatile signed __int64 *v4; // rax

  if ( !qword_14043E7A8 )
    return 1LL;
  if ( (unsigned int)MiChargeCommit((__int64)&MiSystemPartition, a1, 1u) )
  {
    if ( (unsigned int)MiChargeResident(&MiSystemPartition, a1, 0LL) )
    {
      v4 = &qword_14043B000;
      if ( a2 )
        v4 = &qword_14043B008;
      _InterlockedExchangeAdd64(v4, a1);
      return 1LL;
    }
    ++dword_140438AB8;
    MiReturnCommit((__int64)&MiSystemPartition, a1);
  }
  else
  {
    ++dword_140438ABC;
  }
  return 0LL;
}
