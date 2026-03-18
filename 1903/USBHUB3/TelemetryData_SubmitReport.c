/*
 * XREFs of TelemetryData_SubmitReport @ 0x1C00833C4
 * Callers:
 *     WER_CreateReport @ 0x1C003BABC (WER_CreateReport.c)
 * Callees:
 *     WerKernelCreateReport @ 0x1C0040644 (WerKernelCreateReport.c)
 *     WerKernelSubmitReport @ 0x1C0040ADC (WerKernelSubmitReport.c)
 *     WerKernelCloseHandle @ 0x1C00411C4 (WerKernelCloseHandle.c)
 *     TelemetryData_pDeleteDumpFile @ 0x1C0082D80 (TelemetryData_pDeleteDumpFile.c)
 *     TelemetryData_pInitWerContext @ 0x1C0082E88 (TelemetryData_pInitWerContext.c)
 *     TelemetryData_pWriteDumpFile @ 0x1C00831F0 (TelemetryData_pWriteDumpFile.c)
 */

__int64 __fastcall TelemetryData_SubmitReport(__int64 a1)
{
  int inited; // ebx
  HANDLE *v3; // rsi

  inited = TelemetryData_pInitWerContext(a1);
  if ( inited >= 0 )
  {
    inited = TelemetryData_pWriteDumpFile(a1);
    if ( inited >= 0 )
    {
      v3 = (HANDLE *)(a1 + 96);
      inited = WerKernelCreateReport((const WCHAR *)(a1 + 624), (const WCHAR *)(a1 + 656), (HANDLE *)(a1 + 96));
      if ( inited < 0 )
        TelemetryData_pDeleteDumpFile(a1);
      else
        inited = WerKernelSubmitReport(*v3);
      if ( *v3 )
      {
        WerKernelCloseHandle(*v3);
        *v3 = 0LL;
      }
    }
  }
  return (unsigned int)inited;
}
