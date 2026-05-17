/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1800FC400
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1800FC050 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800FC484 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x18009D190 (ZwAllocateVirtualMemory.c)
 */

__int64 RtlpTraceDatabaseAllocate()
{
  ZwAllocateVirtualMemory();
  return 0LL;
}
