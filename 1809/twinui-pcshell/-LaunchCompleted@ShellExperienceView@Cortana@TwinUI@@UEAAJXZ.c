/*
 * XREFs of ?LaunchCompleted@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x18006EDC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x18006EDDC (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::LaunchCompleted(TwinUI::Cortana::ShellExperienceView *this)
{
  CSingleViewShellExperience::LaunchCompleted((TwinUI::Cortana::ShellExperienceView *)((char *)this + 32));
  return 0LL;
}
