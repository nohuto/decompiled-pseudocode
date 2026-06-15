/*
 * XREFs of ??1?$CAtlMap@VCAudioSessionInstanceId@@PEAVCAudioSession@@VCAudioSessionInstanceIdTraits@@V?$CElementTraits@PEAVCAudioSession@@@ATL@@@ATL@@QEAA@XZ @ 0x1800D54A4
 * Callers:
 *     _CAudioSessionManager::CAudioSessionManager_::_1_::dtor$2 @ 0x18007246C (_CAudioSessionManager--CAudioSessionManager_--_1_--dtor$2.c)
 *     _CAudioSessionManager::_CAudioSessionManager_::_1_::dtor$2 @ 0x1800D5A11 (_CAudioSessionManager--_CAudioSessionManager_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::~CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>(
        __int64 a1)
{
  return ATL::CAtlMap<CAudioSessionInstanceId,CAudioSession *,CAudioSessionInstanceIdTraits,ATL::CElementTraits<CAudioSession *>>::RemoveAll(a1);
}
