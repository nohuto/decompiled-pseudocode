/*
 * XREFs of ??0XamlExplorerHostApp@Desktop@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@PEAUIPrivilegedPresentationOperations@@@Z @ 0x1802B7408
 * Callers:
 *     ?EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ @ 0x1802B4F38 (-EnsureHostAppCreated@XamlExplorerHost@@QE$AAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180039948 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1802B3A70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x1802B4450 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ??0Application@Xaml@UI@Windows@@QE$AAA@XZ @ 0x1802B72BC (--0Application@Xaml@UI@Windows@@QE$AAA@XZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::XamlExplorerHostApp(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  void **v9; // r9

  *(_QWORD *)a1 = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `WindowsInternal::ComposableShell::Desktop::__IXamlExplorerHostAppPublicNonVirtuals'};
  *(_QWORD *)(a1 + 16) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Platform::Object's `Windows::UI::Xaml::Application'};
  *(_QWORD *)(a1 + 8) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::IApplication'};
  *(_QWORD *)(a1 + 40) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::IApplicationOverrides'};
  *(_QWORD *)(a1 + 64) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Windows::UI::Xaml::Markup::IXamlMetadataProvider'};
  *(_QWORD *)(a1 + 72) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 80) = &WindowsInternal::ComposableShell::Desktop::XamlExplorerHostApp::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 224);
  *(_QWORD *)(a1 + 88) = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)(a1 + 88));
  *(_QWORD *)(a1 + 96) = __abi_winrt_ptr_ctor(a2);
  _Mtx_init_in_situ((_Mtx_t)(a1 + 104), 2);
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 216) = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  *(_QWORD *)(a1 + 184) = v6;
  *(_OWORD *)v6 = 0LL;
  **(_QWORD **)(a1 + 184) = a1 + 184;
  Windows::UI::Xaml::Application::Application(a1 + 8, v7, v8, v9);
  return a1;
}
