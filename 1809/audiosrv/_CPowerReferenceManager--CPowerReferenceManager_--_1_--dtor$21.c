/*
 * XREFs of _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$21 @ 0x18006F3F5
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor_21(__int64 a1, __int64 a2)
{
  std::mutex::~mutex(*(_Mtx_t *)(a2 + 104));
}
