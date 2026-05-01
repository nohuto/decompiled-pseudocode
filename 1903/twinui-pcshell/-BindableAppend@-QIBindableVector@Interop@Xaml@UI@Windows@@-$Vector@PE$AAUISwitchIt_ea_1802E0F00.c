/*
 * XREFs of ?BindableAppend@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAXPE$AAVObject@8@@Z @ 0x1802E0F00
 * Callers:
 *     ?BindableAppend@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@GCI@E$AAAXPE$AAVObject@8@@Z @ 0x1800BCC30 (-BindableAppend@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchItemContextMenu.c)
 *     ?__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Append@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@UE$AAAJPE$AAVObject@8@@Z @ 0x1802E61FC (-__abi_Windows_UI_Xaml_Interop_IBindableVector____abi_Append@-QIBindableVector@Inte_ea_1802E61FC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x1802B3A08 (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?Append@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAXPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1802E0D50 (-Append@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@Compo_ea_1802E0D50.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _BindableAppend__QIBindableVector_Interop_Xaml_UI_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_Collections_Platform__EE_AAAXPE_AAVObject_8__Z(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64, __int64 *))
{
  __int64 v3; // rdi
  __int64 result; // rax

  v3 = __abi_winrt_cast_to(
         0,
         a2,
         (__int64)&_uuidof__AUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__);
  result = _Append__Q__IVector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAXPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Z(
             a1,
             v3);
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return result;
}
