/*
 * XREFs of MiLockVad @ 0x14007323C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x140606470 (MmQueryVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1406103A0 (MiAllocateFromSubAllocatedRegion.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x14067F064 (MiAllocateNewSubAllocatedRegion.c)
 *     MiCfgInitializeProcess @ 0x14067F8C0 (MiCfgInitializeProcess.c)
 *     MiLockVadRange @ 0x140688410 (MiLockVadRange.c)
 *     MiMapLockedPagesInUserSpace @ 0x140713B18 (MiMapLockedPagesInUserSpace.c)
 *     MiMapViewOfPhysicalSection @ 0x14077D4A4 (MiMapViewOfPhysicalSection.c)
 *     MiPerformImageHotPatch @ 0x14088FDF8 (MiPerformImageHotPatch.c)
 *     MiAllocateEnclaveVad @ 0x14089286C (MiAllocateEnclaveVad.c)
 *     MiInitializeVsmEnclave @ 0x140893AB4 (MiInitializeVsmEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140893FA8 (MiLoadSectionIntoVsmEnclave.c)
 *     MiTerminateEnclave @ 0x1408945A8 (MiTerminateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x14089AA4C (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1768) |= 0x80u;
}
