/*
 * XREFs of ??__Lwinrt@@YA?AUresume_after@0@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z @ 0x1800C0978
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800C2100 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C2100.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_ResumeCoro$2 @ 0x1800C3740 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C3740.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::operator co_await(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  *a1 = 0LL;
  result = a1;
  a1[1] = a2;
  return result;
}
