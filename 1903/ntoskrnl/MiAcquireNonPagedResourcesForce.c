/*
 * XREFs of MiAcquireNonPagedResourcesForce @ 0x1402BD938
 * Callers:
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 *     MiTransferPartitionPageRun @ 0x1402EB500 (MiTransferPartitionPageRun.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResourcesForce(ULONG_PTR *a1)
{
  MiChargeCommit((__int64)a1, 1uLL, 4u);
  return MiChargeResident(a1, 1uLL, 0xFFFFFFFFLL);
}
