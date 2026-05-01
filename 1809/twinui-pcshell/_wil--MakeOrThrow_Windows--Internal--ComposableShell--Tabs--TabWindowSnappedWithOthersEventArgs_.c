/*
 * XREFs of _wil::MakeOrThrow_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_Windows::Internal::ComposableShell::Tabs::IShellTab_____ptr64_Windows::Foundation::Collections::IVectorView_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64______ptr64__::_1_::dtor$0 @ 0x18020A479
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1801D52EC (--1-$ComPtr@VViewTabEventArgs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_Windows::Internal::ComposableShell::Tabs::TabWindowSnappedWithOthersEventArgs_Windows::Internal::ComposableShell::Tabs::IShellTab_____ptr64_Windows::Foundation::Collections::IVectorView_Windows::Internal::ComposableShell::Tabs::ShellTab_____ptr64______ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs>::~ComPtr<Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs>(*(__int64 **)(a2 + 64));
  }
  return result;
}
