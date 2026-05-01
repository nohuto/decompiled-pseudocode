/*
 * XREFs of ??$__abi_array_copy_to_and_release@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Details@Platform@@YAXP$01E$AAV?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@1@PEAPEAXPEAI@Z @ 0x1802B6BC4
 * Callers:
 *     ?__abi_Platform_?$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@____abi_get_Value@?Q?$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@@Platform@@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@2@UE$AAAJPEAIPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@@Z @ 0x1802B9790 (-__abi_Platform_-$IBoxArray@VXmlnsDefinition@Markup@Xaml@UI@Windows@@____abi_get_Value@-Q-$IBoxA.c)
 *     ?__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi_GetXmlnsDefinitions@?QIXamlMetadataProvider@Markup@Xaml@UI@Windows@@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@UE$AAAJPEAIPEAPEAVXmlnsDefinition@2345@@Z @ 0x1802BAF58 (-__abi_Windows_UI_Xaml_Markup_IXamlMetadataProvider____abi_GetXmlnsDefinitions@-QIX_ea_1802BAF58.c)
 * Callees:
 *     ?CopyToOrDetach@?$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXmlnsDefinition@Markup@Xaml@UI@Windows@@PEAI@Z @ 0x1802B7EBC (-CopyToOrDetach@-$Array@VXmlnsDefinition@Markup@Xaml@UI@Windows@@$00@Platform@@AE$AAAXPEAPEAVXml.c)
 */

__int64 __fastcall Platform::Details::__abi_array_copy_to_and_release<Windows::UI::Xaml::Markup::XmlnsDefinition,1>(
        __int64 a1,
        _QWORD *a2,
        _DWORD *a3)
{
  __int64 result; // rax

  if ( a1 )
  {
    Platform::Array<Windows::UI::Xaml::Markup::XmlnsDefinition,1>::CopyToOrDetach();
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  else
  {
    *a2 = 0LL;
    *a3 = 0;
  }
  return result;
}
