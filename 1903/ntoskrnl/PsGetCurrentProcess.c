/*
 * XREFs of PsGetCurrentProcess @ 0x140006530
 * Callers:
 *     MiSharePages @ 0x14013EF30 (MiSharePages.c)
 *     KiLockExtendedServiceTable @ 0x1401AA168 (KiLockExtendedServiceTable.c)
 *     MiGetAweVadPartition @ 0x1402D6504 (MiGetAweVadPartition.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     ExpQuerySystemInformation @ 0x1405CAF30 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x1405D12E0 (NtQueryInformationProcess.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     MiValidateExistingImage @ 0x14066EF50 (MiValidateExistingImage.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     MiCreateNewSection @ 0x140689A04 (MiCreateNewSection.c)
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
