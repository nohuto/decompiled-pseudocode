/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x14007320C
 * Callers:
 *     MiInsertVadCharges @ 0x14060A180 (MiInsertVadCharges.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14060E890 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140670298 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x140670744 (MiFreeToSubAllocatedRegion.c)
 *     MmAssignProcessToJob @ 0x140694C70 (MmAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 888, 0LL);
}
