/*
 * XREFs of MiLockVad @ 0x1400769A4
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405ED650 (MiAllocateVirtualMemory.c)
 *     MmQueryVirtualMemory @ 0x1405EE910 (MmQueryVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MiAllocateFromSubAllocatedRegion @ 0x1405F8BBC (MiAllocateFromSubAllocatedRegion.c)
 *     MiLockVadRange @ 0x140604B60 (MiLockVadRange.c)
 *     MiCfgInitializeProcess @ 0x140677D70 (MiCfgInitializeProcess.c)
 *     MiMapLockedPagesInUserSpace @ 0x140695B44 (MiMapLockedPagesInUserSpace.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140695EC0 (MiAllocateNewSubAllocatedRegion.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544C0 (MiMapViewOfPhysicalSection.c)
 *     MiPerformImageHotPatch @ 0x140856CA0 (MiPerformImageHotPatch.c)
 *     MiAllocateEnclaveVad @ 0x140859178 (MiAllocateEnclaveVad.c)
 *     MiInitializeEnclave @ 0x14085A260 (MiInitializeEnclave.c)
 *     MiTerminateEnclave @ 0x14085A740 (MiTerminateEnclave.c)
 *     MiDeleteInsertedCloneVads @ 0x14085E388 (MiDeleteInsertedCloneVads.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockVad(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx(a2 + 40, 0LL);
  *(_BYTE *)(a1 + 1752) |= 0x80u;
}
