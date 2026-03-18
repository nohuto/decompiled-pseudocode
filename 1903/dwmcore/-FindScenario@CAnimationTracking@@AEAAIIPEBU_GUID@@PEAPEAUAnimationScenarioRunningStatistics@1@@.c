/*
 * XREFs of ?FindScenario@CAnimationTracking@@AEAAIIPEBU_GUID@@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800A6A30
 * Callers:
 *     ?BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGAEBUTelFrameInfo@1@@Z @ 0x1800A5CA8 (-BeginAnimationScenario@CAnimationTracking@@QEAAJIPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_.c)
 *     ?UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800A5EBC (-UnrefAnimationScenario@CAnimationTracking@@QEAAXI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 *     ?EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_INFO@@PEBGIPEBU_GUID@@AEBUTelFrameInfo@1@PEAPEAUAnimationScenarioRunningStatistics@1@@Z @ 0x1800A677C (-EnsureScenario@CAnimationTracking@@AEAAJPEBUDCOMPOSITION_TELEMETRY_ANIMATION_SCENARIO_PACKED_IN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationTracking::FindScenario(
        CAnimationTracking *this,
        int a2,
        const struct _GUID *a3,
        struct CAnimationTracking::AnimationScenarioRunningStatistics **a4)
{
  unsigned int v4; // ebx
  struct CAnimationTracking::AnimationScenarioRunningStatistics *v5; // r10
  unsigned int v6; // r11d
  __int64 v7; // rdi
  __int64 v8; // rcx
  bool v9; // zf
  __int64 result; // rax
  __int64 v11; // rax

  v4 = *((_DWORD *)this + 6);
  v5 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    v7 = *(_QWORD *)this;
    do
    {
      v8 = *(_QWORD *)(v7 + 8LL * v6);
      if ( !*(_QWORD *)(v8 + 64) )
      {
        if ( a3 )
        {
          v11 = *(_QWORD *)(v8 + 4) - *(_QWORD *)&a3->Data1;
          if ( !v11 )
            v11 = *(_QWORD *)(v8 + 12) - *(_QWORD *)a3->Data4;
          v9 = v11 == 0;
        }
        else
        {
          if ( !a2 )
            goto LABEL_10;
          v9 = a2 == *(_DWORD *)v8;
        }
        if ( v9 )
        {
          v5 = *(struct CAnimationTracking::AnimationScenarioRunningStatistics **)(v7 + 8LL * v6);
          break;
        }
      }
LABEL_10:
      ++v6;
    }
    while ( v6 < v4 );
  }
  result = v6;
  *a4 = v5;
  return result;
}
