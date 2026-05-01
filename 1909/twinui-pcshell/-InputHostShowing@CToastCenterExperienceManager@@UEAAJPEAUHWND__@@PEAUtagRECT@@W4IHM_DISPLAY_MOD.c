/*
 * XREFs of ?InputHostShowing@CToastCenterExperienceManager@@UEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@@Z @ 0x1801A5270
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z @ 0x1801A6874 (-OnInputHostChanging@CToastCenterExperienceManager@@AEAAJW4IHM_DISPLAY_MODE@@@Z.c)
 */

__int64 __fastcall CToastCenterExperienceManager::InputHostShowing(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = CToastCenterExperienceManager::OnInputHostChanging(a1 - 64, a4);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x5EB,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  return 0LL;
}
