/*
 * XREFs of MiAcquireNonPagedResources @ 0x14013DA2C
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x14013CB4C (MiCreateUltraThreadContextHelper.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402A7410 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x1402C6C14 (MiIdealClusterPage.c)
 *     MiAllocateProcessShadow @ 0x1406D1AEC (MiAllocateProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14085FE64 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiChargeResident @ 0x14002DF50 (MiChargeResident.c)
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140065D40 (MiReturnCommit.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(ULONG_PTR *a1, unsigned __int64 a2)
{
  if ( (unsigned int)MiChargeCommit((__int64)a1, a2, 0) )
  {
    if ( (unsigned int)MiChargeResident(a1, a2, 0LL) )
      return 1LL;
    MiReturnCommit((__int64)a1, a2);
  }
  return 0LL;
}
