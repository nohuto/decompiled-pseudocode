/*
 * XREFs of _CApplicationManager::_AddApplicationData_::_1_::dtor$0 @ 0x1800C31C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CApplicationManager::_AddApplicationData_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>((_QWORD *)(a2 + 32));
}
