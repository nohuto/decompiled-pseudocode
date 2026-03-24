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
 *     MiCfgInitializeProcess @ 0x140677D50 (MiCfgInitializeProcess.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544A0 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408519F8 (MiCoalescePlaceholderAllocations.c)
 *     MiHotPatchProcess @ 0x140855604 (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x140859158 (MiAllocateEnclaveVad.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14085C830 (MiPreparePlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x14085E368 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
