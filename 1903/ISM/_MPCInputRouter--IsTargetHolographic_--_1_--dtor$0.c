/*
 * XREFs of _MPCInputRouter::IsTargetHolographic_::_1_::dtor$0 @ 0x180054C4E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCInputRouter::IsTargetHolographic_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IFocusInputTarget>::~ComPtr<IFocusInputTarget>((__int64 *)(a2 + 64));
}
