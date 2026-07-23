/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x140697F5C
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x140697704 (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x140697F28 (ExpAllocateLowLevelTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140697FC0 (PsChargeProcessPagedPoolQuota.c)
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
