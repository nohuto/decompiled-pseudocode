/*
 * XREFs of _Microsoft::WRL::Details::Make_MonitorFrame_IImmersiveMonitor___&_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl___&_IXamlMultitaskingViewController___&_IXamlSwitcherWindowInteractionEvents____::_1_::dtor$0 @ 0x1802DEEB5
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800A1928 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::Make_MonitorFrame_IImmersiveMonitor_____Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_____IXamlMultitaskingViewController_____IXamlSwitcherWindowInteractionEvents____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 48) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(*(_QWORD **)(a2 + 112));
  }
  return result;
}
