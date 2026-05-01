/*
 * XREFs of _wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64___lambda_617d626f0bf366f050e3b18ed68b910c____::_1_::dtor$0 @ 0x1802A80E3
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EB154 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Tabs::TabDataModelWatcher_____ptr64_Windows::Internal::ComposableShell::Tabs::TabDataModelTabHostedAppChangedEventArgs_____ptr64___lambda_617d626f0bf366f050e3b18ed68b910c____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD **)(a2 + 64));
  }
  return result;
}
