/*
 * XREFs of PspEnumProcessesInJobHierarchy @ 0x1408CCA3C
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140612D20 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspEnumProcessesInJobHierarchy(_QWORD *a1, int a2, __int64 a3, int a4)
{
  return PspEnumJobsAndProcessesInJobHierarchy(a1, 0, 0, a2, a3, a4);
}
