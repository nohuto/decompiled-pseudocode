/*
 * XREFs of MiGetEffectivePagePriorityThread @ 0x14001AEA8
 * Callers:
 *     MiUnlockWsle @ 0x14001A18C (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiIssueHardFault @ 0x14001BCD0 (MiIssueHardFault.c)
 *     MiWalkEntireImage @ 0x14002F290 (MiWalkEntireImage.c)
 *     MiInitializeImageProtos @ 0x1400930D8 (MiInitializeImageProtos.c)
 *     MiGetPageForHeader @ 0x1400933F8 (MiGetPageForHeader.c)
 *     MmCopyMemory @ 0x1400EA8F0 (MmCopyMemory.c)
 *     MiPrivateFixup @ 0x140125F10 (MiPrivateFixup.c)
 *     MiPrefetchRestOfCluster @ 0x140139198 (MiPrefetchRestOfCluster.c)
 *     MiSetPagesModified @ 0x1402AA9DC (MiSetPagesModified.c)
 *     MiSwitchToTransition @ 0x1402AF830 (MiSwitchToTransition.c)
 *     NtSetInformationVirtualMemory @ 0x1405F7680 (NtSetInformationVirtualMemory.c)
 *     MmPrefetchVirtualAddresses @ 0x14066CED0 (MmPrefetchVirtualAddresses.c)
 * Callees:
 *     PsGetPagePriorityThread @ 0x1400B5B20 (PsGetPagePriorityThread.c)
 */

__int64 __fastcall MiGetEffectivePagePriorityThread(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 1752);
  if ( (v1 & 0x100) != 0 )
    return (v1 >> 9) & 7;
  else
    return PsGetPagePriorityThread();
}
