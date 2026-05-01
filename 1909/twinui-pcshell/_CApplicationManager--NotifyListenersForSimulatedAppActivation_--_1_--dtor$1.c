/*
 * XREFs of _CApplicationManager::NotifyListenersForSimulatedAppActivation_::_1_::dtor$1 @ 0x180134589
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::NotifyListenersForSimulatedAppActivation_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 184));
}
