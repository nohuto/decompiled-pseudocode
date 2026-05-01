/*
 * XREFs of ??0PositionAndSizeOptionsProvider@KeyboardHosting@@QEAA@XZ @ 0x18032A860
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ @ 0x18032C578 (-RuntimeClassInitialize@TabTipAdapterPolicy@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@U?$less@UShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@std@@V?$allocator@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@@std@@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@V?$ComPtr@UIViewGroup@@@WRL@Microsoft@@@std@@PEAX@2@XZ @ 0x1802D0B60 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@UShellTabGroupId@Tabs@ComposableShell@Internal@.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIPositionAndSizeOptionsProvider@KeyboardHosting@@@WRL@Microsoft@@QEAA@XZ @ 0x18032A81C (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIPositionAndSizeOptionsProvider@Keybo.c)
 */

// Hidden C++ exception states: #wind=1
KeyboardHosting::PositionAndSizeOptionsProvider *__fastcall KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider(
        KeyboardHosting::PositionAndSizeOptionsProvider *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IPositionAndSizeOptionsProvider>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KeyboardHosting::IPositionAndSizeOptionsProvider>((__int64)this);
  *(_QWORD *)this = &KeyboardHosting::PositionAndSizeOptionsProvider::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = std::_Tree_comp_alloc<std::_Tmap_traits<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId,Microsoft::WRL::ComPtr<IViewGroup>,std::less<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId>,std::allocator<std::pair<Windows::Internal::ComposableShell::Tabs::ShellTabGroupId const,Microsoft::WRL::ComPtr<IViewGroup>>>,0>>::_Buyheadnode();
  *((_QWORD *)this + 4) = 0LL;
  memset_0((char *)this + 40, 0, 0x20uLL);
  *((_DWORD *)this + 18) = 100;
  *((_QWORD *)this + 10) = 0LL;
  memset_0((char *)this + 88, 0, 0x20uLL);
  *((_DWORD *)this + 30) = 100;
  *((_QWORD *)this + 16) = 0LL;
  memset_0((char *)this + 136, 0, 0x20uLL);
  *((_DWORD *)this + 42) = 100;
  *((_QWORD *)this + 22) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 23) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 24) = 0x3FF0000000000000LL;
  *((_BYTE *)this + 200) = 0;
  *((_QWORD *)this + 26) = 0LL;
  return this;
}
