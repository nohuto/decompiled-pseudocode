/*
 * XREFs of ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x18001D824
 * Callers:
 *     ?UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z @ 0x18001D404 (-UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z.c)
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180021EFC (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x18001D85C (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18001D98C (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  CTelemetryTouchLatencyAnalysis *v5; // r11

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
  if ( Scenario )
  {
    if ( a3 >= *((_QWORD *)Scenario + 16) )
      CTelemetryTouchLatencyAnalysis::UnreferenceScenario(v5, Scenario);
  }
}
