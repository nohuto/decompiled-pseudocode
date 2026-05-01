/*
 * XREFs of ?NavigateView@CSingleViewShellExperience@@QEAAJW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180410C68
 * Callers:
 *     ?FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ @ 0x1801940C0 (-FocusHotkeyInvoked@CShoulderTapExperienceManager@@UEAAJXZ.c)
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x18019DE30 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180410A78 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 * Callees:
 *     ?Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1800458C4 (-Navigate@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManage.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSingleViewShellExperience::NavigateView(__int64 a1, unsigned int a2)
{
  ExperienceManagerUtils *v3; // rdx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(ExperienceManagerUtils **)(a1 + 24);
  if ( !v3 )
    return 0LL;
  v4 = ShellExperienceHelpers::NavigationLevelOverrideHelper::Navigate((unsigned int *)(a1 + 72), v3, a2);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x206,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
