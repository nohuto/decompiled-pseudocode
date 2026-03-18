/*
 * XREFs of PopEtBucketsAllocate @ 0x1406F01BC
 * Callers:
 *     PopEtAggregateGet @ 0x1406102E0 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D4C44 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
