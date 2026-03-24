/*
 * XREFs of MiIsProcessCfgEnabled @ 0x1400884BC
 * Callers:
 *     MiAllocateVirtualMemory @ 0x1405ED650 (MiAllocateVirtualMemory.c)
 *     MmProtectVirtualMemory @ 0x1405EDFD0 (MmProtectVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1405F0BB0 (MiMapViewOfDataSection.c)
 *     MiReserveUserMemory @ 0x1405F1600 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x1405F3660 (MiMapViewOfImageSection.c)
 *     MiCommitVadCfgBits @ 0x1405F45BC (MiCommitVadCfgBits.c)
 *     MiCfgMarkValidEntries @ 0x1405F631C (MiCfgMarkValidEntries.c)
 *     MiMapViewOfPhysicalSection @ 0x1407544A0 (MiMapViewOfPhysicalSection.c)
 *     MmValidateUserCallTarget @ 0x14085C288 (MmValidateUserCallTarget.c)
 * Callees:
 *     <none>
 */

_BOOL8 MiIsProcessCfgEnabled()
{
  return *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealGlobalNode + 400LL) != 0LL;
}
