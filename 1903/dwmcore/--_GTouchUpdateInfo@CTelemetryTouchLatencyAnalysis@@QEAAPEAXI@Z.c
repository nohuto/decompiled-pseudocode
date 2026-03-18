/*
 * XREFs of ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x180021EFC
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001D270 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180092164 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180096CB0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x1800A4B20 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x18018D120 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x18001D824 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *__fastcall CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::`scalar deleting destructor'(
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *this)
{
  CTelemetryTouchLatencyAnalysis *v2; // rcx

  v2 = (CTelemetryTouchLatencyAnalysis *)*((_QWORD *)this + 9);
  if ( v2 )
    CTelemetryTouchLatencyAnalysis::UnreferenceScenario(v2, *(_QWORD *)this, 0xFFFFFFFFFFFFFFFFuLL);
  operator delete(this, 0x50uLL);
  return this;
}
