/*
 * XREFs of ?PostTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1801D0850
 * Callers:
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180050E40 (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180051000 (-OnViewShown@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?AboveLockAppActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1801CEA70 (-AboveLockAppActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1801CEE70 (-ControlLost@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Intern.c)
 *     ?LockScreenActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1801CF9B0 (-LockScreenActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?ShellModeChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1801D1050 (-ShellModeChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?ShellReadyChanged@CortanaDesktopExperienceView@@EEAAJXZ @ 0x1801D1070 (-ShellReadyChanged@CortanaDesktopExperienceView@@EEAAJXZ.c)
 *     ?WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z @ 0x1801D1EE0 (-WindowsHelloActiveChanged@CortanaDesktopExperienceView@@EEAAJ_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x18007EA54 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::PostTargetedMessage(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(
         *(ExperienceManagerUtils **)(a1 + 120),
         (struct IUnknown *)a1,
         (void *)0x401,
         a2 | (unsigned __int64)(a3 << 16));
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x676,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
