/*
 * XREFs of ?get_local_iids@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x1800C4B80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::immersive_shell_component,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = 0;
  result = a2;
  *(_QWORD *)(a2 + 8) = 0LL;
  return result;
}
