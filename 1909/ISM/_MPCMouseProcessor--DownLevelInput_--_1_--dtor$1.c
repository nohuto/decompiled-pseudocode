/*
 * XREFs of _MPCMouseProcessor::DownLevelInput_::_1_::dtor$1 @ 0x18013A4E7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCMouseProcessor::DownLevelInput_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IFocusInputTarget>::~ComPtr<IFocusInputTarget>((__int64 *)(a2 + 48));
}
