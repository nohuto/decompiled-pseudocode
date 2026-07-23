/*
 * XREFs of PopEtBucketsFree @ 0x1406DD460
 * Callers:
 *     PopEtAggregateGet @ 0x1405FDD54 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406A0ABC (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
