/*
 * XREFs of ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18014E0A0
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x1800190F0 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x180019724 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x180019798 (-IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     ?IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18014E140 (-IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::IsManipulationStateChange(
        CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2,
        unsigned __int64 a3)
{
  unsigned int v6; // ebx
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v8; // rdi

  v6 = 0;
  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  v8 = Scenario;
  if ( Scenario
    && (!*((_QWORD *)Scenario + 11) && *((_BYTE *)Scenario + 97) && !*((_WORD *)a2 + 18)
     || (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsStartInertia(
                        (CTelemetryTouchLatencyAnalysis *)((char *)this + 3160),
                        a3)
     || *((_QWORD *)v8 + 11)
     && (*((_WORD *)a2 + 18)
      || (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsNewInteraction(
                         (CTelemetryTouchLatencyAnalysis *)((char *)this + 3160),
                         a3))) )
  {
    return 1;
  }
  return v6;
}
