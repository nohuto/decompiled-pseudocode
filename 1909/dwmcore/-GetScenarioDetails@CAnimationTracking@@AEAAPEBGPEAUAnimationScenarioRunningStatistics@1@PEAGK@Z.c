/*
 * XREFs of ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800B4AF0
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x1800B3DA8 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x1800B436C (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x1800B4B44 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 */

unsigned __int16 *__fastcall CAnimationTracking::GetScenarioDetails(
        CAnimationTracking *this,
        struct CAnimationTracking::AnimationScenarioRunningStatistics *a2,
        unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rbx
  __int64 v5; // rcx

  v3 = a3;
  if ( *(_DWORD *)a2 )
  {
    v5 = *((_QWORD *)a2 + 19);
    if ( !v5 )
      return (unsigned __int16 *)&pwsz;
    if ( !*(_WORD *)(v5 + 38) )
      return (unsigned __int16 *)&pwsz;
    v3 = (unsigned __int16 *)(v5 + *(unsigned __int16 *)(v5 + 38));
    if ( !v3 )
      return (unsigned __int16 *)&pwsz;
  }
  else
  {
    CAnimationTracking::GuidToString((const struct _GUID *)((char *)a2 + 4), a3, 0);
  }
  return v3;
}
