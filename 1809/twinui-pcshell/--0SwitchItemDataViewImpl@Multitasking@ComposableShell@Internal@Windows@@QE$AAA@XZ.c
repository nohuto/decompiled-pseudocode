/*
 * XREFs of ??0SwitchItemDataViewImpl@Multitasking@ComposableShell@Internal@Windows@@QE$AAA@XZ @ 0x1802696B0
 * Callers:
 *     ?CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x18026E4EC (-CreateFrameForMonitor@XamlAllUpViewHost@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z @ 0x18025BFD8 (--0__abi_FTMWeakRefData@@QEAA@PE$AAVObject@Platform@@W4CallbackContext@2@@Z.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x1802770C8 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::SwitchItemDataViewImpl(
        __int64 a1)
{
  void **v2; // rdx
  void **v3; // rdx
  __int64 v4; // rcx

  Platform::Object::Object(a1 + 24);
  *(_QWORD *)a1 = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::__ISwitchItemDataViewImplPublicNonVirtuals'};
  *(_QWORD *)(a1 + 8) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataView'};
  *(_QWORD *)(a1 + 16) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Windows::Internal::ComposableShell::Multitasking::ISwitchItemDataSource'};
  *(_QWORD *)(a1 + 24) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Platform::Object'};
  *(_QWORD *)(a1 + 32) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `__abi_IUnknown'};
  *(_QWORD *)(a1 + 40) = &Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl::`vftable'{for `Platform::Object's `Platform::Details::IWeakReferenceSource'};
  __abi_FTMWeakRefData::__abi_FTMWeakRefData(a1 + 120);
  Platform::Details::EventSourceInitialize((Platform::Details *)(a1 + 48), v2);
  *(_QWORD *)(a1 + 56) = 0LL;
  Platform::Details::EventSourceInitialize((Platform::Details *)(a1 + 64), v3);
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 104) = std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::_Buyheadnode(v4);
  return a1;
}
