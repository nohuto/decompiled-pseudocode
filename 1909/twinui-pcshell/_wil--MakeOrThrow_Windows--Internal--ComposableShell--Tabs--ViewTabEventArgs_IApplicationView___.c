/*
 * XREFs of _wil::MakeOrThrow_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_IApplicationView___Windows::Internal::ComposableShell::Tabs::IShellTab____::_1_::dtor$0 @ 0x180245705
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@QEAA@XZ @ 0x1800AFEEC (--1-$ComPtr@VStateChangedEventArgsImpl@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_Windows::Internal::ComposableShell::Tabs::ViewTabEventArgs_IApplicationView___Windows::Internal::ComposableShell::Tabs::IShellTab____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<StateChangedEventArgsImpl>::~ComPtr<StateChangedEventArgsImpl>(*(__int64 **)(a2 + 64));
  }
  return result;
}
