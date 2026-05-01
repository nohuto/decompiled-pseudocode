/*
 * XREFs of ?Hide@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x180083910
 * Callers:
 *     <none>
 * Callees:
 *     ?Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z @ 0x18004527C (-Hide@CSingleViewShellExperience@@QEAAJW4HideOptions@1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::Hide(TwinUI::Cortana::ShellExperienceView *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = CSingleViewShellExperience::Hide(
         (__int64)this + 48,
         (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)1);
  v2 = v1;
  if ( v1 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v1);
  return v2;
}
