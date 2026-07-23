/*
 * XREFs of MiReferenceVad @ 0x140075590
 * Callers:
 *     MmQueryVirtualMemory @ 0x1405EF910 (MmQueryVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1405F1BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F2600 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1405F2BC8 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x1405F4660 (MiMapViewOfImageSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405F9BBC (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x140605B60 (MiLockVadRange.c)
 *     MiCfgInitializeProcess @ 0x140678F10 (MiCfgInitializeProcess.c)
 *     MiMapViewOfPhysicalSection @ 0x140755690 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x140852C58 (MiCoalescePlaceholderAllocations.c)
 *     MiHotPatchProcess @ 0x140856864 (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x14085A3B8 (MiAllocateEnclaveVad.c)
 *     MiPreparePlaceholderVadReplacement @ 0x14085DA90 (MiPreparePlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x14085F5C8 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
