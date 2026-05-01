/*
 * XREFs of ??$find@Uimmersive_shell_component@winrt@@Uiid_finder@impl@2@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUimmersive_shell_component@2@AEBUiid_finder@12@@Z @ 0x1800C009C
 * Callers:
 *     ?find_interface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800C4AB0 (-find_interface@-$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvid.c)
 * Callees:
 *     ??$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z @ 0x1800C0254 (--$is_guid_of@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@YA_NAEBUguid@1@@Z.c)
 */

__int64 __fastcall winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::immersive_shell_component,winrt::impl::iid_finder>(
        __int64 a1,
        _QWORD *a2)
{
  _DWORD *v3; // rcx
  char v5; // al
  __int64 v6; // r8
  __int64 v7; // rcx

  v3 = (_DWORD *)*a2;
  if ( *(_DWORD *)*a2 == -428157847 && v3[1] == 1131521093 && v3[2] == 1551541634 && v3[3] == -1000363793 )
    return (a1 + 16) & -(__int64)(a1 != 0);
  v5 = winrt::impl::is_guid_of<winrt::Windows::Foundation::IInspectable>(v3, a2, a1);
  v7 = 0LL;
  if ( v5 )
    return (v6 + 24) & -(__int64)(v6 != 0);
  return v7;
}
