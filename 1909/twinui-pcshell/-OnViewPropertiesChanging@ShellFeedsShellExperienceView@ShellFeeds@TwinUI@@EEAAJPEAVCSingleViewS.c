/*
 * XREFs of ?OnViewPropertiesChanging@ShellFeedsShellExperienceView@ShellFeeds@TwinUI@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800A0580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall TwinUI::ShellFeeds::ShellFeedsShellExperienceView::OnViewPropertiesChanging(
        TwinUI::ShellFeeds::ShellFeedsShellExperienceView *this,
        struct CSingleViewShellExperience *a2)
{
  return TwinUI::ShellFeeds::ShellFeedsShellExperienceView::_FireViewChanged((char *)this - 40, 8LL);
}
