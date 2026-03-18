/*
 * XREFs of MiAcquireNonPagedResources @ 0x1400E3D00
 * Callers:
 *     MiCreateUltraThreadContextHelper @ 0x140123794 (MiCreateUltraThreadContextHelper.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1402BEDE0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiIdealClusterPage @ 0x1402E0D7C (MiIdealClusterPage.c)
 *     MiAllocateProcessShadow @ 0x14068D5F8 (MiAllocateProcessShadow.c)
 *     MiAllocatePartitionPhysicalPages @ 0x14089C1B0 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiChargeCommit @ 0x1400521D0 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140058F90 (MiReturnCommit.c)
 *     MiChargeResident @ 0x1400A75A8 (MiChargeResident.c)
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
