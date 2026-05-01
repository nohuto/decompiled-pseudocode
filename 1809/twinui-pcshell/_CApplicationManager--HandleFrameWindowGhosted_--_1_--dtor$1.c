/*
 * XREFs of _CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor$1 @ 0x1800EF1F7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationManager::HandleFrameWindowGhosted_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 48));
}
