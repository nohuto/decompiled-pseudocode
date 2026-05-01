/*
 * XREFs of _CImmersiveApp::QueryService_::_1_::dtor$1 @ 0x18011E917
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::QueryService_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 40));
}
