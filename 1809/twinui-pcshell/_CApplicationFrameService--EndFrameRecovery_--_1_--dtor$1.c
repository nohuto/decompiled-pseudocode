/*
 * XREFs of _CApplicationFrameService::EndFrameRecovery_::_1_::dtor$1 @ 0x180114ED1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CApplicationFrameService::EndFrameRecovery_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 96));
}
