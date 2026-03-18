/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x1400E2EBC
 * Callers:
 *     KiInSwapProcesses @ 0x140074978 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x14009CF60 (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x14018EB24 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402DA970 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x14068D3A4 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
