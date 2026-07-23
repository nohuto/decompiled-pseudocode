/*
 * XREFs of PopEtBucketsAllocate @ 0x1406DD404
 * Callers:
 *     PopEtAggregateGet @ 0x1405FDD54 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406A0ABC (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
