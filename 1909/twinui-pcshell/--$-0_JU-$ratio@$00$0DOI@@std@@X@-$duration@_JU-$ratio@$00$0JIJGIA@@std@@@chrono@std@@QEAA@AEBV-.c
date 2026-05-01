/*
 * XREFs of ??$?0_JU?$ratio@$00$0DOI@@std@@X@?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@QEAA@AEBV?$duration@_JU?$ratio@$00$0DOI@@std@@@12@@Z @ 0x1800BF3BC
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800C2100 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C2100.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800C3740 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C3740.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::chrono::duration<__int64,std::ratio<1,10000000>>::duration<__int64,std::ratio<1,10000000>>(
        _QWORD *a1,
        _QWORD *a2)
{
  *a1 = 10000LL * *a2;
  return a1;
}
