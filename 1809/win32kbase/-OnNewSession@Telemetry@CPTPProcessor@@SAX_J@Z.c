/*
 * XREFs of ?OnNewSession@Telemetry@CPTPProcessor@@SAX_J@Z @ 0x1C014B4A4
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C014B4F0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPTPProcessor::Telemetry::OnNewSession(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( gTPTelemTimings >= a1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    dword_1C01CBCEC = 0;
    qword_1C01CBCD8 = PerformanceCounter.QuadPart;
  }
  else
  {
    gTPTelemTimings = KeQueryPerformanceCounter(0LL).QuadPart;
  }
}
