/*
 * XREFs of MiReferenceVad @ 0x140053A20
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406103A0 (MiAllocateFromSubAllocatedRegion.c)
 *     MiCfgInitializeProcess @ 0x14067F8C0 (MiCfgInitializeProcess.c)
 *     MiLockVadRange @ 0x140688410 (MiLockVadRange.c)
 *     MiMapViewOfPhysicalSection @ 0x14077D4A4 (MiMapViewOfPhysicalSection.c)
 *     MiCoalescePlaceholderAllocations @ 0x14088AC90 (MiCoalescePlaceholderAllocations.c)
 *     MiHotPatchProcess @ 0x14088E2E0 (MiHotPatchProcess.c)
 *     MiAllocateEnclaveVad @ 0x14089286C (MiAllocateEnclaveVad.c)
 *     MiPreparePlaceholderVadReplacement @ 0x140898BC4 (MiPreparePlaceholderVadReplacement.c)
 *     MiDeleteInsertedCloneVads @ 0x14089AA4C (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     <none>
 */

void __fastcall MiReferenceVad(__int64 a1)
{
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 36));
}
