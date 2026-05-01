/*
 * XREFs of _CActivationBasedAppAndGlomCollection::RemoveApplication_::_1_::dtor$1 @ 0x1801358D7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CActivationBasedAppAndGlomCollection::RemoveApplication_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 160));
}
