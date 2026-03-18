/*
 * XREFs of ExpAllocateTablePagedPoolNoZero @ 0x140696DBC
 * Callers:
 *     ExpAllocateTablePagedPool @ 0x140696564 (ExpAllocateTablePagedPool.c)
 *     ExpAllocateLowLevelTable @ 0x140696D88 (ExpAllocateLowLevelTable.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     PsChargeProcessPagedPoolQuota @ 0x140696E20 (PsChargeProcessPagedPoolQuota.c)
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
