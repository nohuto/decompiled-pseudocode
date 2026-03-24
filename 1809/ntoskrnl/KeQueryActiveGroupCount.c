/*
 * XREFs of KeQueryActiveGroupCount @ 0x1400E3C10
 * Callers:
 *     NtPowerInformation @ 0x14058C170 (NtPowerInformation.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     ExpQuerySystemInformation @ 0x140626390 (ExpQuerySystemInformation.c)
 *     PspAllocateProcess @ 0x14064BCB8 (PspAllocateProcess.c)
 *     PsCreateSystemThreadEx @ 0x14066AAC0 (PsCreateSystemThreadEx.c)
 *     EtwpProcessorRundown @ 0x1408BF5A0 (EtwpProcessorRundown.c)
 * Callees:
 *     <none>
 */

USHORT KeQueryActiveGroupCount(void)
{
  return KiActiveGroups;
}
