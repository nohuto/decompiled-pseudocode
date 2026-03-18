/*
 * XREFs of PsGetCurrentProcess @ 0x1400065C0
 * Callers:
 *     MiSharePages @ 0x14013F5C0 (MiSharePages.c)
 *     KiLockExtendedServiceTable @ 0x1401AA888 (KiLockExtendedServiceTable.c)
 *     MiGetAweVadPartition @ 0x1402D6264 (MiGetAweVadPartition.c)
 *     PopTransitionSystemPowerStateEx @ 0x140596DBC (PopTransitionSystemPowerStateEx.c)
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     NtQueryInformationProcess @ 0x1405D17E0 (NtQueryInformationProcess.c)
 *     NtLockFile @ 0x1405D4D30 (NtLockFile.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     MiInitSystem @ 0x1409F0D98 (MiInitSystem.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentProcess()
{
  return KeGetCurrentThread()->ApcState.Process;
}
