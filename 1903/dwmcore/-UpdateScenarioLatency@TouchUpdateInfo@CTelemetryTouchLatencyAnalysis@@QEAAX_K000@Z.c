/*
 * XREFs of ?UpdateScenarioLatency@TouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAX_K000@Z @ 0x18001D404
 * Callers:
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x1800A52D4 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x18001D824 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z @ 0x18001D8AC (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@@AEAAX_K000000000III0@Z.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::TouchUpdateInfo::UpdateScenarioLatency(
        CTelemetryTouchLatencyAnalysis::TouchUpdateInfo *this,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  CTelemetryTouchLatencyAnalysis *v6; // rcx

  v6 = (CTelemetryTouchLatencyAnalysis *)*((_QWORD *)this + 9);
  if ( v6 )
  {
    CTelemetryTouchLatencyAnalysis::AnalyzeLatencyInformation(
      v6,
      *(_QWORD *)this,
      *((_QWORD *)this + 1),
      *((_QWORD *)this + 2),
      *((_QWORD *)this + 3),
      *((_QWORD *)this + 4),
      a3,
      a4,
      *((_QWORD *)this + 5),
      *((_QWORD *)this + 6),
      a2,
      *((_DWORD *)this + 14),
      *((_DWORD *)this + 15),
      *((_DWORD *)this + 16),
      a5);
    CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
      *((CTelemetryTouchLatencyAnalysis **)this + 9),
      *(_QWORD *)this,
      a5);
    *((_QWORD *)this + 9) = 0LL;
  }
}
