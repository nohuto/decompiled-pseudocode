/*
 * XREFs of ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18018F428
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001D270 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x18001D98C (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 *     ?IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18001DA00 (-IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     ?IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18018F4C8 (-IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
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
    && (!*((_QWORD *)Scenario + 14) && *((_BYTE *)Scenario + 121) && !*((_WORD *)a2 + 30)
     || (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsStartInertia(
                        (CTelemetryTouchLatencyAnalysis *)((char *)this + 3984),
                        a3)
     || *((_QWORD *)v8 + 14)
     && (*((_WORD *)a2 + 30)
      || (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsNewInteraction(
                         (CTelemetryTouchLatencyAnalysis *)((char *)this + 3984),
                         a3))) )
  {
    return 1;
  }
  return v6;
}
