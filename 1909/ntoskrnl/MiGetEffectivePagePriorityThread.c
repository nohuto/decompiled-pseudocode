/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x1400CAEEC
 * Callers:
 *     MiIssueHardFault @ 0x140007190 (MiIssueHardFault.c)
 *     MiUnlockWsle @ 0x14001FE74 (MiUnlockWsle.c)
 *     MiWalkEntireImage @ 0x140053AF0 (MiWalkEntireImage.c)
 *     MiGetPageForHeader @ 0x140091D8C (MiGetPageForHeader.c)
 *     MiInitializeImageProtos @ 0x140097CDC (MiInitializeImageProtos.c)
 *     MmCopyMemory @ 0x1400C7740 (MmCopyMemory.c)
 *     NtLockVirtualMemory @ 0x1400CB120 (NtLockVirtualMemory.c)
 *     MiPrivateFixup @ 0x140126D84 (MiPrivateFixup.c)
 *     MiPrefetchRestOfCluster @ 0x14013B2EC (MiPrefetchRestOfCluster.c)
 *     MiSetPagesModified @ 0x1402C315C (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x1402C7218 (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x1405E9E10 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x1406DC3D0 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x14005A580 (PsGetPagePriorityThread.c)
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
