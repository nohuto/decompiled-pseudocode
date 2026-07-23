/*
 * XREFs of PspIsSetJobIoAttribution @ 0x14068DEA0
 * Callers:
 *     PspAssignProcessToJob @ 0x140606664 (PspAssignProcessToJob.c)
 *     PspSetJobIoAttribution @ 0x14068DCB8 (PspSetJobIoAttribution.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1405FE9F4 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

char __fastcall PspIsSetJobIoAttribution(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  char v4; // bl

  v3 = a1[134];
  v4 = 0;
  while ( v3 )
  {
    if ( *(_DWORD *)(v3 + 1332) )
      return 1;
    v3 = *(_QWORD *)(v3 + 1072);
  }
  if ( !a3
    && (int)PspEnumJobsAndProcessesInJobHierarchy(a1, (int)PspIsSetJobIoAttributionJobPreCallback, 0, 0, (__int64)a1, 5) < 0 )
  {
    return 1;
  }
  return v4;
}
