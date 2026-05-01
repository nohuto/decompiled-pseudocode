/*
 * XREFs of _CImmersiveApp::CImmersiveWindowCollection::DeleteWindow_::_1_::dtor$1 @ 0x1801433B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::CImmersiveWindowCollection::DeleteWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 32));
}
