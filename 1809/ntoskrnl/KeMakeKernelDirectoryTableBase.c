/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x14013CCBC
 * Callers:
 *     KiInSwapProcesses @ 0x14010B340 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x14011846C (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x14015DE84 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1010 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1406D1898 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
