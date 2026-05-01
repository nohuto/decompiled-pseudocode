/*
 * XREFs of _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$1 @ 0x1801B828E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HolographicPositioner::_RaiseViewAdded_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 128));
}
