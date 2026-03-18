/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x14008DCDC
 * Callers:
 *     MiIssueHardFault @ 0x140007100 (MiIssueHardFault.c)
 *     MiUnlockWsle @ 0x14001FA84 (MiUnlockWsle.c)
 *     MiWalkEntireImage @ 0x140053A50 (MiWalkEntireImage.c)
 *     NtLockVirtualMemory @ 0x14008DF10 (NtLockVirtualMemory.c)
 *     MiInitializeImageProtos @ 0x1400A2264 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1400A2988 (MiGetPageForHeader.c)
 *     MmCopyMemory @ 0x1400F48A0 (MmCopyMemory.c)
 *     MiPrivateFixup @ 0x140101BD0 (MiPrivateFixup.c)
 *     MiPrefetchRestOfCluster @ 0x14013AE9C (MiPrefetchRestOfCluster.c)
 *     MiSetPagesModified @ 0x1402C33FC (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x1402C74B8 (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x1405E9640 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1406A5860 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x14005A4E0 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1768);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread(a1);
}
