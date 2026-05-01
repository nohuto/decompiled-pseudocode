/*
 * XREFs of _ViewManagerBridge::OnConnected_::_1_::dtor$3 @ 0x180232D0F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewManagerBridge::OnConnected_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 48));
}
