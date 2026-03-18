/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x1406B7C84
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x1406B7384 (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x1406B7C50 (ExpAllocateLowLevelTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x1406B7CF0 (PsChargeProcessPagedPoolQuota.c)
 */

PVOID __fastcall ExpAllocateTablePagedPoolNoZero(__int64 a1, SIZE_T a2)
{
  PVOID PoolWithTag; // rbx

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, a2, 0x6274624Fu);
  if ( PoolWithTag && a1 && (int)PsChargeProcessPagedPoolQuota(a1, a2) < 0 )
  {
    ExFreePoolWithTag(PoolWithTag, 0x6274624Fu);
    return 0LL;
  }
  return PoolWithTag;
}
