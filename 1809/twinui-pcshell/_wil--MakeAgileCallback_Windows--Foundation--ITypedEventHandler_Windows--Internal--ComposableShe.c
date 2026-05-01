/*
 * XREFs of _wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController_____ptr64_Windows::Internal::ComposableShell::Tabs::TabControllerCancellableEventArgs_____ptr64__TabViewManager_____ptr64_long_(__cdecl_TabViewManager::_)(Windows::Internal::ComposableShell::Tabs::ITabController_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabControllerCancellableEventArgs_____ptr64)___ptr64__::_1_::dtor$0 @ 0x1801CF44F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EB154 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabController_____ptr64_Windows::Internal::ComposableShell::Tabs::TabControllerCancellableEventArgs_____ptr64__TabViewManager_____ptr64_long____cdecl_TabViewManager::___Windows::Internal::ComposableShell::Tabs::ITabController_____ptr64_Windows::Internal::ComposableShell::Tabs::ITabControllerCancellableEventArgs_____ptr64____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD **)(a2 + 96));
  }
  return result;
}
