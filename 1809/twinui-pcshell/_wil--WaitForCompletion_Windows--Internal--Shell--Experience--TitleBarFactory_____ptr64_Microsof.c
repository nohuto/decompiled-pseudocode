/*
 * XREFs of _wil::WaitForCompletion_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64_Microsoft::WRL::ComPtr_Windows::Internal::Shell::Experience::ITitleBarFactory____::_1_::dtor$0 @ 0x1801F5991
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EB154 (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall wil::WaitForCompletion_Windows::Internal::Shell::Experience::TitleBarFactory_____ptr64_Microsoft::WRL::ComPtr_Windows::Internal::Shell::Experience::ITitleBarFactory____::_1_::dtor_0(
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
