/*
 * XREFs of ?CloseExperienceIfRunning@CScreenClippingExperienceManager@@AEAAXXZ @ 0x1801AC9C8
 * Callers:
 *     ?ActiveZBandChangedForMonitor@CScreenClippingExperienceManager@@EEAAJKKPEAUIImmersiveMonitor@@W4MODE_CHANGE_REASON@@@Z @ 0x1801AC490 (-ActiveZBandChangedForMonitor@CScreenClippingExperienceManager@@EEAAJKKPEAUIImmersiveMonitor@@W4.c)
 *     ?DisplaySettingsChange@CScreenClippingExperienceManager@@EEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801ACCD0 (-DisplaySettingsChange@CScreenClippingExperienceManager@@EEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE.c)
 *     ?MonitorAdded@CScreenClippingExperienceManager@@EEAAJPEAUIImmersiveMonitor@@@Z @ 0x1801AF890 (-MonitorAdded@CScreenClippingExperienceManager@@EEAAJPEAUIImmersiveMonitor@@@Z.c)
 *     ?OnIdleStateFlagsChanged@CScreenClippingExperienceManager@@EEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1801AFE10 (-OnIdleStateFlagsChanged@CScreenClippingExperienceManager@@EEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ @ 0x1801B2CA4 (-StartAppClose@CScreenClippingExperienceManager@@AEAAJXZ.c)
 */

void __fastcall CScreenClippingExperienceManager::CloseExperienceIfRunning(CScreenClippingExperienceManager *this)
{
  int started; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 32) == 2 )
  {
    started = CScreenClippingExperienceManager::StartAppClose(this);
    if ( started < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3E1,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\screenclippingexperiencemanager.cpp",
        (const char *)(unsigned int)started);
  }
}
