/*
 * XREFs of KeMakeKernelDirectoryTableBase @ 0x14013CC9C
 * Callers:
 *     KiInSwapProcesses @ 0x14010B320 (KiInSwapProcesses.c)
 *     MiReplaceTransitionPage @ 0x14011844C (MiReplaceTransitionPage.c)
 *     MmStealTopLevelPage @ 0x14015DE64 (MmStealTopLevelPage.c)
 *     MiSwapNumaStandbyPage @ 0x1402C0F10 (MiSwapNumaStandbyPage.c)
 *     MmCreateProcessAddressSpace @ 0x1406D18B8 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeMakeKernelDirectoryTableBase(__int64 a1)
{
  if ( KiFlushPcid )
    return a1 | 2;
  return a1;
}
