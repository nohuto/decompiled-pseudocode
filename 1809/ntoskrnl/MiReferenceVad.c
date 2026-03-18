/*
 * XREFs of MiReferenceVad @ 0x1400755A0
 * Callers:
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405F8BBC (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x140604B60 (MiLockVadRange.c)
 *     MiCfgInitializeProcess @ 0x140677D70 (MiCfgInitializeProcess.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544C0 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140851A18 (MiCoalescePlaceholderAllocations.c)
 *     MiHotPatchProcess @ 0x140855624 (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x140859178 (MiAllocateEnclaveVad.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14085C850 (MiPreparePlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x14085E388 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
