/*
 * XREFs of ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAX_K0AEB_K@Z @ 0x180019058
 * Callers:
 *     ?TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z @ 0x180018E20 (-TelemetryEndTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAX_K@Z.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x1800195F8 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180019724 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x180019A68 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 *     McTemplateU0pp @ 0x18014C198 (McTemplateU0pp.c)
 *     McTemplateU0xxqqqhhqqxxqntz @ 0x180150624 (McTemplateU0xxqqqhhqqxxqntz.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::EndAnalyzingInteraction(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        __int64 a3,
        const unsigned __int64 *a4)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // r14
  __int64 v8; // rdi
  __int16 v9; // si
  char v10; // al
  int v11; // edx
  LARGE_INTEGER PerformanceCount; // [rsp+B0h] [rbp+8h] BYREF

  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x400) != 0 )
    McTemplateU0pp(this, &EVTDESC_TELEMETRY_TOUCH_ANALYSIS_ENDAPI_EVENT, a2, a3);
  *((_QWORD *)this + 394) = *a4;
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
  if ( Scenario )
  {
    PerformanceCount.QuadPart = 0LL;
    QueryPerformanceCounter(&PerformanceCount);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    {
      v8 = *((_QWORD *)Scenario + 13);
      v9 = *((_WORD *)Scenario + 56);
      v10 = CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(
              this,
              *((_QWORD *)Scenario + 9),
              PerformanceCount.QuadPart);
      McTemplateU0xxqqqhhqqxxqntz(
        *((_DWORD *)Scenario + 12),
        v11,
        *(_QWORD *)Scenario,
        (_DWORD)Scenario,
        *((_DWORD *)Scenario + 7),
        *((_DWORD *)Scenario + 9),
        *((_DWORD *)Scenario + 10),
        *((_WORD *)Scenario + 22),
        *((_WORD *)Scenario + 23),
        v10,
        v9,
        v8,
        v8 - v9 - 1,
        *((_DWORD *)Scenario + 12));
    }
    CTelemetryTouchLatencyAnalysis::UnreferenceScenario(this, Scenario);
  }
}
