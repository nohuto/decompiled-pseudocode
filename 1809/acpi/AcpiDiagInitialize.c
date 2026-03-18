/*
 * XREFs of AcpiDiagInitialize @ 0x1C00B9BB4
 * Callers:
 *     DriverEntry @ 0x1C00B7818 (DriverEntry.c)
 * Callees:
 *     AcpiDiagRequeueThermalPollingTimer @ 0x1C0047AE0 (AcpiDiagRequeueThermalPollingTimer.c)
 *     OSOpenHandle @ 0x1C008D2B4 (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1C0093C68 (OSCloseHandle.c)
 *     OSReadRegValue @ 0x1C00945C8 (OSReadRegValue.c)
 *     TraceLoggingRegisterEx @ 0x1C009FFC8 (TraceLoggingRegisterEx.c)
 */

__int64 AcpiDiagInitialize()
{
  TLG_PENABLECALLBACK v0; // rdx
  PVOID v1; // r8
  unsigned int v2; // ebx
  int v3; // edi
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  KeInitializeTimer2(&AcpiDiagThermalPollingTimer, AcpiDiagThermalPollingTimerRoutine, 0LL, 8LL);
  EtwRegister(&ACPI_ETW_PROVIDER, (PETWENABLECALLBACK)AcpiDiagTraceControlCallback, 0LL, &AcpiDiagHandle);
  EtwRegister(
    &THERMAL_POLLING_ETW_PROVIDER,
    (PETWENABLECALLBACK)AcpiDiagThermalPollingTraceControlCallback,
    0LL,
    &AcpiDiagThermalPollingHandle);
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, v0, v1);
  v2 = 0;
  v3 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, (__int64)&v7);
  if ( v3 >= 0 )
  {
    v6 = 0LL;
    v5 = 4;
    v3 = OSReadRegValue("TemperatureTelemetryInterval", v7, &v6, &v5);
    if ( v3 >= 0 && v5 == 4 )
    {
      *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 10000000 * v6;
      if ( 10000000 * v6 > 0 )
      {
        AcpiDiagThermalTelemetryEnabled = 1;
        AcpiDiagRequeueThermalPollingTimer();
      }
    }
    OSCloseHandle(v7);
  }
  if ( v3 >= 0 )
    return (unsigned int)v3;
  return v2;
}
