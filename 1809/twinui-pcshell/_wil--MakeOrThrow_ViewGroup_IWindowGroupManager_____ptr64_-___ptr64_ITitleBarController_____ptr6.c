/*
 * XREFs of _wil::MakeOrThrow_ViewGroup_IWindowGroupManager_____ptr64_&___ptr64_ITitleBarController_____ptr64_&___ptr64_ITabViewManager_____ptr64_&___ptr64_Windows::Foundation::IEventHandler_IInspectable_____ptr64______ptr64_&___ptr64_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const_&___ptr64_IPrivilegedForegroundOperations_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1802058DC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VViewGroup@@@WRL@Microsoft@@QEAA@XZ @ 0x180205E90 (--1-$ComPtr@VViewGroup@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_ViewGroup_IWindowGroupManager_____ptr64_____ptr64_ITitleBarController_____ptr64_____ptr64_ITabViewManager_____ptr64_____ptr64_Windows::Foundation::IEventHandler_IInspectable_____ptr64______ptr64_____ptr64_Windows::Internal::ComposableShell::Tabs::ShellTabGroupId_const_____ptr64_IPrivilegedForegroundOperations_____ptr64_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return Microsoft::WRL::ComPtr<ViewGroup>::~ComPtr<ViewGroup>(*(_QWORD *)(a2 + 96));
  }
  return result;
}
