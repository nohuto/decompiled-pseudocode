/*
 * XREFs of ?TimeoutOverdueScenarios@CAnimationTracking@@QEAAXAEBUTelFrameInfo@1@@Z @ 0x1800A3CD8
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180093D30 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800A6008 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 */

void __fastcall CAnimationTracking::TimeoutOverdueScenarios(
        CAnimationTracking *this,
        const struct CAnimationTracking::TelFrameInfo *a2)
{
  __int64 v4; // rbx
  ULONGLONG TickCount64; // rsi
  ULONGLONG v6; // rcx

  if ( *((_DWORD *)this + 6) )
  {
    v4 = 0LL;
    TickCount64 = GetTickCount64();
    while ( (unsigned int)v4 < *((_DWORD *)this + 6) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 8 * v4) + 128LL);
      if ( v6 && v6 < TickCount64 )
        CAnimationTracking::StopAnalyzingAnimationScenario(this, v4, a2);
      else
        v4 = (unsigned int)(v4 + 1);
    }
  }
}
