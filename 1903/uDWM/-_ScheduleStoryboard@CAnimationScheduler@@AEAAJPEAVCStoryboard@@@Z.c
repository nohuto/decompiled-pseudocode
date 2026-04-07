/*
 * XREFs of ?_ScheduleStoryboard@CAnimationScheduler@@AEAAJPEAVCStoryboard@@@Z @ 0x180007298
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180005F30 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z @ 0x18000610C (-_ScheduleBlockedStoryboards@CAnimationScheduler@@AEAAXH@Z.c)
 * Callees:
 *     ?MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z @ 0x18000717C (-MorphForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x18000B150 (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18000C01C (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Abandon@CStoryboard@@QEAAXXZ @ 0x1800A769C (-Abandon@CStoryboard@@QEAAXXZ.c)
 */

__int64 __fastcall CAnimationScheduler::_ScheduleStoryboard(CAnimationScheduler *this, struct CStoryboard *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // eax
  void *v7; // [rsp+28h] [rbp-10h]

  v3 = CTransitionVisualController::MorphForStoryboard(
         *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
         a2);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CB118, 1u, v3, 0x3A9u, v7);
  }
  else
  {
    v5 = CTransitionVisualController::RemoveTargetsForStoryboard(
           *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 31),
           a2,
           0,
           0x10000000u);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800CB118, 1u, v5, 0x3ACu, v7);
    }
    else if ( *((_DWORD *)a2 + 6) <= 1u )
    {
      *((_DWORD *)a2 + 6) = 2;
      CStoryboard::_LogStoryboardEvent(a2);
    }
  }
  if ( v4 < 0 )
    CStoryboard::Abandon(a2);
  return (unsigned int)v4;
}
