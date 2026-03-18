/*
 * XREFs of ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAXXZ @ 0x18001BD84
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180070CA0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x18001BB98 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z @ 0x18001BE00 (-QpcSpanToDurationMilliseconds@CTelemetryTouchLatencyAnalysis@@AEBAI_K0@Z.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios(CTelemetryTouchLatencyAnalysis *this)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v2; // rbx
  __int64 v3; // rsi
  CTelemetryTouchLatencyAnalysis *v4; // rcx
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)this )
  {
    v5 = 0LL;
    QueryPerformanceCounter((LARGE_INTEGER *)&v5);
    v2 = (CTelemetryTouchLatencyAnalysis *)((char *)this + 8);
    v3 = 10LL;
    do
    {
      if ( *((_QWORD *)v2 + 2) )
      {
        if ( CTelemetryTouchLatencyAnalysis::QpcSpanToDurationMilliseconds(this, *((_QWORD *)v2 + 36), v5) >= 0xFA0 )
          CTelemetryTouchLatencyAnalysis::RetireScenario(v4, v2, 1, 1);
      }
      v2 = (struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)v2 + 312);
      --v3;
    }
    while ( v3 );
  }
}
