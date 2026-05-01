/*
 * XREFs of ?Init@?$ArrayReference@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@AEAAXPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@I_N@Z @ 0x180289B1C
 * Callers:
 *     ?__abi_Windows_Foundation_Collections_?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_GetMany@?Q?$IIterator@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$IteratorForVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Details@2Platform@@UE$AAAJIPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18028C120 (-__abi_Windows_Foundation_Collections_-$IIterator@PE$AAUISwitchItemContextMenuMetad_ea_18028C120.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_GetMany@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18028C304 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItemContextMenuMetadat_ea_18028C304.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_ReplaceAll@?Q?$IVector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$Vector@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x18028C5D8 (-__abi_Windows_Foundation_Collections_-$IVector@PE$AAUISwitchItemContextMenuMetadat_ea_18028C5D8.c)
 *     ?__abi_Windows_Foundation_Collections_?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@____abi_GetMany@?Q?$IVectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@Collections@Foundation@Windows@@?$VectorView@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@U?$equal_to@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@@std@@$00@2Platform@@UE$AAAJIIPEAPE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@PEAI@Z @ 0x18028C760 (-__abi_Windows_Foundation_Collections_-$IVectorView@PE$AAUISwitchItemContextMenuMet_ea_18028C760.c)
 * Callees:
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

void **__fastcall Platform::ArrayReference<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::Init(
        _QWORD *a1,
        void *a2,
        unsigned int a3,
        char a4)
{
  __int64 v4; // rsi
  void **result; // rax

  v4 = a3;
  memset_0(a1, 0, 0x88uLL);
  *a1 = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::`vftable'{for `Platform::Object's `Platform::IBoxArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *>'};
  a1[1] = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::`vftable'{for `Platform::IValueType'};
  a1[2] = ___7__Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_Platform__6B__I__Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00PublicNonVirtuals_1__;
  a1[3] = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::`vftable'{for `Platform::IDisposable'};
  a1[4] = ___7__Array_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00_Platform__6B__I__WriteOnlyArray_PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_ComposableShell_WindowsInternal___00PublicNonVirtuals_1__;
  a1[5] = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::`vftable'{for `Platform::IDisposable's `Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>'};
  a1[6] = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::`vftable'{for `Platform::Object's `Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>'};
  a1[7] = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>'};
  a1[8] = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource's `Platform::WriteOnlyArray<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>'};
  a1[14] = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::`vftable'{for `__abi_IUnknown's `Platform::Details::IWeakReferenceSource'};
  result = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  a1[15] = &Platform::Array<WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata __gc *,1>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  if ( a4 )
  {
    if ( (unsigned int)v4 > 0x1FFFFFFF )
    {
      __abi_WinRTraiseInvalidArgumentException();
      __debugbreak();
    }
    result = (void **)memset_0(a2, 0, 8 * v4);
  }
  if ( *((_DWORD *)a1 + 18) || a1[10] )
  {
    __abi_WinRTraiseFailureException();
    JUMPOUT(0x180289C18LL);
  }
  *((_DWORD *)a1 + 18) = v4;
  a1[10] = a2;
  *((_BYTE *)a1 + 76) = 1;
  return result;
}
