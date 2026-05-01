/*
 * XREFs of ??$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1800C0254
 * Callers:
 *     ??$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIShellFeedsLauncher@ShellFeeds@Shell@Internal@3@@impl@winrt@@SAPEAXPEBUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800BFFA4 (--$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uiid_finder@.c)
 *     ??$find@Uimmersive_shell_component@winrt@@Uiid_finder@impl@2@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUimmersive_shell_component@2@AEBUiid_finder@12@@Z @ 0x1800C009C (--$find@Uimmersive_shell_component@winrt@@Uiid_finder@impl@2@@-$interface_list@UIImmersiveShellC.c)
 *     ?query_interface@?$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800C4FF0 (-query_interface@-$root_implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIService.c)
 * Callees:
 *     <none>
 */

bool __fastcall winrt::impl::is_guid_of<winrt::Windows::Foundation::IInspectable>(_DWORD *a1)
{
  return *a1 == -1350114592 && a1[1] == 1282060589 && a1[2] == -1428727140 && a1[3] == -1877077915;
}
