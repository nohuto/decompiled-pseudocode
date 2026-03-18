/*
 * XREFs of PspDoesJobHierarchyPermitUILimits @ 0x1406EEE2C
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspAssignProcessToJob @ 0x140695C0C (PspAssignProcessToJob.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140611210 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

bool __fastcall PspDoesJobHierarchyPermitUILimits(_QWORD *a1, char a2)
{
  __int64 v2; // r8
  char v3; // bl

  v2 = a1[134];
  v3 = 0;
  while ( v2 )
  {
    if ( (*(_DWORD *)(v2 + 1304) & 0x10) != 0 )
      return v3;
    v2 = *(_QWORD *)(v2 + 1072);
  }
  return (a2 & 1) != 0
      || (int)PspEnumJobsAndProcessesInJobHierarchy(
                a1,
                (int)PspDoesJobHierarchyPermitUILimitsCallback,
                0,
                0,
                (__int64)a1,
                1) >= 0;
}
