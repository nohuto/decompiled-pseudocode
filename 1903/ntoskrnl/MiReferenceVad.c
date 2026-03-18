/*
 * XREFs of MiReferenceVad @ 0x140053980
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MmQueryVirtualMemory @ 0x140604960 (MmQueryVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x140609ED8 (MmCleanProcessAddressSpace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x14060E890 (MiAllocateFromSubAllocatedRegion.c)
 *     MiCfgInitializeProcess @ 0x14067980C (MiCfgInitializeProcess.c)
 *     MiLockVadRange @ 0x140694EA0 (MiLockVadRange.c)
 *     MiMapViewOfPhysicalSection @ 0x14077A454 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x14088B470 (MiCoalescePlaceholderAllocations.c)
 *     MiHotPatchProcess @ 0x14088EAC0 (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x14089304C (MiAllocateEnclaveVad.c)
 *     MiPreparePlaceholderVadReplacement @ 0x1408993A4 (MiPreparePlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x14089B22C (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
