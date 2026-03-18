/*
 * XREFs of EtwpContainerResumeWnfCallback @ 0x140330360
 * Callers:
 *     <none>
 * Callees:
 *     EtwpQueryPartitionRegistryInformation @ 0x140190480 (EtwpQueryPartitionRegistryInformation.c)
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
