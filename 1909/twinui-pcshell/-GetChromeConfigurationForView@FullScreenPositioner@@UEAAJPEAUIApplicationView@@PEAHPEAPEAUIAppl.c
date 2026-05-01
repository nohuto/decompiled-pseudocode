/*
 * XREFs of ?GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18018C280
 * Callers:
 *     ?GetChromeConfigurationForView@FullScreenPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1800D6930 (-GetChromeConfigurationForView@FullScreenPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApp.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18018E6B4 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 */

__int64 __fastcall FullScreenPositioner::GetChromeConfigurationForView(
        FullScreenPositioner *this,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  FullScreenPositionerHelpers *v4; // rax
  int TitlebarConfiguration; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a4 = 0LL;
  v4 = a2;
  *a3 = 0;
  LOBYTE(a2) = *((_BYTE *)this + 320);
  TitlebarConfiguration = FullScreenPositionerHelpers::CreateTitlebarConfiguration(v4, a2, (bool)a4, a4);
  v6 = TitlebarConfiguration;
  if ( TitlebarConfiguration >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x37B,
    (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
    (const char *)(unsigned int)TitlebarConfiguration);
  return v6;
}
