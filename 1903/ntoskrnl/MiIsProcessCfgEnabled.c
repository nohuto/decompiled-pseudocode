/*
 * XREFs of MiIsProcessCfgEnabled @ 0x14001C880
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EA270 (MiMapViewOfImageSection.c)
 *     MiCommitVadCfgBits @ 0x1405EAD98 (MiCommitVadCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1405EC3AC (MiCfgMarkValidEntries.c)
 *     MiAllocateVirtualMemory @ 0x140603140 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1406040D0 (MmProtectVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x140609300 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x14077A454 (MiMapViewOfPhysicalSection.c)
 *     MmValidateUserCallTarget @ 0x140898E3C (MmValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgEnabled()
{
  return *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 448LL) != 0LL;
}
