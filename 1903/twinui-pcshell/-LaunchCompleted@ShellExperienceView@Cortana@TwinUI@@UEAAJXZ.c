/*
 * XREFs of ?LaunchCompleted@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x18004C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x180049AA8 (-LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::LaunchCompleted(HSTRING *this)
{
  CSingleViewShellExperience::LaunchCompleted(this + 4);
  return 0LL;
}
