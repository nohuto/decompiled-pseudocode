/*
 * XREFs of ??1resume_after@winrt@@QEAA@XZ @ 0x1800C0824
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800C2100 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C2100.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2_::_1_::dtor$0 @ 0x1800C34A0 (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--R_ea_1800C34A0.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800C3740 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C3740.c)
 *     _winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2_::_1_::dtor$0 @ 0x1800C41E4 (_winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--R_ea_1800C41E4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::resume_after::~resume_after(winrt::resume_after *this)
{
  winrt::handle_type<winrt::resume_after::timer_traits>::close(this);
}
