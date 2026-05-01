/*
 * XREFs of _CAppViewManager::_GetAppMainWindow_::_1_::dtor$1 @ 0x18013741B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAppViewManager::_GetAppMainWindow_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((__int64 *)(a2 + 104));
}
