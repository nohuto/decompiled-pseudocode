/*
 * XREFs of MiAcquireNonPagedResources @ 0x14008F414
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x1400F8DA8 (MiCreateUltraThreadContextHelper.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEB40 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x1402E0ADC (MiIdealClusterPage.c)
 *     MiAllocateProcessShadow @ 0x14064495C (MiAllocateProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089B9D0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiChargeCommit @ 0x140052270 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140059030 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400CACB0 (MiChargeResident.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r9

  if ( (unsigned int)MiChargeCommit(a1, a2, 0) )
  {
    if ( (unsigned int)MiChargeResident(a1, a2, 0LL, v4) )
      return 1LL;
    MiReturnCommit(a1, a2);
  }
  return 0LL;
}
