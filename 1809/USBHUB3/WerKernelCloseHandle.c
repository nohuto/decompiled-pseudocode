/*
 * XREFs of WerKernelCloseHandle @ 0x1C003C4EC
 * Callers:
 *     TelemetryData_SubmitReport @ 0x1C007B6C0 (TelemetryData_SubmitReport.c)
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
