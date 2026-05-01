/*
 * XREFs of ?get_PendingViewAction@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@UEAAJPEAW4PendingViewAction@CSingleViewShellExperience@@@Z @ 0x180087610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::get_PendingViewAction(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        enum CSingleViewShellExperience::PendingViewAction *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 24);
  return 0LL;
}
