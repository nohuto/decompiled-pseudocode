/*
 * XREFs of ?BringToForeground@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x18004D2B0
 * Callers:
 *     ?Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x18004CBD0 (-Activate@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOpti.c)
 * Callees:
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x18004D2E4 (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::BringToForeground(TwinUI::Cortana::ShellExperienceView *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = CSingleViewShellExperience::BringToForeground((TwinUI::Cortana::ShellExperienceView *)((char *)this + 48));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5E,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v1,
      -2);
  return v2;
}
