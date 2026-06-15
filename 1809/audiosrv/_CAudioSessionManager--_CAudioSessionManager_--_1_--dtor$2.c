/*
 * XREFs of _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$2 @ 0x1800C7481
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioSessionManager::_CAudioSessionManager_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::~CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>(*(_QWORD *)(a2 + 128) + 56LL);
}
