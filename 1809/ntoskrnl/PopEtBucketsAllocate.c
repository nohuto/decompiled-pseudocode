/*
 * XREFs of PopEtBucketsAllocate @ 0x1406DC184
 * Callers:
 *     PopEtAggregateGet @ 0x1405FCD54 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x14069F81C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall PopEtBucketsAllocate(SIZE_T NumberOfBytes)
{
  return ExAllocatePoolWithTag(PagedPool, NumberOfBytes, 0x54456F50u);
}
