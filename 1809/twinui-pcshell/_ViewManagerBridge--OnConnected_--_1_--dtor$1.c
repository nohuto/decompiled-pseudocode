/*
 * XREFs of _ViewManagerBridge::OnConnected_::_1_::dtor$1 @ 0x180232CF7
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ViewManagerBridge::OnConnected_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 40));
}
