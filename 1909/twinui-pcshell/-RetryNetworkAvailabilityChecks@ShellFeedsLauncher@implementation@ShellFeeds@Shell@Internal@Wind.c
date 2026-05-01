/*
 * XREFs of ?RetryNetworkAvailabilityChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x1800C4258
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler_::type__lambda_be8a6f579aab40e35446f4addbd39028___::Invoke @ 0x1800C0F10 (winrt--impl--delegate_winrt--Windows--Networking--Connectivity--NetworkStatusChangedEventHandler.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks$_InitCoro$1 @ 0x1800C35A4 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--RetryNetworkAva.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks(
        __int64 a1,
        _BYTE *a2)
{
  _QWORD *v4; // rax
  int v6; // [rsp+158h] [rbp+10h] BYREF

  v4 = operator new(0x118uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks__InitCoro_1(
    &v6,
    v4,
    a2,
    a1);
  return a2;
}
