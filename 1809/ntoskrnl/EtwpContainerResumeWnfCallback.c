/*
 * XREFs of EtwpContainerResumeWnfCallback @ 0x1403128A0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpQueryPartitionRegistryInformation @ 0x140185E74 (EtwpQueryPartitionRegistryInformation.c)
 */

__int64 EtwpContainerResumeWnfCallback()
{
  EtwpQueryPartitionRegistryInformation(
    (GUID *)(EtwpHostSiloState + 4152),
    (PVOID *)(EtwpHostSiloState + 4192),
    (_WORD *)(EtwpHostSiloState + 4200),
    (_DWORD *)(EtwpHostSiloState + 4204),
    (_QWORD *)(EtwpHostSiloState + 4184),
    (GUID *)(EtwpHostSiloState + 4168));
  return 0LL;
}
