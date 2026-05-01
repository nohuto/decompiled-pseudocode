/*
 * XREFs of ?BringToForeground@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJXZ @ 0x1800A0340
 * Callers:
 *     ?Activate@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@@Z @ 0x1800A0280 (-Activate@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAUHSTRING__@@W4ShellExperience.c)
 * Callees:
 *     ?BringToForeground@CSingleViewShellExperience@@QEAAJXZ @ 0x18004D2E4 (-BringToForeground@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::BringToForeground(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = CSingleViewShellExperience::BringToForeground((TwinUI::ShellFeeds::ShellFeedsShellExperienceView *)((char *)this + 48));
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shellfeedsshellexperienceview.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
