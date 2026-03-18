/*
 * XREFs of WerKernelCloseHandle @ 0x1C00411C4
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C00833C4 (TelemetryData_SubmitReport.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall WerKernelCloseHandle(void *a1)
{
  if ( a1 )
    return ZwClose(a1);
  else
    return -1073741811;
}
