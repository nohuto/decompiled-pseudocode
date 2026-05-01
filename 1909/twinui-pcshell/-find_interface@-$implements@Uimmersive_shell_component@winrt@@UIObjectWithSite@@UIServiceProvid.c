/*
 * XREFs of ?find_interface@?$implements@Uimmersive_shell_component@winrt@@UIObjectWithSite@@UIServiceProvider@@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@2@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800C4AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@Uimmersive_shell_component@winrt@@Uiid_finder@impl@2@@?$interface_list@UIImmersiveShellComponent@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@SAPEAXPEBUimmersive_shell_component@2@AEBUiid_finder@12@@Z @ 0x1800C009C (--$find@Uimmersive_shell_component@winrt@@Uiid_finder@impl@2@@-$interface_list@UIImmersiveShellC.c)
 */

__int64 __fastcall winrt::implements<winrt::immersive_shell_component,IObjectWithSite,IServiceProvider,IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find_interface(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v2; // rcx
  _DWORD *v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 - 32;
  v4 = a2;
  if ( *a2 != -62389853 || a2[1] != 298789801 || a2[2] != -1442829918 || a2[3] != 1383283968 )
  {
    if ( *a2 == 1834041537 && a2[1] == 298742838 && a2[2] == -1442827136 && a2[3] == -100048896 )
      return (v2 + 8) & -(__int64)(v2 != 0);
    else
      return winrt::impl::interface_list<IImmersiveShellComponent,winrt::Windows::Foundation::IInspectable>::find<winrt::immersive_shell_component,winrt::impl::iid_finder>(
               v2,
               &v4);
  }
  return v2;
}
