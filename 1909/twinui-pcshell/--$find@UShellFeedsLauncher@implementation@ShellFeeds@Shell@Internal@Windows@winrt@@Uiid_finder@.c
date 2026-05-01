/*
 * XREFs of ??$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIShellFeedsLauncher@ShellFeeds@Shell@Internal@3@@impl@winrt@@SAPEAXPEBUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800BFFA4
 * Callers:
 *     ??$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@@Uiid_finder@impl@7@@?$interface_list@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@UIShellFeedsLauncher@ShellFeeds@Shell@Internal@5@@impl@winrt@@SAPEAXPEBUShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@2@AEBUiid_finder@12@@Z @ 0x1800C0008 (--$find@UShellFeedsLauncher@implementation@ShellFeeds@Shell@Internal@Windows@winrt@_ea_1800C0008.c)
 * Callees:
 *     ??$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1800C0254 (--$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,Windows::Internal::Shell::ShellFeeds::IShellFeedsLauncher>::find<winrt::Windows::Internal::Shell::ShellFeeds::implementation::ShellFeedsLauncher,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD *a2)
{
  char v2; // al
  _DWORD *v3; // rcx
  __int64 v4; // r8
  bool v5; // dl

  v2 = winrt::impl::is_guid_of<winrt::Windows::Foundation::IInspectable>(*a2, a2, a1);
  v5 = 0;
  if ( v2 )
    return (v4 + 32) & -(__int64)(v4 != 0);
  if ( *v3 == 516307683 && v3[1] == 1141541616 && v3[2] == -1889701979 )
    v5 = v3[3] == 841171633;
  return v4 & -(__int64)v5;
}
