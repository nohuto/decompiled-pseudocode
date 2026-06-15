/*
 * XREFs of _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$2 @ 0x18007246C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::CAudioSessionManager_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::~CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>(*(_QWORD *)(a2 + 80) + 56LL);
}
