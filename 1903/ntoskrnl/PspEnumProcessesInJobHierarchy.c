/*
 * XREFs of PspEnumProcessesInJobHierarchy @ 0x1408CD15C
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140611210 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspEnumProcessesInJobHierarchy(_QWORD *a1, int a2, __int64 a3, int a4)
{
  return PspEnumJobsAndProcessesInJobHierarchy(a1, 0, 0, a2, a3, a4);
}
