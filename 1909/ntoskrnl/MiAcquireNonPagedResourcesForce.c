/*
 * XREFs of MiAcquireNonPagedResourcesForce @ 0x1402BD698
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402E8CAC (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x1402EB260 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResourcesForce(ULONG_PTR *a1)
{
  MiChargeCommit((__int64)a1, 1uLL, 4u);
  return MiChargeResident(a1, 1uLL, 0xFFFFFFFFLL);
}
