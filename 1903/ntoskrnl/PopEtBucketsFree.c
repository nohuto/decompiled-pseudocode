/*
 * XREFs of PopEtBucketsFree @ 0x1406F0280
 * Callers:
 *     PopEtAggregateGet @ 0x1406102E0 (PopEtAggregateGet.c)
 *     PopEtProcessSnapshotCreate @ 0x1406D4C44 (PopEtProcessSnapshotCreate.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PopEtBucketsFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x54456F50u);
}
