/*
 * XREFs of ??0TouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@QEAA@XZ @ 0x1800DA180
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 */

CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *__fastcall CTelemetryTouchLatencyAnalysis::TouchScenarioInfo::TouchScenarioInfo(
        CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *this)
{
  memset_0((char *)this + 144, 0, 0x24uLL);
  memset_0((char *)this + 184, 0, 0x24uLL);
  memset_0((char *)this + 220, 0, 0x24uLL);
  return this;
}
