/*
 * XREFs of ?GetAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x1802E2650
 * Callers:
 *     ?GetAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@W7E$AAAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I@Z @ 0x1800BCD40 (-GetAt@-Q-$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@Win.c)
 *     ?BindableGetAt@?QIBindableVector@Interop@Xaml@UI@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@Collections@Platform@@EE$AAAPE$AAVObject@8@I@Z @ 0x1802E10BC (-BindableGetAt@-QIBindableVector@Interop@Xaml@UI@Windows@@-$Vector@PE$AAUISwitchIte_ea_1802E10BC.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_GetAt@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x1802E59D0 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItemContextMenuMetadat_ea_1802E59D0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?ValidateBounds@Details@Collections@Platform@@YAX_N@Z @ 0x1802D0144 (-ValidateBounds@Details@Collections@Platform@@YAX_N@Z.c)
 *     ??$Unwrap@UISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@Collections@Platform@@YAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBV?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@2@@Z @ 0x1802DF7EC (--$Unwrap@UISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _GetAt__Q__IVector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___Collections_Foundation_Windows____Vector_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__U__equal_to_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___std___00_2Platform__UE_AAAPE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal__I_Z(
        Platform::Collections::Details *a1,
        unsigned int a2)
{
  Platform::Collections::Details *v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdi

  v2 = a1;
  v3 = a2;
  LOBYTE(a1) = a2 < (unsigned __int64)((__int64)(*(_QWORD *)(*((_QWORD *)a1 + 12) + 8LL) - **((_QWORD **)a1 + 12)) >> 5);
  Platform::Collections::Details::ValidateBounds(a1);
  v4 = Platform::Collections::Details::Unwrap<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata>(**((_QWORD **)v2 + 12) + 32 * v3);
  v5 = __abi_winrt_ptr_ctor(v4);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
