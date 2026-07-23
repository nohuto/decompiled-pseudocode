/*
 * XREFs of MiAcquireNonPagedResourcesForce @ 0x1402A63E0
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402D0308 (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x1402D28E8 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 */

__int64 __fastcall MiAcquireNonPagedResourcesForce(ULONG_PTR *a1)
{
  MiChargeCommit((__int64)a1, 1uLL, 4u);
  return MiChargeResident(a1, 1uLL, 0xFFFFFFFFLL);
}
