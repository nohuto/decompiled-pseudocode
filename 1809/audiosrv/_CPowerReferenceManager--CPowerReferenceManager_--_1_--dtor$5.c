/*
 * XREFs of _CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor$5 @ 0x18006F3DF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPowerReferenceManager::CPowerReferenceManager_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  std::mutex::~mutex((_Mtx_t)(*(_QWORD *)(a2 + 104) + 32LL));
}
