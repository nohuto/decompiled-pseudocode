/*
 * XREFs of ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x18014FE14
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800190F0 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180019724 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     McTemplateU0xxxxxqhqqxqntt @ 0x1801507D4 (McTemplateU0xxxxxqhqqxqntt.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
        CTelemetryTouchLatencyAnalysis *this,
        LARGE_INTEGER *a2,
        LARGE_INTEGER *a3,
        __int64 a4)
{
  LARGE_INTEGER *Scenario; // rax
  LARGE_INTEGER *v8; // rsi
  LARGE_INTEGER *v9; // rbx
  LARGE_INTEGER v10; // r9
  LARGE_INTEGER v11; // r8
  LARGE_INTEGER v12; // r10
  LONGLONG QuadPart; // r11

  Scenario = (LARGE_INTEGER *)CTelemetryTouchLatencyAnalysis::FindScenario(this, a2->QuadPart);
  v8 = Scenario;
  if ( Scenario )
  {
    Scenario[30].LowPart = a2[5].LowPart;
    if ( Scenario[13].QuadPart != a4 )
    {
      v9 = Scenario + 28;
      QueryPerformanceCounter(Scenario + 28);
      v10 = a2[1];
      a3[1] = v10;
      v11 = a2[2];
      a3[2] = v11;
      v12 = a2[3];
      a3[3] = v12;
      QuadPart = v9->QuadPart;
      a3[4] = *v9;
      a3[6].LowPart = a2[5].HighPart;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
        McTemplateU0xxxxxqhqqxqntt(
          BYTE4(v8[7].QuadPart),
          (unsigned int)&EVTDESC_TELEMETRY_TOUCH_ANALYSIS_UPDATELASTAPI_EVENT,
          a3->QuadPart,
          v10.LowPart,
          v11.QuadPart,
          v12.QuadPart,
          QuadPart,
          a2[4].LowPart,
          WORD2(a2[4].QuadPart),
          a2[5].LowPart,
          a2[5].HighPart,
          a4,
          v8[6].LowPart);
    }
  }
}
