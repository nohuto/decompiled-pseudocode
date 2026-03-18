/*
 * XREFs of ?GetScenarioDetails@CAnimationTracking@@AEAAPEBGPEAUAnimationScenarioRunningStatistics@1@PEAGK@Z @ 0x1800827A0
 * Callers:
 *     ?StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z @ 0x180081B80 (-StopAnalyzingAnimationScenario@CAnimationTracking@@AEAAXIAEBUTelFrameInfo@1@@Z.c)
 *     ?RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z @ 0x180082C1C (-RefAnimationScenario@CAnimationTracking@@QEAAJI_KPEBU_GUID@@AEBUTelFrameInfo@1@@Z.c)
 * Callees:
 *     ?GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z @ 0x180083D68 (-GuidToString@CAnimationTracking@@CAXAEBU_GUID@@PEAGK@Z.c)
 */

wchar_t *__fastcall CAnimationTracking::GetScenarioDetails(
        CAnimationTracking *this,
        struct CAnimationTracking::AnimationScenarioRunningStatistics *a2,
        unsigned __int16 *a3)
{
  unsigned __int16 *v3; // rbx
  __int64 v4; // rcx

  v3 = a3;
  if ( *(_DWORD *)a2 )
  {
    v4 = *((_QWORD *)a2 + 19);
    if ( !v4 )
      return word_180276388;
    if ( !*(_WORD *)(v4 + 38) )
      return word_180276388;
    v3 = (unsigned __int16 *)(v4 + *(unsigned __int16 *)(v4 + 38));
    if ( !v3 )
      return word_180276388;
  }
  else
  {
    CAnimationTracking::GuidToString((const struct _GUID *)((char *)a2 + 4), a3, 0);
  }
  return v3;
}
