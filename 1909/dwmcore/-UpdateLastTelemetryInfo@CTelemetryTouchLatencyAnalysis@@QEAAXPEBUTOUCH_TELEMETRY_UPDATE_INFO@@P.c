/*
 * XREFs of ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@1@_K@Z @ 0x180190078
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001B390 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18001BAAC (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001BB98 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?IsVailContainer@@YAHXZ @ 0x1800DF934 (-IsVailContainer@@YAHXZ.c)
 *     ?ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z @ 0x18018D714 (-ConvertHostTimeToContainerTimeline@CTelemetryTouchLatencyAnalysis@@CA_K_K0@Z.c)
 *     McTemplateU0xxxxxxxqhqqxqntt @ 0x180190AA8 (McTemplateU0xxxxxxxqhqqxqntt.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::UpdateLastTelemetryInfo(
        CTelemetryTouchLatencyAnalysis *this,
        LARGE_INTEGER *a2,
        LARGE_INTEGER *a3,
        __int64 a4)
{
  LARGE_INTEGER *Scenario; // rax
  LARGE_INTEGER *v9; // rdi
  LARGE_INTEGER *v10; // r12
  __int64 QuadPart; // r14
  __int64 v12; // r8
  __int64 v13; // rax
  LARGE_INTEGER v14; // r9
  LARGE_INTEGER v15; // r10
  LONGLONG v16; // r11
  LARGE_INTEGER v17; // rbp

  Scenario = (LARGE_INTEGER *)CTelemetryTouchLatencyAnalysis::FindScenario(this, a2->QuadPart);
  v9 = Scenario;
  if ( Scenario )
  {
    Scenario[38].LowPart = a2[8].LowPart;
    if ( Scenario[16].QuadPart != a4 )
    {
      v10 = Scenario + 36;
      QueryPerformanceCounter(Scenario + 36);
      QuadPart = a2[1].QuadPart;
      v12 = a2[2].QuadPart;
      if ( !WORD2(a2[7].QuadPart)
        || !(unsigned int)IsVailContainer()
        || (QuadPart = CTelemetryTouchLatencyAnalysis::ConvertHostTimeToContainerTimeline(QuadPart, a2[4].QuadPart),
            v13 = CTelemetryTouchLatencyAnalysis::ConvertHostTimeToContainerTimeline(a2[2].QuadPart, a2[4].QuadPart),
            v12 = v13,
            QuadPart)
        && v13 )
      {
        a3[1].QuadPart = QuadPart;
        v14 = a2[5];
        a3[2] = v14;
        v15 = a2[6];
        a3[3] = v15;
        v16 = v10->QuadPart;
        a3[4] = *v10;
        a3[5].QuadPart = v12;
        v17 = a2[3];
        a3[6] = v17;
        a3[8].LowPart = a2[8].HighPart;
        a3[7].HighPart = a2[8].HighPart;
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
          McTemplateU0xxxxxxxqhqqxqntt(
            BYTE4(v9[10].QuadPart),
            (_DWORD)v9 + 76,
            a3->QuadPart,
            QuadPart,
            v14.QuadPart,
            v15.QuadPart,
            v16,
            v12,
            v17.QuadPart,
            a2[7].LowPart,
            WORD2(a2[7].QuadPart),
            a2[8].LowPart,
            a2[8].HighPart,
            a4,
            v9[9].LowPart);
      }
      else
      {
        LOBYTE(v9->LowPart) = 1;
        CTelemetryTouchLatencyAnalysis::RetireScenario(
          this,
          (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)v9,
          1,
          0);
      }
    }
  }
}
