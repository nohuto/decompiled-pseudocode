/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler_::type__lambda_be8a6f579aab40e35446f4addbd39028___::Invoke @ 0x1800C0F10
 * Callers:
 *     <none>
 * Callees:
 *     ?RetryNetworkAvailabilityChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@7@XZ @ 0x1800C4258 (-RetryNetworkAvailabilityChecks@ShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Wind.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler_::type__lambda_be8a6f579aab40e35446f4addbd39028___::Invoke(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  int v3; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  try
  {
    winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher::RetryNetworkAvailabilityChecks(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    winrt::to_hresult(&v3);
  }
  return result;
}
