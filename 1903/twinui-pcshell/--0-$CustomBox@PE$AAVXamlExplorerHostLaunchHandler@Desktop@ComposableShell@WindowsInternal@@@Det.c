/*
 * XREFs of ??0?$CustomBox@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Details@Platform@@QE$AAA@PE$AAVXamlExplorerHostLaunchHandler@Desktop@ComposableShell@WindowsInternal@@@Z @ 0x1802B70C4
 * Callers:
 *     ?CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationParameters@Xaml@UI@Windows@@PE$AAVXamlExplorerHostLaunchHandler@234@@Z @ 0x1802B8028 (-CreateView@XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAAXVWindowCreationP.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802B4450 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 */

// Hidden C++ exception states: #wind=2
Platform::Details *__fastcall Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>(
        Platform::Details *a1,
        __int64 a2)
{
  void *v4; // rdx

  Platform::Object::Object((char *)a1 + 24);
  *(_QWORD *)a1 = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `Platform::Object's `Platform::IBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>'};
  *((_QWORD *)a1 + 1) = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `Platform::IValueType'};
  *((_QWORD *)a1 + 2) = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `Platform::Details::IPrintable'};
  *((_QWORD *)a1 + 3) = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `Platform::Object'};
  *((_QWORD *)a1 + 4) = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `__abi_IUnknown'};
  *((_QWORD *)a1 + 5) = &Platform::Details::CustomBox<WindowsInternal::ComposableShell::Desktop::XamlExplorerHostLaunchHandler __gc *>::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData((__int64)a1 + 56);
  *((_QWORD *)a1 + 6) = __abi_winrt_ptr_ctor(a2);
  *((_QWORD *)a1 + 1) = Platform::Details::GetIBoxVtable(a1, v4);
  return a1;
}
