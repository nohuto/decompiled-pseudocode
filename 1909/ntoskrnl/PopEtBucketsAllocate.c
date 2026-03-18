/*
 * XREFs of PopEtBucketsAllocate @ 0x1406F1C5C
 * Callers:
 *     PopEtAggregateGet @ 0x140611DF0 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D4324 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
