/*
 * XREFs of MiIsProcessCfgEnabled @ 0x14001CC70
 * Callers:
 *     MiMapViewOfImageSection @ 0x1405EAA40 (MiMapViewOfImageSection.c)
 *     MiCommitVadCfgBits @ 0x1405EB568 (MiCommitVadCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1405ECB7C (MiCfgMarkValidEntries.c)
 *     MiAllocateVirtualMemory @ 0x140604C50 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x140605BE0 (MmProtectVirtualMemory.c)
 *     MiReserveUserMemory @ 0x140609670 (MiReserveUserMemory.c)
 *     MiMapViewOfDataSection @ 0x14060AE10 (MiMapViewOfDataSection.c)
 *     MiMapViewOfPhysicalSection @ 0x14077D4A4 (MiMapViewOfPhysicalSection.c)
 *     MmValidateUserCallTarget @ 0x14089865C (MmValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgEnabled()
{
  return *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 448LL) != 0LL;
}
