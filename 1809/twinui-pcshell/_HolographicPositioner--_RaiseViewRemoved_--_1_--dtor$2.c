/*
 * XREFs of _HolographicPositioner::_RaiseViewRemoved_::_1_::dtor$2 @ 0x1801B85E1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HolographicPositioner::_RaiseViewRemoved_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<ViewEventArgs>::~ComPtr<ViewEventArgs>(a2 + 120);
}
