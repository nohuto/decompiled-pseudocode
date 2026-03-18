/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x14007347C
 * Callers:
 *     MiInsertVadCharges @ 0x14060BC90 (MiInsertVadCharges.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406103A0 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14067F064 (MiAllocateNewSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x14067F510 (MiFreeToSubAllocatedRegion.c)
 *     MmAssignProcessToJob @ 0x1406881E0 (MmAssignProcessToJob.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 888, 0LL);
}
