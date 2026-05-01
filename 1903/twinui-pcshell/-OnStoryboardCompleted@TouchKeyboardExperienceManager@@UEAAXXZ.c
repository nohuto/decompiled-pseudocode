/*
 * XREFs of ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x180312360
 * Callers:
 *     <none>
 * Callees:
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x18004E258 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z @ 0x18030ED24 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@@Z.c)
 */

void __fastcall TouchKeyboardExperienceManager::OnStoryboardCompleted(TouchKeyboardExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  struct tagRECT v5; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_BYTE *)this + 632) )
  {
    if ( *((_DWORD *)this + 84) != *((_DWORD *)this + 82) )
    {
      v5 = *(struct tagRECT *)((char *)this + 328);
      v2 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
             (KeyboardHosting::TabTipAdapter **)this - 24,
             0,
             &v5);
      if ( v2 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x169,
          (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
          (const char *)(unsigned int)v2);
    }
    v3 = CExperienceManagerAnimationHelper::End((TouchKeyboardExperienceManager *)((char *)this + 568));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x16B,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
    *((_BYTE *)this + 632) = 0;
  }
  if ( *((_BYTE *)this + 633) )
  {
    v4 = CExperienceManagerAnimationHelper::End((TouchKeyboardExperienceManager *)((char *)this + 600));
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x171,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    *((_BYTE *)this + 633) = 0;
  }
}
