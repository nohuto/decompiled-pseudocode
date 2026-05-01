/*
 * XREFs of ?ShellModeChanged@ShellFeedsDesktopExperienceView@@EEAAJ_N@Z @ 0x18009FA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x180080E14 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall ShellFeedsDesktopExperienceView::ShellModeChanged(ExperienceManagerUtils **this, unsigned __int8 a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ExperienceManagerUtils::PostToUIThread(this[5], (struct IUnknown *)this - 6, (void *)0x401, a2 << 16);
  if ( v2 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x35E,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsdesktopexperienceview.cpp",
      (const char *)(unsigned int)v2);
  return 0LL;
}
