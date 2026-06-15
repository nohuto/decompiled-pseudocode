/*
 * XREFs of _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::dtor$1 @ 0x1800F2B65
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 32));
}
