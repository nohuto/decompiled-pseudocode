/*
 * XREFs of RtlpTraceDatabaseAllocate @ 0x1800FEEA4
 * Callers:
 *     RtlTraceDatabaseCreate @ 0x1800FEAF0 (RtlTraceDatabaseCreate.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1800FEF28 (RtlpTraceDatabaseInternalAdd.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x1800A05E0 (ZwAllocateVirtualMemory.c)
 */

__int64 RtlpTraceDatabaseAllocate()
{
  ZwAllocateVirtualMemory();
  return 0LL;
}
