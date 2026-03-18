/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x1400CAB48
 * Callers:
 *     MiReferencePageForModifiedWrite @ 0x1400CA7E0 (MiReferencePageForModifiedWrite.c)
 *     MiAllocateModWriterEntry @ 0x1400CAADC (MiAllocateModWriterEntry.c)
 * Callees:
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 *     MiReturnResidentAvailable @ 0x1400CEF50 (MiReturnResidentAvailable.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  unsigned int v7; // ebp

  v5 = a2 & 2;
  v7 = MiChargeResident(a1, 1LL, (unsigned int)-(v5 != 0), a4);
  if ( v7 )
  {
    if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit(a1, 1uLL, v5 != 0 ? 4 : 8) )
      return v7;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1LL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8128), 1uLL);
  }
  return 0LL;
}
