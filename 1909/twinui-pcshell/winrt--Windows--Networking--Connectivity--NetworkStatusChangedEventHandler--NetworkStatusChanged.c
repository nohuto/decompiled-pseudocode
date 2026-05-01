/*
 * XREFs of winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___ @ 0x1800BF32C
 * Callers:
 *     winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryConsentChecks$_ResumeCoro$2 @ 0x1800C2100 (winrt--Windows--Internal--Shell--ShellFeeds--implementation--ShellFeedsLauncher--Re_ea_1800C2100.c)
 *     ?perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1800C4D30 (-perform_delayed_initialization@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18008A3D8 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler::NetworkStatusChangedEventHandler__lambda_be8a6f579aab40e35446f4addbd39028___(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v5; // [rsp+40h] [rbp+8h]

  *a1 = 0LL;
  v5 = operator new(0x18uLL);
  v5[1] = a2;
  *((_DWORD *)v5 + 4) = 1;
  *v5 = off_180451108;
  *a1 = v5;
  return a1;
}
