/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::dtor$9 @ 0x180071840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioResourceManager::DestroyStream_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a2 + 120));
}
