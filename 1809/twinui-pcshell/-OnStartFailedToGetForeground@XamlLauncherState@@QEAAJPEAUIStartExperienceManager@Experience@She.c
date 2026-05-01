/*
 * XREFs of ?OnStartFailedToGetForeground@XamlLauncherState@@QEAAJPEAUIStartExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x1802A4B00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x1802A4B38 (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 */

__int64 __fastcall XamlLauncherState::OnStartFailedToGetForeground(
        XamlLauncherState *this,
        struct Windows::Internal::Shell::Experience::IStartExperienceManager *a2,
        struct IInspectable *a3)
{
  int ForegroundImpl; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ForegroundImpl = XamlLauncherState::OnStartFailedToGetForegroundImpl(this);
  v4 = ForegroundImpl;
  if ( ForegroundImpl < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5D1,
      (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
      (const char *)(unsigned int)ForegroundImpl);
  return v4;
}
