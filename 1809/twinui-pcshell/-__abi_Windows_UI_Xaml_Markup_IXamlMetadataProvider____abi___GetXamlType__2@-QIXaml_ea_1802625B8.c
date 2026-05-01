/*
 * XREFs of ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJVTypeName@Interop@345@PEAPE$AAUIXamlType@2345@@Z @ 0x1802625B8
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@WEA@E$AAAJVTypeName@Interop@345@PEAPE$AAUIXamlType@2345@@Z @ 0x1800A43A0 (-__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2@-QIXamlMetadataProvi.c)
 * Callees:
 *     ?GetXamlType@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIXamlType@2345@VTypeName@Interop@345@@Z @ 0x18025FAAC (-GetXamlType@-QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@De_ea_18025FAAC.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi___GetXamlType__2__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAJVTypeName_Interop_345_PEAPE_AAUIXamlType_2345__Z(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3)
{
  HSTRING v4[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a1 + 240) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a3 = 0LL;
    *(_OWORD *)v4 = *a2;
    *a3 = _GetXamlType__QIXamlMetadataProvider_Markup_Xaml_UI_Windows__XamlExplorerHostApp_Desktop_ComposableShell_WindowsInternal__UE_AAAPE_AAUIXamlType_2345_VTypeName_Interop_345__Z(
            a1,
            v4);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
