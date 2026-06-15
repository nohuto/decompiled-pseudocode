/*
 * XREFs of _GraphStreamingResourceManager::RegisterDevice_::_1_::dtor$1 @ 0x14001FDCD
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GraphStreamingResourceManager::RegisterDevice_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)(a2 + 64));
}
