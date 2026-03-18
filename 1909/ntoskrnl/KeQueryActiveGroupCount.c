/*
 * XREFs of KeQueryActiveGroupCount @ 0x1400D7A20
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405CB430 (ExpQuerySystemInformation.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PsCreateSystemThreadEx @ 0x1406725D0 (PsCreateSystemThreadEx.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 *     EtwpProcessorRundown @ 0x1408FBD6C (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
