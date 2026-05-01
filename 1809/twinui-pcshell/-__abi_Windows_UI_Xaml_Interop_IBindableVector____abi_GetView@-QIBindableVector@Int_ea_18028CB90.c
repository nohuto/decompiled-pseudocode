/*
 * XREFs of ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_GetView@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPEAPE$AAUIBindableVectorView@2345@@Z @ 0x18028CB90
 * Callers:
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_GetView@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@WCI@E$AAAJPEAPE$AAUIBindableVectorView@2345@@Z @ 0x1800A6A50 (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_GetView@-QIBindableVector@Int_ea_1800A6A50.c)
 * Callees:
 *     ?BindableGetView@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAPE$AAUIBindableVectorView@2345@XZ @ 0x180287A44 (-BindableGetView@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchI_ea_180287A44.c)
 */

__int64 __fastcall ___abi_Windows_UI_Xaml_Interop_IBindableVector____abi_GetView__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__UE_AAAJPEAPE_AAUIBindableVectorView_2345__Z(
        __int64 a1,
        __int64 *a2)
{
  if ( *(_BYTE *)(a1 + 168) )
  {
    __abi_WinRTraiseObjectDisposedException();
    __debugbreak();
  }
  try
  {
    *a2 = 0LL;
    *a2 = _BindableGetView__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAAPE_AAUIBindableVectorView_2345_XZ(a1);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
