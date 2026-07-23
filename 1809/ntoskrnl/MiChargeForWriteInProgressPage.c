/*
 * XREFs of MiChargeForWriteInProgressPage @ 0x14002CEBC
 * Callers:
 *     MiAllocateModWriterEntry @ 0x140029B74 (MiAllocateModWriterEntry.c)
 *     MiReferencePageForModifiedWrite @ 0x14011BC04 (MiReferencePageForModifiedWrite.c)
 * Callees:
 *     MiReturnResidentAvailable @ 0x140022D18 (MiReturnResidentAvailable.c)
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 */

__int64 __fastcall MiChargeForWriteInProgressPage(__int64 a1, char a2)
{
  int v3; // esi
  unsigned int v5; // ebp

  v3 = a2 & 2;
  v5 = MiChargeResident(a1, 1LL, (unsigned int)-(v3 != 0));
  if ( v5 )
  {
    if ( (a2 & 1) == 0 || (unsigned int)MiChargeCommit(a1, 1LL, v3 != 0 ? 4 : 8) )
      return v5;
    if ( (ULONG_PTR *)a1 == &MiSystemPartition )
      MiReturnResidentAvailable(1uLL);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7360), 1uLL);
  }
  return 0LL;
}
