/*
 * XREFs of _DWMFocusedInputTarget::GetProcessId_::_1_::dtor$0 @ 0x18003B960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::GetProcessId_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IFocusInputTarget>::~ComPtr<IFocusInputTarget>(a2 + 64);
}
