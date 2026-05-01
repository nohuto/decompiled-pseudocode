/*
 * XREFs of _CApplicationFrameService::EnsureFramePool_::_1_::dtor$3 @ 0x1800ADCE1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationFrameService::EnsureFramePool_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::~ComPtr<CApplicationFrameWrapper>(a2 + 128);
}
