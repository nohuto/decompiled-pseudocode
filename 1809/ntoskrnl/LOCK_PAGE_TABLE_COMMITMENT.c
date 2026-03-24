/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x140076BE8
 * Callers:
 *     MiFreeToSubAllocatedRegion @ 0x1405DF71C (MiFreeToSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x1405F1E60 (MiInsertVadCharges.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405F8BBC (MiAllocateFromSubAllocatedRegion.c)
 *     MmAssignProcessToJob @ 0x140604944 (MmAssignProcessToJob.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140695EA0 (MiAllocateNewSubAllocatedRegion.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 880, 0LL);
}
