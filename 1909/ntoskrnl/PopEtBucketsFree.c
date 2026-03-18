/*
 * XREFs of PopEtBucketsFree @ 0x1406F1D20
 * Callers:
 *     PopEtAggregateGet @ 0x140611DF0 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D4324 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
