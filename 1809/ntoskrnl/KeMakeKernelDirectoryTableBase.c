/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x14013CDBC
 * Callers:
 *     KiInSwapProcesses @ 0x14010B3C0 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x1401184DC (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x14015DF84 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C1200 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1406D2B38 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
