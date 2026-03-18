/*
 * XREFs of PopEtBucketsFree @ 0x1406DC1E0
 * Callers:
 *     PopEtAggregateGet @ 0x1405FCD54 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x14069F81C (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
