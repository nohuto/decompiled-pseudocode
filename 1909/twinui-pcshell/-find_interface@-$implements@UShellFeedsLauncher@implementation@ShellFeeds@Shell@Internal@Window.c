/*
 * XREFs of ?find_interface@?$implements@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uimmersive_shell_component@7@UIShellFeedsLauncher@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800C4A50
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIShellFeedsLauncher@ShellFeeds@Shell@Internal@5@@impl@winrt@@SAPEAXPEBUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800C0008 (--$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@_ea_1800C0008.c)
 */

__int64 __fastcall winrt::implements<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::immersive_shell_component,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::find_interface(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx
  _DWORD *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 40;
  v5 = a2;
  if ( *a2 == -62389853 && a2[1] == 298789801 && a2[2] == -1442829918 && a2[3] == 1383283968 )
    return (v2 + 8) & -(__int64)(v2 != 0);
  else
    return winrt::impl::interface_list<IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::find<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::impl::iid_finder>(
             v2,
             &v5);
}
