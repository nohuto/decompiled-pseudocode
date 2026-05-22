/*
 * XREFs of _ISMTracing::GetWIDOfTarget_::_1_::dtor$1 @ 0x180054037
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ISMTracing::GetWIDOfTarget_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IFocusInputTarget>::~ComPtr<IFocusInputTarget>((__int64 *)(a2 + 64));
}
