/*
 * XREFs of ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18002032C
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001B390 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x180026148 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18006F510 (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ @ 0x180073BA0 (-UpdateTimes@CPartitionVerticalBlankScheduler@@EEAAJXZ.c)
 *     ??1CFrameInfo@@QEAA@XZ @ 0x18018BA40 (--1CFrameInfo@@QEAA@XZ.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x18001B944 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
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
